/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2019-2020 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

#ifndef GAUDIP_H_
#define GAUDIP_H_

#include <uapi/misc/habanalabs.h>
#include "../common/habanalabs.h"
#include "../include/common/hl_boot_if.h"
#include "../include/gaudi/gaudi_packets.h"
#include "../include/gaudi/gaudi.h"
#include "../include/gaudi/gaudi_async_events.h"

#include <linux/netdevice.h>
#include <linux/kfifo.h>

#define NUMBER_OF_EXT_HW_QUEUES		12
#define NUMBER_OF_CMPLT_QUEUES		NUMBER_OF_EXT_HW_QUEUES
#define NUMBER_OF_CPU_HW_QUEUES		1
#define NUMBER_OF_INT_HW_QUEUES		100
#define NUMBER_OF_HW_QUEUES		(NUMBER_OF_EXT_HW_QUEUES + \
					NUMBER_OF_CPU_HW_QUEUES + \
					NUMBER_OF_INT_HW_QUEUES)

/*
 * Number of MSI interrupts IDS:
 * Each completion queue has 1 ID
 * The event queue has 1 ID
 * Each NIC engine has 1 ID for Rx
 * The NIC CQ has 1 ID
 */
#define NUMBER_OF_INTERRUPTS		(NUMBER_OF_CMPLT_QUEUES + \
						NUMBER_OF_CPU_HW_QUEUES + \
						NIC_NUMBER_OF_ENGINES + 1)

#if (NUMBER_OF_INTERRUPTS > GAUDI_MSI_ENTRIES)
#error "Number of MSI interrupts must be smaller or equal to GAUDI_MSI_ENTRIES"
#endif

#define CORESIGHT_TIMEOUT_USEC		100000		/* 100 ms */

#define GAUDI_MAX_CLK_FREQ		2200000000ull	/* 2200 MHz */

#define MAX_POWER_DEFAULT_PCI		200000		/* 200W */
#define MAX_POWER_DEFAULT_PMC		350000		/* 350W */

#define GAUDI_CPU_TIMEOUT_USEC		30000000	/* 30s */

#define GAUDI_NIC_FW_TIMEOUT_USEC	12000000	/* 12s */

#define NIC_QPC_INV_USEC		1000000		/* 1s */

#define TPC_ENABLED_MASK		0xFF

#define GAUDI_HBM_SIZE_32GB		0x800000000ull
#define GAUDI_HBM_DEVICES		4
#define GAUDI_HBM_CHANNELS		8
#define GAUDI_HBM_CFG_BASE		(mmHBM0_BASE - CFG_BASE)
#define GAUDI_HBM_CFG_OFFSET		(mmHBM1_BASE - mmHBM0_BASE)

#define DMA_MAX_TRANSFER_SIZE		U32_MAX

#define GAUDI_DEFAULT_CARD_NAME		"HL2000"

#define GAUDI_MAX_PENDING_CS		1024

#if !IS_MAX_PENDING_CS_VALID(GAUDI_MAX_PENDING_CS)
#error "GAUDI_MAX_PENDING_CS must be power of 2 and greater than 1"
#endif

#define PCI_DMA_NUMBER_OF_CHNLS		3
#define HBM_DMA_NUMBER_OF_CHNLS		5
#define DMA_NUMBER_OF_CHNLS		(PCI_DMA_NUMBER_OF_CHNLS + \
						HBM_DMA_NUMBER_OF_CHNLS)

#define MME_NUMBER_OF_SLAVE_ENGINES	2
#define MME_NUMBER_OF_ENGINES		(MME_NUMBER_OF_MASTER_ENGINES + \
					MME_NUMBER_OF_SLAVE_ENGINES)
#define MME_NUMBER_OF_QMANS		(MME_NUMBER_OF_MASTER_ENGINES * \
					QMAN_STREAMS)

#define QMAN_STREAMS		4

#define DMA_QMAN_OFFSET		(mmDMA1_QM_BASE - mmDMA0_QM_BASE)
#define TPC_QMAN_OFFSET		(mmTPC1_QM_BASE - mmTPC0_QM_BASE)
#define MME_QMAN_OFFSET		(mmMME1_QM_BASE - mmMME0_QM_BASE)
#define NIC_MACRO_QMAN_OFFSET	(mmNIC1_QM0_BASE - mmNIC0_QM0_BASE)
#define NIC_ENGINE_QMAN_OFFSET	(mmNIC0_QM1_BASE - mmNIC0_QM0_BASE)

#define TPC_CFG_OFFSET		(mmTPC1_CFG_BASE - mmTPC0_CFG_BASE)

#define DMA_CORE_OFFSET		(mmDMA1_CORE_BASE - mmDMA0_CORE_BASE)

#define SIF_RTR_CTRL_OFFSET	(mmSIF_RTR_CTRL_1_BASE - mmSIF_RTR_CTRL_0_BASE)

#define NIF_RTR_CTRL_OFFSET	(mmNIF_RTR_CTRL_1_BASE - mmNIF_RTR_CTRL_0_BASE)

#define MME_ACC_OFFSET		(mmMME1_ACC_BASE - mmMME0_ACC_BASE)
#define SRAM_BANK_OFFSET	(mmSRAM_Y0_X1_RTR_BASE - mmSRAM_Y0_X0_RTR_BASE)

#define NUM_OF_SOB_IN_BLOCK		\
	(((mmSYNC_MNGR_E_N_SYNC_MNGR_OBJS_SOB_OBJ_2047 - \
	mmSYNC_MNGR_E_N_SYNC_MNGR_OBJS_SOB_OBJ_0) + 4) >> 2)

#define NUM_OF_MONITORS_IN_BLOCK	\
	(((mmSYNC_MNGR_E_N_SYNC_MNGR_OBJS_MON_STATUS_511 - \
	mmSYNC_MNGR_E_N_SYNC_MNGR_OBJS_MON_STATUS_0) + 4) >> 2)

#define NIC_NUMBER_OF_PORTS	NIC_NUMBER_OF_ENGINES
#define NIC_MAX_NUM_OF_LANES	(NIC_NUMBER_OF_MACROS * NIC_MAC_NUM_OF_LANES)

/* DRAM Memory Map */

#define CPU_FW_IMAGE_SIZE	0x10000000	/* 256MB */
#define MMU_PAGE_TABLES_SIZE	0x0BF00000	/* 191MB */
#define MMU_CACHE_MNG_SIZE	0x00100000	/* 1MB */
#define NIC_DRV_SIZE		0x04000000	/* 64MB */

#define CPU_FW_IMAGE_ADDR	DRAM_PHYS_BASE
#define MMU_PAGE_TABLES_ADDR	(CPU_FW_IMAGE_ADDR + CPU_FW_IMAGE_SIZE)
#define MMU_CACHE_MNG_ADDR	(MMU_PAGE_TABLES_ADDR + MMU_PAGE_TABLES_SIZE)
#define NIC_DRV_ADDR		(MMU_CACHE_MNG_ADDR + MMU_CACHE_MNG_SIZE)

#define DRAM_DRIVER_END_ADDR	(NIC_DRV_ADDR + NIC_DRV_SIZE)

#define DRAM_BASE_ADDR_USER	0x20000000

#if (DRAM_DRIVER_END_ADDR > DRAM_BASE_ADDR_USER)
#error "Driver must reserve no more than 512MB"
#endif

/* Internal QMANs PQ sizes */

#define MME_QMAN_LENGTH			1024
#define MME_QMAN_SIZE_IN_BYTES		(MME_QMAN_LENGTH * QMAN_PQ_ENTRY_SIZE)

#define HBM_DMA_QMAN_LENGTH		1024
#define HBM_DMA_QMAN_SIZE_IN_BYTES	\
				(HBM_DMA_QMAN_LENGTH * QMAN_PQ_ENTRY_SIZE)

#define TPC_QMAN_LENGTH			1024
#define TPC_QMAN_SIZE_IN_BYTES		(TPC_QMAN_LENGTH * QMAN_PQ_ENTRY_SIZE)

#define NIC_QMAN_LENGTH			1024
#define NIC_QMAN_SIZE_IN_BYTES		(NIC_QMAN_LENGTH * QMAN_PQ_ENTRY_SIZE)


#define SRAM_USER_BASE_OFFSET  GAUDI_DRIVER_SRAM_RESERVED_SIZE_FROM_START

/* Virtual address space */
#define VA_HOST_SPACE_START	0x1000000000000ull	/* 256TB */
#define VA_HOST_SPACE_END	0x3FF8000000000ull	/* 1PB - 1TB */
#define VA_HOST_SPACE_SIZE	(VA_HOST_SPACE_END - \
					VA_HOST_SPACE_START) /* 767TB */

#define VA_NIC_MEM_ADDR		0x10000000000ull /* 1TB */

#define HW_CAP_PLL		BIT(0)
#define HW_CAP_HBM		BIT(1)
#define HW_CAP_MMU		BIT(2)
#define HW_CAP_MME		BIT(3)
#define HW_CAP_CPU		BIT(4)
#define HW_CAP_PCI_DMA		BIT(5)
#define HW_CAP_MSI		BIT(6)
#define HW_CAP_CPU_Q		BIT(7)
#define HW_CAP_HBM_DMA		BIT(8)
#define HW_CAP_CLK_GATE		BIT(9)
#define HW_CAP_SRAM_SCRAMBLER	BIT(10)
#define HW_CAP_HBM_SCRAMBLER	BIT(11)
#define HW_CAP_NIC_DRV		BIT(12)

#define HW_CAP_NIC0		BIT(14)
#define HW_CAP_NIC1		BIT(15)
#define HW_CAP_NIC2		BIT(16)
#define HW_CAP_NIC3		BIT(17)
#define HW_CAP_NIC4		BIT(18)
#define HW_CAP_NIC5		BIT(19)
#define HW_CAP_NIC6		BIT(20)
#define HW_CAP_NIC7		BIT(21)
#define HW_CAP_NIC8		BIT(22)
#define HW_CAP_NIC9		BIT(23)
#define HW_CAP_NIC_MASK		GENMASK(23, 14)
#define HW_CAP_NIC_SHIFT	14

#define HW_CAP_TPC0		BIT(24)
#define HW_CAP_TPC1		BIT(25)
#define HW_CAP_TPC2		BIT(26)
#define HW_CAP_TPC3		BIT(27)
#define HW_CAP_TPC4		BIT(28)
#define HW_CAP_TPC5		BIT(29)
#define HW_CAP_TPC6		BIT(30)
#define HW_CAP_TPC7		BIT(31)
#define HW_CAP_TPC_MASK		GENMASK(31, 24)
#define HW_CAP_TPC_SHIFT	24

#define GAUDI_CPU_PCI_MSB_ADDR(addr)	(((addr) & GENMASK_ULL(49, 39)) >> 39)
#define GAUDI_PCI_TO_CPU_ADDR(addr)			\
	do {						\
		(addr) &= ~GENMASK_ULL(49, 39);		\
		(addr) |= BIT_ULL(39);			\
	} while (0)
#define GAUDI_CPU_TO_PCI_ADDR(addr, extension)		\
	do {						\
		(addr) &= ~GENMASK_ULL(49, 39);		\
		(addr) |= (u64) (extension) << 39;	\
	} while (0)

enum gaudi_dma_channels {
	GAUDI_PCI_DMA_1,
	GAUDI_PCI_DMA_2,
	GAUDI_PCI_DMA_3,
	GAUDI_HBM_DMA_1,
	GAUDI_HBM_DMA_2,
	GAUDI_HBM_DMA_3,
	GAUDI_HBM_DMA_4,
	GAUDI_HBM_DMA_5,
	GAUDI_DMA_MAX
};

enum gaudi_tpc_mask {
	GAUDI_TPC_MASK_TPC0 = 0x01,
	GAUDI_TPC_MASK_TPC1 = 0x02,
	GAUDI_TPC_MASK_TPC2 = 0x04,
	GAUDI_TPC_MASK_TPC3 = 0x08,
	GAUDI_TPC_MASK_TPC4 = 0x10,
	GAUDI_TPC_MASK_TPC5 = 0x20,
	GAUDI_TPC_MASK_TPC6 = 0x40,
	GAUDI_TPC_MASK_TPC7 = 0x80,
	GAUDI_TPC_MASK_ALL = 0xFF
};

enum gaudi_nic_mask {
	GAUDI_NIC_MASK_NIC0 = 0x01,
	GAUDI_NIC_MASK_NIC1 = 0x02,
	GAUDI_NIC_MASK_NIC2 = 0x04,
	GAUDI_NIC_MASK_NIC3 = 0x08,
	GAUDI_NIC_MASK_NIC4 = 0x10,
	GAUDI_NIC_MASK_NIC5 = 0x20,
	GAUDI_NIC_MASK_NIC6 = 0x40,
	GAUDI_NIC_MASK_NIC7 = 0x80,
	GAUDI_NIC_MASK_NIC8 = 0x100,
	GAUDI_NIC_MASK_NIC9 = 0x200,
	GAUDI_NIC_MASK_ALL = 0x3FF
};

/**
 * struct gaudi_nic_tx_taps - holds the NIC Tx taps values for a specific lane.
 *                            Currently used for PAM4 only.
 * @taps: holds all taps - tx_pre2, tx_pre1, tx_main, tx_post1 and tx_post2.
 */
struct gaudi_nic_tx_taps {
	s32	taps[NIC_PHY_TX_TAPS_NUM];
};

/**
 * struct gaudi_nic_macro - manage specific NIC macro that holds two NIC
 *                          engines.
 * @idx: index of the NIC macro.
 * @num_of_lanes: number of lanes in the NIC macro.
 */
struct gaudi_nic_macro {
	u8	idx;
	u8	num_of_lanes;
};

/**
 * struct gaudi_nic_device - manage specific NIC port.
 * @hdev: habanalabs device structure.
 * @ndev: pointer to network device.
 * @nic_macro: pointer to the manage structure of the containing NIC macro.
 * @napi: New API structure.
 * @tx_wq: Tx work queue for handling packet transmission outside interrupt
 *         context (for simulator only).
 * @rx_wq: Rx work queue for handling incoming packets outside interrupt
 *         context (for simulator only).
 * @cq_wq: CQ work queue for handling CQEs outside interrupt context.
 * @rx_mem_cpu: CPU address of RX memory.
 * @rx_mem_dma: DMA address of RX memory.
 * @cq_mem_cpu: CPU address of CQ memory.
 * @cq_mem_dma: DMA address of CQ memory.
 * @qp_err_mem_cpu: CPU address of QP error memory.
 * @qp_err_mem_dma: DMA address of QP error memory.
 * @in_reset: 1 if the NIC is currently in reset, 0 otherwise.
 * @rx_poll_work: Rx work for polling mode.
 * @cq_work: CQ work for processing CQEs.
 * @link_status_work: work for checking NIC link status.
 * @port_open_work: work for initializing the port H/W.
 * @idr_lock: Protects qp_ids.
 * @user_wq_lock: protects the user WQ configuration.
 * @qp_ids: IDR to hold all connections IDs.
 * @pcs_fail_fifo: queue for keeping the PCS link failures time stamps in order
 *                 to reconfigure F/W if needed.
 * @last_cqe_ts: time stamp of last processed CQE.
 * @last_fw_tuning_ts: time stamp of last F/W tuning.
 * @last_pcs_link_drop_ts: time stamp of last PCS link drop.
 * @rx_msi_addr: Rx MSI address.
 * @tx_swq_mem_device_va: device virtual address of Tx SWQ memory.
 * @cq_mem_device_va: device virtual address of CQ memory.
 * @rx_mem_size: Rx memory size.
 * @cq_mem_size: CQ memory size.
 * @qp_err_mem_size: QP error buffer memory size.
 * @rx_ci: incremented by S/W for each received packet from the H/W.
 * @tx_pi: incremented by S/W for each sent packet to the H/W.
 * @tx_ci: incremented by H/W for each sent packet from the H/W.
 * @cq_ci: incremented by S/W for each consumed CQE.
 * @port: NIC specific port.
 * @data_rate: NIC data rate according to speed and number of lanes.
 * @tx_wq_pi: TX work queue PI for transmitting packets by their order (for
 *            simulator only).
 * @tx_wq_ci: TX work queue CI for transmitting packets by their order (for
 *            simulator only).
 * @qp_err_ci: next index of the QP error to fetch.
 * @retry_cnt: counts the number of retries during link establishment.
 * @pcs_fail_cnt: counter of PCS link failures since last F/W configuration.
 * @pcs_local_fault_cnt: counter of PCS link local errors since last F/W
 *                       configuration. These errors can appear even when link
 *                       is up.
 * @pcs_remote_fault_cnt: counter of PCS link remote errors since last F/W
 *                        configuration. These errors can appear even when link
 *                        is up.
 * @speed: the bandwidth of the port in Mb/s.
 * @last_cqe_cnt: the last number of processed CQEs.
 * @cq_delay: the time between two invocations of the CQ polling work when not
 *            idle.
 * @cq_delay_idle: the time between two invocations of the CQ polling work when
 *                 idle.
 * @correctable_errors_cnt: count the correctable FEC blocks.
 * @uncorrectable_errors_cnt: count the uncorrectable FEC blocks.
 * @enabled: true if the NIC is enabled by the S/W, false otherwise. Can be
 *           changed only from ndo_open/ndo_stop callbacks.
 * @active: true if the NIC H/W is operational, false otherwise.
 * @port_open: true if the port H/W is initialized, false otherwise.
 * @do_macro_cfg: true if this port should handle the macro configuration, false
 *              otherwise. Each NIC macro contains two ports - even and odd, and
 *              only one of them should handle the shared configuration.
 *              The default is for the even port to handle it, but in case that
 *              the even port is disabled, the odd port will do it.
 * @phy_fw_tuned: true if F/W is tuned, false otherwise.
 * @pcs_link: true if the NIC has PCS link, false otherwise.
 * @mac_loopback: true if port in MAC loopback mode, false otherwise.
 * @auto_neg_enable: true if this port supports Autonegotiation, false
 *                   otherwise.
 * @auto_neg_resolved: true if this port completed Autonegotiation, false
 *                     otherwise.
 * @power_up_mask: represents which MAC channels should be configured during PHY
 *                 power up.
 * @fw_tuning_mask: represents which MAC channels should be configured during
 *                  F/W tuning.
 * @auto_neg_mask: represents which MAC channels should be configured during
 *                 Autonegotiation.
 * @pfc_enable: true if this port supports Priority Flow Control, false
 *              otherwise.
 */
struct gaudi_nic_device {
	struct hl_device	*hdev;
	struct net_device	*ndev;
	struct gaudi_nic_macro	*nic_macro;
	struct napi_struct	napi;
	struct workqueue_struct	*tx_wq;
	struct workqueue_struct	*rx_wq;
	struct workqueue_struct	*cq_wq;
	void			*rx_mem_cpu;
	dma_addr_t		rx_mem_dma;
	void			*cq_mem_cpu;
	dma_addr_t		cq_mem_dma;
	void			*qp_err_mem_cpu;
	dma_addr_t		qp_err_mem_dma;
	atomic_t		in_reset;
	struct delayed_work	rx_poll_work;
	struct delayed_work	cq_work;
	struct delayed_work	link_status_work;
	struct delayed_work	port_open_work;
	struct mutex		idr_lock;
	struct mutex		user_wq_lock;
	struct idr		qp_ids;
	struct kfifo		pcs_fail_fifo;
	ktime_t			last_cqe_ts;
	ktime_t			last_fw_tuning_ts;
	ktime_t			last_pcs_link_drop_ts;
	u64			rx_msi_addr;
	u64			tx_swq_mem_device_va;
	u64			cq_mem_device_va;
	u32			rx_mem_size;
	u32			cq_mem_size;
	u32			qp_err_mem_size;
	u32			rx_ci;
	u32			tx_pi;
	u32			tx_ci;
	u32			cq_ci;
	u32			port;
	u32			data_rate;
	u32			tx_wq_pi;
	u32			tx_wq_ci;
	u32			qp_err_ci;
	u32			retry_cnt;
	u32			pcs_fail_cnt;
	u32			pcs_local_fault_cnt;
	u32			pcs_remote_fault_cnt;
	u32			speed;
	u32			last_cqe_cnt;
	u32			cq_delay;
	u32			cq_delay_idle;
	u32			correctable_errors_cnt;
	u32			uncorrectable_errors_cnt;
	u8			enabled;
	u8			active;
	u8			port_open;
	u8			do_macro_cfg;
	u8			phy_fw_tuned;
	u8			pcs_link;
	u8			mac_loopback;
	u8			auto_neg_enable;
	u8			auto_neg_resolved;
	u8			power_up_mask;
	u8			fw_tuning_mask;
	u8			auto_neg_mask;
	u8			pfc_enable;
};

/**
 * struct gaudi_internal_qman_info - Internal QMAN information.
 * @pq_kernel_addr: Kernel address of the PQ memory area in the host.
 * @pq_dma_addr: DMA address of the PQ memory area in the host.
 * @pq_size: Size of allocated host memory for PQ.
 */
struct gaudi_internal_qman_info {
	void		*pq_kernel_addr;
	dma_addr_t	pq_dma_addr;
	size_t		pq_size;
};

/**
 * struct gaudi_device - ASIC specific manage structure.
 * @cpucp_info_get: get information on device from CPU-CP
 * @nic_handle_rx: NIC handler for incoming packet.
 * @nic_handle_tx: NIC handler for outgoing packet.
 * @nic_devices: array that holds all NIC ports manage structures.
 * @nic_macros: array that holds all NIC macros manage structures.
 * @nic_pam4_tx_taps: array that holds all PAM4 Tx taps of all NIC lanes.
 * @nic_cq_comp: completion queue to handle wait/poll NIC CQ IOCTL.
 * @nic_cq_lock: for serial copying of the CQEs from the NIC buffer to the user
 *               queue.
 * @hw_queues_lock: protects the H/W queues from concurrent access.
 * @clk_gate_mutex: protects code areas that require clock gating to be disabled
 *                  temporarily
 * @nic_cq_user_lock: protects the NIC CQ from concurrent operations that may
 *               interfere with each other such as wait/mmap/destroy etc.
 * @nic_qp_err_lock: protects the NIC QP error handler from pushing error
 *                   entries to the CQ while it is under destruction.
 * @nic_cq_buf: NIC CQ buffer, shared for all ports.
 * @internal_qmans: Internal QMANs information. The array size is larger than
 *                  the actual number of internal queues because they are not in
 *                  consecutive order.
 * @hbm_bar_cur_addr: current address of HBM PCI bar.
 * @max_freq_value: current max clk frequency.
 * @nic_mac_loopback: enable MAC loopback on specific NIC ports.
 * @nic_cq_user_new_cqes: number of available CQEs to process.
 * @events: array that holds all event id's
 * @events_stat: array that holds histogram of all received events.
 * @events_stat_aggregate: same as events_stat but doesn't get cleared on reset
 * @hw_cap_initialized: This field contains a bit per H/W engine. When that
 *                      engine is initialized, that bit is set by the driver to
 *                      signal we can use this engine in later code paths.
 *                      Each bit is cleared upon reset of its corresponding H/W
 *                      engine.
 * @nic_cq_user_num_of_entries: number of CQ entries in the user CQ buffer
 *                              (received from the user).
 * @nic_cq_user_pi: producer index of the NIC CQ user buffer.
 * @nic_cq_user_ci: consumer index of the NIC CQ user buffer.
 * @nic_cq_status: return status of the CQ.
 * @nic_cq_mmap_size: size of the mmapped CQ buffer.
 * @nic_pcs_fail_time_frame: time frame is seconds to count PCS link failure.
 * @nic_pcs_fail_threshold: PCS link failures threshold to reset link.
 * @nic_qpc_cache_inv_timeout: timeout for NIC QPC cache invalidation.
 * @nic_phy_load_fw: true if the NIC PHY F/W should be loaded, false otherwise.
 * @nic_phy_config_fw: true if the NIC PHY F/W should be configured, false
 *                     otherwise. The NIC PHY F/W should be configured on ASIC
 *                     only, in contrary to simulator/Palladium.
 * @nic_cq_enable: true if NIC CQ is enabled, false otherwise.
 * @nic_cq_mmap: true if NIC CQ is mmapped, false otherwise.
 * @nic_use_fw_polarity: true if NIC should use polarity values from F/W,
 *                       false if NIC should use hard coded values.
 * @multi_msi_mode: whether we are working in multi MSI single MSI mode.
 *                  Multi MSI is possible only with IOMMU enabled.
 * @nic_in_reset: true if the NIC was marked as in reset, false otherwise. Used
 *                to avoid an additional stopping of the NIC if a hard reset was
 *                re-initiated.
 * @mmu_cache_inv_pi: PI for MMU cache invalidation flow. The H/W expects an
 *                    8-bit value so use u8.
 * @nic_check_link: true if the PCS link should be checked periodically.
 * @nic_cq_irq_enable: true if an interrupt was allocated for the NIC CQ.
 * @nic_in_teardown: true if the NIC is in teardown (during device remove).
 * @nic_phy_auto_neg_lpbk: true if the NIC PHY should support Autoneg in
 *                         loopback mode.
 * @nic_debugfs_reset: true if a device reset can be done from NIC debugfs.
 */
struct gaudi_device {
	int (*cpucp_info_get)(struct hl_device *hdev);
	void (*nic_handle_rx)(struct gaudi_nic_device *gaudi_nic);
	int (*nic_handle_tx)(struct gaudi_nic_device *gaudi_nic, void *data);
	struct gaudi_nic_device		nic_devices[NIC_NUMBER_OF_PORTS];
	struct gaudi_nic_macro		nic_macros[NIC_NUMBER_OF_MACROS];
	struct gaudi_nic_tx_taps	nic_pam4_tx_taps[NIC_MAX_NUM_OF_LANES];
	struct completion		nic_cq_comp;

	spinlock_t			nic_cq_lock;
	/* TODO: remove hw_queues_lock after moving to scheduler code */
	spinlock_t			hw_queues_lock;
	struct mutex			clk_gate_mutex;

	struct mutex			nic_cq_user_lock;
	struct mutex			nic_qp_err_lock;

	struct hl_nic_cqe		*nic_cq_buf;
	struct gaudi_internal_qman_info	internal_qmans[GAUDI_QUEUE_ID_SIZE];

	u64				hbm_bar_cur_addr;
	u64				max_freq_value;
	u64				nic_mac_loopback;

	atomic_t			nic_cq_user_new_cqes;

	u32				events[GAUDI_EVENT_SIZE];
	u32				events_stat[GAUDI_EVENT_SIZE];
	u32				events_stat_aggregate[GAUDI_EVENT_SIZE];
	u32				hw_cap_initialized;
	u32				nic_cq_user_num_of_entries;
	u32				nic_cq_user_pi;
	u32				nic_cq_user_ci;
	u32				nic_cq_status;
	u32				nic_cq_mmap_size;
	u32				nic_pcs_fail_time_frame;
	u32				nic_pcs_fail_threshold;
	u32				nic_qpc_cache_inv_timeout;
	u8				nic_phy_load_fw;
	u8				nic_phy_config_fw;
	u8				nic_cq_enable;
	u8				nic_cq_mmap;
	u8				nic_use_fw_polarity;
	u8				multi_msi_mode;
	u8				nic_in_reset;
	u8				mmu_cache_inv_pi;
	u8				nic_check_link;
	u8				nic_cq_irq_enable;
	u8				nic_in_teardown;
	u8				nic_phy_auto_neg_lpbk;
	u8				nic_debugfs_reset;
};

void gaudi_init_security(struct hl_device *hdev);
void gaudi_add_device_attr(struct hl_device *hdev,
			struct attribute_group *dev_attr_grp);
void gaudi_set_pll_profile(struct hl_device *hdev, enum hl_pll_frequency freq);
int gaudi_debug_coresight(struct hl_device *hdev, void *data);
void gaudi_halt_coresight(struct hl_device *hdev);
int gaudi_get_clk_rate(struct hl_device *hdev, u32 *cur_clk, u32 *max_clk);

/* NIC functions */

int gaudi_nic_ports_init(struct hl_device *hdev);
void gaudi_nic_ports_fini(struct hl_device *hdev);
int gaudi_nic_hard_reset_prepare(struct hl_device *hdev);
void gaudi_nic_stop(struct hl_device *hdev);
void gaudi_nic_ports_reopen(struct hl_device *hdev);
int gaudi_nic_get_mac_addr(struct hl_device *hdev,
				struct hl_info_mac_addr *mac_addr);
void gaudi_nic_ctx_fini(struct hl_ctx *ctx);
irqreturn_t gaudi_nic_rx_irq_handler(int irq, void *arg);
irqreturn_t gaudi_nic_cq_irq_handler(int irq, void *arg);
netdev_tx_t gaudi_nic_handle_tx_pkt(struct gaudi_nic_device *gaudi_nic,
					struct sk_buff *skb);
int gaudi_nic_sw_init(struct hl_device *hdev);
void gaudi_nic_sw_fini(struct hl_device *hdev);

#endif /* GAUDIP_H_ */
