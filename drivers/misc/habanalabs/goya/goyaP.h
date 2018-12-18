/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2016-2018 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

#ifndef GOYAP_H_
#define GOYAP_H_

#include "habanalabs.h"
#include "include/goya/goya_packets.h"
#include "include/goya/goya_boot_if.h"
#include "include/goya/goya.h"

#define NUMBER_OF_CMPLT_QUEUES		5
#define NUMBER_OF_EXT_HW_QUEUES		5
#define NUMBER_OF_CPU_HW_QUEUES		1
#define NUMBER_OF_INT_HW_QUEUES		9
#define NUMBER_OF_HW_QUEUES		(NUMBER_OF_EXT_HW_QUEUES + \
					NUMBER_OF_CPU_HW_QUEUES + \
					NUMBER_OF_INT_HW_QUEUES)

/*
 * Number of MSIX interrupts IDS:
 * Each completion queue has 1 ID
 * The event queue has 1 ID
 * ArmCP reset has 1 ID
 */
#define NUMBER_OF_INTERRUPTS		(NUMBER_OF_CMPLT_QUEUES + 2)

#if (NUMBER_OF_HW_QUEUES >= HL_MAX_QUEUES)
#error "Number of H/W queues must be smaller than HL_MAX_QUEUES"
#endif

#if (NUMBER_OF_INTERRUPTS > GOYA_MSIX_ENTRIES)
#error "Number of MSIX interrupts must be smaller or equal to GOYA_MSIX_ENTRIES"
#endif

#define QMAN_FENCE_TIMEOUT_USEC		10000	/* 10 ms */

#define QMAN_STOP_TIMEOUT_USEC		100000	/* 100 ms */

#define TPC_MAX_NUM			8
#define TPC_ENABLED_MASK		0xFF

#define DMA_MAX_NUM			5

#define PLL_HIGH_DEFAULT		1575000000	/* 1.575 GHz */

#define MAX_POWER_DEFAULT		200000		/* 200W */

#define GOYA_ARMCP_INFO_TIMEOUT		10000000	/* 10s */
#define GOYA_ARMCP_EEPROM_TIMEOUT	10000000	/* 10s */

#define DRAM_PHYS_DEFAULT_SIZE		0x100000000ull	/* 4GB */

/*
 * SRAM Memory Map for KMD
 *
 * KMD occupies KMD_SRAM_SIZE bytes from the start of SRAM. It is used for
 * MME/TPC QMANs
 *
 */

#define MME_QMAN_BASE_OFFSET	0x000000	/* Must be 0 */
#define MME_QMAN_LENGTH		64
#define TPC_QMAN_LENGTH		64

#define TPC0_QMAN_BASE_OFFSET	(MME_QMAN_BASE_OFFSET + \
				(MME_QMAN_LENGTH * QMAN_PQ_ENTRY_SIZE))
#define TPC1_QMAN_BASE_OFFSET	(TPC0_QMAN_BASE_OFFSET + \
				(TPC_QMAN_LENGTH * QMAN_PQ_ENTRY_SIZE))
#define TPC2_QMAN_BASE_OFFSET	(TPC1_QMAN_BASE_OFFSET + \
				(TPC_QMAN_LENGTH * QMAN_PQ_ENTRY_SIZE))
#define TPC3_QMAN_BASE_OFFSET	(TPC2_QMAN_BASE_OFFSET + \
				(TPC_QMAN_LENGTH * QMAN_PQ_ENTRY_SIZE))
#define TPC4_QMAN_BASE_OFFSET	(TPC3_QMAN_BASE_OFFSET + \
				(TPC_QMAN_LENGTH * QMAN_PQ_ENTRY_SIZE))
#define TPC5_QMAN_BASE_OFFSET	(TPC4_QMAN_BASE_OFFSET + \
				(TPC_QMAN_LENGTH * QMAN_PQ_ENTRY_SIZE))
#define TPC6_QMAN_BASE_OFFSET	(TPC5_QMAN_BASE_OFFSET + \
				(TPC_QMAN_LENGTH * QMAN_PQ_ENTRY_SIZE))
#define TPC7_QMAN_BASE_OFFSET	(TPC6_QMAN_BASE_OFFSET + \
				(TPC_QMAN_LENGTH * QMAN_PQ_ENTRY_SIZE))

#define SRAM_KMD_RES_OFFSET	(TPC7_QMAN_BASE_OFFSET + \
				(TPC_QMAN_LENGTH * QMAN_PQ_ENTRY_SIZE))

#if (SRAM_KMD_RES_OFFSET >= KMD_SRAM_RESERVED_SIZE)
#error "MME/TPC QMANs SRAM space exceeds limit"
#endif

#define SRAM_USER_BASE_OFFSET	KMD_SRAM_RESERVED_SIZE

#define DMA_MAX_TRANSFER_SIZE	0xFFFFFFFF

#define HW_CAP_PLL		0x00000001
#define HW_CAP_DDR_0		0x00000002
#define HW_CAP_DDR_1		0x00000004
#define HW_CAP_MME		0x00000008
#define HW_CAP_CPU		0x00000010
#define HW_CAP_DMA		0x00000020
#define HW_CAP_MSIX		0x00000040
#define HW_CAP_CPU_Q		0x00000080
#define HW_CAP_MMU		0x00000100
#define HW_CAP_TPC_MBIST	0x00000200
#define HW_CAP_GOLDEN		0x00000400
#define HW_CAP_TPC		0x00000800

#define CPU_PKT_SHIFT		5
#define CPU_PKT_SIZE		(1 << CPU_PKT_SHIFT)
#define CPU_PKT_MASK		(~((1 << CPU_PKT_SHIFT) - 1))
#define CPU_MAX_PKTS_IN_CB	32
#define CPU_CB_SIZE		(CPU_PKT_SIZE * CPU_MAX_PKTS_IN_CB)
#define CPU_ACCESSIBLE_MEM_SIZE	(HL_QUEUE_LENGTH * CPU_CB_SIZE)

enum goya_fw_component {
	FW_COMP_UBOOT,
	FW_COMP_PREBOOT
};

struct goya_device {
	int (*test_cpu_queue)(struct hl_device *hdev);
	int (*armcp_info_get)(struct hl_device *hdev);

	/* TODO: remove hw_queues_lock after moving to scheduler code */
	spinlock_t	hw_queues_lock;

	u64		mme_clk;
	u64		tpc_clk;
	u64		ic_clk;

	u64		ddr_bar_cur_addr;
	u32		events_stat[GOYA_ASYNC_EVENT_ID_SIZE];
	u32		hw_cap_initialized;
};

int goya_debugfs_i2c_read(struct hl_device *hdev, u8 i2c_bus,
			u8 i2c_addr, u8 i2c_reg, u32 *val);
int goya_debugfs_i2c_write(struct hl_device *hdev, u8 i2c_bus,
			u8 i2c_addr, u8 i2c_reg, u32 val);
int goya_test_cpu_queue(struct hl_device *hdev);
int goya_send_cpu_message(struct hl_device *hdev, u32 *msg, u16 len,
				u32 timeout, long *result);
long goya_get_temperature(struct hl_device *hdev, int sensor_index, u32 attr);
long goya_get_voltage(struct hl_device *hdev, int sensor_index, u32 attr);
long goya_get_current(struct hl_device *hdev, int sensor_index, u32 attr);
long goya_get_fan_speed(struct hl_device *hdev, int sensor_index, u32 attr);
long goya_get_pwm_info(struct hl_device *hdev, int sensor_index, u32 attr);
void goya_set_pwm_info(struct hl_device *hdev, int sensor_index, u32 attr,
			long value);
void goya_debugfs_led_set(struct hl_device *hdev, u8 led, u8 state);
void goya_set_pll_profile(struct hl_device *hdev, enum hl_pll_frequency freq);
int goya_add_device_attr(struct hl_device *hdev);
void goya_remove_device_attr(struct hl_device *hdev);
void goya_init_security(struct hl_device *hdev);
u64 goya_get_max_power(struct hl_device *hdev);
void goya_set_max_power(struct hl_device *hdev, u64 value);

#endif /* GOYAP_H_ */
