/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2016-2018 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 * Author: Oded Gabbay <oded.gabbay@gmail.com>
 *
 */

#ifndef GOYA_H
#define GOYA_H

#include "asic_reg/goya_regs.h"
#include "goya_async_events.h"

#include <linux/types.h>

#define SRAM_CFG_BAR_ID		0
#define MSIX_BAR_ID		2
#define DDR_BAR_ID		4

#define CFG_BAR_SIZE		0x10000000ull		/* 256MB */
#define MSIX_BAR_SIZE		0x1000ull		/* 4KB */

#define CFG_BASE		0x7FFC000000ull
#define CFG_SIZE		0x4000000		/* 32MB CFG + 32MB DBG*/

#define SRAM_BASE_ADDR		0x7FF0000000ull
#define SRAM_SIZE		0x32A0000		/* 50.625MB */
#define KMD_SRAM_RESERVED_SIZE	0x8000			/* 32KB */

#define SRAM_BASE_ADDR_USER	(0x7FF0000000ull + KMD_SRAM_RESERVED_SIZE)
#define SRAM_SIZE_USER		(SRAM_SIZE - KMD_SRAM_RESERVED_SIZE)

#define DRAM_PHYS_BASE		0x0ull

#define CPU_FW_IMAGE_SIZE	0x10000000	/* 256MB */
#define MMU_PAGE_TABLES_SIZE	0x0E000000	/* 224MB */
#define CPU_PQ_PKT_SIZE		0x00001000	/* 4KB */
#define CPU_PQ_DATA_SIZE	0x01FFF000	/* 32MB - 4KB  */

#define CPU_FW_IMAGE_ADDR	DRAM_PHYS_BASE
#define MMU_PAGE_TABLES_ADDR	(CPU_FW_IMAGE_ADDR + CPU_FW_IMAGE_SIZE)
#define CPU_PQ_PKT_ADDR		(MMU_PAGE_TABLES_ADDR + MMU_PAGE_TABLES_SIZE)
#define CPU_PQ_DATA_ADDR	(CPU_PQ_PKT_ADDR + CPU_PQ_PKT_SIZE)
#define DRAM_BASE_ADDR_USER	(CPU_PQ_DATA_ADDR + CPU_PQ_DATA_SIZE)

#define HOST_PHYS_BASE		0x8000000000ull		/* 0.5TB */
#define HOST_PHYS_SIZE		0x1000000000000ull	/* 0.25PB (48 bits) */

#define VA_HOST_SPACE_START	0x1000000000000ull	/* 256TB */
#define VA_HOST_SPACE_END	0x3FF8000000000ull	/* 1PB - 1TB */
#define VA_HOST_SPACE_SIZE	(VA_HOST_SPACE_END - \
					VA_HOST_SPACE_START) /* 767TB */

#define VA_DDR_SPACE_START	0x800000000ull		/* 32GB */
#define VA_DDR_SPACE_END	0x2000000000ull		/* 128GB */
#define VA_DDR_SPACE_SIZE	(VA_DDR_SPACE_END - \
					VA_DDR_SPACE_START)	/* 128GB */

#define CPU_BOOT_ADDR		0x7FF8040000ull

#define UBOOT_FW_OFFSET		0x100000		/* 1MB in SRAM */
#define LINUX_FW_OFFSET		0x800000		/* 8BM in DDR */

#define GOYA_MSIX_ENTRIES	8
#define EVENT_QUEUE_MSIX_IDX	5

#define QMAN_PQ_ENTRY_SIZE	16			/* Bytes */

#define MAX_ASID		1024

#define PROT_BITS_OFFS		0xF80

/*
 * Queue Numbering
 *
 * The external queues (DMA channels + CPU) MUST be before the internal queues
 * and each group (DMA channels + CPU and internal) must be contiguous inside
 * itself but there can be a gap between the two groups (although not
 * recommended)
 */

enum goya_queue_id {
	GOYA_QUEUE_ID_DMA_0 = 0,
	GOYA_QUEUE_ID_DMA_1,
	GOYA_QUEUE_ID_DMA_2,
	GOYA_QUEUE_ID_DMA_3,
	GOYA_QUEUE_ID_DMA_4,
	GOYA_QUEUE_ID_CPU_PQ,
	GOYA_QUEUE_ID_MME,
	GOYA_QUEUE_ID_TPC0,
	GOYA_QUEUE_ID_TPC1,
	GOYA_QUEUE_ID_TPC2,
	GOYA_QUEUE_ID_TPC3,
	GOYA_QUEUE_ID_TPC4,
	GOYA_QUEUE_ID_TPC5,
	GOYA_QUEUE_ID_TPC6,
	GOYA_QUEUE_ID_TPC7,
	GOYA_QUEUE_ID_SIZE
};

enum goya_pll_index {
	CPU_PLL = 0,
	IC_PLL,
	MC_PLL,
	MME_PLL,
	PCI_PLL,
	EMMC_PLL,
	TPC_PLL
};

#define GOYA_PLL_FREQ_LOW		50000000 /* 50 MHz */

#endif /* GOYA_H */
