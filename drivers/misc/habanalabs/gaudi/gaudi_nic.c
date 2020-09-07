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
 * enum link_status - link status
 * @LINK_UP: PHY is ready and PCS has link..
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

#define HLS1_EXT_PORTS_MASK		0x302
#define FW_LINK_TRAINING_CNT		200
#define FW_TUNING_CNT			3000
#define PCS_LINK_CNT			10
#define PCS_FAIL_TIME_FRAME_SEC		(60 * 5) /* 5 minutes */
#define PCS_FAIL_THRESHOLD		8
#define PCS_FAULT_THRESHOLD		20
#define PCS_LINK_RETRY_MSEC		20

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

static void qpc_cache_inv(struct gaudi_nic_device *gaudi_nic, bool is_req)
{
	struct hl_device *hdev = gaudi_nic->hdev;
	struct gaudi_device *gaudi = hdev->asic_specific;
	u64 inv_reg, status_reg, base;
	u32 status, port = gaudi_nic->port;
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
	struct hl_device *hdev = gaudi_nic->hdev;
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct qpc_requester req_qp;
	struct qpc_responder res_qp;
	u64 *qpc_addr, req_qpc_addr, res_qpc_addr;
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
	struct hl_device *hdev = gaudi_nic->hdev;
	struct gaudi_device *gaudi = hdev->asic_specific;
	u64 swq_base_addr = SWQ_BASE_ADDR + gaudi_nic->port * SWQ_BASE_SIZE;
	u64 tx_swq_base, cq_mem_addr = gaudi_nic->cq_mem_device_va;
	u64 req_qpc_base_addr = REQ_QPC_ADDR(gaudi_nic->port, 0),
		res_qpc_base_addr = RES_QPC_ADDR(gaudi_nic->port, 0),
		txs_addr, cq_msi_addr;
	u32 port = gaudi_nic->port, rx_mem_addr_lo, rx_mem_addr_hi,
		txs_fence_idx, txs_pi, txs_ci, txs_tail, txs_head,
		txs_timeout_31_0, timeout_47_32, prio, txs_port, rl_en_log_time,
		txs_schedq;
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
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 port = gaudi_nic->port, speed = gaudi_nic->speed;
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
	struct hl_device *hdev = gaudi_nic->hdev;
	struct gaudi_device *gaudi = hdev->asic_specific;
	u64 mac_addr = 0, tmr_addr;
	u32 port = gaudi_nic->port, data_rate, speed = gaudi_nic->speed;
	int i, rc;
	bool do_auto_neg;

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
	struct hl_device *hdev = gaudi_nic->hdev;
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct sq_wqe swq;
	u64 *swq_p = (u64 *) &swq;
	u64 swq_addr, sb_base_address, swq_base_addr;
	u32 port = gaudi_nic->port, pi = gaudi_nic->tx_pi,
		ci = gaudi_nic->tx_ci, diff, new_pi;
	int i;

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
	/* TODO: change to QMAN cmd */
	NIC_WREG32(mmNIC0_QPC0_SECURED_DOORBELL_PI, new_pi);
	NIC_WREG32(mmNIC0_QPC0_SECURED_DOORBELL_QPN, 0x80000000 | RAW_QPN);

	return true;
}

static bool get_pkt_from_hw(struct gaudi_nic_device *gaudi_nic, u64 mem_addr,
				u64 *ppkt_addr, u32 *ppkt_size, u32 *pi)
{
	struct hl_device *hdev = gaudi_nic->hdev;
	u64 pkt_addr;
	u32 ci = gaudi_nic->rx_ci, ether_type, tpid, ipv4_len, ipv6_len,
		pkt_size, hdr_size = ETH_HLEN;
	__be32 *data;
	int idx;
	bool vlan_double_tag = false, ret = true;

	/*
	 * check if packet is available by reading the PI, but do it only if
	 * needed as it is expensive
	 */
	if (*pi == ci) {
		/* TODO: need this wraparound? */
		*pi = NIC_RREG32(mmNIC0_QPC0_RES_RING0_PI) & (NIC_RX_SIZE - 1);
		if (*pi == ci)
			return false;
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
		dev_err_ratelimited(hdev->dev,
					"error, unsupported EtherType 0x%x, port %d\n",
					ether_type, gaudi_nic->port);
		ret = false;
		goto out;
	}

	if (pkt_size > NIC_MAX_PKT_SIZE) {
		dev_err_ratelimited(hdev->dev,
				"error, packet size %u exceeds maximum of %u\n",
				pkt_size, NIC_MAX_PKT_SIZE);
		ret = false;
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

	return ret;
}

bool disabled_or_in_reset(struct gaudi_nic_device *gaudi_nic)
{
	return atomic_read(&gaudi_nic->in_reset) ||
			hl_device_disabled_or_in_reset(gaudi_nic->hdev);
}

static int gaudi_nic_handle_rx_pkt(struct gaudi_nic_device *gaudi_nic,
					int budget, u32 *last_pi)
{
	struct hl_device *hdev = gaudi_nic->hdev;
	struct net_device_stats *stats = &gaudi_nic->ndev->stats;
	struct sk_buff *skb;
	u64 pkt_address;
	u32 pkt_size, pi = gaudi_nic->rx_ci;
	int rc, pkt_count = 0;

	if (!gaudi_nic->active)
		return 0;

	while (1) {
		if (pkt_count >= budget || disabled_or_in_reset(gaudi_nic))
			break;

		rc = get_pkt_from_hw(gaudi_nic,
					(u64) (uintptr_t) gaudi_nic->rx_mem_cpu,
					&pkt_address, &pkt_size, &pi);
		if (!rc)
			break;

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
		if (rc == NET_RX_DROP) {
			stats->rx_dropped++;
		} else {
			stats->rx_packets++;
			stats->rx_bytes += pkt_size;
			pkt_count++;
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
	u32 last_pi;
	int work_done = gaudi_nic_handle_rx_pkt(gaudi_nic, budget, &last_pi);

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
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;

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
	struct hl_device *hdev = gaudi_nic->hdev;
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;
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
	struct hl_device *hdev = gaudi_nic->hdev;
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;
	struct kfifo *pcs_fifo = &gaudi_nic->pcs_fail_fifo;
	ktime_t now, before;
	u32 port = gaudi_nic->port;
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
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 port = gaudi_nic->port, pcs_val, mac_val,
		start_lane = __ffs(gaudi_nic->fw_tuning_mask);
	int i, rc;

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
	struct hl_device *hdev = gaudi_nic->hdev;
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;
	u32 port = gaudi_nic->port;
	enum link_status link_status;

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
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 port = gaudi_nic->port, pcs_val,
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
	struct gaudi_nic_device *gaudi_nic;
	struct gaudi_device *gaudi = hdev->asic_specific;
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
	struct hl_device *hdev = gaudi_nic->hdev;
	struct gaudi_device *gaudi = hdev->asic_specific;

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
	struct hl_device *hdev = gaudi_nic->hdev;
	struct gaudi_device *gaudi = hdev->asic_specific;

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
	struct hl_device *hdev = gaudi_nic->hdev;
	struct gaudi_device *gaudi = hdev->asic_specific;
	u32 port = gaudi_nic->port, pcs_fifo_size;
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
	struct hl_device *hdev = gaudi_nic->hdev;
	struct gaudi_device *gaudi = hdev->asic_specific;
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
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;

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
	struct gaudi_device *gaudi = gaudi_nic->hdev->asic_specific;

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
	struct gaudi_nic_device *gaudi_nic = &gaudi->nic_devices[port];
	struct gaudi_nic_device **ptr;
	struct net_device *ndev;
	int rc;

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

	/* TODO: declare on supported features */

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
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct cpucp_info *cpucp_info = &hdev->asic_prop.cpucp_info;
	struct cpucp_nic_info *nic_info = &hdev->asic_prop.cpucp_nic_info;
	struct cpucp_mac_addr *mac_arr = nic_info->mac_addrs;
	s32 *taps;
	int rc, i, nics_init = 0, cq_irq = 0;
	u8 mac[ETH_ALEN];
	bool read_card_location = false;

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
	u32 port;
	int rc, i, nics_init = 0, cq_irq;

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

void gaudi_nic_ctx_fini(struct hl_ctx *ctx)
{
}
