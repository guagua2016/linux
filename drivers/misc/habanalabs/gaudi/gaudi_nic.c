// SPDX-License-Identifier: GPL-2.0

/*
 * Copyright 2018-2020 HabanaLabs, Ltd.
 * All Rights Reserved.
 */

#include "gaudi_nic.h"
#include "../include/gaudi/asic_reg/gaudi_regs.h"
#include "../include/hw_ip/mmu/mmu_general.h"
#include "../include/hw_ip/nic/nic_general.h"
#include <uapi/misc/habanalabs.h>

#include <linux/vmalloc.h>
#include <linux/etherdevice.h>
#include <linux/pci.h>
#include <linux/ipv6.h>
#include <linux/if_vlan.h>
#include <linux/io-64-nonatomic-lo-hi.h>

#define HL_NIC_DEBUG 0

/*
 * enum link_status - PCS link status.
 * @LINK_UP: PHY is ready and PCS has link.
 * @PCS_DOWN: PCS has no link.
 * @PHY_DON: PHY is not ready.
 * @FAIL_RECONFIG: need to reconfigure the PHY due to PCS link failures.
 * @FAULT_RECONFIG: need to reconfigure the PHY due to PCS link faults.
 */
enum link_status {
	LINK_UP,
	PCS_DOWN,
	PHY_DOWN,
	FAIL_RECONFIG,
	FAULT_RECONFIG
};

/*
 * enum eth_pkt_status - status of Rx Ethernet packet.
 * ETH_PKT_OK: packet was received successfully.
 * ETH_PKT_DROP: packet should be dropped.
 * ETH_PKT_NONE: no available packet.
 */
enum eth_pkt_status {
	ETH_PKT_OK,
	ETH_PKT_DROP,
	ETH_PKT_NONE
};

#define HLS1_EXT_PORTS_MASK		0x302
#define FW_LINK_TRAINING_CNT		200
#define FW_TUNING_CNT			3000
#define PCS_LINK_CNT			10
#define PCS_FAIL_TIME_FRAME_SEC		(60 * 5) /* 5 minutes */
#define PCS_FAIL_THRESHOLD		8
#define PCS_FAULT_THRESHOLD		20
#define PCS_LINK_RETRY_MSEC		20
#define QPC_REQ_BURST_SIZE		16

/* NIC_MAX_MTU equals 8K minus eth header */
#define NIC_MAX_MTU	((1 << 13) - (ETH_HLEN + VLAN_HLEN + ETH_FCS_LEN))

/* MAC configuration */
#define MAC_CFG_MAC(addr, data)		\
				mac_write(gaudi_nic, i, "mac", addr, data)
#define MAC_CFG_MAC_CORE(addr, data)	\
				mac_write(gaudi_nic, i, "mac_core", addr, data)
#define MAC_CFG_XPCS(addr, data)	\
				mac_write(gaudi_nic, i, "xpcs", addr, data)
#define MAC_CFG_XPCS91(addr, data)	\
				mac_write(gaudi_nic, i, "xpcs91", addr, data)

static struct hl_qp dummy_qp;
static int qp_put(struct hl_qp *qp);

bool disabled_or_in_reset(struct gaudi_nic_device *gaudi_nic)
{
	return atomic_read(&gaudi_nic->in_reset) ||
			hl_device_disabled_or_in_reset(gaudi_nic->hdev);
}

static void qpc_cache_inv(struct gaudi_nic_device *gaudi_nic, bool is_req)
{
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 status, port = gaudi_nic->port;
	u64 inv_reg, status_reg, base;
	int rc;

	if (is_req) {
		inv_reg = mmNIC0_QPC0_REQ_QPC_CACHE_INVALIDATE;
		status_reg = mmNIC0_QPC0_REQ_QPC_CACHE_INV_STATUS;
	} else {
		inv_reg = mmNIC0_QPC0_RES_QPC_CACHE_INVALIDATE;
		status_reg = mmNIC0_QPC0_RES_QPC_CACHE_INV_STATUS;
	}

	/* fix the address to the correct NIC */
	base = NIC_CFG_BASE(port);
	inv_reg += base;
	status_reg += base;

	WREG32(inv_reg, 1);
	WREG32(inv_reg, 0);

	/* no need to wait for the status in case of hard reset */
	if (hdev->hard_reset_pending)
		return;

	rc = hl_poll_timeout(
		hdev,
		status_reg,
		status,
		status &
			NIC0_QPC0_REQ_QPC_CACHE_INV_STATUS_INVALIDATE_DONE_MASK,
		1000,
		gaudi->nic_qpc_cache_inv_timeout);

	if (rc)
		dev_warn(hdev->dev,
			"NIC %s QPC cache invalidation timeout, port: %d\n",
			is_req ? "requester" : "responder", port);
}

static void eth_start_stop(struct gaudi_nic_device *gaudi_nic, bool is_start)
{
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;
	u64 *qpc_addr, req_qpc_addr, res_qpc_addr;
	struct hl_device *hdev = gaudi_nic->hdev;
	struct qpc_requester req_qp;
	struct qpc_responder res_qp;
	u32 port = gaudi_nic->port;
	int i;

	/*
	 * Due to H/W bug, odd ports cannot generate MSI interrupts.
	 * Hence they generate wire interrupts and CPU-CP converts them to MSI
	 * interrupts. In order to avoid CPU-CP from generating MSI interrupts
	 * after the odd port went down, clear here the interrupt enable bit.
	 */
	if (!is_start && !hdev->nic_rx_poll && (port & 1))
		NIC_RMWREG32(mmNIC0_QPC0_INTERRUPT_EN, 0,
				NIC0_QPC0_INTERRUPT_EN_INTERRUPT4_WIRE_EN_MASK);

	/* ETH uses QP 0 */
	req_qpc_addr = REQ_QPC_ADDR(port, 0);

	memset(&req_qp, 0, sizeof(req_qp));
	REQ_QPC_SET_TRANSPORT_SERVICE(req_qp, TS_RAW);
	REQ_QPC_SET_LAST_IDX(req_qp, (WQ_BUFFER_SIZE - 1));
	/*
	 * See comment regarding the NIC_HW_MAX_QP_NUM value in the sction of
	 * TXE configuration in config_port_hw().
	 */
	REQ_QPC_SET_WQ_BASE_ADDR(req_qp, NIC_HW_MAX_QP_NUM);
	REQ_QPC_SET_VALID(req_qp, (u64) is_start);
	REQ_QPC_SET_SECURED(req_qp, SECURED);
	REQ_QPC_SET_PORT(req_qp, 0);

	qpc_addr = (u64 *) &req_qp;
	for (i = 0 ; i < (sizeof(req_qp) / sizeof(u64)) ; i++)
		writeq(qpc_addr[i], hdev->pcie_bar[HBM_BAR_ID] +
			((req_qpc_addr + i * 8) - gaudi->hbm_bar_cur_addr));

	readq(hdev->pcie_bar[HBM_BAR_ID]);

	qpc_cache_inv(gaudi_nic, true);

	/* ETH uses QP 0 */
	res_qpc_addr = RES_QPC_ADDR(port, 0);

	memset(&res_qp, 0, sizeof(res_qp));
	RES_QPC_SET_TRANSPORT_SERVICE(res_qp, TS_RAW);
	RES_QPC_SET_LOG_BUF_SIZE_MASK(res_qp, QPC_RES_LOG_BUF_SIZE_MASK);
	RES_QPC_SET_VALID(res_qp, (u64) is_start);
	RES_QPC_SET_SECURED(res_qp, SECURED);
	RES_QPC_SET_PORT(res_qp, 0);

	qpc_addr = (u64 *) &res_qp;
	for (i = 0 ; i < (sizeof(res_qp) / sizeof(u64)) ; i++)
		writeq(qpc_addr[i], hdev->pcie_bar[HBM_BAR_ID] +
			((res_qpc_addr + i * 8) - gaudi->hbm_bar_cur_addr));

	readq(hdev->pcie_bar[HBM_BAR_ID]);

	qpc_cache_inv(gaudi_nic, false);
}

static u32 mac_addr_convert(int mac, char *cfg_type, u32 addr)
{
	if (!strcmp(cfg_type, "xpcs")) {
		if (addr >= 200 && addr <= 219)
			addr = addr - 200 + 54;
		else if (addr >= 400 && addr <= 419)
			addr = addr - 400 + 74;
		else if (addr >= (1 << 15))
			addr = addr - (1 << 15) + 95;

		addr = addr * 4 + mac * (1 << 12);
	} else if (!strcmp(cfg_type, "mac")) {
		addr = addr + mac * (1 << 12) + (1 << 10);
	} else if (!strcmp(cfg_type, "mac_core")) {
		addr = addr + (1 << 15);
	} else if (!strcmp(cfg_type, "xpcs91")) {
		addr = addr * 4 + (1 << 11) * 10;
	}

	return addr + 0xCC0000;
}

static void mac_write(struct gaudi_nic_device *gaudi_nic, int mac,
			char *cfg_type, u32 addr, u32 data)
{
	struct hl_device *hdev = gaudi_nic->hdev;

	addr = mac_addr_convert(mac, cfg_type, addr);

	NIC_MACRO_WREG32(addr, data);
}

u32 gaudi_nic_mac_read(struct gaudi_nic_device *gaudi_nic, int mac,
			char *cfg_type, u32 addr)
{
	struct hl_device *hdev = gaudi_nic->hdev;

	addr = mac_addr_convert(mac, cfg_type, addr);

	return NIC_MACRO_RREG32(addr);
}

static void config_port_hw(struct gaudi_nic_device *gaudi_nic, u64 mac_addr)
{
	u64 swq_base_addr = SWQ_BASE_ADDR + gaudi_nic->port * SWQ_BASE_SIZE;
	u32 rx_mem_addr_lo, rx_mem_addr_hi, txs_fence_idx, txs_pi, txs_ci,
		txs_tail, txs_head, txs_timeout_31_0, timeout_47_32, prio,
		txs_port, rl_en_log_time, txs_schedq, port = gaudi_nic->port;
	u64 txs_addr, cq_msi_addr,
		req_qpc_base_addr = REQ_QPC_ADDR(gaudi_nic->port, 0),
		res_qpc_base_addr = RES_QPC_ADDR(gaudi_nic->port, 0);
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;
	u64 tx_swq_base, cq_mem_addr = gaudi_nic->cq_mem_device_va;
	struct hl_device *hdev = gaudi_nic->hdev;
	int i;

	if (gaudi->multi_msi_mode) {
		gaudi_nic->rx_msi_addr = RX_MSI_ADDRESS + port * 4;
		cq_msi_addr = CQ_MSI_ADDRESS;
	} else {
		gaudi_nic->rx_msi_addr = cq_msi_addr = mmPCIE_MSI_INTR_0;
	}

	/* TXS Configuration */
	txs_addr = TXS_BASE_ADDR + port * TXS_BASE_SIZE;

	/* Timer free list */
	for (i = 0 ; i < TXS_FREE_NUM_ENTRIES ; i++) {
		writel(TXS_GRANULARITY + i, hdev->pcie_bar[HBM_BAR_ID] +
			((txs_addr + TXS_FREE_OFFS + i * 4) -
				gaudi->hbm_bar_cur_addr));
	}

	/* Perform read to flush the writes */
	readq(hdev->pcie_bar[HBM_BAR_ID]);

	NIC_WREG32(mmNIC0_TXS0_BASE_ADDRESS_49_18,
				(txs_addr + TXS_FIFO_OFFS) >> 18);
	NIC_WREG32(mmNIC0_TXS0_BASE_ADDRESS_17_7,
				((txs_addr + TXS_FIFO_OFFS) >> 7) & 0x7FF);
	NIC_WREG32(mmNIC0_TXS0_FREE_LIST_PUSH_MASK_EN, 1);

	txs_fence_idx = 0;
	txs_pi = 0;
	txs_ci = 0;
	txs_tail = 0;
	txs_head = 0;
	txs_timeout_31_0 = 0;
	timeout_47_32 = 0;
	prio = 0;
	txs_port = 0;
	rl_en_log_time = 0;
	txs_schedq = (timeout_47_32 & 0xFFFF) | ((prio & 0x3) << 16) |
			((txs_port & 1) << 18) |
			((rl_en_log_time & 0x3F) << 19);

	for (i = 0 ; i < TXS_SCHEDQ ; i++) {
		txs_tail = txs_head = i;
		NIC_WREG32(mmNIC0_TXS0_SCHEDQ_UPDATE_DESC_31_0, txs_fence_idx);
		NIC_WREG32(mmNIC0_TXS0_SCHEDQ_UPDATE_DESC_63_32, txs_pi);
		NIC_WREG32(mmNIC0_TXS0_SCHEDQ_UPDATE_DESC_95_64, txs_ci);
		NIC_WREG32(mmNIC0_TXS0_SCHEDQ_UPDATE_DESC_127_96, txs_tail);
		NIC_WREG32(mmNIC0_TXS0_SCHEDQ_UPDATE_DESC_159_128, txs_head);
		NIC_WREG32(mmNIC0_TXS0_SCHEDQ_UPDATE_DESC_191_160,
							txs_timeout_31_0);
		NIC_WREG32(mmNIC0_TXS0_SCHEDQ_UPDATE_DESC_217_192, txs_schedq);
		NIC_WREG32(mmNIC0_TXS0_SCHEDQ_UPDATE_FIFO, i);
		NIC_WREG32(mmNIC0_TXS0_SCHEDQ_UPDATE_EN, 1);
	}

	NIC_WREG32(mmNIC0_TXS0_TICK_WRAP, 100);
	NIC_WREG32(mmNIC0_TXS0_FIRST_SCHEDQ_ID,
			0 << NIC0_TXS0_FIRST_SCHEDQ_ID_R0_SHIFT |
			64 << NIC0_TXS0_FIRST_SCHEDQ_ID_R1_SHIFT |
			128 << NIC0_TXS0_FIRST_SCHEDQ_ID_R2_SHIFT |
			192 << NIC0_TXS0_FIRST_SCHEDQ_ID_R3_SHIFT);
	NIC_WREG32(mmNIC0_TXS0_LAST_SCHEDQ_ID,
			63 << NIC0_TXS0_FIRST_SCHEDQ_ID_R0_SHIFT |
			127 << NIC0_TXS0_FIRST_SCHEDQ_ID_R1_SHIFT |
			191 << NIC0_TXS0_FIRST_SCHEDQ_ID_R2_SHIFT |
			155 << NIC0_TXS0_FIRST_SCHEDQ_ID_R3_SHIFT);
	NIC_WREG32(mmNIC0_TXS0_SCAN_TIME_COMPARE_0, 4);
	NIC_WREG32(mmNIC0_TXS0_SCAN_TIME_COMPARE_1, 0);
	NIC_WREG32(mmNIC0_TXS0_TMR_SCAN_EN, 1);

	NIC_WREG32(mmNIC0_TXS0_BASE_ADDRESS_FREE_LIST_49_32,
				(txs_addr + TXS_FREE_OFFS) >> 32);
	NIC_WREG32(mmNIC0_TXS0_BASE_ADDRESS_FREE_LIST_31_0,
				(txs_addr + TXS_FREE_OFFS) & 0xFFFFFFFF);

	NIC_WREG32(mmNIC0_TXS0_LIST_MASK,
			~(0xFFFFFFFF << (ilog2(TXS_FREE_NUM_ENTRIES) - 5)));
	NIC_WREG32(mmNIC0_TXS0_PRODUCER_UPDATE, TXS_FREE_NUM_ENTRIES);
	NIC_WREG32(mmNIC0_TXS0_PRODUCER_UPDATE_EN, 1);
	NIC_WREG32(mmNIC0_TXS0_PRODUCER_UPDATE_EN, 0);
	NIC_WREG32(mmNIC0_TXS0_LIST_MEM_READ_MASK, 0);
	NIC_WREG32(mmNIC0_TXS0_PUSH_LOCK_EN, 1);

	/* Consider burst size */
	NIC_WREG32(mmNIC0_TXS0_IGNORE_BURST_EN, 0);

	/* TXE Configuration */

	/*
	 * We want to separate the driver WQ from the user WQs.
	 * Since the NIC supports 4 different WQ base addresses, base address 0
	 * will be used by the user and base address 1 by the driver.
	 * The WQ base address index is inferred by two bits that are taken from
	 * QPC.WQ_BASE_ADDR and are configurable by SQ_BASE_ADDRESS_SEL.
	 * Since we support up to NIC_HW_MAX_QP_NUM user QPs and the single
	 * driver QP is located after them, we configure the driver
	 * QPC.WQ_BASE_ADDR to the value NIC_HW_MAX_QP_NUM, and
	 * SQ_BASE_ADDRESS_SEL to have the right shift value so the driver will
	 * indeed use base address 1.
	 */

	/*
	 * Need to subtract the size of the user WQs because the driver uses WQ
	 * base address 1.
	 */
	tx_swq_base = swq_base_addr -
			(1 << (WQ_BUFFER_LOG_SIZE - 2)) * NIC_HW_MAX_QP_NUM *
				DEVICE_CACHE_LINE_SIZE;

	NIC_WREG32(mmNIC0_TXE0_SQ_BASE_ADDRESS_49_32_1,
			(tx_swq_base >> 32) & 0x3FFFFF);
	NIC_WREG32(mmNIC0_TXE0_SQ_BASE_ADDRESS_31_0_1,
			tx_swq_base & 0xFFFFFFFF);

	/*
	 * This register should contain the value of the shift that the H/W will
	 * apply on QPC.WQ_BASE_ADDR in order to get the WQ base address index.
	 * The driver uses WQ base address 1 so we need to trim the leading
	 * zero bits.
	 */
	NIC_WREG32(mmNIC0_TXE0_SQ_BASE_ADDRESS_SEL, ffs(NIC_HW_MAX_QP_NUM) - 1);

	NIC_WREG32(mmNIC0_TXE0_LOG_MAX_WQ_SIZE_1, WQ_BUFFER_LOG_SIZE - 2);
	NIC_WREG32(mmNIC0_TXE0_PORT0_MAC_CFG_47_32, (mac_addr >> 32) & 0xFFFF);
	NIC_WREG32(mmNIC0_TXE0_PORT0_MAC_CFG_31_0, mac_addr & 0xFFFFFFFF);
	NIC_WREG32(mmNIC0_TXE0_PORT1_MAC_CFG_47_32, (mac_addr >> 32) & 0xFFFF);
	NIC_WREG32(mmNIC0_TXE0_PORT1_MAC_CFG_31_0, mac_addr & 0xFFFFFFFF);

	/* Since the user WQs are mapped via MMU by the user, its AXI_USER
	 * registers are set without MMU bypass and with the user ASID.
	 * Because these configuration registers are shared between the user WQs
	 * and the ETH Tx WQ, the latter can't be mapped via MMU as we need to
	 * configure the LKD ASID for that.
	 * In addition, the ETH Tx WQ is secured so the user shouldn't be able
	 * to access it. Hence we place the ETH Tx WQ on HBM in the LKD reserved
	 * section.
	 */
	NIC_WREG32(mmNIC0_TXE0_WQE_FETCH_AXI_USER, 1);
	/*
	 * The Tx data is placed on HBM. Hence configure it without MMU bypass
	 * and with the user ASID to avoid any successful access to the host
	 */
	NIC_WREG32(mmNIC0_TXE0_DATA_FETCH_AXI_USER, 1);
	NIC_WREG32(mmNIC0_TXE0_INTERRUPT_MASK, 3);

	/* Make sure data fetch can never be privileged */
	NIC_WREG32(mmNIC0_TXE0_DATA_FETCH_AXI_PROT, 0x80);
	/* Make sure WQE fetch can never be privileged */
	NIC_WREG32(mmNIC0_TXE0_WQE_FETCH_AXI_PROT, 0x80);

	/* QPC Configuration */
	NIC_WREG32(mmNIC0_QPC0_REQ_BASE_ADDRESS_49_18,
			(req_qpc_base_addr >> 18) & 0xFFFFFFFF);
	NIC_WREG32(mmNIC0_QPC0_REQ_BASE_ADDRESS_17_7,
			(req_qpc_base_addr >> 7) & 0x7FF);
	NIC_WREG32(mmNIC0_QPC0_RES_BASE_ADDRESS_49_18,
			(res_qpc_base_addr >> 18) & 0xFFFFFFFF);
	NIC_WREG32(mmNIC0_QPC0_RES_BASE_ADDRESS_17_7,
			(res_qpc_base_addr >> 7) & 0x7FF);
	NIC_WREG32(mmNIC0_QPC0_RES_QPC_CACHE_INVALIDATE, 1);
	NIC_WREG32(mmNIC0_QPC0_REQ_QPC_CACHE_INVALIDATE, 1);
	NIC_WREG32(mmNIC0_QPC0_RES_QPC_CACHE_INVALIDATE, 0);
	NIC_WREG32(mmNIC0_QPC0_REQ_QPC_CACHE_INVALIDATE, 0);
	NIC_WREG32(mmNIC0_QPC0_INTERRUPT_BASE_4, gaudi_nic->rx_msi_addr);
	NIC_WREG32(mmNIC0_QPC0_INTERRUPT_DATA_4, 1);
	NIC_WREG32(mmNIC0_QPC0_RES_RING0_CFG, RAW_QPN);
	/* Interrupt each packet */
	NIC_WREG32(mmNIC0_QPC0_INTERRUPT_CFG, 0x1FF);
	NIC_WREG32(mmNIC0_QPC0_INTERRUPT_CAUSE, 0);
	/* enable only the QP error interrupt, other interrupts are unused */
	NIC_WREG32(mmNIC0_QPC0_INTERRUPT_MASK, 0x110);
	NIC_WREG32(mmNIC0_QPC0_AXI_PROT, 0); /* secured */

	NIC_WREG32(mmNIC0_QPC0_ERR_FIFO_BASE_ADDR_49_18,
			(gaudi_nic->qp_err_mem_dma >> 18) & 0xFFFFFFFF);
	NIC_WREG32(mmNIC0_QPC0_ERR_FIFO_BASE_ADDR_17_7,
			gaudi_nic->qp_err_mem_dma & 0x3FF80);
	NIC_WREG32(mmNIC0_QPC0_ERR_FIFO_PRODUCER_INDEX, 0);
	NIC_WREG32(mmNIC0_QPC0_ERR_FIFO_CONSUMER_INDEX, 0);
	NIC_WREG32(mmNIC0_QPC0_ERR_FIFO_WRITE_INDEX, 0);
	NIC_WREG32(mmNIC0_QPC0_ERR_FIFO_MASK, QP_ERR_BUF_SIZE - 1);
	/* The error FIFO is unmapped, hence the bypass */
	NIC_WREG32(mmNIC0_QPC0_AXI_USER, 0x400);
	NIC_WREG32(mmNIC0_QPC0_RETRY_COUNT_MAX, 0xFEFE);

	/*
	 * Generate wire interrupt in case of a QP error.
	 * CPU-CP converts it to event.
	 */
	NIC_WREG32(mmNIC0_QPC0_INTERRUPT_EN,
		1 << NIC0_QPC0_INTERRUPT_EN_INTERRUPT8_WIRE_EN_SHIFT);

	/* RXE Configuration */
	rx_mem_addr_lo = lower_32_bits(gaudi_nic->rx_mem_dma);
	/* discard packets above the max size */
	rx_mem_addr_hi = (upper_32_bits(gaudi_nic->rx_mem_dma) <<
			NIC0_RXE0_RAW_BASE_HI_P1_RAW_BASE_ADDR_HI_P1_SHIFT) |
		(ilog2(NIC_MAX_PKT_SIZE) <<
			NIC0_RXE0_RAW_BASE_HI_P1_LOG_RAW_ENTRY_SIZE_P1_SHIFT);

	NIC_WREG32(mmNIC0_RXE0_ARUSER_HBW_10_0, 1);
	NIC_WREG32(mmNIC0_RXE0_ARUSER_HBW_31_11, 0);

	/* Make sure LBW write access (for SM) can never be privileged */
	NIC_WREG32(mmNIC0_RXE0_AWPROT_LBW, 0x2);

	/* Make sure HBW read access (for WQE) is always unsecured */
	NIC_WREG32(mmNIC0_RXE0_ARPROT_HBW, 0x222);

	NIC_WREG32(mmNIC0_RXE0_RAW_QPN_P0_0, RAW_QPN);
	NIC_WREG32(mmNIC0_RXE0_RAW_QPN_P0_1, RAW_QPN);
	NIC_WREG32(mmNIC0_RXE0_RAW_QPN_P1_0, RAW_QPN);
	NIC_WREG32(mmNIC0_RXE0_RAW_QPN_P1_1, RAW_QPN);
	NIC_WREG32(mmNIC0_RXE0_RAW_QPN_P2_0, RAW_QPN);
	NIC_WREG32(mmNIC0_RXE0_RAW_QPN_P2_1, RAW_QPN);
	NIC_WREG32(mmNIC0_RXE0_RAW_QPN_P3_0, RAW_QPN);
	NIC_WREG32(mmNIC0_RXE0_RAW_QPN_P3_1, RAW_QPN);
	NIC_WREG32(mmNIC0_RXE0_RAW_BASE_LO_P0_0, rx_mem_addr_lo);
	NIC_WREG32(mmNIC0_RXE0_RAW_BASE_LO_P0_1, rx_mem_addr_lo);
	NIC_WREG32(mmNIC0_RXE0_RAW_BASE_HI_P0_0, rx_mem_addr_hi);
	NIC_WREG32(mmNIC0_RXE0_RAW_BASE_HI_P0_1, rx_mem_addr_hi);

	NIC_WREG32(mmNIC0_RXE0_RAW_BASE_LO_P1_0, rx_mem_addr_lo);
	NIC_WREG32(mmNIC0_RXE0_RAW_BASE_LO_P1_1, rx_mem_addr_lo);
	NIC_WREG32(mmNIC0_RXE0_RAW_BASE_HI_P1_0, rx_mem_addr_hi);
	NIC_WREG32(mmNIC0_RXE0_RAW_BASE_HI_P1_1, rx_mem_addr_hi);

	NIC_WREG32(mmNIC0_RXE0_RAW_BASE_LO_P2_0, rx_mem_addr_lo);
	NIC_WREG32(mmNIC0_RXE0_RAW_BASE_LO_P2_1, rx_mem_addr_lo);
	NIC_WREG32(mmNIC0_RXE0_RAW_BASE_HI_P2_0, rx_mem_addr_hi);
	NIC_WREG32(mmNIC0_RXE0_RAW_BASE_HI_P2_1, rx_mem_addr_hi);

	NIC_WREG32(mmNIC0_RXE0_RAW_BASE_LO_P3_0, rx_mem_addr_lo);
	NIC_WREG32(mmNIC0_RXE0_RAW_BASE_LO_P3_1, rx_mem_addr_lo);
	NIC_WREG32(mmNIC0_RXE0_RAW_BASE_HI_P3_0, rx_mem_addr_hi);
	NIC_WREG32(mmNIC0_RXE0_RAW_BASE_HI_P3_1, rx_mem_addr_hi);

	/*
	 * See the comment for mmNIC0_TXE0_SQ_BASE_ADDRESS_SEL. The same applies
	 * for the Rx.
	 */
	NIC_WREG32(mmNIC0_RXE0_WQ_BASE_WINDOW_SEL, ffs(NIC_HW_MAX_QP_NUM) - 1);

	NIC_WREG32(mmNIC0_RXE0_PKT_DROP,
			(0 << NIC0_RXE0_PKT_DROP_ERR_QP_INVALID_SHIFT) |
			(1 << NIC0_RXE0_PKT_DROP_ERR_TS_MISMATCH_SHIFT) |
			(0 << NIC0_RXE0_PKT_DROP_ERR_CS_INVALID_SHIFT) |
			(0 << NIC0_RXE0_PKT_DROP_ERR_REQ_PSN_INVALID_SHIFT) |
			(1 << NIC0_RXE0_PKT_DROP_ERR_RES_RKEY_INVALID_SHIFT) |
			(0 << NIC0_RXE0_PKT_DROP_ERR_RES_RESYNC_INVALID_SHIFT) |
			/* H/W WA for check priority order */
			(0 << NIC0_RXE0_PKT_DROP_ERR_INV_OPCODE_SHIFT) |
			(0 << NIC0_RXE0_PKT_DROP_ERR_INV_SYNDROME_SHIFT) |
			(0 << NIC0_RXE0_PKT_DROP_ERR_INV_RAW_SIZE_SHIFT));

	/* CQ */
	NIC_WREG32(mmNIC0_RXE0_CQ_BASE_ADDR_31_7, cq_mem_addr &
					NIC0_RXE0_CQ_BASE_ADDR_31_7_R_MASK);
	NIC_WREG32(mmNIC0_RXE0_CA_BASE_ADDR_49_32, cq_mem_addr >> 32);
	NIC_WREG32(mmNIC0_RXE0_CQ_WRITE_INDEX, 0);
	NIC_WREG32(mmNIC0_RXE0_CQ_PRODUCER_INDEX, 0);
	NIC_WREG32(mmNIC0_RXE0_CQ_CONSUMER_INDEX, 0);
	NIC_WREG32(mmNIC0_RXE0_CQ_CFG0,
			(1 << NIC0_RXE0_CQ_CFG0_ENABLE_SHIFT) |
			(1 << NIC0_RXE0_CQ_CFG0_INTERRUPT_MASK_SHIFT) |
			(8 << NIC0_RXE0_CQ_CFG0_CREDIT_SHIFT) |
			(1 << NIC0_RXE0_CQ_CFG0_WRAPAROUND_EN_SHIFT) |
			(1 << NIC0_RXE0_CQ_CFG0_SOB_CQ_MUTEX_SHIFT) |
			(24 << NIC0_RXE0_CQ_CFG0_CQ_SELECT_SHIFT));
	NIC_WREG32(mmNIC0_RXE0_CQ_MASK, CQ_PORT_BUF_LEN - 1);
	/* CQ overrun interrupt only */
	NIC_WREG32(mmNIC0_RXE0_CQ_MSI_ADDR_1, cq_msi_addr);
	NIC_WREG32(mmNIC0_RXE0_CQ_MSI_DATA_1, 1);
	NIC_WREG32(mmNIC0_RXE0_MSI_CASUE_MASK, 2);
	NIC_WREG32(mmNIC0_RXE0_MSI_CAUSE, 0);

	/*
	 * Due to H/W bug, odd ports cannot generate MSI interrupts.
	 * Hence they generate wire interrupts and CPU-CP converts them to MSI
	 * interrupts.
	 */
	if (!hdev->nic_rx_poll && (port & 1))
		NIC_RMWREG32(mmNIC0_QPC0_INTERRUPT_EN, 1,
			NIC0_QPC0_INTERRUPT_EN_INTERRUPT4_WIRE_EN_MASK);
	else
		NIC_RMWREG32(mmNIC0_QPC0_INTERRUPT_EN, 1,
			NIC0_QPC0_INTERRUPT_EN_INTERRUPT4_MSI_EN_MASK);

	/* MAC filtering */
	if (port & 1) {
		NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_31_0_2,
					mac_addr & 0xFFFFFFFF);
		NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_31_0_3,
					mac_addr & 0xFFFFFFFF);

		NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_47_32_2,
					(mac_addr >> 32) & 0xFFFF);
		NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_47_32_3,
					(mac_addr >> 32) & 0xFFFF);
	} else {
		NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_31_0_0,
					mac_addr & 0xFFFFFFFF);
		NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_31_0_1,
					mac_addr & 0xFFFFFFFF);

		NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_47_32_0,
					(mac_addr >> 32) & 0xFFFF);
		NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_47_32_1,
					(mac_addr >> 32) & 0xFFFF);
	}

	for (i = NIC_MAC_LANES_START ; i < NIC_MAC_NUM_OF_LANES ; i++) {
		if (!(gaudi_nic->fw_tuning_mask & BIT(i)))
			continue;

		MAC_CFG_XPCS(0, gaudi_nic->mac_loopback ? 0xC000 : 0x8000);
	}

	gaudi_nic_set_pfc(gaudi_nic);
}

void gaudi_nic_set_pfc(struct gaudi_nic_device *gaudi_nic)
{
	int i;

	for (i = NIC_MAC_LANES_START ; i < NIC_MAC_NUM_OF_LANES ; i++) {
		if (!(gaudi_nic->fw_tuning_mask & BIT(i)))
			continue;

		MAC_CFG_MAC(0x8, gaudi_nic->pfc_enable ? 0x80813 : 0x2913);
	}
}

static void config_port_mac(struct gaudi_nic_device *gaudi_nic)
{
	u32 port = gaudi_nic->port, speed = gaudi_nic->speed;
	struct hl_device *hdev = gaudi_nic->hdev;
	int i;

	for (i = NIC_MAC_LANES_START ; i < NIC_MAC_NUM_OF_LANES ; i++) {
		/* H/W WA for error length */
		MAC_CFG_MAC(0x14, 8192);

		/* Disable FC FEC */
		MAC_CFG_MAC_CORE(0x10, 0);

		MAC_CFG_MAC(0x20, 4);
		MAC_CFG_MAC(0x1C, 4);

		switch (speed) {
		case SPEED_10000:
			MAC_CFG_XPCS(0x8010, 3);
			break;
		case SPEED_25000:
			MAC_CFG_XPCS(0x8002, 0x4FFF);
			MAC_CFG_XPCS(0x8010, 5);
			MAC_CFG_XPCS(0x8008, 0x68C1);
			MAC_CFG_XPCS(0x8009, 0x21);
			MAC_CFG_XPCS(0x800A, 0xC4F0);
			MAC_CFG_XPCS(0x800B, 0xE6);
			MAC_CFG_XPCS(0x800C, 0x65C5);
			MAC_CFG_XPCS(0x800D, 0x9B);
			MAC_CFG_XPCS(0x800E, 0x79A2);
			MAC_CFG_XPCS(0x800F, 0x3D);
			break;
		case SPEED_50000:
			MAC_CFG_XPCS(0x8002, 0x4FFF);
			MAC_CFG_XPCS(0x8010, 0);
			MAC_CFG_XPCS(0x8008, 0x7690);
			MAC_CFG_XPCS(0x8009, 0x47);
			MAC_CFG_XPCS(0x800A, 0xC4F0);
			MAC_CFG_XPCS(0x800B, 0xE6);
			MAC_CFG_XPCS(0x800C, 0x65C5);
			MAC_CFG_XPCS(0x800D, 0x9B);
			MAC_CFG_XPCS(0x800E, 0x79A2);
			MAC_CFG_XPCS(0x800F, 0x3D);
			break;
		case SPEED_100000:
			MAC_CFG_XPCS(0x8002, 0x3FFF);
			MAC_CFG_XPCS(0x8010, 0);
			MAC_CFG_XPCS(0x8008, 0x68C1);
			MAC_CFG_XPCS(0x8009, 0x21);
			MAC_CFG_XPCS(0x800A, 0x719D);
			MAC_CFG_XPCS(0x800B, 0x8E);
			MAC_CFG_XPCS(0x800C, 0x4B59);
			MAC_CFG_XPCS(0x800D, 0xE8);
			MAC_CFG_XPCS(0x800E, 0x954D);
			MAC_CFG_XPCS(0x800F, 0x7B);
			MAC_CFG_XPCS(0x8048, 0x07F5);
			MAC_CFG_XPCS(0x8049, 0x09);
			MAC_CFG_XPCS(0x804A, 0x14DD);
			MAC_CFG_XPCS(0x804B, 0xC2);
			MAC_CFG_XPCS(0x804C, 0x4A9A);
			MAC_CFG_XPCS(0x804D, 0x26);
			MAC_CFG_XPCS(0x804E, 0x457B);
			MAC_CFG_XPCS(0x804F, 0x66);
			MAC_CFG_XPCS(0x8050, 0x24A0);
			MAC_CFG_XPCS(0x8051, 0x76);
			MAC_CFG_XPCS(0x8052, 0xC968);
			MAC_CFG_XPCS(0x8053, 0xFB);
			MAC_CFG_XPCS(0x8054, 0x6CFD);
			MAC_CFG_XPCS(0x8055, 0x99);
			MAC_CFG_XPCS(0x8056, 0x91B9);
			MAC_CFG_XPCS(0x8057, 0x55);
			MAC_CFG_XPCS(0x8058, 0xB95C);
			MAC_CFG_XPCS(0x8059, 0xB2);
			MAC_CFG_XPCS(0x805A, 0xF81A);
			MAC_CFG_XPCS(0x805B, 0xBD);
			MAC_CFG_XPCS(0x805C, 0xC783);
			MAC_CFG_XPCS(0x805D, 0xCA);
			MAC_CFG_XPCS(0x805E, 0x3635);
			MAC_CFG_XPCS(0x805F, 0xCD);
			MAC_CFG_XPCS(0x8060, 0x31C4);
			MAC_CFG_XPCS(0x8061, 0x4C);
			MAC_CFG_XPCS(0x8062, 0xD6AD);
			MAC_CFG_XPCS(0x8063, 0xB7);
			MAC_CFG_XPCS(0x8064, 0x665F);
			MAC_CFG_XPCS(0x8065, 0x2A);
			MAC_CFG_XPCS(0x8066, 0xF0C0);
			MAC_CFG_XPCS(0x8067, 0xE5);
			break;
		default:
			dev_err(hdev->dev,
				"unknown NIC port %d speed %dMb/s, cannot configure MAC XPCS\n",
				port, speed);
			break;
		}
	}

	switch (speed) {
	case SPEED_10000:
		MAC_CFG_MAC_CORE(0, 0xF0FF00);
		MAC_CFG_MAC_CORE(0x1C, 0);
		MAC_CFG_MAC_CORE(0x10, 0);
		break;
	case SPEED_25000:
		MAC_CFG_MAC_CORE(0, 0xF0FF00);
		MAC_CFG_MAC_CORE(0x18, 0x60F);
		MAC_CFG_MAC_CORE(0x1C, 0);
		MAC_CFG_MAC_CORE(0x10, 0);
		break;
	case SPEED_50000:
		MAC_CFG_MAC_CORE(0x18, 0xFF);
		MAC_CFG_MAC_CORE(0, 0xF0FFF0);
		MAC_CFG_MAC_CORE(0x1C, 0);
		MAC_CFG_XPCS91(0, 0x400);
		MAC_CFG_XPCS91(0x8, 0x400);
		MAC_CFG_XPCS91(0x10, 0x400);
		MAC_CFG_XPCS91(0x18, 0x400);
		break;
	case SPEED_100000:
		if (gaudi_nic->nic_macro->num_of_lanes == NIC_LANES_4) {
			MAC_CFG_MAC_CORE(0, 0xF0FF00);
			MAC_CFG_MAC_CORE(0x18, 0x0F);
		} else {
			MAC_CFG_MAC_CORE(0x18, 0xFF);
		}
		break;
	default:
		dev_err(hdev->dev,
			"unknown NIC port %d speed %dMb/s, cannot configure MAC CORE\n",
			port, speed);
		break;
	}
}

static void phy_start_stop(struct gaudi_nic_device *gaudi_nic, bool is_start)
{
	int i;

	for (i = NIC_MAC_LANES_START ; i < NIC_MAC_NUM_OF_LANES ; i++) {
		if (!(gaudi_nic->power_up_mask & BIT(i)))
			continue;

		gaudi_nic_phy_start_stop(gaudi_nic, i, is_start);
	}
}

static int hw_config(struct gaudi_nic_device *gaudi_nic)
{
	u32 port = gaudi_nic->port, data_rate, speed = gaudi_nic->speed;
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;
	struct hl_device *hdev = gaudi_nic->hdev;
	u64 mac_addr = 0, tmr_addr;
	bool do_auto_neg;
	int i, rc;

	for (i = 0 ; i < ETH_ALEN ; i++) {
		mac_addr <<= 8;
		mac_addr |= gaudi_nic->ndev->dev_addr[i];
	}

	switch (speed) {
	case SPEED_10000:
		data_rate = NIC_DR_10;
		break;
	case SPEED_25000:
		data_rate = NIC_DR_25;
		break;
	case SPEED_50000:
		data_rate = NIC_DR_50;
		break;
	case SPEED_100000:
		if (gaudi_nic->nic_macro->num_of_lanes == NIC_LANES_4)
			data_rate = NIC_DR_25;
		else
			data_rate = NIC_DR_50;
		break;
	default:
		data_rate = NIC_DR_50;
		dev_err(hdev->dev,
			"unknown NIC port %d speed, continue with 50 GHz\n",
			port);
		break;
	}

	dev_dbg(hdev->dev, "NIC port %d, speed %d data rate %d\n",
		port, speed, data_rate);

	gaudi_nic->data_rate = data_rate;

	if (gaudi->nic_phy_config_fw && !gaudi_nic->mac_loopback) {
		for (i = NIC_MAC_LANES_START ; i < NIC_MAC_NUM_OF_LANES ; i++) {
			if (!(gaudi_nic->power_up_mask & BIT(i)))
				continue;

			do_auto_neg = gaudi_nic->auto_neg_enable &&
					(gaudi_nic->auto_neg_mask & BIT(i));

			rc = gaudi_nic_phy_power_up(gaudi_nic, i, do_auto_neg);
			if (rc) {
				dev_err(hdev->dev,
					"PHY power up failed for port %d\n",
					port);
				return rc;
			}
		}

		phy_start_stop(gaudi_nic, true);
	}

	/* if no need in macro configuration, do only port configuration */
	if (gaudi_nic->do_macro_cfg) {
		config_port_mac(gaudi_nic);
		config_port_hw(gaudi_nic, mac_addr);
	} else {
		config_port_hw(gaudi_nic, mac_addr);
		goto out;
	}

	/*
	 * the following registers are shared between each pair of ports,
	 * hence need to configure only once per NIC macro
	 */
	/* RXB Configuration */
	NIC_MACRO_WREG32(mmNIC0_RXB_LBW_OFFSET_0, CFG_BASE & 0xFFFFFFFF);
	NIC_MACRO_WREG32(mmNIC0_RXB_LBW_OFFSET_1, (CFG_BASE >> 32) & 0x3FFFF);
	NIC_MACRO_WREG32(mmNIC0_RXB_ICRC_CFG, 0);
	NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_31_0_MASK_0, 0xFFFFFFFF);
	NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_31_0_MASK_1, 0xFFFFFFFF);
	NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_31_0_MASK_2, 0xFFFFFFFF);
	NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_31_0_MASK_3, 0xFFFFFFFF);
	NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_47_32_MASK_0, 0xFFFF);
	NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_47_32_MASK_1, 0xFFFF);
	NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_47_32_MASK_2, 0xFFFF);
	NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_47_32_MASK_3, 0xFFFF);
	/* H/W WA for credit leakage */
	NIC_MACRO_WREG32(mmNIC0_RXB_DROP_THRESHOLD_0, 0xB37 | (0xB37 << 13));
	NIC_MACRO_WREG32(mmNIC0_RXB_DROP_THRESHOLD_1, 0xB37 | (0xB37 << 13));
	NIC_MACRO_WREG32(mmNIC0_RXB_DROP_THRESHOLD_2, 0xB37 | (0xB37 << 13));
	NIC_MACRO_WREG32(mmNIC0_RXB_DROP_THRESHOLD_3, 0xB37 | (0xB37 << 13));
	NIC_MACRO_WREG32(mmNIC0_RXB_DROP_THRESHOLD_4, 0xB37 | (0xB37 << 13));
	NIC_MACRO_WREG32(mmNIC0_RXB_DROP_THRESHOLD_5, 0xB37 | (0xB37 << 13));
	NIC_MACRO_WREG32(mmNIC0_RXB_DROP_THRESHOLD_6, 0xB37 | (0xB37 << 13));
	NIC_MACRO_WREG32(mmNIC0_RXB_DROP_THRESHOLD_7, 0xB37 | (0xB37 << 13));
	NIC_MACRO_WREG32(mmNIC0_RXB_DROP_THRESHOLD_8, 0xB37 | (0xB37 << 13));
	NIC_MACRO_WREG32(mmNIC0_RXB_DROP_THRESHOLD_9, 0xB37 | (0xB37 << 13));
	NIC_MACRO_WREG32(mmNIC0_RXB_DROP_THRESHOLD_10, 0xB37 | (0xB37 << 13));
	NIC_MACRO_WREG32(mmNIC0_RXB_DROP_THRESHOLD_11, 0xB37 | (0xB37 << 13));
	NIC_MACRO_WREG32(mmNIC0_RXB_DROP_THRESHOLD_12, 0xB37 | (0xB37 << 13));
	NIC_MACRO_WREG32(mmNIC0_RXB_DROP_THRESHOLD_13, 0xB37 | (0xB37 << 13));
	NIC_MACRO_WREG32(mmNIC0_RXB_DROP_THRESHOLD_14, 0xB37 | (0xB37 << 13));
	NIC_MACRO_WREG32(mmNIC0_RXB_DROP_THRESHOLD_15, 0xB37 | (0xB37 << 13));
	NIC_MACRO_WREG32(mmNIC0_RXB_AXI_AXUSER_10_0_UNTRUST, 1);
	NIC_MACRO_WREG32(mmNIC0_RXB_AXI_AXUSER_10_0_TRUST, 0x400);
	NIC_MACRO_WREG32(mmNIC0_RXB_AXI_AXUSER_10_0_PRIV, 0x400);
	NIC_MACRO_WREG32(mmNIC0_RXB_AXI_AXPROT_PRIV, 0);
	NIC_MACRO_WREG32(mmNIC0_RXB_AXI_AXPROT_TRUST, 0);
	NIC_MACRO_WREG32(mmNIC0_RXB_AXI_AXPROT_UNTRUST, 2);

	/* MAC filtering */
	NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_31_0_MASK_0, 0);
	NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_31_0_MASK_1, 0);
	NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_31_0_MASK_2, 0);
	NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_31_0_MASK_3, 0);
	NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_47_32_MASK_0, 0);
	NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_47_32_MASK_1, 0);
	NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_47_32_MASK_2, 0);
	NIC_MACRO_WREG32(mmNIC0_RXB_TS_RC_MAC_47_32_MASK_3, 0);

	/* Credits allocation - all dynamic */
	/* H/W WA for credit leakage */
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_DYNAMIC, 0xB36);
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_STATIC_CREDITS_0, 0x41);
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_STATIC_CREDITS_1, 0x41);
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_STATIC_CREDITS_2, 0x41);
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_STATIC_CREDITS_3, 0x41);
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_STATIC_CREDITS_4, 0x41);
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_STATIC_CREDITS_5, 0x41);
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_STATIC_CREDITS_6, 0x41);
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_STATIC_CREDITS_7, 0x41);
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_STATIC_CREDITS_8, 0x41);
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_STATIC_CREDITS_9, 0x41);
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_STATIC_CREDITS_10, 0x41);
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_STATIC_CREDITS_11, 0x41);
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_STATIC_CREDITS_12, 0x41);
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_STATIC_CREDITS_13, 0x41);
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_STATIC_CREDITS_14, 0x41);
	NIC_MACRO_WREG32(mmNIC0_RXB_MAX_STATIC_CREDITS_15, 0x41);

	/* TMR Configuration */
	tmr_addr = TMR_BASE_ADDR + gaudi_nic->nic_macro->idx * TMR_BASE_SIZE;

	/* Clear timer FSM0 */
	for (i = 0 ; i < NIC_HW_MAX_QP_NUM ; i++)
		writeb(0, hdev->pcie_bar[HBM_BAR_ID] +
			((tmr_addr + TMR_FSM0_OFFS + i) -
				gaudi->hbm_bar_cur_addr));

	/* Clear timer FSM1 */
	for (i = 0 ; i < NIC_HW_MAX_QP_NUM ; i++)
		writeb(0, hdev->pcie_bar[HBM_BAR_ID] +
			((tmr_addr + TMR_FSM1_OFFS + i) -
				gaudi->hbm_bar_cur_addr));

	/* Timer free list */
	for (i = 0 ; i < TMR_FREE_NUM_ENTRIES ; i++)
		writel(TMR_GRANULARITY + i, hdev->pcie_bar[HBM_BAR_ID] +
			((tmr_addr + TMR_FREE_OFFS + i * 4) -
				gaudi->hbm_bar_cur_addr));

	/* Perform read to flush the writes */
	readq(hdev->pcie_bar[HBM_BAR_ID]);

	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_BASE_ADDRESS_49_18,
				(tmr_addr + TMR_FIFO_OFFS) >> 18);
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_BASE_ADDRESS_17_7,
				((tmr_addr + TMR_FIFO_OFFS) >> 7) & 0x7FF);
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_BASE_ADDRESS_FREE_LIST_49_32,
				(tmr_addr + TMR_FREE_OFFS) >> 32);
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_BASE_ADDRESS_FREE_LIST_31_0,
				(tmr_addr + TMR_FREE_OFFS) & 0xFFFFFFFF);
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_CACHE_BASE_ADDR_49_32,
				(tmr_addr + TMR_FSM0_OFFS) >> 32);
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_CACHE_BASE_ADDR_31_7,
				((tmr_addr + TMR_FSM0_OFFS) >> 7) & 0xFFFFFF);

	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_SCHEDQ_UPDATE_DESC_31_0, 0);
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_SCHEDQ_UPDATE_DESC_63_32, 0);
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_SCHEDQ_UPDATE_DESC_95_64, 0);
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_SCHEDQ_UPDATE_DESC_191_160, 1000);
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_SCHEDQ_UPDATE_DESC_216_192, 0);

	for (i = 0 ; i < TMR_GRANULARITY ; i++) {
		NIC_MACRO_WREG32(mmNIC0_TMR_TMR_SCHEDQ_UPDATE_DESC_127_96, i);
		NIC_MACRO_WREG32(mmNIC0_TMR_TMR_SCHEDQ_UPDATE_DESC_159_128, i);
		NIC_MACRO_WREG32(mmNIC0_TMR_TMR_SCHEDQ_UPDATE_FIFO, i);
		NIC_MACRO_WREG32(mmNIC0_TMR_TMR_SCHEDQ_UPDATE_EN, 1);
	}

	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_SCAN_TIMER_COMP_31_0, 10);
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_TICK_WRAP, 500);
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_LIST_MASK,
			~(0xFFFFFFFF << (ilog2(TMR_FREE_NUM_ENTRIES) - 5)));
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_PRODUCER_UPDATE, TMR_FREE_NUM_ENTRIES);
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_PRODUCER_UPDATE_EN, 1);
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_PRODUCER_UPDATE_EN, 0);
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_LIST_MEM_READ_MASK, 0);
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_PUSH_LOCK_EN, 1);
	NIC_MACRO_WREG32(mmNIC0_TMR_TMR_TIMER_EN, 1);
	NIC_MACRO_WREG32(mmNIC0_TMR_FREE_LIST_PUSH_MASK_EN, 0);

out:
	/* Perform read from the device to flush all configurations */
	NIC_MACRO_RREG32(mmNIC0_TMR_TMR_TIMER_EN);

	return 0;
}

static bool write_pkt_to_hw(struct gaudi_nic_device *gaudi_nic, u64 *data,
				u64 size)
{
	u32 port = gaudi_nic->port, pi = gaudi_nic->tx_pi, diff, new_pi,
		ci = gaudi_nic->tx_ci;
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;
	u64 swq_addr, sb_base_address, swq_base_addr;
	struct hl_device *hdev = gaudi_nic->hdev;
	struct sq_wqe swq;
	u64 *swq_p;
	int i;

	swq_p = (u64 *) &swq;

	if (pi >= ci)
		diff = pi - ci;
	else
		diff = WQ_BUFFER_SIZE - ci + pi;

	/* update CI once in a while */
	if (diff > (WQ_BUFFER_SIZE >> 1))
		gaudi_nic->tx_ci = ci = NIC_RREG32(mmNIC0_QPC0_REQ_RING0_CI);

	new_pi = (pi + 1) & (WQ_BUFFER_SIZE - 1);
	if (new_pi == ci)
		return false;

	gaudi_nic->tx_pi = new_pi;

	sb_base_address = (SB_BASE_ADDR + port * SB_BASE_SIZE) +
				pi * NIC_MAX_PKT_SIZE;
	swq_base_addr = SWQ_BASE_ADDR + port * SWQ_BASE_SIZE;

	/* Create SWQ */
	memset(&swq, 0, sizeof(swq));
	CFG_SQ_WQE_OPCODE(swq, WQE_LINEAR);
	CFG_SQ_WQE_LOCAL_ADDRESS_31_0(swq, sb_base_address & 0xFFFFFFFF);
	CFG_SQ_WQE_LOCAL_ADDRESS_49_32(swq, (sb_base_address >> 32) & 0x3FFFF);
	CFG_SQ_WQE_SIZE(swq, size);

	/* Copy packet to SB */
	for (i = 0 ; i < size ; i++)
		writeq(data[i], hdev->pcie_bar[HBM_BAR_ID] +
			((sb_base_address + i * 8) - gaudi->hbm_bar_cur_addr));

	/* Copy WQE to SWQ Buffer */
	for (i = 0 ; i < (sizeof(swq) / sizeof(u64)) ; i++) {
		swq_addr = swq_base_addr +
				(pi * sizeof(struct sq_wqe) + i * 8);
		writeq(swq_p[i], hdev->pcie_bar[HBM_BAR_ID] +
				(swq_addr - gaudi->hbm_bar_cur_addr));
	}

	readq(hdev->pcie_bar[HBM_BAR_ID]);

	/* Make sure we ring the doorbell after the data copying */
	mb();

	/* Doorbell push */
	NIC_WREG32(mmNIC0_QPC0_SECURED_DOORBELL_PI, new_pi);
	NIC_WREG32(mmNIC0_QPC0_SECURED_DOORBELL_QPN, 0x80000000 | RAW_QPN);

	return true;
}

static enum eth_pkt_status get_pkt_from_hw(struct gaudi_nic_device *gaudi_nic,
						u64 *ppkt_addr, u32 *ppkt_size,
						u32 *pi)
{
	u64 pkt_addr, mem_addr = (u64) (uintptr_t) gaudi_nic->rx_mem_cpu;
	u32 ci = gaudi_nic->rx_ci, ether_type, tpid, ipv4_len, ipv6_len,
		pkt_size, hdr_size = ETH_HLEN, port = gaudi_nic->port;
	enum eth_pkt_status pkt_status = ETH_PKT_OK;
	struct hl_device *hdev = gaudi_nic->hdev;
	bool vlan_double_tag = false;
	__be32 *data;
	int idx;

	/*
	 * check if packet is available by reading the PI, but do it only if
	 * needed as it is expensive
	 */
	if (*pi == ci) {
		*pi = NIC_RREG32(mmNIC0_QPC0_RES_RING0_PI) & (NIC_RX_SIZE - 1);
		if (*pi == ci)
			return ETH_PKT_NONE;
	}

	pkt_addr = mem_addr + ci * NIC_MAX_PKT_SIZE;
	data = (__be32 *) pkt_addr;

	/* skip MAC header */
	idx = (ETH_ALEN * 2) / 4;

	/* handle VLAN tagging */
	tpid = ntohl(data[idx++]) >> 16;
	if (tpid == ETH_P_8021AD) {
		/* skip VLAN double tagging */
		tpid = ntohl(data[idx++]) >> 16;
		vlan_double_tag = true;
		hdr_size += 4;
	}

	if (tpid == ETH_P_8021Q) {
		/* skip VLAN tagging */
		ether_type = ntohl(data[idx++]) >> 16;
		hdr_size += 4;
	} else if (vlan_double_tag) {
		dev_dbg_ratelimited(hdev->dev,
					"Wrong VLAN TPID double tagging 0x%x\n",
					tpid);
		ether_type = UINT_MAX;
	} else {
		ether_type = tpid;
	}

	if (ether_type <= ETH_DATA_LEN) {
		pkt_size = ether_type;
	} else if (ether_type == ETH_P_ARP) {
		pkt_size = hdr_size + NIC_ARP_PKT_SIZE;
	} else if (ether_type == ETH_P_IP) {
		ipv4_len = ntohl(data[idx]) >> 16;
		pkt_size = hdr_size + ipv4_len;
	} else if (ether_type == ETH_P_IPV6) {
		ipv6_len = ntohl(data[idx]) & 0xFFFF;
		pkt_size = hdr_size + ipv6_len + sizeof(struct ipv6hdr);
	} else if ((ether_type == ETH_P_LLDP) ||
			(ether_type == ETH_P_LOOPBACK)) {
		pkt_size = hdr_size + ETH_DATA_LEN;
	} else {
		dev_dbg_ratelimited(hdev->dev,
					"error, unsupported EtherType 0x%x, port %d\n",
					ether_type, port);
		pkt_status = ETH_PKT_DROP;
		goto out;
	}

	if (pkt_size > NIC_MAX_PKT_SIZE) {
		dev_dbg_ratelimited(hdev->dev,
				"error, packet size %uB exceeds maximum of %uB, port %d\n",
				pkt_size, NIC_MAX_PKT_SIZE, port);
		pkt_status = ETH_PKT_DROP;
		goto out;
	}

#if HL_NIC_DEBUG
	dev_dbg_ratelimited(hdev->dev,
				"port %d packet_size %d ether_type 0x%x\n",
				gaudi_nic->port, pkt_size,
				ether_type);
#endif

	*ppkt_addr = pkt_addr;
	*ppkt_size = pkt_size;
out:
	gaudi_nic->rx_ci = (ci + 1) & (NIC_RX_SIZE - 1);

	return pkt_status;
}

static int gaudi_nic_handle_rx_pkt(struct gaudi_nic_device *gaudi_nic,
					int budget, u32 *last_pi)
{
	struct net_device_stats *stats = &gaudi_nic->ndev->stats;
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 pkt_size, pi = gaudi_nic->rx_ci;
	enum eth_pkt_status pkt_status;
	int rc, pkt_count = 0;
	struct sk_buff *skb;
	u64 pkt_address;

	if (!gaudi_nic->active)
		return 0;

	while (1) {
		if (pkt_count >= budget || disabled_or_in_reset(gaudi_nic))
			break;

		pkt_status = get_pkt_from_hw(gaudi_nic, &pkt_address, &pkt_size,
						&pi);

		if (pkt_status == ETH_PKT_NONE)
			break;

		pkt_count++;

		if (pkt_status == ETH_PKT_DROP) {
			stats->rx_dropped++;
			continue;
		}

		if (hdev->nic_rx_poll)
			skb = netdev_alloc_skb_ip_align(gaudi_nic->ndev,
							pkt_size);
		else
			skb = napi_alloc_skb(&gaudi_nic->napi, pkt_size);

		if (!skb)
			break;

		skb_copy_to_linear_data(skb, (void *) pkt_address, pkt_size);
		skb_put(skb, pkt_size);
		skb->protocol = eth_type_trans(skb, gaudi_nic->ndev);

#if HL_NIC_DEBUG
		dev_dbg_ratelimited(hdev->dev,
					"port: %d, addr: 0x%llx, size: %d, rx_ci: %d\n",
					gaudi_nic->port, pkt_address, pkt_size,
					gaudi_nic->rx_ci);
#endif

		rc = netif_receive_skb(skb);
		if (rc == NET_RX_SUCCESS) {
			stats->rx_packets++;
			stats->rx_bytes += pkt_size;
			pkt_count++;
		} else {
			stats->rx_dropped++;
		}
	}

	*last_pi = pi;

	return pkt_count;
}

static void rx_pkt_poll(struct work_struct *work)
{
	struct gaudi_nic_device *gaudi_nic = container_of(work,
							struct gaudi_nic_device,
							rx_poll_work.work);
	u32 ignore;

	gaudi_nic_handle_rx_pkt(gaudi_nic, NIC_NAPI_MAX_RX_BUDGET, &ignore);
	schedule_delayed_work(&gaudi_nic->rx_poll_work, msecs_to_jiffies(1));
}

static void gaudi_nic_reenable_rx_irq(struct gaudi_nic_device *gaudi_nic,
								u32 last_pi)
{
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 new_pi;

	NIC_WREG32(mmNIC0_QPC0_INTERRUPT_CLR, 0xFFFF);

	if (gaudi_nic->active) {
		/*
		 * packets can still arrive when IRQ is disabled. Hence if the
		 * PI has changed since we finished to handle the Rx ring, it
		 * means we have more packets to process. Hence we generate an
		 * IRQ to handle them.
		 */
		new_pi = NIC_RREG32(mmNIC0_QPC0_RES_RING0_PI) &
				(NIC_RX_SIZE - 1);
		if (last_pi != new_pi)
			WREG32(gaudi_nic->rx_msi_addr, 1);
	}
}

static int napi_clean(struct napi_struct *napi, int budget)
{
	struct gaudi_nic_device *gaudi_nic =
			container_of(napi, struct gaudi_nic_device, napi);
	int work_done;
	u32 last_pi;

	work_done = gaudi_nic_handle_rx_pkt(gaudi_nic, budget, &last_pi);

	/* If budget not fully consumed, exit the polling mode */
	if (work_done < budget) {
		napi_complete_done(napi, work_done);
		gaudi_nic_reenable_rx_irq(gaudi_nic, last_pi);
	}

	return work_done;
}

irqreturn_t gaudi_nic_rx_irq_handler(int irq, void *arg)
{
	struct gaudi_nic_device *gaudi_nic = arg;
	struct hl_device *hdev = gaudi_nic->hdev;
	struct gaudi_device *gaudi;

	gaudi = gaudi_nic->hdev->asic_specific;

	if (!hdev->nic_rx_poll)
		gaudi->nic_handle_rx(gaudi_nic);

	return IRQ_HANDLED;
}

static void set_port_status(struct gaudi_nic_device *gaudi_nic, bool active)
{
	if (gaudi_nic->active == active)
		return;

	if (active) {
		netif_wake_queue(gaudi_nic->ndev);
		netif_start_queue(gaudi_nic->ndev);
		netif_carrier_on(gaudi_nic->ndev);
		gaudi_nic->active = true;
	} else {
		netif_stop_queue(gaudi_nic->ndev);
		netif_carrier_off(gaudi_nic->ndev);
		gaudi_nic->active = false;
	}
}

static void port_reset_state(struct gaudi_nic_device *gaudi_nic)
{
	kfifo_reset(&gaudi_nic->pcs_fail_fifo);
	gaudi_nic->pcs_link = false;
	gaudi_nic->auto_neg_resolved = false;
	gaudi_nic->phy_fw_tuned = false;
	gaudi_nic->retry_cnt = 0;
	gaudi_nic->pcs_fail_cnt = 0;
	gaudi_nic->pcs_local_fault_cnt = 0;
	gaudi_nic->pcs_remote_fault_cnt = 0;
	gaudi_nic->correctable_errors_cnt = 0;
	gaudi_nic->uncorrectable_errors_cnt = 0;
}

static void phy_reconfig(struct gaudi_nic_device *gaudi_nic)
{
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 port = gaudi_nic->port;
	int i, rc;

	if (!gaudi->nic_phy_config_fw)
		return;

	dev_dbg(hdev->dev, "reconfiguring PHY, port %d\n", port);

	if (gaudi_nic->auto_neg_enable) {
		for (i = NIC_MAC_LANES_START ; i < NIC_MAC_NUM_OF_LANES ; i++) {
			if (!(gaudi_nic->auto_neg_mask & BIT(i)))
				continue;

			rc = gaudi_nic_phy_fw_config_auto_neg(gaudi_nic, i);
			if (rc)
				dev_dbg(hdev->dev,
					"F/W reconfig autoneg failed, port: %d, lane: %d\n",
					port, i);
		}
	} else {
		for (i = NIC_MAC_LANES_START ; i < NIC_MAC_NUM_OF_LANES ; i++) {
			if (!(gaudi_nic->power_up_mask & BIT(i)))
				continue;

			rc = gaudi_nic_phy_power_up(gaudi_nic, i, false);
			if (rc) {
				dev_err(hdev->dev,
					"PHY reconfig power up failed for port %d\n",
					port);
				break;
			}
		}
	}

	port_reset_state(gaudi_nic);
}

static enum link_status update_pcs_link_failure(
					struct gaudi_nic_device *gaudi_nic)
{
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;
	struct kfifo *pcs_fifo = &gaudi_nic->pcs_fail_fifo;
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 port = gaudi_nic->port;
	ktime_t now, before;
	int count;

	if (!gaudi_nic->auto_neg_enable)
		return PCS_DOWN;

	now = ktime_get();

	count = kfifo_in(pcs_fifo, &now, sizeof(now));
	if (count != sizeof(now)) {
		dev_err(hdev->dev,
			"Failed to push to PCS fifo, size: %d, count: %d, port: %d\n",
			gaudi_nic->pcs_fail_cnt, count, port);
		return PCS_DOWN;
	}

	gaudi_nic->pcs_fail_cnt++;

	if (gaudi_nic->pcs_fail_cnt < gaudi->nic_pcs_fail_threshold)
		return PCS_DOWN;

	/*
	 * Here we reached the threshold count of failures to reconfigure the
	 * link. Now need to check if all of the failure are in the needed time
	 * frame. It is sufficient to check the first item in the queue as it is
	 * the earliest failure and if it is in the needed time frame, all the
	 * rest if failures are in it too.
	 */
	count = kfifo_out_peek(pcs_fifo, &before, sizeof(before));
	if (count != sizeof(before))
		dev_err(hdev->dev,
			"Failed to peek in PCS fifo, size: %d, count: %d, port: %d\n",
			gaudi_nic->pcs_fail_cnt, count, port);

	if (ktime_ms_delta(now, before) <=
			(gaudi->nic_pcs_fail_time_frame * MSEC_PER_SEC)) {
		dev_dbg(hdev->dev,
			"PHY reconfig due to PCS link failure cnt, port: %d\n",
			port);
		return FAIL_RECONFIG;
	}

	/*
	 * The earliest failure is not in the needed time frame, hence
	 * we can remove it.
	 */
	count = kfifo_out(pcs_fifo, &before, sizeof(before));
	if (count != sizeof(before))
		dev_err(hdev->dev,
			"Failed to pop from PCS fifo, size: %d, count: %d, port: %d\n",
			gaudi_nic->pcs_fail_cnt, count, port);

	gaudi_nic->pcs_fail_cnt--;

	return PCS_DOWN;
}

static void reset_tx(struct gaudi_nic_device *gaudi_nic)
{
	struct hl_device *hdev = gaudi_nic->hdev;
	int i;

	/* This temporary WA is only for HLS external ports */
	if ((hdev->card_type != cpucp_card_type_pmc) ||
			(BIT(gaudi_nic->port) & ~hdev->nic_ports_ext_mask))
		return;

	for (i = NIC_MAC_LANES_START ; i < NIC_MAC_NUM_OF_LANES ; i++)
		if (gaudi_nic->fw_tuning_mask & BIT(i))
			gaudi_nic_phy_reset_tx(gaudi_nic, i);
}

static enum link_status _check_pcs_link(struct gaudi_nic_device *gaudi_nic)
{
	u32 port = gaudi_nic->port, pcs_val, mac_val, start_lane;
	struct hl_device *hdev = gaudi_nic->hdev;
	int i, rc;

	start_lane = __ffs(gaudi_nic->fw_tuning_mask);

	for (i = NIC_MAC_LANES_START ; i < NIC_MAC_NUM_OF_LANES ; i++) {
		if (!(gaudi_nic->fw_tuning_mask & BIT(i)))
			continue;

		rc = gaudi_nic_phy_check_link_status(gaudi_nic, i);
		if (rc)
			return PHY_DOWN;
	}

	/* need to check the first lane only */
	mac_val = gaudi_nic_mac_read(gaudi_nic, start_lane, "mac", 0x40);

	if (mac_val & 1)
		gaudi_nic->pcs_local_fault_cnt++;
	else if (gaudi_nic->pcs_local_fault_cnt)
		gaudi_nic->pcs_local_fault_cnt--;

	if (mac_val & 2)
		gaudi_nic->pcs_remote_fault_cnt++;
	else if (gaudi_nic->pcs_remote_fault_cnt)
		gaudi_nic->pcs_remote_fault_cnt--;

	if (gaudi_nic->pcs_remote_fault_cnt == PCS_FAULT_THRESHOLD) {
		dev_dbg(hdev->dev,
			"PHY reconfig due to PCS remote fault cnt, port: %d\n",
			port);
		return FAULT_RECONFIG;
	}

	/* need to check the first lane only */
	pcs_val = gaudi_nic_mac_read(gaudi_nic, start_lane, "xpcs", 0x20);

	if ((pcs_val >> 12) & 1)
		return LINK_UP;

	return PCS_DOWN;
}

static void check_pcs_link(struct gaudi_nic_device *gaudi_nic)
{
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;
	struct hl_device *hdev = gaudi_nic->hdev;
	enum link_status link_status;
	u32 port = gaudi_nic->port;

	if (!gaudi->nic_check_link)
		return;

	link_status = _check_pcs_link(gaudi_nic);
	if ((link_status == PCS_DOWN) || (link_status == PHY_DOWN)) {
		/* Try again to overcome a momentary glitch */
		msleep(PCS_LINK_RETRY_MSEC);

		link_status = _check_pcs_link(gaudi_nic);

		if (link_status == LINK_UP)
			dev_info(hdev->dev, "PCS link restored, port %d\n",
					port);
	}

	if (link_status == LINK_UP)
		return;

	set_port_status(gaudi_nic, false);
	gaudi_nic->pcs_link = false;
	gaudi_nic->last_pcs_link_drop_ts = ktime_get();

	dev_info(hdev->dev, "%s lost signal, port %d\n",
			(link_status == PHY_DOWN) ? "PHY" : "PCS", port);

	/* TODO: fix the bug in the retimer to remove this Tx reset WA */
	/*
	 * No need to update about the PCS failure if we already need to
	 * reconfigure the PHY.
	 */
	if (link_status == FAULT_RECONFIG)
		reset_tx(gaudi_nic);
	else
		link_status = update_pcs_link_failure(gaudi_nic);

	if ((link_status == FAULT_RECONFIG) ||
			(link_status == FAIL_RECONFIG))
		phy_reconfig(gaudi_nic);
}

static void acquire_pcs_link(struct gaudi_nic_device *gaudi_nic)
{
	u32 port = gaudi_nic->port, pcs_val, start_lane;
	struct hl_device *hdev = gaudi_nic->hdev;

	start_lane = __ffs(gaudi_nic->fw_tuning_mask);

	/* need to check the first lane only */
	pcs_val = gaudi_nic_mac_read(gaudi_nic, start_lane, "xpcs", 0x20);
	gaudi_nic->pcs_link = (pcs_val >> 12) & 1;
	gaudi_nic->retry_cnt++;

	if (gaudi_nic->pcs_link) {
		dev_info(hdev->dev, "PCS link up, port %d\n", port);
		set_port_status(gaudi_nic, true);
		gaudi_nic->retry_cnt = 0;
	} else if (gaudi_nic->retry_cnt == PCS_LINK_CNT) {
		if (ktime_after(gaudi_nic->last_fw_tuning_ts,
				gaudi_nic->last_pcs_link_drop_ts))
			dev_dbg(hdev->dev,
				"PHY_reconfig due to PCS link down after F/W tuning, port %d\n",
				port);
		else
			dev_dbg(hdev->dev,
				"PHY reconfig due to PCS link cnt, port %d\n",
				port);
		phy_reconfig(gaudi_nic);
	}
}

static void do_fw_tuning(struct gaudi_nic_device *gaudi_nic)
{
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 port = gaudi_nic->port;
	int i, rc = 0;

	for (i = NIC_MAC_LANES_START ; i < NIC_MAC_NUM_OF_LANES ; i++) {
		if (!(gaudi_nic->fw_tuning_mask & BIT(i)))
			continue;

		rc = gaudi_nic_phy_fw_tuning(gaudi_nic, i, true);
		if (rc) {
			if (rc == -EAGAIN) {
				if (gaudi_nic->retry_cnt++ == FW_TUNING_CNT) {
					dev_dbg(hdev->dev,
						"PHY reconfig due to F/W tuning cnt, port %d, lane %d\n",
						port, i);
					phy_reconfig(gaudi_nic);
				}
			} else {
				dev_dbg(hdev->dev,
					"PHY F/W tuning failed for port %d, lane %d, rc %d\n",
					port, i, rc);
				phy_reconfig(gaudi_nic);
			}
			break;
		}
	}

	if (!rc) {
		gaudi_nic->phy_fw_tuned = true;
		gaudi_nic->retry_cnt = 0;
		gaudi_nic->last_fw_tuning_ts = ktime_get();
	}
}

static void do_fw_tuning_auto_neg(struct gaudi_nic_device *gaudi_nic)
{
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 port = gaudi_nic->port;
	int i, rc;

	for (i = NIC_MAC_LANES_START ; i < NIC_MAC_NUM_OF_LANES ; i++) {
		if (!(gaudi_nic->auto_neg_mask & BIT(i)))
			continue;

		rc = gaudi_nic_phy_fw_tuning(gaudi_nic, i, false);
		if (rc) {
			if (rc != -EAGAIN)
				dev_dbg(hdev->dev,
					"PHY auto neg F/W tuning failed, port %d, lane %d, rc %d\n",
					port, i, rc);
			return;
		}
	}

	for (i = NIC_MAC_LANES_START ; i < NIC_MAC_NUM_OF_LANES ; i++) {
		if (!(gaudi_nic->fw_tuning_mask & BIT(i)))
			continue;

		rc = gaudi_nic_phy_config_pam4_link_training(gaudi_nic, i);
		if (rc) {
			if (rc == -EAGAIN) {
				if (gaudi_nic->retry_cnt++ ==
						FW_LINK_TRAINING_CNT) {
					dev_dbg(hdev->dev,
						"PHY reconfig due to PAM4 cnt, port: %d, lane: %d\n",
						port, i);
					phy_reconfig(gaudi_nic);
				}
			} else {
				dev_dbg(hdev->dev,
					"PHY auto neg F/W speed config failed, port %d, lane %d, rc %d\n",
					port, i, rc);
				phy_reconfig(gaudi_nic);
			}

			return;
		}
	}

	dev_dbg(hdev->dev, "auto neg done, port: %d\n", port);
	gaudi_nic->auto_neg_resolved = true;
	gaudi_nic->retry_cnt = 0;
	do_fw_tuning(gaudi_nic);
}

static void check_link_status(struct work_struct *work)
{
	struct gaudi_nic_device *gaudi_nic = container_of(work,
							struct gaudi_nic_device,
							link_status_work.work);
	u32 timeout_ms;

	if (gaudi_nic->phy_fw_tuned) {
		if (gaudi_nic->pcs_link)
			check_pcs_link(gaudi_nic);
		else
			acquire_pcs_link(gaudi_nic);
	} else {
		if (gaudi_nic->auto_neg_enable && !gaudi_nic->auto_neg_resolved)
			do_fw_tuning_auto_neg(gaudi_nic);
		else
			do_fw_tuning(gaudi_nic);
	}

	if (gaudi_nic->pcs_link)
		timeout_ms = 1000;
	else if (gaudi_nic->phy_fw_tuned)
		timeout_ms = 500;
	else
		timeout_ms = 1;

	schedule_delayed_work(&gaudi_nic->link_status_work,
				msecs_to_jiffies(timeout_ms));
}

static int _gaudi_nic_sw_init(struct gaudi_nic_device *gaudi_nic)
{
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 port = gaudi_nic->port;
	int rc;

	gaudi_nic->rx_mem_size = NIC_RX_SIZE * NIC_MAX_PKT_SIZE;

	gaudi_nic->rx_mem_cpu = hdev->asic_funcs->asic_dma_alloc_coherent(hdev,
							gaudi_nic->rx_mem_size,
							&gaudi_nic->rx_mem_dma,
							GFP_KERNEL);
	if (!gaudi_nic->rx_mem_cpu) {
		dev_err(hdev->dev, "Failed to allocate Rx memory, port: %d\n",
			port);
		return -ENOMEM;
	}

	gaudi_nic->cq_mem_size = CQ_PORT_BUF_SIZE;

	if (!IS_ALIGNED(gaudi_nic->cq_mem_size, PAGE_SIZE_4KB)) {
		dev_err(hdev->dev,
			"NIC CQ port buffer size should be aligned to 4KB, port: %d\n",
			port);
		rc = -EFAULT;
		goto free_rx;
	}

	gaudi_nic->cq_mem_cpu = hdev->asic_funcs->asic_dma_alloc_coherent(hdev,
							gaudi_nic->cq_mem_size,
							&gaudi_nic->cq_mem_dma,
							GFP_KERNEL);
	if (!gaudi_nic->cq_mem_cpu) {
		dev_err(hdev->dev, "Failed to allocate CQ memory, port: %d\n",
			port);
		rc = -ENOMEM;
		goto free_rx;
	}

	gaudi_nic->qp_err_mem_size = QP_ERR_BUF_SIZE;

	gaudi_nic->qp_err_mem_cpu = hdev->asic_funcs->asic_dma_alloc_coherent(
						hdev,
						gaudi_nic->qp_err_mem_size,
						&gaudi_nic->qp_err_mem_dma,
						GFP_KERNEL);
	if (!gaudi_nic->qp_err_mem_cpu) {
		dev_err(hdev->dev,
			"Failed to allocate QP error memory, port: %d\n",
			port);
		rc = -ENOMEM;
		goto free_cq;
	}

	mutex_init(&gaudi_nic->user_wq_lock);

	mutex_init(&gaudi_nic->idr_lock);
	idr_init(&gaudi_nic->qp_ids);

	return 0;

free_cq:
	hdev->asic_funcs->asic_dma_free_coherent(hdev, gaudi_nic->cq_mem_size,
							gaudi_nic->cq_mem_cpu,
							gaudi_nic->cq_mem_dma);
free_rx:
	hdev->asic_funcs->asic_dma_free_coherent(hdev, gaudi_nic->rx_mem_size,
							gaudi_nic->rx_mem_cpu,
							gaudi_nic->rx_mem_dma);

	return rc;
}

static void _gaudi_nic_sw_fini(struct gaudi_nic_device *gaudi_nic)
{
	struct hl_device *hdev = gaudi_nic->hdev;

	idr_destroy(&gaudi_nic->qp_ids);
	mutex_destroy(&gaudi_nic->idr_lock);

	mutex_destroy(&gaudi_nic->user_wq_lock);

	hdev->asic_funcs->asic_dma_free_coherent(hdev,
						gaudi_nic->qp_err_mem_size,
						gaudi_nic->qp_err_mem_cpu,
						gaudi_nic->qp_err_mem_dma);

	hdev->asic_funcs->asic_dma_free_coherent(hdev, gaudi_nic->cq_mem_size,
							gaudi_nic->cq_mem_cpu,
							gaudi_nic->cq_mem_dma);

	hdev->asic_funcs->asic_dma_free_coherent(hdev, gaudi_nic->rx_mem_size,
							gaudi_nic->rx_mem_cpu,
							gaudi_nic->rx_mem_dma);
}

int gaudi_nic_sw_init(struct hl_device *hdev)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct gaudi_nic_device *gaudi_nic;
	int rc, i, init_cnt = 0;

	/* At this stage, we don't know how many links we have, so we must
	 * allocate for the maximum number of links (and also free all of them
	 * in sw_fini
	 */
	for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++, init_cnt++) {
		gaudi_nic = &gaudi->nic_devices[i];
		gaudi_nic->hdev = hdev;
		gaudi_nic->port = i;

		rc = _gaudi_nic_sw_init(gaudi_nic);
		if (rc) {
			dev_err(hdev->dev,
				"NIC S/W init failed, port: %d, rc: %d\n", i,
				rc);
			goto err;
		}
	}

	mutex_init(&gaudi->nic_cq_user_lock);
	mutex_init(&gaudi->nic_qp_err_lock);

	return 0;

err:
	for (i = 0 ; i < init_cnt ; i++)
		_gaudi_nic_sw_fini(&gaudi->nic_devices[i]);

	return rc;
}

void gaudi_nic_sw_fini(struct hl_device *hdev)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	int i;

	mutex_destroy(&gaudi->nic_qp_err_lock);
	mutex_destroy(&gaudi->nic_cq_user_lock);

	for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++)
		_gaudi_nic_sw_fini(&gaudi->nic_devices[i]);
}

/* this function is called from multiple threads */
static void copy_cqe_to_main_queue(struct hl_device *hdev,
					struct hl_nic_cqe *cqe)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	u32 pi;

	spin_lock(&gaudi->nic_cq_lock);

	pi = gaudi->nic_cq_user_pi++;
	/* wraparound according to the user CQ length */
	pi &= (gaudi->nic_cq_user_num_of_entries - 1);
	memcpy(&gaudi->nic_cq_buf[pi], cqe, sizeof(*cqe));

#if HL_NIC_DEBUG
	if (cqe->type == HL_NIC_CQE_TYPE_RES) {
		dev_dbg(hdev->dev,
			"responder, msg_id: 0x%x, port: %d, was copied to pi %d\n",
			cqe->responder.msg_id, cqe->port, pi);
	} else {
		dev_dbg(hdev->dev,
			"requester, wqe_index: 0x%x, qp_number: %d, port: %d, was copied to pi %d\n",
			cqe->requester.wqe_index,
			cqe->qp_number, cqe->port, pi);
	}
#endif

	/* copy the CQE before the counter update */
	mb();

	if (unlikely(!atomic_add_unless(&gaudi->nic_cq_user_new_cqes, 1,
				gaudi->nic_cq_user_num_of_entries))) {
		gaudi->nic_cq_status = HL_NIC_CQ_OVERFLOW;
		dev_err(hdev->dev, "NIC CQ overflow, should recreate NIC CQ\n");
	}

	spin_unlock(&gaudi->nic_cq_lock);
}

static void cq_work(struct work_struct *work)
{
	struct gaudi_nic_device *gaudi_nic = container_of(work,
							struct gaudi_nic_device,
							cq_work.work);
	u32 ci = gaudi_nic->cq_ci, cqe_cnt = 0, port = gaudi_nic->port, delay;
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;
	struct cqe *cq_arr = gaudi_nic->cq_mem_cpu, *cqe_hw;
	struct hl_device *hdev = gaudi_nic->hdev;
	struct hl_nic_cqe cqe_sw;
	bool stop_work = false;

	while (1) {
		if (unlikely(!gaudi->nic_cq_enable) ||
			unlikely(gaudi->nic_cq_status != HL_NIC_CQ_SUCCESS)) {
			stop_work = true;
			break;
		}

		memset(&cqe_sw, 0, sizeof(cqe_sw));

		/* wraparound according to our buffer length */
		cqe_hw = &cq_arr[ci & (CQ_PORT_BUF_LEN - 1)];

		if (!CQE_IS_VALID(cqe_hw))
			break;
		/* Make sure we read CQE contents after the valid bit check */
		dma_rmb();

		cqe_sw.port = port;

		if (CQE_TYPE(cqe_hw)) {
			cqe_sw.type = HL_NIC_CQE_TYPE_RES;
			cqe_sw.responder.msg_id =
					(CQE_RES_IMDT_31_22(cqe_hw) << 22) |
						CQE_RES_IMDT_21_0(cqe_hw);

			/*
			 * the even port publishes its responder CQEs on the odd
			 * port CQ. take the correct port in this case.
			 */
			if (!CQE_RES_NIC(cqe_hw))
				cqe_sw.port--;
		} else {
			cqe_sw.requester.wqe_index = CQE_REQ_WQE_IDX(cqe_hw);
			cqe_sw.qp_number = CQE_REQ_QPN(cqe_hw);
		}

		copy_cqe_to_main_queue(hdev, &cqe_sw);

		CQE_SET_INVALID(cqe_hw);

		/* the H/W CI does wraparound every 32 bit */
		ci++;

		cqe_cnt++;
		if (unlikely(cqe_cnt > CQ_PORT_BUF_LEN)) {
			dev_err(hdev->dev,
				"handled too many CQEs (%d), port: %d\n",
				cqe_cnt, port);
			stop_work = true;
			break;
		}
	}

	/* no CQEs to handle */
	if (cqe_cnt == 0)
		goto out;

#if HL_NIC_DEBUG
	dev_dbg(hdev->dev, "update H/W CQ CI: %d, port: %d\n", ci, port);
#endif

	NIC_WREG32(mmNIC0_RXE0_CQ_CONSUMER_INDEX, ci);

	/*
	 * perform a read to flush the new CI value before checking for hidden
	 * packets
	 */
	NIC_RREG32(mmNIC0_RXE0_CQ_CONSUMER_INDEX);

	gaudi_nic->cq_ci = ci;

	/* make sure we wake up the waiter after the CI update */
	mb();

	/* signal the completion queue that there are available CQEs */
	complete(&gaudi->nic_cq_comp);

	if (unlikely(stop_work))
		goto out;

out:
	if (likely(cqe_cnt)) {
		gaudi_nic->last_cqe_cnt = cqe_cnt;
		delay = gaudi_nic->cq_delay;
	} else {
		ktime_t later;

		/*
		 * take base TS on the first polling invocation where no CQEs
		 * were processed
		 */
		if (gaudi_nic->last_cqe_cnt) {
			gaudi_nic->last_cqe_cnt = 0;
			gaudi_nic->last_cqe_ts = ktime_get();
		}

		/* extend the delay if no CQEs were processed for 1 sec */
		later = ktime_add_ms(gaudi_nic->last_cqe_ts, 1 * MSEC_PER_SEC);
		if (ktime_compare(ktime_get(), later) > 0)
			delay = gaudi_nic->cq_delay_idle;
		else
			delay = gaudi_nic->cq_delay;
	}

	queue_delayed_work(gaudi_nic->cq_wq, &gaudi_nic->cq_work, delay);
}

static int cq_update_consumed_cqes(struct hl_device *hdev,
				struct hl_nic_cq_update_consumed_cqes_in *in)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	u32 num_of_cqes;
	int rc = 0;

	if (!in) {
		dev_err(hdev->dev,
			"Missing parameters to update consumed CQEs\n");
		return -EINVAL;
	}

	mutex_lock(&gaudi->nic_cq_user_lock);

	if (!gaudi->nic_cq_enable) {
		dev_err(hdev->dev,
			"NIC CQ is not enabled, can't update user CI\n");
		rc = -EFAULT;
		goto out;
	}

	num_of_cqes = in->cq_num_of_consumed_entries;

	if (atomic_read(&gaudi->nic_cq_user_new_cqes) < num_of_cqes) {
		dev_err(hdev->dev,
			"nunmber of consumed CQEs is too big %d/%d\n",
			num_of_cqes, atomic_read(&gaudi->nic_cq_user_new_cqes));
		rc = -EINVAL;
		goto out;
	}

	gaudi->nic_cq_user_ci = (gaudi->nic_cq_user_ci + num_of_cqes) &
				(gaudi->nic_cq_user_num_of_entries - 1);

	atomic_sub(num_of_cqes, &gaudi->nic_cq_user_new_cqes);

#if HL_NIC_DEBUG
	dev_dbg(hdev->dev, "consumed %d CQEs\n", num_of_cqes);
	dev_dbg(hdev->dev, "user CQ CI: %d\n", gaudi->nic_cq_user_ci);
#endif
out:
	mutex_unlock(&gaudi->nic_cq_user_lock);

	return rc;
}

static int cq_poll_wait(struct hl_device *hdev,
			struct hl_nic_cq_poll_wait_in *in,
			struct hl_nic_cq_poll_wait_out *out,
			bool do_wait)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	char *op_str = do_wait ? "wait" : "poll";
	bool has_work = false;
	u32 num_of_cqes;
	long rc_wait;
	int rc = 0;

	if (!in || !out) {
		dev_err(hdev->dev, "Missing parameters to poll/wait on CQ\n");
		return -EINVAL;
	}

	/* allow only one thread to wait */
	mutex_lock(&gaudi->nic_cq_user_lock);

	if (!gaudi->nic_cq_enable) {
		dev_err(hdev->dev, "NIC CQ is not enabled, can't %s\n", op_str);
		rc = -EFAULT;
		goto out;
	}

	if (gaudi->nic_cq_status != HL_NIC_CQ_SUCCESS) {
		dev_err(hdev->dev, "NIC CQ is not operational, can't %s\n",
			op_str);
		rc = -EFAULT;
		goto out;
	}

#if HL_NIC_DEBUG
	dev_dbg(hdev->dev, "ci: %d, wait: %d\n",
		gaudi->nic_cq_user_ci, do_wait);
#endif

	if (do_wait) {
		while (1) {
			rc_wait = wait_for_completion_interruptible_timeout(
					&gaudi->nic_cq_comp,
					usecs_to_jiffies(in->timeout_us));

			if (rc_wait == -ERESTARTSYS) {
				dev_info(hdev->dev,
						"stopping CQ %s due to signal\n",
						op_str);
				/* ERESTARTSYS is not returned to the user */
				rc = -EINTR;
				break;
			}

			if (!rc_wait) {
				gaudi->nic_cq_status = HL_NIC_CQ_TIMEOUT;
				break;
			}

			if (!gaudi->nic_cq_enable) {
				dev_info(hdev->dev,
						"stopping CQ %s upon request\n",
						op_str);
				rc = -EBUSY;
				break;
			}

			if (gaudi->nic_cq_status != HL_NIC_CQ_SUCCESS)
				break;

			/*
			 * A waiter can read 0 here.
			 * Consider the following scenario:
			 * 1. complete() is called twice for two CQEs.
			 * 2. The first waiter grabs the two CQEs.
			 * 3. The second waiter wakes up immediately and has no
			 *    CQES to handle.
			 */
			num_of_cqes = atomic_read(&gaudi->nic_cq_user_new_cqes);
			if (num_of_cqes) {
				has_work = true;
				break;
			}
		}
	} else {
		has_work = try_wait_for_completion(&gaudi->nic_cq_comp);
		if (has_work)
			num_of_cqes = atomic_read(&gaudi->nic_cq_user_new_cqes);
	}

	if (rc)
		goto out;

	if (has_work) {
		out->pi = gaudi->nic_cq_user_ci;
		out->num_of_cqes = num_of_cqes;
#if HL_NIC_DEBUG
		dev_dbg(hdev->dev, "pulled %d CQEs\n", num_of_cqes);
		dev_dbg(hdev->dev, "user CQ CI: %d\n", gaudi->nic_cq_user_ci);
#endif
	} else {
		out->num_of_cqes = 0;
	}

	out->status = gaudi->nic_cq_status;

	/* timeout is not a real error, CQ should stay operational */
	if (gaudi->nic_cq_status == HL_NIC_CQ_TIMEOUT)
		gaudi->nic_cq_status = HL_NIC_CQ_SUCCESS;
out:
	mutex_unlock(&gaudi->nic_cq_user_lock);

	return rc;
}

static int cq_create(struct hl_device *hdev, struct hl_nic_cq_create_in *in,
			struct hl_nic_cq_create_out *out)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct gaudi_nic_device *gaudi_nic;
	struct cqe *cq_arr;
	int rc = 0, i, j;

	if (!in || !out) {
		dev_err(hdev->dev, "Missing parameters to create CQ\n");
		return -EINVAL;
	}

	if (in->cq_num_of_entries < CQ_USER_MIN_ENTRIES) {
		dev_err(hdev->dev, "NIC CQ buffer length must be at least %d entries\n",
			CQ_USER_MIN_ENTRIES);
		return -EINVAL;
	}

	if (!is_power_of_2(in->cq_num_of_entries)) {
		dev_err(hdev->dev,
			"NIC CQ buffer length must be at power of 2\n");
		return -EINVAL;
	}

	if (in->cq_num_of_entries > CQ_USER_MAX_ENTRIES) {
		dev_err(hdev->dev,
			"NIC CQ buffer length must not be more than 0x%lx entries\n",
			CQ_USER_MAX_ENTRIES);
		return -EINVAL;
	}

	mutex_lock(&gaudi->nic_cq_user_lock);

	if (gaudi->nic_cq_enable) {
		dev_err(hdev->dev, "NIC CQ was already created\n");
		rc = -EFAULT;
		goto out;
	}

	gaudi->nic_cq_user_num_of_entries = in->cq_num_of_entries;
	gaudi->nic_cq_buf = vmalloc_user(gaudi->nic_cq_user_num_of_entries *
					sizeof(struct hl_nic_cqe));
	if (!gaudi->nic_cq_buf) {
		rc = -ENOMEM;
		goto out;
	}

	init_completion(&gaudi->nic_cq_comp);
	memset(gaudi->nic_cq_buf, 0,
		gaudi->nic_cq_user_num_of_entries * sizeof(struct hl_nic_cqe));

	spin_lock_init(&gaudi->nic_cq_lock);
	gaudi->nic_cq_user_ci = 0;
	gaudi->nic_cq_user_pi = 0;
	atomic_set(&gaudi->nic_cq_user_new_cqes, 0);

	for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++) {
		if (!(hdev->nic_ports_mask & BIT(i)) ||
			!gaudi->nic_devices[i].port_open)
			continue;

		gaudi_nic = &gaudi->nic_devices[i];
		gaudi_nic->cq_ci = gaudi_nic->last_cqe_cnt = 0;

		NIC_WREG32(mmNIC0_RXE0_CQ_PRODUCER_INDEX, 0);
		NIC_WREG32(mmNIC0_RXE0_CQ_CONSUMER_INDEX, 0);
		NIC_WREG32(mmNIC0_RXE0_CQ_WRITE_INDEX, 0);

		cq_arr = gaudi_nic->cq_mem_cpu;
		for (j = 0 ; j < CQ_PORT_BUF_LEN ; j++)
			CQE_SET_INVALID(&cq_arr[j]);

	}

	out->handle = HL_MMAP_TYPE_NIC_CQ << PAGE_SHIFT;
	gaudi->nic_cq_status = HL_NIC_CQ_SUCCESS;
	gaudi->nic_cq_enable = true;
out:
	mutex_unlock(&gaudi->nic_cq_user_lock);

	return rc;
}

static void cq_stop(struct hl_device *hdev)
{
	struct gaudi_device *gaudi = hdev->asic_specific;

	if (!gaudi->nic_cq_enable)
		return;

	/* if the CQ wait IOCTL is in progress, wake it up to return to US */
	gaudi->nic_cq_enable = false;
	/* make sure we disable the CQ before waking up the waiter */
	mb();
	complete(&gaudi->nic_cq_comp);

	/* let the CQ wait IOCTL do cleanup gracefully */
	msleep(100);
}

static int cq_destroy(struct hl_device *hdev)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	int rc = 0;

	mutex_lock(&gaudi->nic_cq_user_lock);

	if (!gaudi->nic_cq_enable)
		goto out;

	if (gaudi->nic_cq_mmap) {
		dev_err(hdev->dev, "NIC CQ is still mapped, can't destroy\n");
		rc = -EFAULT;
		goto out;
	}

	/*
	 * mark the CQ as disabled while holding the NIC QP error lock to avoid
	 * from pushing QP error entries to a CQ under destruction
	 */
	mutex_lock(&gaudi->nic_qp_err_lock);
	gaudi->nic_cq_enable = false;
	mutex_unlock(&gaudi->nic_qp_err_lock);

	/* make sure we disable the CQ before draining the polling threads */
	mb();

	/*
	 * Wait for the polling threads to digest the new CQ state. This in
	 * order to free the user buffer after they stopped processing CQEs and
	 * copy them to the buffer.
	 */
	msleep(100);

	vfree(gaudi->nic_cq_buf);
out:
	mutex_unlock(&gaudi->nic_cq_user_lock);

	return rc;
}

/* used for physically contiguous memory only */
static int map_nic_mem(struct hl_device *hdev, u64 va, dma_addr_t pa, u32 size)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct hl_ctx *ctx = hdev->kernel_ctx;
	s64 off;
	int rc;

	if (!(gaudi->hw_cap_initialized & HW_CAP_MMU))
		return 0;

	mutex_lock(&ctx->mmu_lock);

	for (off = 0 ; off < size ; off += PAGE_SIZE_4KB) {
		rc = hl_mmu_map(ctx, va + off, pa + off, PAGE_SIZE_4KB,
				(off + PAGE_SIZE_4KB) >= size);
		if (rc) {
			dev_err(hdev->dev,
				"Map failed for va 0x%llx to pa 0x%llx\n",
				va + off, pa + off);
			goto unmap;
		}
	}

	hdev->asic_funcs->mmu_invalidate_cache(hdev, false, 0);

	mutex_unlock(&ctx->mmu_lock);

	return 0;

unmap:
	for (; off >= 0 ; off -= PAGE_SIZE_4KB)
		if (hl_mmu_unmap(ctx, va + off, PAGE_SIZE_4KB,
					(off - (s32) PAGE_SIZE_4KB) < 0))
			dev_warn_ratelimited(hdev->dev,
					"failed to unmap va 0x%llx\n",
					va + off);

	hdev->asic_funcs->mmu_invalidate_cache(hdev, true, 0);

	mutex_unlock(&ctx->mmu_lock);

	return rc;
}

static void unmap_nic_mem(struct hl_device *hdev, u64 va, u32 size)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct hl_ctx *ctx = hdev->kernel_ctx;
	s64 off;

	if (!(gaudi->hw_cap_initialized & HW_CAP_MMU))
		return;

	mutex_lock(&ctx->mmu_lock);

	for (off = 0 ; off < size ; off += PAGE_SIZE_4KB)
		if (hl_mmu_unmap(ctx, va + off, PAGE_SIZE_4KB,
				       (off + PAGE_SIZE_4KB) >= size))
			dev_warn_ratelimited(hdev->dev,
					"Failed to unmap va 0x%llx\n",
					va + off);

	hdev->asic_funcs->mmu_invalidate_cache(hdev, true, 0);

	mutex_unlock(&ctx->mmu_lock);
}

static int map_cq_mem(struct gaudi_nic_device *gaudi_nic)
{
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;
	struct hl_device *hdev = gaudi_nic->hdev;

	if (!(gaudi->hw_cap_initialized & HW_CAP_MMU)) {
		gaudi_nic->cq_mem_device_va = gaudi_nic->cq_mem_dma;
		return 0;
	}

	gaudi_nic->cq_mem_device_va = CQ_VIRTUAL_ADDRESS +
				gaudi_nic->port * gaudi_nic->cq_mem_size;

	return map_nic_mem(hdev, gaudi_nic->cq_mem_device_va,
				gaudi_nic->cq_mem_dma, gaudi_nic->cq_mem_size);
}

static void unmap_cq_mem(struct gaudi_nic_device *gaudi_nic)
{
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;
	struct hl_device *hdev = gaudi_nic->hdev;

	if (!(gaudi->hw_cap_initialized & HW_CAP_MMU))
		return;

	unmap_nic_mem(hdev, gaudi_nic->cq_mem_device_va,
			gaudi_nic->cq_mem_size);
}

static void mac_channels_init(struct gaudi_nic_device *gaudi_nic)
{
	struct gaudi_nic_macro *nic_macro = gaudi_nic->nic_macro;
	u32 port = gaudi_nic->port;

	if (gaudi_nic->auto_neg_enable) {
		if (gaudi_nic->speed == SPEED_100000) {
			if (nic_macro->num_of_lanes == NIC_LANES_4) {
				gaudi_nic->power_up_mask = 0x1;
				gaudi_nic->fw_tuning_mask = 0xF;
			} else {
				gaudi_nic->power_up_mask =
							(port & 1) ? 0xC : 0x3;
				gaudi_nic->fw_tuning_mask =
							(port & 1) ? 0xC : 0x3;
				gaudi_nic->auto_neg_mask =
							(port & 1) ? 0x4 : 0x1;
			}
		} else {
			gaudi_nic->fw_tuning_mask = gaudi_nic->power_up_mask =
				(port & 1) ? 0xC : 0x3;
		}
	} else {
		if (nic_macro->num_of_lanes == NIC_LANES_2)
			gaudi_nic->power_up_mask = (port & 1) ? 0xC : 0x3;
		else
			/*
			 * in the special mode of 100000Mb/s with 4 lanes, only
			 * the even port should be up and should configure all
			 * the lanes
			 */
			gaudi_nic->power_up_mask = 0xF;

		gaudi_nic->fw_tuning_mask = gaudi_nic->power_up_mask;
	}
}

static int port_open(struct gaudi_nic_device *gaudi_nic)
{
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;
	u32 port = gaudi_nic->port, pcs_fifo_size;
	struct hl_device *hdev = gaudi_nic->hdev;
	char cq_wq_name[15] = {0};
	int rc, rx_irq = 0;

	if (gaudi_nic->port_open)
		return 0;

	/*
	 * Temporary WA until DevOps starts to use nic_mac_loopback properly by
	 * writing a bitmask rather than a boolean (SW-15223).
	 * When they implement that, the following code should be used:
	 * !!(gaudi->nic_mac_loopback_mask & BIT(port))
	 */
	gaudi_nic->mac_loopback = !!gaudi->nic_mac_loopback;

	gaudi_nic->auto_neg_enable = !!(hdev->nic_auto_neg_mask & BIT(port));
	mac_channels_init(gaudi_nic);

	pcs_fifo_size = gaudi->nic_pcs_fail_threshold * sizeof(ktime_t);
	if (!is_power_of_2(pcs_fifo_size)) {
		dev_err(hdev->dev,
			"PCS fifo size must be a power of 2, port: %d\n", port);
		return -EFAULT;
	}

	rc = kfifo_alloc(&gaudi_nic->pcs_fail_fifo, pcs_fifo_size, GFP_KERNEL);
	if (rc) {
		dev_err(hdev->dev, "PCS fifo alloc failed, port: %d\n", port);
		return rc;
	}

	/*
	 * Workaround for H3 #HW-2061 bug.
	 * MMU bypass cannot be set to the NIC CQ. But since it uses ASID 0, we
	 * solve it by mapping the CQ buffer.
	 */
	rc = map_cq_mem(gaudi_nic);
	if (rc) {
		dev_err(hdev->dev, "Failed to map NIC CQ buffer, port: %d\n",
			port);
		goto pcs_fifo_free;
	}

	memset(gaudi_nic->rx_mem_cpu, 0, gaudi_nic->rx_mem_size);
	memset(gaudi_nic->cq_mem_cpu, 0, gaudi_nic->cq_mem_size);

	snprintf(cq_wq_name, sizeof(cq_wq_name) - 1, "nic%d-cq",
			gaudi_nic->port);

	/*
	 * Use only one thread because cq_irq_work() should not be executed
	 * concurrently for the same port.
	 */
	gaudi_nic->cq_wq = create_singlethread_workqueue(cq_wq_name);
	if (!gaudi_nic->cq_wq) {
		dev_err(hdev->dev, "Failed to create CQ WQ, port: %d, %d\n",
			port, rc);
		goto cq_unmap;
	}

	INIT_DELAYED_WORK(&gaudi_nic->cq_work, cq_work);

	if ((hdev->pdev) && (gaudi->multi_msi_mode)) {
		rx_irq = pci_irq_vector(hdev->pdev, RX_MSI_IDX + port);

		rc = request_irq(rx_irq, gaudi_nic_rx_irq_handler, 0,
					gaudi_nic->ndev->name,
					gaudi_nic);
		if (rc) {
			dev_err(hdev->dev,
				"Failed to request Rx IRQ %d, port: %d, %d\n",
				rx_irq, port, rc);
			goto cq_wq_free;
		}
	}

	gaudi_nic->rx_ci = gaudi_nic->tx_pi = gaudi_nic->tx_ci =
		gaudi_nic->cq_ci = gaudi_nic->last_cqe_cnt = 0;

	gaudi_nic->cq_delay = usecs_to_jiffies(1);
	gaudi_nic->cq_delay_idle = msecs_to_jiffies(1);

	/* after hw_config(), interrupts may arrive */
	rc = hw_config(gaudi_nic);
	if (rc) {
		dev_err(hdev->dev, "Failed to configure NIC H/W, port: %d, %d",
					port, rc);
		goto rx_irq_free;
	}

	eth_start_stop(gaudi_nic, true);

	if (hdev->nic_rx_poll) {
		/*
		 * init the delayed work here to support on the fly switch
		 * between NAPI and polling mode.
		 */
		INIT_DELAYED_WORK(&gaudi_nic->rx_poll_work, rx_pkt_poll);
		schedule_delayed_work(&gaudi_nic->rx_poll_work,
					msecs_to_jiffies(1));
	} else {
		napi_enable(&gaudi_nic->napi);
	}

	queue_delayed_work(gaudi_nic->cq_wq, &gaudi_nic->cq_work,
				gaudi_nic->cq_delay_idle);

	if (gaudi->nic_phy_config_fw && !gaudi_nic->mac_loopback) {
		INIT_DELAYED_WORK(&gaudi_nic->link_status_work,
					check_link_status);
		schedule_delayed_work(&gaudi_nic->link_status_work, 0);
	} else {
		set_port_status(gaudi_nic, true);
	}

	gaudi_nic->port_open = true;

	return 0;

rx_irq_free:
	if ((hdev->pdev) && (gaudi->multi_msi_mode)) {
		synchronize_irq(rx_irq);
		free_irq(rx_irq, gaudi_nic);
	}
cq_wq_free:
	destroy_workqueue(gaudi_nic->cq_wq);
cq_unmap:
	unmap_cq_mem(gaudi_nic);
pcs_fifo_free:
	kfifo_free(&gaudi_nic->pcs_fail_fifo);

	return rc;
}

static void port_open_work(struct work_struct *work)
{
	struct gaudi_nic_device *gaudi_nic = container_of(work,
							struct gaudi_nic_device,
							port_open_work.work);
	struct hl_device *hdev = gaudi_nic->hdev;
	int rc;

	rc = port_open(gaudi_nic);
	if (rc)
		dev_err(hdev->dev, "Failed to init NIC H/W, port: %d\n",
			gaudi_nic->port);

	atomic_set(&gaudi_nic->in_reset, 0);
}

static void port_close(struct gaudi_nic_device *gaudi_nic)
{
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 port = gaudi_nic->port;
	int irq;

	cancel_delayed_work_sync(&gaudi_nic->port_open_work);

	if (!gaudi_nic->port_open)
		return;

	gaudi_nic->port_open = false;
	gaudi_nic->active = false;

	if (gaudi->nic_phy_config_fw && !gaudi_nic->mac_loopback)
		cancel_delayed_work_sync(&gaudi_nic->link_status_work);

	/* Print if not in hard reset flow e.g. from ifconfig */
	if (gaudi_nic->pcs_link && !hdev->hard_reset_pending)
		dev_info(hdev->dev, "port %d was closed\n", port);

	/* stop F/W so the peer port will also lose link */
	if (gaudi->nic_phy_config_fw && !gaudi_nic->mac_loopback)
		phy_start_stop(gaudi_nic, false);

	port_reset_state(gaudi_nic);

	kfifo_free(&gaudi_nic->pcs_fail_fifo);

	/* disable Tx in S/W */
	netif_stop_queue(gaudi_nic->ndev);

	/* disable Rx/Tx in H/W */
	eth_start_stop(gaudi_nic, false);

	if (hdev->nic_rx_poll) {
		cancel_delayed_work_sync(&gaudi_nic->rx_poll_work);
	} else {
		napi_synchronize(&gaudi_nic->napi);
		napi_disable(&gaudi_nic->napi);
	}

	/* disable Rx in S/W */
	if (hdev->pdev) {
		if (gaudi->multi_msi_mode) {
			irq = pci_irq_vector(hdev->pdev, RX_MSI_IDX + port);
			synchronize_irq(irq);
			free_irq(irq, gaudi_nic);
		} else {
			irq = pci_irq_vector(hdev->pdev, 0);
			synchronize_irq(irq);
		}
	}

	netif_carrier_off(gaudi_nic->ndev);

	cancel_delayed_work_sync(&gaudi_nic->cq_work);

	flush_workqueue(gaudi_nic->cq_wq);
	destroy_workqueue(gaudi_nic->cq_wq);

	unmap_cq_mem(gaudi_nic);
}

int gaudi_nic_port_reset(struct gaudi_nic_device *gaudi_nic)
{
	port_close(gaudi_nic);
	return port_open(gaudi_nic);
}

static int gaudi_nic_open(struct net_device *netdev)
{
	struct gaudi_nic_device **ptr = netdev_priv(netdev);
	struct gaudi_nic_device *gaudi_nic = *ptr;
	struct hl_device *hdev = gaudi_nic->hdev;

	if (gaudi_nic->enabled)
		return 0;

	if (atomic_cmpxchg(&gaudi_nic->in_reset, 0, 1)) {
		dev_err(hdev->dev, "port %d is in reset, can't open it\n",
			gaudi_nic->port);
		return -EBUSY;
	}

	netif_carrier_off(netdev);

	/* in_reset will be set to 0 in port_open_work() */
	INIT_DELAYED_WORK(&gaudi_nic->port_open_work, port_open_work);
	schedule_delayed_work(&gaudi_nic->port_open_work, msecs_to_jiffies(1));

	gaudi_nic->enabled = true;

	return 0;
}

static int gaudi_nic_close(struct net_device *netdev)
{
	struct gaudi_nic_device **ptr = netdev_priv(netdev);
	struct gaudi_nic_device *gaudi_nic = *ptr;
	struct hl_device *hdev = gaudi_nic->hdev;
	struct gaudi_device *gaudi;

	gaudi = hdev->asic_specific;

	if (!gaudi_nic->enabled)
		return 0;

	if (atomic_cmpxchg(&gaudi_nic->in_reset, 0, 1)) {
		if (!gaudi->nic_in_teardown)
			dev_err(hdev->dev,
				"port %d is in reset, can't close it\n",
				gaudi_nic->port);
		return -EBUSY;
	}

	/*
	 * this function may be called from 'ifconfig <nic_name> down', hence
	 * the cleanup
	 */
	port_close(gaudi_nic);

	gaudi_nic->enabled = false;

	atomic_set(&gaudi_nic->in_reset, 0);

	return 0;
}

netdev_tx_t gaudi_nic_handle_tx_pkt(struct gaudi_nic_device *gaudi_nic,
					struct sk_buff *skb)
{
	struct net_device_stats *stats = &gaudi_nic->ndev->stats;
	bool pkt_sent;

	if (!gaudi_nic->active || gaudi_nic->mac_loopback)
		return NETDEV_TX_OK;

	if (disabled_or_in_reset(gaudi_nic))
		return NETDEV_TX_BUSY;

	if (skb->len <= 0) {
		dev_kfree_skb_any(skb);
		return NETDEV_TX_OK;
	}

#if HL_NIC_DEBUG
	{
		struct hl_device *hdev = gaudi_nic->hdev;

		dev_dbg_ratelimited(hdev->dev,
			"port: %d, addr: 0x%p, size: %d, tx_pi: %d, tx_ci: %d\n",
			gaudi_nic->port, skb->data, skb->len,
			gaudi_nic->tx_pi, gaudi_nic->tx_ci);
	}
#endif

	pkt_sent = write_pkt_to_hw(gaudi_nic, (u64 *) skb->data, skb->len);
	if (pkt_sent) {
		stats->tx_packets++;
		stats->tx_bytes += skb->len;
	}

	dev_kfree_skb_any(skb);

	return NETDEV_TX_OK;
}

static netdev_tx_t gaudi_nic_xmit_frame(struct sk_buff *skb,
					struct net_device *netdev)
{
	struct gaudi_nic_device **ptr = netdev_priv(netdev);
	struct gaudi_nic_device *gaudi_nic = *ptr;
	struct gaudi_device *gaudi;

	gaudi = gaudi_nic->hdev->asic_specific;

	return (netdev_tx_t) gaudi->nic_handle_tx(gaudi_nic, skb);
}

static int gaudi_nic_change_mtu(struct net_device *netdev, int new_mtu)
{
	struct gaudi_nic_device **ptr = netdev_priv(netdev);
	struct gaudi_nic_device *gaudi_nic = *ptr;
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 port = gaudi_nic->port;
	int rc;

#ifndef _HAS_MIN_MAX_MTU
	if (new_mtu < (ETH_ZLEN + ETH_FCS_LEN + VLAN_HLEN) ||
			new_mtu > NIC_MAX_MTU)
		return -EOPNOTSUPP;
#endif

	if (atomic_cmpxchg(&gaudi_nic->in_reset, 0, 1)) {
		dev_err(hdev->dev, "port %d is in reset, can't change MTU",
			port);
		return -EBUSY;
	}

	if (gaudi_nic->enabled) {
		port_close(gaudi_nic);
		netdev->mtu = new_mtu;
		rc = port_open(gaudi_nic);
		if (rc)
			dev_err(hdev->dev,
				"Failed to reinit port %d for MTU change, rc %d",
				port, rc);
	}

	atomic_set(&gaudi_nic->in_reset, 0);

	return 0;
}

static const struct net_device_ops gaudi_nic_netdev_ops = {
	.ndo_open		= gaudi_nic_open,
	.ndo_stop		= gaudi_nic_close,
	.ndo_start_xmit		= gaudi_nic_xmit_frame,
	.ndo_validate_addr	= eth_validate_addr,
	.ndo_change_mtu		= gaudi_nic_change_mtu,
};

static int port_register(struct hl_device *hdev, int port)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct gaudi_nic_device *gaudi_nic;
	struct gaudi_nic_device **ptr;
	struct net_device *ndev;
	int rc;

	gaudi_nic = &gaudi->nic_devices[port];

	ndev = alloc_etherdev(sizeof(struct gaudi_nic_device *));
	if (!ndev) {
		dev_err(hdev->dev, "netdevice %d alloc failed\n", port);
		return -ENOMEM;
	}

	gaudi_nic->ndev = ndev;
	gaudi_nic->speed = hdev->pldm ? SPEED_50000 : SPEED_100000;
	gaudi_nic->nic_macro = &gaudi->nic_macros[port >> 1];

	if (gaudi_nic->speed != SPEED_100000 &&
		gaudi_nic->nic_macro->num_of_lanes == NIC_LANES_4) {
		dev_err(hdev->dev,
			"NIC %d with 4 lanes should be used only with speed of 100000Mb/s\n",
			port);
		rc = -EFAULT;
		goto netdev_free;
	}

	if (gaudi_nic->speed == SPEED_100000 &&
			gaudi_nic->nic_macro->num_of_lanes == NIC_LANES_4 &&
			(port & 1)) {
		dev_err(hdev->dev,
			"only even NIC ports should be up for speed of 100000Mb/s with 4 lanes\n");
		rc = -EFAULT;
		goto netdev_free;
	}

	gaudi_nic->pfc_enable = true;

	SET_NETDEV_DEV(ndev, hdev->pdev ? &hdev->pdev->dev : NULL);
	ptr = netdev_priv(ndev);
	*ptr = gaudi_nic;

	/* this is necessary for creating multiple NICs by the same driver */
	ndev->dev_port = port;

	ndev->netdev_ops = &gaudi_nic_netdev_ops;
	ndev->watchdog_timeo = NIC_TX_TIMEOUT;
	ndev->min_mtu = ETH_MIN_MTU;
	ndev->max_mtu = NIC_MAX_MTU;

	netif_napi_add(ndev, &gaudi_nic->napi, napi_clean,
			NIC_NAPI_MAX_RX_BUDGET);

	ether_addr_copy(ndev->dev_addr,
		hdev->asic_prop.cpucp_nic_info.mac_addrs[port].mac_addr);

	/*
	 * Reset the NIC macro PHY before the PHY configuration by each port.
	 * This function resets all the 4 lanes in the PHY macro, therefore only
	 * one of the two ports should call it.
	 */
	if (gaudi->nic_phy_config_fw && gaudi_nic->do_macro_cfg) {
		rc = gaudi_nic_phy_reset_macro(gaudi_nic);
		if (rc)
			dev_err(hdev->dev,
				"PHY power up 1 failed for port %d\n",
				port);
	}

	if (register_netdev(ndev)) {
		dev_err(hdev->dev,
			"Could not register netdevice, port: %d\n", port);
		rc = -EFAULT;
		goto netdev_free;
	}

	netif_carrier_off(ndev);

	return 0;

netdev_free:
	free_netdev(ndev);
	gaudi_nic->ndev = NULL;

	return rc;
}

static void port_unregister(struct gaudi_nic_device *gaudi_nic)
{
	unregister_netdev(gaudi_nic->ndev);

	free_netdev(gaudi_nic->ndev);
	gaudi_nic->ndev = NULL;
}

irqreturn_t gaudi_nic_cq_irq_handler(int irq, void *arg)
{
	struct gaudi_nic_device *gaudi_nic;
	struct hl_device *hdev = arg;
	struct gaudi_device *gaudi;
	int i;

	gaudi = hdev->asic_specific;

	/* one IRQ for all ports, need to iterate and read the cause */
	for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++) {
		if (!(hdev->nic_ports_mask & BIT(i)))
			continue;

		gaudi_nic = &gaudi->nic_devices[i];

		if (disabled_or_in_reset(gaudi_nic))
			continue;

		if (NIC_RREG32(mmNIC0_RXE0_MSI_CAUSE) & 2) {
			dev_crit(hdev->dev, "NIC CQ overrun, port %d\n",
					gaudi_nic->port);
			NIC_WREG32(mmNIC0_RXE0_MSI_CAUSE, 0);
			NIC_WREG32(mmNIC0_RXE0_CQ_MSI_CAUSE_CLR, 0xFFFF);
			/* flush the cause clear */
			NIC_RREG32(mmNIC0_RXE0_CQ_MSI_CAUSE_CLR);
		}
	}

	return IRQ_HANDLED;
}

/**
 * gaudi_nic_ports_init() - initialize NIC ports.
 * @hdev: habanalabs device structure.
 *
 * Allocate and initialize the NIC ports.
 *
 * Return: 0 for success, non-zero for failure.
 */
int gaudi_nic_ports_init(struct hl_device *hdev)
{
	struct cpucp_nic_info *nic_info = &hdev->asic_prop.cpucp_nic_info;
	struct cpucp_info *cpucp_info = &hdev->asic_prop.cpucp_info;
	struct cpucp_mac_addr *mac_arr = nic_info->mac_addrs;
	struct gaudi_device *gaudi = hdev->asic_specific;
	int rc, i, nics_init = 0, cq_irq = 0;
	bool read_card_location = false;
	u8 mac[ETH_ALEN];
	s32 *taps;

	if (!hdev->nic_ports_mask)
		return 0;

	if (NIC_DRV_END_ADDR - NIC_DRV_BASE_ADDR > NIC_DRV_SIZE) {
		dev_err(hdev->dev,
			"DRAM allocation for NIC shouldn't exceed %dMB\n",
			NIC_DRV_SIZE / 1024 / 1024);
		return -ENOMEM;
	}

	if (TMR_FSM_SIZE + TMR_FREE_SIZE + TMR_FIFO_SIZE +
			TMR_FIFO_STATIC_SIZE >
		TMR_FSM_ENGINE_OFFS) {
		dev_err(hdev->dev,
			"NIC TMR data shouldn't be bigger than %dMB\n",
			TMR_FSM_ENGINE_OFFS / 1024 / 1024);
		return -ENOMEM;
	}

	/* set the default PAM4 Tx taps */
	for (i = 0 ; i < NIC_MAX_NUM_OF_LANES ; i++) {
		taps = gaudi->nic_pam4_tx_taps[i].taps;
		taps[0] = 0;
		taps[1] = -6;
		taps[2] = 25;
		taps[3] = 0;
		taps[4] = 0;
	}

	/* copy the MAC OUI in reverse */
	for (i = 0 ; i < 3 ; i++)
		mac[i] = HABANALABS_MAC_OUI_1 >> (8 * (2 - i));

	if (gaudi->hw_cap_initialized & HW_CAP_CPU_Q) {
		char buf[VERSION_MAX_LEN] = {0}, *str;
		u8 *mac_addr;

		rc = hl_fw_cpucp_nic_info_get(hdev);
		if (rc)
			return rc;

		for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++) {
			if (!(hdev->nic_ports_mask & BIT(i)))
				continue;

			mac_addr = mac_arr[i].mac_addr;
			if (strncmp(mac, mac_addr, 3)) {
				dev_err(hdev->dev,
					"bad MAC OUI %02x:%02x:%02x:%02x:%02x:%02x, port %d\n",
					mac_addr[0], mac_addr[1], mac_addr[2],
					mac_addr[3], mac_addr[4], mac_addr[5],
					i);
				return -EFAULT;
			}
		}

		hdev->nic_ports_mask &= le64_to_cpu(nic_info->link_mask[0]);
		hdev->nic_ports_ext_mask &=
					le64_to_cpu(nic_info->link_ext_mask[0]);
		hdev->nic_auto_neg_mask &=
					le64_to_cpu(nic_info->auto_neg_mask[0]);
		gaudi->nic_use_fw_polarity = true;

		for (i = 1 ; i < 11 ; i++) {
			sprintf(buf, "hl-gaudi-0.%d.", i);
			str = strstr(cpucp_info->kernel_version, buf);
			if (!str)
				continue;

			/*
			 * No PMC polarity and external ports mask prior to F/W
			 * version 0.9.0.
			 */
			if (i < 9) {
				hdev->nic_ports_ext_mask = HLS1_EXT_PORTS_MASK;
				gaudi->nic_use_fw_polarity = false;
			}

			/* No Autoneg mask prior to F/W version 0.11.0, hence:
			 * - No Autoneg on external ports on PMC card prior to
			 *   that version.
			 * - No Autoneg at all on PCI card prior to that
			 *   version.
			 */
			if (hdev->card_type == cpucp_card_type_pmc)
				hdev->nic_auto_neg_mask = hdev->nic_ports_mask &
						~hdev->nic_ports_ext_mask;
			else
				hdev->nic_auto_neg_mask = 0;

			/*
			 * No privileged protection prior to F/W version 0.11.0
			 * so we can read the card location from a register.
			 */
			read_card_location = true;
			break;
		}
	} else {
		/*
		 * No CPU, hence set the MAC addresses manually.
		 * Each device will have its own unique MAC random.
		 */
		get_random_bytes(&mac[3], 2);

		for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++) {
			mac[ETH_ALEN - 1] = i;
			memcpy(mac_arr[i].mac_addr, mac, ETH_ALEN);
		}

		read_card_location = true;
	}

	if (read_card_location) {
		u32 card_location = RREG32(mmPSOC_GLOBAL_CONF_BOOT_STRAP_PINS);

		cpucp_info->card_location =
				cpu_to_le32((card_location >> 22) & 0x7);
	}

	if (gaudi->nic_phy_load_fw) {
		rc = gaudi_nic_phy_has_fw(hdev);
		if (rc) {
			dev_err(hdev->dev, "NIC F/W file was not found\n");
			return rc;
		}

		rc = gaudi_nic_phy_fw_load_all(hdev);
		if (rc) {
			dev_err(hdev->dev, "NIC F/W load for all failed\n");
			return rc;
		}
	}

	if (gaudi->nic_phy_config_fw)
		dev_dbg(hdev->dev, "NIC F/W CRC: 0x%x\n",
				gaudi_nic_phy_get_crc(hdev));

	for (i = 0 ; i < NIC_NUMBER_OF_MACROS ; i++) {
		gaudi->nic_macros[i].idx = i;
		gaudi->nic_macros[i].num_of_lanes = NIC_LANES_2;
	}

	/*
	 * for each NIC macro, set the even port to handle the macro
	 * configuration, unless the even port is disabled and in this case the
	 * odd port will handle the configuration.
	 */
	for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++)
		if ((hdev->nic_ports_mask & BIT(i)) &&
			(!(i & 1) || !(hdev->nic_ports_mask & BIT(i - 1))))
			gaudi->nic_devices[i].do_macro_cfg = true;

	gaudi->nic_pcs_fail_time_frame = PCS_FAIL_TIME_FRAME_SEC;
	gaudi->nic_pcs_fail_threshold = PCS_FAIL_THRESHOLD;
	gaudi->nic_check_link = true;

	if ((hdev->pdev) && (gaudi->multi_msi_mode)) {
		/* One IRQ for all ports to indicate a CQ overrun */
		cq_irq = pci_irq_vector(hdev->pdev, CQ_MSI_IDX);
		rc = request_irq(cq_irq, gaudi_nic_cq_irq_handler, 0,
					"gaudi nic cq", hdev);
		if (rc) {
			dev_err(hdev->dev, "Failed to request CQ IRQ %d, %d\n",
				cq_irq, rc);
			return rc;
		}

		gaudi->nic_cq_irq_enable = true;
	}

	/* Must be called here as it depends on the earlier initializations */
	for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++, nics_init++)
		if (hdev->nic_ports_mask & BIT(i)) {
			rc = port_register(hdev, i);
			if (rc) {
				dev_err(hdev->dev, "NIC port %d init failed\n",
							i);
				goto unregister_ports;
			}
		}

	gaudi->hw_cap_initialized |= HW_CAP_NIC_DRV;

	return 0;

unregister_ports:
	for (i = 0 ; i < nics_init ; i++)
		if (hdev->nic_ports_mask & BIT(i))
			port_unregister(&gaudi->nic_devices[i]);

	if (gaudi->nic_cq_irq_enable) {
		synchronize_irq(cq_irq);
		free_irq(cq_irq, hdev);
	}

	return rc;
}

/**
 * gaudi_nic_ports_fini() - cleanup NIC ports.
 * @hdev: habanalabs device structure.
 *
 * Perform cleanup and freeing of the NIC ports.
 */
void gaudi_nic_ports_fini(struct hl_device *hdev)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	int i, cq_irq;

	gaudi->nic_in_teardown = true;

	/* The HW_CAP_NIC_DRV bit of gaudi->hw_cap_initialized cannot be used as
	 * a prerequisite for this function, as we may arrive here after a
	 * failing hard reset w/o calling to gaudi_nic_ports_reopen().
	 */

	for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++) {
		if (!(hdev->nic_ports_mask & BIT(i)) ||
				!gaudi->nic_devices[i].ndev)
			continue;

		port_unregister(&gaudi->nic_devices[i]);
	}

	if (gaudi->nic_cq_irq_enable) {
		cq_irq = pci_irq_vector(hdev->pdev, CQ_MSI_IDX);
		synchronize_irq(cq_irq);
		free_irq(cq_irq, hdev);
		gaudi->nic_cq_irq_enable = false;
	}
}

/**
 * gaudi_nic_hard_reset_prepare() - stop the NIC Rx, Tx, CQ and synchronize
 *                                  with other NIC reset flows.
 * @hdev: habanalabs device structure.
 *
 * This function makes sure that during the reset no packets will be processed
 * and that ndo_open/ndo_close do not open/close the NIC.
 * A hard reset might occur right after the driver was loaded, which means
 * before the NICs initialization was finished. Therefore, even if the NIC is
 * not yet enabled, we mark it as in reset to avoid races. We clear the in reset
 * flag later on when reopening the NICs.
 *
 * Return: 0 for success, non-zero for failure.
 */
int gaudi_nic_hard_reset_prepare(struct hl_device *hdev)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct gaudi_nic_device *gaudi_nic;
	ktime_t timeout;
	int i;

	if (!(gaudi->hw_cap_initialized & HW_CAP_NIC_DRV) ||
			(gaudi->nic_in_reset))
		return 0;

	cq_stop(hdev);

	for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++) {
		if (!(hdev->nic_ports_mask & BIT(i)))
			continue;

		gaudi_nic = &gaudi->nic_devices[i];

		/*
		 * This function is competing with the NIC reset from ethtool,
		 * so try to take the in_reset atomic and if we are already in a
		 * middle of reset, wait until reset function is finished.
		 * Reset function is designed to always finish (could take up to
		 * a few seconds in worst case).
		 */

		timeout = ktime_add_ms(ktime_get(),
					HL_PENDING_RESET_PER_SEC * 1000 * 4);
		while (atomic_cmpxchg(&gaudi_nic->in_reset, 0, 1)) {
			usleep_range(50, 200);
			if (ktime_compare(ktime_get(), timeout) > 0) {
				WARN(1,
					"Timeout while waiting for port %d to finish reset\n",
					gaudi_nic->port);
				return -EBUSY;
			}
		}
	}

	gaudi->nic_in_reset = true;

	return 0;
}

/**
 * gaudi_nic_stop() - stop the NIC S/W and H/W.
 * @hdev: habanalabs device structure.
 *
 * This function stops the operation of the NIC S/W and H/W, no packets are
 * processed after this call.
 */
void gaudi_nic_stop(struct hl_device *hdev)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct gaudi_nic_device *gaudi_nic;
	int i, cq_irq;

	if (!(gaudi->hw_cap_initialized & HW_CAP_NIC_DRV))
		return;

	for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++) {
		gaudi_nic = &gaudi->nic_devices[i];

		if ((hdev->nic_ports_mask & BIT(i)) && gaudi_nic->enabled)
			port_close(gaudi_nic);
	}

	if (gaudi->nic_cq_irq_enable) {
		cq_irq = pci_irq_vector(hdev->pdev, CQ_MSI_IDX);
		synchronize_irq(cq_irq);
		free_irq(cq_irq, hdev);
		gaudi->nic_cq_irq_enable = false;
	}
}

/**
 * gaudi_nic_ports_reopen() - reopen the NIC ports.
 * @hdev: habanalabs device structure.
 *
 * This function start the operation of the NIC ports, packets will be processed
 * after this call.
 * Called after hard reset to reopen the NIC ports that were closed during the
 * reset.
 */
void gaudi_nic_ports_reopen(struct hl_device *hdev)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct gaudi_nic_device *gaudi_nic;
	int rc, i, nics_init = 0, cq_irq;
	u32 port;

	if (gaudi->hw_cap_initialized & HW_CAP_NIC_DRV)
		return;

	if ((hdev->pdev) && (gaudi->multi_msi_mode)) {
		/* One IRQ for all ports to indicate a CQ overrun */
		cq_irq = pci_irq_vector(hdev->pdev, CQ_MSI_IDX);
		rc = request_irq(cq_irq, gaudi_nic_cq_irq_handler, 0,
					"gaudi nic cq", hdev);
		if (rc)
			dev_err(hdev->dev, "Failed to request CQ IRQ %d, %d\n",
				cq_irq, rc);
		else
			gaudi->nic_cq_irq_enable = true;
	}

	for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++, nics_init++) {
		if (!(hdev->nic_ports_mask & BIT(i)))
			continue;

		gaudi_nic = &gaudi->nic_devices[i];
		port = gaudi_nic->port;

		/*
		 * Reset the NIC macro PHY before the PHY configuration by each
		 * port. This function resets all the 4 lanes in the PHY macro,
		 * therefore only one of the two ports should call it.
		 * This must be called before we check if the port is enabled,
		 * as the PHY reset should be called anyway.
		 */
		if (gaudi->nic_phy_config_fw && gaudi_nic->do_macro_cfg) {
			rc = gaudi_nic_phy_reset_macro(gaudi_nic);
			if (rc)
				dev_err(hdev->dev,
					"PHY power up 1 failed for port %d\n",
					port);
		}

		/*
		 * It could be that the port was shutdown by 'ifconfig down',
		 * and there is no need in reopening it.
		 * Since we mark the ports as in reset even if they are
		 * disabled, we clear the flag here anyway.
		 * See gaudi_nic_hard_reset_prepare() for more info.
		 */
		if (!gaudi_nic->enabled) {
			atomic_set(&gaudi_nic->in_reset, 0);
			continue;
		}

		schedule_delayed_work(&gaudi_nic->port_open_work,
					msecs_to_jiffies(1));
	}

	gaudi->nic_in_reset = false;

	gaudi->hw_cap_initialized |= HW_CAP_NIC_DRV;
}

int gaudi_nic_get_mac_addr(struct hl_device *hdev,
				struct hl_info_mac_addr *mac_addr)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct net_device *ndev;
	int i, number_of_ports;

	if (!(gaudi->hw_cap_initialized & HW_CAP_NIC_DRV))
		goto out;

	number_of_ports = min_t(int, NIC_NUMBER_OF_PORTS,
				HL_INFO_MAC_ADDR_MAX_NUM);

	for (i = 0 ; i < number_of_ports ; i++) {
		if (!(hdev->nic_ports_mask & BIT(i)))
			continue;

		ndev = gaudi->nic_devices[i].ndev;
		if (!ndev)
			continue;

		ether_addr_copy(mac_addr->array[i].addr, ndev->dev_addr);
		mac_addr->mask[i / 64] |= BIT_ULL(i % 64);
	}
out:
	return 0;
}

static int wq_port_check(struct hl_device *hdev, u32 port)
{
	if (port >= NIC_NUMBER_OF_ENGINES) {
		dev_err(hdev->dev, "Invalid port %d\n", port);
		return -EINVAL;
	}

	if (!(hdev->nic_ports_mask & BIT(port))) {
		dev_err(hdev->dev, "Port %d is disabled\n", port);
		return -ENODEV;
	}

	return 0;
}

static int user_wq_arr_set(struct hl_device *hdev,
				struct hl_nic_user_wq_arr_set_in *in)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	u64 wq_base_addr, num_of_wq_entries_log;
	struct gaudi_nic_device *gaudi_nic;
	u32 port, type;
	int rc;

	if (!in) {
		dev_err(hdev->dev, "missing parameters, can't set user WQ\n");
		return -EINVAL;
	}

	type = in->type;
	if (type != HL_NIC_USER_WQ_SEND && type != HL_NIC_USER_WQ_RECV) {
		dev_err(hdev->dev, "invalid type %d, can't set user WQ\n",
			type);
		return -EINVAL;
	}

	port = in->port;

	rc = wq_port_check(hdev, port);
	if (rc)
		return rc;

	gaudi_nic = &gaudi->nic_devices[port];

	if (in->num_of_wqs == 0) {
		dev_err(hdev->dev,
			"number of WQs must be bigger than zero, port: %d\n",
			port);
		return -EINVAL;
	}

	/* H/W limitation */
	if (in->num_of_wqs > NIC_HW_MAX_QP_NUM) {
		dev_err(hdev->dev,
			"number of WQs (0x%x) can't be bigger than 0x%x, port: %d\n",
			in->num_of_wqs, NIC_HW_MAX_QP_NUM, port);
		return -EINVAL;
	}

	if (!is_power_of_2(in->num_of_wq_entries)) {
		dev_err(hdev->dev,
			"number of entries (0x%x) must be a power of 2, port: %d\n",
			in->num_of_wq_entries, port);
		return -EINVAL;
	}

	/* H/W cache line constraint */
	if (in->num_of_wq_entries < 4) {
		dev_err(hdev->dev,
			"number of entries (0x%x) must be at least 4, port: %d\n",
			in->num_of_wq_entries, port);
		return -EINVAL;
	}

	/* H/W limitation */
	if (in->num_of_wq_entries > USER_WQES_MAX_NUM) {
		dev_err(hdev->dev,
			"number of entries (0x%x) can't be bigger than 0x%x, port: %d\n",
			in->num_of_wq_entries, USER_WQES_MAX_NUM, port);
		return -EINVAL;
	}

	if (!IS_ALIGNED(in->addr, DEVICE_CACHE_LINE_SIZE)) {
		dev_err(hdev->dev,
			"WQ VA (0x%llx) must be aligned to cache line size (0x%x), port: %d\n",
			in->addr, DEVICE_CACHE_LINE_SIZE, port);
		return -EINVAL;
	}

	wq_base_addr = in->addr;
	num_of_wq_entries_log = ilog2(in->num_of_wq_entries);

	mutex_lock(&gaudi_nic->user_wq_lock);

	if (type == HL_NIC_USER_WQ_SEND) {
		NIC_WREG32(mmNIC0_TXE0_SQ_BASE_ADDRESS_49_32_0,
				(wq_base_addr >> 32) & 0x3FFFFF);
		NIC_WREG32(mmNIC0_TXE0_SQ_BASE_ADDRESS_31_0_0,
				wq_base_addr & 0xFFFFFFFF);
		NIC_WREG32(mmNIC0_TXE0_LOG_MAX_WQ_SIZE_0,
				num_of_wq_entries_log - 2);
	} else {
		NIC_WREG32(mmNIC0_RXE0_WIN0_WQ_BASE_LO,
				wq_base_addr & 0xFFFFFFFF);
		NIC_WREG32(mmNIC0_RXE0_WIN0_WQ_BASE_HI,
			((wq_base_addr >> 32) & 0xFFFFFFFF) |
			((num_of_wq_entries_log - 4) << 24));
	}

	mutex_unlock(&gaudi_nic->user_wq_lock);

	return 0;
}

static void _user_wq_arr_unset(struct hl_device *hdev, u32 port, u32 type)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct gaudi_nic_device *gaudi_nic;

	gaudi_nic = &gaudi->nic_devices[port];

	mutex_lock(&gaudi_nic->user_wq_lock);

	if (type == HL_NIC_USER_WQ_SEND) {
		NIC_WREG32(mmNIC0_TXE0_SQ_BASE_ADDRESS_49_32_0, 0);
		NIC_WREG32(mmNIC0_TXE0_SQ_BASE_ADDRESS_31_0_0, 0);
		NIC_WREG32(mmNIC0_TXE0_LOG_MAX_WQ_SIZE_0, 0);
	} else {
		NIC_WREG32(mmNIC0_RXE0_WIN0_WQ_BASE_LO, 0);
		NIC_WREG32(mmNIC0_RXE0_WIN0_WQ_BASE_HI, 0);
	}

	mutex_unlock(&gaudi_nic->user_wq_lock);
}

static int user_wq_arr_unset(struct hl_device *hdev,
				struct hl_nic_user_wq_arr_unset_in *in)
{
	u32 port, type;
	int rc;

	if (!in) {
		dev_err(hdev->dev, "missing parameters, can't unset user WQ\n");
		return -EINVAL;
	}

	type = in->type;
	if (type != HL_NIC_USER_WQ_SEND && type != HL_NIC_USER_WQ_RECV) {
		dev_err(hdev->dev, "invalid type %d, can't unset user WQ\n",
			type);
		return -EINVAL;
	}

	port = in->port;

	rc = wq_port_check(hdev, port);
	if (rc)
		return rc;

	_user_wq_arr_unset(hdev, port, type);

	return 0;
}

static struct hl_qp *qp_get(struct hl_device *hdev,
			struct gaudi_nic_device *gaudi_nic, u32 conn_id)
{
	struct hl_qp *qp;

	mutex_lock(&gaudi_nic->idr_lock);
	qp = idr_find(&gaudi_nic->qp_ids, conn_id);
	if (!qp || qp == &dummy_qp) {
		dev_err(hdev->dev,
			"Failed to find matching QP for handle %d in port %d\n",
			conn_id, gaudi_nic->port);
		goto out;
	}

	kref_get(&qp->refcount);
out:
	mutex_unlock(&gaudi_nic->idr_lock);

	return qp;
}

static void qp_do_release(struct hl_qp *qp)
{
	mutex_destroy(&qp->qpc_lock);
	kfree(qp);
}

static void qp_release(struct kref *ref)
{
	struct hl_qp *qp = container_of(ref, struct hl_qp, refcount);
	struct gaudi_nic_device *gaudi_nic = qp->gaudi_nic;
	struct hl_device *hdev = gaudi_nic->hdev;
	struct qpc_requester req_qpc = {};
	struct qpc_responder res_qpc = {};
	u64 req_qpc_addr, res_qpc_addr;
	void __iomem *base_bar_addr;
	struct gaudi_device *gaudi;
	int i;

	gaudi = hdev->asic_specific;
	base_bar_addr = hdev->pcie_bar[HBM_BAR_ID] - gaudi->hbm_bar_cur_addr;

	req_qpc_addr = REQ_QPC_ADDR(qp->port, qp->conn_id);
	res_qpc_addr = RES_QPC_ADDR(qp->port, qp->conn_id);

	REQ_QPC_SET_VALID(req_qpc, 0);
	RES_QPC_SET_VALID(res_qpc, 0);

	mutex_lock(&qp->qpc_lock);

	if (qp->is_req)
		for (i = 0 ; i < (sizeof(req_qpc) / sizeof(u64)) ; i++)
			writeq(req_qpc.data[i], base_bar_addr +
					(req_qpc_addr + i * 8));

	if (qp->is_res)
		for (i = 0 ; i < (sizeof(res_qpc) / sizeof(u64)) ; i++)
			writeq(res_qpc.data[i], base_bar_addr +
					(res_qpc_addr + i * 8));

	/* Perform read to flush the writes of the connection context */
	readq(hdev->pcie_bar[HBM_BAR_ID]);

	if (qp->is_req)
		qpc_cache_inv(gaudi_nic, true);
	if (qp->is_res)
		qpc_cache_inv(gaudi_nic, false);

	mutex_unlock(&qp->qpc_lock);

	/*
	 * No need in removing the QP ID from the IDR. This will be done once
	 * the IDR gets full. We do this lazy cleanup because we don't want to
	 * reuse a QP ID immediately after a QP was destroyed.
	 */
	qp_do_release(qp);
}

static int qp_put(struct hl_qp *qp)
{
	return kref_put(&qp->refcount, qp_release);
}

/* "gaudi_nic->idr_lock" should be taken from the caller function if needed */
static void qps_clean_dummies(struct gaudi_nic_device *gaudi_nic)
{
	struct hl_qp *qp;
	int qp_id;

	idr_for_each_entry(&gaudi_nic->qp_ids, qp, qp_id)
		if (qp == &dummy_qp)
			idr_remove(&gaudi_nic->qp_ids, qp_id);
}

static int conn_ioctl_check(struct hl_device *hdev, u32 port, u32 conn_id)
{
	if (port >= NIC_NUMBER_OF_PORTS) {
		dev_err(hdev->dev, "Invalid port %d\n", port);
		return -EINVAL;
	}

	if (!(hdev->nic_ports_mask & BIT(port))) {
		dev_err(hdev->dev, "Port %d is disabled\n", port);
		return -ENODEV;
	}

	if (conn_id < HL_NIC_MIN_CONN_ID || conn_id > HL_NIC_MAX_CONN_ID) {
		dev_err(hdev->dev, "Invalid connection ID %d for port %d\n",
			conn_id, port);
		return -EINVAL;
	}

	return 0;
}

static int alloc_conn(struct hl_device *hdev, struct hl_nic_alloc_conn_in *in,
			struct hl_nic_alloc_conn_out *out)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct gaudi_nic_device *gaudi_nic;
	struct hl_qp *qp;
	int id, rc;

	if (!in || !out) {
		dev_err(hdev->dev,
			"Missing parameters to allocate a NIC context\n");
		return -EINVAL;
	}

	rc = conn_ioctl_check(hdev, in->port, HL_NIC_MIN_CONN_ID);
	if (rc)
		return rc;

	qp = kzalloc(sizeof(*qp), GFP_KERNEL);
	if (!qp)
		return -ENOMEM;

	gaudi_nic = &gaudi->nic_devices[in->port];
	mutex_init(&qp->qpc_lock);
	kref_init(&qp->refcount);
	qp->gaudi_nic = gaudi_nic;
	qp->port = in->port;

	/* TODO: handle local/remote keys */

	mutex_lock(&gaudi_nic->idr_lock);
	id = idr_alloc(&gaudi_nic->qp_ids, qp, HL_NIC_MIN_CONN_ID,
			HL_NIC_MAX_CONN_ID + 1, GFP_KERNEL);

	if (id < 0) {
		/* Try again after removing the dummy ids */
		qps_clean_dummies(gaudi_nic);
		id = idr_alloc(&gaudi_nic->qp_ids, qp, HL_NIC_MIN_CONN_ID,
				HL_NIC_MAX_CONN_ID + 1, GFP_KERNEL);
	}

	qp->conn_id = id;
	mutex_unlock(&gaudi_nic->idr_lock);

	if (id < 0) {
		qp_do_release(qp);
		return id;
	}

	dev_dbg(hdev->dev, "Allocating connection id %d in port %d",
		id, qp->port);

	out->conn_id = id;

	return 0;
}

static int set_req_conn_ctx(struct hl_device *hdev,
				struct hl_nic_req_conn_ctx_in *in)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct gaudi_nic_device *gaudi_nic;
	struct qpc_requester req_qpc = {};
	struct hl_qp *qp;
	u64 req_qpc_addr;
	int i, rc;

	if (!in) {
		dev_err(hdev->dev,
			"Missing parameters to set a requester context\n");
		return -EINVAL;
	}

	rc = conn_ioctl_check(hdev, in->port, in->conn_id);
	if (rc)
		return rc;

	gaudi_nic = &gaudi->nic_devices[in->port];

	qp = qp_get(hdev, gaudi_nic, in->conn_id);
	if (!qp)
		return -EINVAL;

	req_qpc_addr = REQ_QPC_ADDR(in->port, in->conn_id);
	REQ_QPC_SET_DST_QP(req_qpc, in->dst_conn_id);
	REQ_QPC_SET_PORT(req_qpc, 0);
	REQ_QPC_SET_PRIORITY(req_qpc, in->priority);
	REQ_QPC_SET_RKEY(req_qpc, qp->remote_key);
	REQ_QPC_SET_DST_IP(req_qpc, in->dst_ip_addr);
	REQ_QPC_SET_SRC_IP(req_qpc, in->src_ip_addr);
	REQ_QPC_SET_DST_MAC_31_0(req_qpc, *(u32 *) in->dst_mac_addr);
	REQ_QPC_SET_DST_MAC_47_32(req_qpc, *(u16 *) (in->dst_mac_addr + 4));
	REQ_QPC_SET_SQ_NUM(req_qpc, in->sq_number);
	REQ_QPC_SET_TM_GRANULARITY(req_qpc, in->timer_granularity);
	REQ_QPC_SET_SOB_EN(req_qpc, in->enable_sob);
	REQ_QPC_SET_TRANSPORT_SERVICE(req_qpc, TS_RC);
	REQ_QPC_SET_BURST_SIZE(req_qpc, QPC_REQ_BURST_SIZE);
	REQ_QPC_SET_LAST_IDX(req_qpc, in->last_index);
	REQ_QPC_SET_WQ_BASE_ADDR(req_qpc, in->conn_id);
	REQ_QPC_SET_SWQ_GRANULARITY(req_qpc, in->swq_granularity);
	REQ_QPC_SET_VALID(req_qpc, 1);

	mutex_lock(&qp->qpc_lock);

	for (i = 0 ; i < (sizeof(req_qpc) / sizeof(u64)) ; i++)
		writeq(req_qpc.data[i], hdev->pcie_bar[HBM_BAR_ID] +
			((req_qpc_addr + i * 8) - gaudi->hbm_bar_cur_addr));

	/* Perform read to flush the writes of the connection context */
	readq(hdev->pcie_bar[HBM_BAR_ID]);

	qp->is_req = true;
	qpc_cache_inv(gaudi_nic, true);

	mutex_unlock(&qp->qpc_lock);

	qp_put(qp);

	return 0;
}

static int set_res_conn_ctx(struct hl_device *hdev,
				struct hl_nic_res_conn_ctx_in *in)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct gaudi_nic_device *gaudi_nic;
	struct qpc_responder res_qpc = {};
	struct hl_qp *qp;
	u64 res_qpc_addr;
	int i, rc;

	if (!in) {
		dev_err(hdev->dev,
			"Missing parameters to set a responder context\n");
		return -EINVAL;
	}

	rc = conn_ioctl_check(hdev, in->port, in->conn_id);
	if (rc)
		return rc;

	gaudi_nic = &gaudi->nic_devices[in->port];

	qp = qp_get(hdev, gaudi_nic, in->conn_id);
	if (!qp)
		return -EINVAL;

	res_qpc_addr = RES_QPC_ADDR(in->port, in->conn_id);
	RES_QPC_SET_DST_QP(res_qpc, in->dst_conn_id);
	RES_QPC_SET_PORT(res_qpc, 0);
	RES_QPC_SET_PRIORITY(res_qpc, in->priority);
	RES_QPC_SET_SQ_NUM(res_qpc, in->sq_number);
	RES_QPC_SET_LKEY(res_qpc, qp->local_key);
	RES_QPC_SET_DST_IP(res_qpc, in->dst_ip_addr);
	RES_QPC_SET_SRC_IP(res_qpc, in->src_ip_addr);
	RES_QPC_SET_DST_MAC_31_0(res_qpc, *(u32 *) in->dst_mac_addr);
	RES_QPC_SET_DST_MAC_47_32(res_qpc, *(u16 *) (in->dst_mac_addr + 4));
	RES_QPC_SET_TRANSPORT_SERVICE(res_qpc, TS_RC);
	RES_QPC_SET_LOG_BUF_SIZE_MASK(res_qpc, 0);
	RES_QPC_SET_SOB_EN(res_qpc, in->enable_sob);
	RES_QPC_SET_VALID(res_qpc, 1);

	mutex_lock(&qp->qpc_lock);

	for (i = 0 ; i < (sizeof(res_qpc) / sizeof(u64)) ; i++)
		writeq(res_qpc.data[i], hdev->pcie_bar[HBM_BAR_ID] +
			((res_qpc_addr + i * 8) - gaudi->hbm_bar_cur_addr));

	/* Perform read to flush the writes of the connection context */
	readq(hdev->pcie_bar[HBM_BAR_ID]);

	qp->is_res = true;
	qpc_cache_inv(gaudi_nic, false);

	mutex_unlock(&qp->qpc_lock);

	qp_put(qp);

	return 0;
}

static int destroy_conn(struct hl_device *hdev,
			struct hl_nic_destroy_conn_in *in)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct gaudi_nic_device *gaudi_nic;
	struct hl_qp *qp;
	int rc;

	if (!in) {
		dev_err(hdev->dev,
			"Missing parameters to destroy a NIC context\n");
		return -EINVAL;
	}

	rc = conn_ioctl_check(hdev, in->port, in->conn_id);
	if (rc)
		return rc;

	gaudi_nic = &gaudi->nic_devices[in->port];

	/* The QP pointer is replaced with the dummy QP to prevent other threads
	 * from using the QP. The ID is kept allocated at this stage so the QP
	 * context can be safely modified. qp_put() is called right afterwards.
	 */
	mutex_lock(&gaudi_nic->idr_lock);
	qp = idr_replace(&gaudi_nic->qp_ids, &dummy_qp, in->conn_id);
	mutex_unlock(&gaudi_nic->idr_lock);

	if (IS_ERR(qp))
		return PTR_ERR(qp);

	qp_put(qp);

	return 0;
}

int gaudi_nic_control(struct hl_device *hdev, u32 op, void *input, void *output)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	int rc;

	if (!(gaudi->hw_cap_initialized & HW_CAP_NIC_DRV))
		return -EFAULT;

	switch (op) {
	case HL_NIC_OP_ALLOC_CONN:
		rc = alloc_conn(hdev, input, output);
		break;
	case HL_NIC_OP_SET_REQ_CONN_CTX:
		rc = set_req_conn_ctx(hdev, input);
		break;
	case HL_NIC_OP_SET_RES_CONN_CTX:
		rc = set_res_conn_ctx(hdev, input);
		break;
	case HL_NIC_OP_DESTROY_CONN:
		rc = destroy_conn(hdev, input);
		break;
	case HL_NIC_OP_CQ_CREATE:
		rc = cq_create(hdev, input, output);
		break;
	case HL_NIC_OP_CQ_DESTROY:
		rc = cq_destroy(hdev);
		break;
	case HL_NIC_OP_CQ_WAIT:
		rc = cq_poll_wait(hdev, input, output, true);
		break;
	case HL_NIC_OP_CQ_POLL:
		rc = cq_poll_wait(hdev, input, output, false);
		break;
	case HL_NIC_OP_CQ_UPDATE_CONSUMED_CQES:
		rc = cq_update_consumed_cqes(hdev, input);
		break;
	case HL_NIC_OP_USER_WQ_SET:
		rc = user_wq_arr_set(hdev, input);
		break;
	case HL_NIC_OP_USER_WQ_UNSET:
		rc = user_wq_arr_unset(hdev, input);
		break;
	default:
		dev_err(hdev->dev, "Invalid NIC control request %d\n", op);
		return -ENOTTY;
	}

	return rc;
}

static void qps_destroy(struct hl_device *hdev)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct gaudi_nic_device *gaudi_nic;
	struct hl_qp *qp;
	int qp_id, i;

	for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++) {
		if (!(hdev->nic_ports_mask & BIT(i)))
			continue;

		gaudi_nic = &gaudi->nic_devices[i];

		/*
		 * No need to acquire "gaudi_nic->idr_lock", as qps_destroy() is
		 * only called when a context is closed, and in Gaudi we have a
		 * single context.
		 */

		qps_clean_dummies(gaudi_nic);

		idr_for_each_entry(&gaudi_nic->qp_ids, qp, qp_id) {
			idr_remove(&gaudi_nic->qp_ids, qp_id);
			if (qp_put(qp) != 1)
				dev_err(hdev->dev,
					"QP %d of port %d is still alive\n",
					qp->conn_id, qp->port);
		}
	}
}

static void wq_arrs_destroy(struct hl_device *hdev)
{
	int i;

	for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++) {
		if (!(hdev->nic_ports_mask & BIT(i)))
			continue;

		_user_wq_arr_unset(hdev, i, HL_NIC_USER_WQ_SEND);
		_user_wq_arr_unset(hdev, i, HL_NIC_USER_WQ_RECV);
	}
}

void gaudi_nic_ctx_fini(struct hl_ctx *ctx)
{
	struct gaudi_device *gaudi = ctx->hdev->asic_specific;
	struct hl_device *hdev = ctx->hdev;

	if (!(gaudi->hw_cap_initialized & HW_CAP_NIC_DRV))
		return;

	qps_destroy(hdev);
	/* wait for the NIC to digest the invalid QPs */
	msleep(20);
	cq_destroy(hdev);
	wq_arrs_destroy(hdev);
}

static void nic_cq_vm_close(struct vm_area_struct *vma)
{
	struct hl_device *hdev = (struct hl_device *) vma->vm_private_data;
	struct gaudi_device *gaudi = hdev->asic_specific;
	long new_mmap_size;

	new_mmap_size = gaudi->nic_cq_mmap_size - (vma->vm_end - vma->vm_start);

	dev_dbg(hdev->dev, "munmap NIC CQEs buffer, new_mmap_size: %ld\n",
		new_mmap_size);

	if (new_mmap_size > 0) {
		gaudi->nic_cq_mmap_size = new_mmap_size;
		return;
	}

	vma->vm_private_data = NULL;
	gaudi->nic_cq_mmap = false;
}

static const struct vm_operations_struct nic_cq_vm_ops = {
	.close = nic_cq_vm_close
};

int gaudi_nic_cq_mmap(struct hl_device *hdev, struct vm_area_struct *vma)
{
	struct gaudi_device *gaudi = hdev->asic_specific;
	u32 size;
	int rc;

	if (!(gaudi->hw_cap_initialized & HW_CAP_NIC_DRV))
		return -EFAULT;

	mutex_lock(&gaudi->nic_cq_user_lock);

	if (!gaudi->nic_cq_enable) {
		dev_err(hdev->dev, "NIC CQ is disabled, can't mmap\n");
		rc = -EFAULT;
		goto out;
	}

	if (gaudi->nic_cq_mmap) {
		dev_err(hdev->dev, "NIC CQ is already mmapped, can't mmap\n");
		rc = -EFAULT;
		goto out;
	}

	size = gaudi->nic_cq_user_num_of_entries * sizeof(struct hl_nic_cqe);

	dev_dbg(hdev->dev, "mmap NIC CQ buffer, size: 0x%x\n", size);

	/* Validation check */
	if ((vma->vm_end - vma->vm_start) != ALIGN(size, PAGE_SIZE)) {
		dev_err(hdev->dev,
			"NIC mmap failed, mmap size 0x%lx != 0x%x CQ buffer size\n",
			vma->vm_end - vma->vm_start, size);
		rc = -EINVAL;
		goto out;
	}

	vma->vm_ops = &nic_cq_vm_ops;
	vma->vm_private_data = hdev;

	dev_dbg(hdev->dev, "mapping NIC CQ buffer\n");

	vma->vm_flags |= VM_DONTEXPAND | VM_DONTDUMP | VM_DONTCOPY |
			VM_NORESERVE;

	rc = remap_vmalloc_range(vma, gaudi->nic_cq_buf, 0);
	if (rc) {
		dev_err(hdev->dev, "failed to map the NIC CQ buffer\n");
		goto out;
	}

	gaudi->nic_cq_mmap_size = size;
	gaudi->nic_cq_mmap = true;
out:
	mutex_unlock(&gaudi->nic_cq_user_lock);

	return rc;
}
