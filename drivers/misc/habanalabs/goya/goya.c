// SPDX-License-Identifier: GPL-2.0

/*
 * Copyright 2016-2018 HabanaLabs, Ltd.
 * All Rights Reserved.
 */

#include "goyaP.h"
#include "include/goya/asic_reg/goya_masks.h"

#include <linux/fs.h>
#include <linux/delay.h>
#include <linux/vmalloc.h>
#include <linux/sched.h>
#include <linux/genalloc.h>
#include <linux/sysfs.h>
#include <linux/kfifo.h>
#include <linux/dma-mapping.h>
#include <linux/firmware.h>
#include <linux/log2.h>
#include <linux/hwmon.h>
#include <linux/string.h>
#include <linux/io.h>

/*
 * GOYA security scheme:
 *
 * 1. Host is protected by:
 *        - Range registers (When MMU is enabled, DMA RR does NOT protect host)
 *        - MMU
 *
 * 2. DRAM is protected by:
 *        - Range registers (protect the first 512MB)
 *        - MMU (isolation between users)
 *
 * 3. Configuration is protected by:
 *        - Range registers
 *        - Protection bits
 *
 * When MMU is disabled:
 *
 * QMAN DMA: PQ, CQ, CP, DMA are secured.
 * PQ, CB and the data are on the host.
 *
 * QMAN TPC/MME:
 * PQ, CQ and CP are not secured.
 * PQ, CB and the data are on the SRAM/DRAM.
 *
 * Since QMAN DMA is secured, KMD is parsing the DMA CB:
 *     - KMD checks DMA pointer
 *     - WREG, MSG_PROT are not allowed.
 *     - MSG_LONG/SHORT are allowed.
 *
 * A read/write transaction by the QMAN to a protected area will succeed if
 * and only if the QMAN's CP is secured and MSG_PROT is used
 *
 *
 * When MMU is enabled:
 *
 * QMAN DMA: PQ, CQ and CP are secured.
 * MMU is set to bypass on the Secure props register of the QMAN.
 * The reasons we don't enable MMU for PQ, CQ and CP are:
 *     - PQ entry is in kernel address space and KMD doesn't map it.
 *     - CP writes to MSIX register and to kernel address space (completion
 *       queue).
 *
 * DMA is not secured but because CP is secured, KMD still needs to parse the
 * CB, but doesn't need to check the DMA addresses.
 *
 * For QMAN DMA 0, DMA is also secured because only KMD uses this DMA and KMD
 * doesn't map memory in MMU.
 *
 * QMAN TPC/MME: PQ, CQ and CP aren't secured (no change from MMU disabled mode)
 *
 * DMA RR does NOT protect host because DMA is not secured
 *
 */

#define GOYA_MMU_REGS_NUM		61

#define GOYA_DMA_POOL_BLK_SIZE		0x100		/* 256 bytes */

#define GOYA_RESET_TIMEOUT_MSEC		500		/* 500ms */
#define GOYA_PLDM_RESET_TIMEOUT_MSEC	20000		/* 20s */
#define GOYA_RESET_WAIT_MSEC		1		/* 1ms */
#define GOYA_CPU_RESET_WAIT_MSEC	100		/* 100ms */
#define GOYA_PLDM_RESET_WAIT_MSEC	1000		/* 1s */
#define GOYA_CPU_TIMEOUT_USEC		10000000	/* 10s */
#define GOYA_TEST_QUEUE_WAIT_USEC	100000		/* 100ms */

#define GOYA_QMAN0_FENCE_VAL		0xD169B243

#define GOYA_MAX_INITIATORS		20

#define GOYA_CB_POOL_CB_CNT		512
#define GOYA_CB_POOL_CB_SIZE		0x20000		/* 128KB */

static void goya_get_fixed_properties(struct hl_device *hdev)
{
	struct asic_fixed_properties *prop = &hdev->asic_prop;

	prop->completion_queues_count = NUMBER_OF_CMPLT_QUEUES;

	prop->dram_base_address = DRAM_PHYS_BASE;
	prop->dram_size = DRAM_PHYS_DEFAULT_SIZE;
	prop->dram_end_address = prop->dram_base_address + prop->dram_size;
	prop->dram_user_base_address = DRAM_BASE_ADDR_USER;

	prop->sram_base_address = SRAM_BASE_ADDR;
	prop->sram_size = SRAM_SIZE;
	prop->sram_end_address = prop->sram_base_address + prop->sram_size;
	prop->sram_user_base_address = prop->sram_base_address +
						SRAM_USER_BASE_OFFSET;

	prop->host_phys_base_address = HOST_PHYS_BASE;
	prop->va_space_host_start_address = VA_HOST_SPACE_START;
	prop->va_space_host_end_address = VA_HOST_SPACE_END;
	prop->va_space_dram_start_address = VA_DDR_SPACE_START;
	prop->va_space_dram_end_address = VA_DDR_SPACE_END;
	prop->cfg_size = CFG_SIZE;
	prop->max_asid = MAX_ASID;
	prop->cb_pool_cb_cnt = GOYA_CB_POOL_CB_CNT;
	prop->cb_pool_cb_size = GOYA_CB_POOL_CB_SIZE;
	prop->tpc_enabled_mask = TPC_ENABLED_MASK;

	prop->high_pll = PLL_HIGH_DEFAULT;
}

/**
 * goya_pci_bars_map - Map PCI BARS of Goya device
 *
 * @hdev: pointer to hl_device structure
 *
 * Request PCI regions and map them to kernel virtual addresses.
 * Returns 0 on success
 *
 */
int goya_pci_bars_map(struct hl_device *hdev)
{
	struct pci_dev *pdev = hdev->pdev;
	int rc;

	rc = pci_request_regions(pdev, HL_NAME);
	if (rc) {
		dev_err(hdev->dev, "Cannot obtain PCI resources\n");
		return rc;
	}

	hdev->pcie_bar[SRAM_CFG_BAR_ID] =
			pci_ioremap_bar(pdev, SRAM_CFG_BAR_ID);
	if (!hdev->pcie_bar[SRAM_CFG_BAR_ID]) {
		dev_err(hdev->dev, "pci_ioremap_bar failed for CFG\n");
		rc = -ENODEV;
		goto err_release_regions;
	}

	hdev->pcie_bar[MSIX_BAR_ID] = pci_ioremap_bar(pdev, MSIX_BAR_ID);
	if (!hdev->pcie_bar[MSIX_BAR_ID]) {
		dev_err(hdev->dev, "pci_ioremap_bar failed for MSIX\n");
		rc = -ENODEV;
		goto err_unmap_sram_cfg;
	}

	hdev->pcie_bar[DDR_BAR_ID] = pci_ioremap_wc_bar(pdev, DDR_BAR_ID);
	if (!hdev->pcie_bar[DDR_BAR_ID]) {
		dev_err(hdev->dev, "pci_ioremap_bar failed for DDR\n");
		rc = -ENODEV;
		goto err_unmap_msix;
	}

	hdev->rmmio = hdev->pcie_bar[SRAM_CFG_BAR_ID] +
				(CFG_BASE - SRAM_BASE_ADDR);

	return 0;

err_unmap_msix:
	iounmap(hdev->pcie_bar[MSIX_BAR_ID]);
err_unmap_sram_cfg:
	iounmap(hdev->pcie_bar[SRAM_CFG_BAR_ID]);
err_release_regions:
	pci_release_regions(pdev);

	return rc;
}

/**
 * goya_pci_bars_unmap - Unmap PCI BARS of Goya device
 *
 * @hdev: pointer to hl_device structure
 *
 * Release all PCI BARS and unmap their virtual addresses
 *
 */
static void goya_pci_bars_unmap(struct hl_device *hdev)
{
	struct pci_dev *pdev = hdev->pdev;

	iounmap(hdev->pcie_bar[DDR_BAR_ID]);
	iounmap(hdev->pcie_bar[MSIX_BAR_ID]);
	iounmap(hdev->pcie_bar[SRAM_CFG_BAR_ID]);
	pci_release_regions(pdev);
}

/**
 * goya_elbi_write - Write through the ELBI interface
 *
 * @hdev: pointer to hl_device structure
 *
 * return 0 on success, -1 on failure
 *
 */
static int goya_elbi_write(struct hl_device *hdev, u64 addr, u32 data)
{
	struct pci_dev *pdev = hdev->pdev;
	ktime_t timeout;
	u32 val;

	/* Clear previous status */
	pci_write_config_dword(pdev, mmPCI_CONFIG_ELBI_STS, 0);

	pci_write_config_dword(pdev, mmPCI_CONFIG_ELBI_ADDR, (u32) addr);
	pci_write_config_dword(pdev, mmPCI_CONFIG_ELBI_DATA, data);
	pci_write_config_dword(pdev, mmPCI_CONFIG_ELBI_CTRL,
				PCI_CONFIG_ELBI_CTRL_WRITE);

	timeout = ktime_add_ms(ktime_get(), 10);
	for (;;) {
		pci_read_config_dword(pdev, mmPCI_CONFIG_ELBI_STS, &val);
		if (val & PCI_CONFIG_ELBI_STS_MASK)
			break;
		if (ktime_compare(ktime_get(), timeout) > 0) {
			pci_read_config_dword(pdev, mmPCI_CONFIG_ELBI_STS,
						&val);
			break;
		}
		usleep_range(300, 500);
	}

	if ((val & PCI_CONFIG_ELBI_STS_MASK) == PCI_CONFIG_ELBI_STS_DONE)
		return 0;

	if (val & PCI_CONFIG_ELBI_STS_ERR) {
		dev_err(hdev->dev, "Error writing to ELBI\n");
		return -1;
	}

	if (!(val & PCI_CONFIG_ELBI_STS_MASK)) {
		dev_err(hdev->dev, "ELBI write didn't finish in time\n");
		return -1;
	}

	dev_err(hdev->dev, "ELBI write has undefined bits in status\n");
	return -1;
}

/**
 * goya_iatu_write - iatu write routine
 *
 * @hdev: pointer to hl_device structure
 *
 */
static int goya_iatu_write(struct hl_device *hdev, u32 addr, u32 data)
{
	u32 dbi_offset;
	int rc;

	dbi_offset = addr & 0xFFF;

	rc = goya_elbi_write(hdev, CFG_BASE + mmPCIE_AUX_DBI, 0x00300000);
	rc |= goya_elbi_write(hdev, mmPCIE_DBI_BASE + dbi_offset, data);

	return rc;
}

void goya_reset_link_through_bridge(struct hl_device *hdev)
{
	struct pci_dev *pdev = hdev->pdev;
	struct pci_dev *parent_port;
	u16 val;

	parent_port = pdev->bus->self;
	pci_read_config_word(parent_port, PCI_BRIDGE_CONTROL, &val);
	val |= PCI_BRIDGE_CTL_BUS_RESET;
	pci_write_config_word(parent_port, PCI_BRIDGE_CONTROL, val);
	ssleep(1);

	val &= ~(PCI_BRIDGE_CTL_BUS_RESET);
	pci_write_config_word(parent_port, PCI_BRIDGE_CONTROL, val);
	ssleep(3);
}

/**
 * goya_set_ddr_bar_base - set DDR bar to map specific device address
 *
 * @hdev: pointer to hl_device structure
 * @addr: address in DDR. Must be aligned to DDR bar size
 *
 * This function configures the iATU so that the DDR bar will start at the
 * specified addr.
 *
 */
static int goya_set_ddr_bar_base(struct hl_device *hdev, u64 addr)
{
	struct goya_device *goya = hdev->asic_specific;
	int rc;

	if ((goya) && (goya->ddr_bar_cur_addr == addr))
		return 0;

	/* Inbound Region 1 - Bar 4 - Point to DDR */
	rc = goya_iatu_write(hdev, 0x314, lower_32_bits(addr));
	rc |= goya_iatu_write(hdev, 0x318, upper_32_bits(addr));
	rc |= goya_iatu_write(hdev, 0x300, 0);
	/* Enable + Bar match + match enable + Bar 4 */
	rc |= goya_iatu_write(hdev, 0x304, 0xC0080400);

	/* Return the DBI window to the default location */
	rc |= goya_elbi_write(hdev, CFG_BASE + mmPCIE_AUX_DBI, 0);
	rc |= goya_elbi_write(hdev, CFG_BASE + mmPCIE_AUX_DBI_32, 0);

	if (rc) {
		dev_err(hdev->dev, "failed to map DDR bar to 0x%08llx\n", addr);
		return rc;
	}

	if (goya)
		goya->ddr_bar_cur_addr = addr;

	return 0;
}

/**
 * goya_init_iatu - Initialize the iATU unit inside the PCI controller
 *
 * @hdev: pointer to hl_device structure
 *
 * This is needed in case the firmware doesn't initialize the iATU
 *
 */
static int goya_init_iatu(struct hl_device *hdev)
{
	int rc;

	/* Inbound Region 0 - Bar 0 - Point to SRAM_BASE_ADDR */
	rc  = goya_iatu_write(hdev, 0x114, lower_32_bits(SRAM_BASE_ADDR));
	rc |= goya_iatu_write(hdev, 0x118, upper_32_bits(SRAM_BASE_ADDR));
	rc |= goya_iatu_write(hdev, 0x100, 0);
	/* Enable + Bar match + match enable */
	rc |= goya_iatu_write(hdev, 0x104, 0xC0080000);

	/* Inbound Region 1 - Bar 4 - Point to DDR */
	rc |= goya_set_ddr_bar_base(hdev, DRAM_PHYS_BASE);

	/* Outbound Region 0 - Point to Host */
	rc |= goya_iatu_write(hdev, 0x008, lower_32_bits(HOST_PHYS_BASE));
	rc |= goya_iatu_write(hdev, 0x00C, upper_32_bits(HOST_PHYS_BASE));
	rc |= goya_iatu_write(hdev, 0x010,
		lower_32_bits(HOST_PHYS_BASE + HOST_PHYS_SIZE - 1));
	rc |= goya_iatu_write(hdev, 0x014, 0);
	rc |= goya_iatu_write(hdev, 0x018, 0);
	rc |= goya_iatu_write(hdev, 0x020,
		upper_32_bits(HOST_PHYS_BASE + HOST_PHYS_SIZE - 1));
	/* Increase region size */
	rc |= goya_iatu_write(hdev, 0x000, 0x00002000);
	/* Enable */
	rc |= goya_iatu_write(hdev, 0x004, 0x80000000);

	/* Return the DBI window to the default location */
	rc |= goya_elbi_write(hdev, CFG_BASE + mmPCIE_AUX_DBI, 0);
	rc |= goya_elbi_write(hdev, CFG_BASE + mmPCIE_AUX_DBI_32, 0);

	return rc;
}

/**
 * goya_early_init - GOYA early initialization code
 *
 * @hdev: pointer to hl_device structure
 *
 * Verify PCI bars
 * Set DMA masks
 * PCI controller initialization
 * Map PCI bars
 *
 */
static int goya_early_init(struct hl_device *hdev)
{
	struct asic_fixed_properties *prop = &hdev->asic_prop;
	struct pci_dev *pdev = hdev->pdev;
	u32 val;
	int rc;

	goya_get_fixed_properties(hdev);

	/* Check BAR sizes */
	if (pci_resource_len(pdev, SRAM_CFG_BAR_ID) != CFG_BAR_SIZE) {
		dev_err(hdev->dev,
			"Not " HL_NAME "? BAR %d size %llu, expecting %llu\n",
			SRAM_CFG_BAR_ID,
			pci_resource_len(pdev, SRAM_CFG_BAR_ID),
			CFG_BAR_SIZE);
		return -ENODEV;
	}

	if (pci_resource_len(pdev, MSIX_BAR_ID) != MSIX_BAR_SIZE) {
		dev_err(hdev->dev,
			"Not " HL_NAME "? BAR %d size %llu, expecting %llu\n",
			MSIX_BAR_ID, pci_resource_len(pdev, MSIX_BAR_ID),
			MSIX_BAR_SIZE);
		return -ENODEV;
	}

	prop->dram_pci_bar_size = pci_resource_len(pdev, DDR_BAR_ID);

	/* set DMA mask for GOYA */
	rc = pci_set_dma_mask(pdev, DMA_BIT_MASK(39));
	if (rc) {
		dev_warn(hdev->dev, "Unable to set pci dma mask to 39 bits\n");
		rc = pci_set_dma_mask(pdev, DMA_BIT_MASK(32));
		if (rc) {
			dev_err(hdev->dev,
				"Unable to set pci dma mask to 32 bits\n");
			return rc;
		}
	}

	rc = pci_set_consistent_dma_mask(pdev, DMA_BIT_MASK(39));
	if (rc) {
		dev_warn(hdev->dev,
			"Unable to set pci consistent dma mask to 39 bits\n");
		rc = pci_set_consistent_dma_mask(pdev, DMA_BIT_MASK(32));
		if (rc) {
			dev_err(hdev->dev,
				"Unable to set pci consistent dma mask to 32 bits\n");
			return rc;
		}
	}

	if (hdev->reset_pcilink)
		goya_reset_link_through_bridge(hdev);

	rc = pci_enable_device_mem(pdev);
	if (rc) {
		dev_err(hdev->dev, "can't enable PCI device\n");
		return rc;
	}

	pci_set_master(pdev);

	rc = goya_init_iatu(hdev);
	if (rc) {
		dev_err(hdev->dev, "Failed to initialize iATU\n");
		goto disable_device;
	}

	rc = goya_pci_bars_map(hdev);
	if (rc) {
		dev_err(hdev->dev, "Failed to initialize PCI BARS\n");
		goto disable_device;
	}

	if (!hdev->pldm) {
		val = RREG32(mmPSOC_GLOBAL_CONF_BOOT_STRAP_PINS);
		if (val & PSOC_GLOBAL_CONF_BOOT_STRAP_PINS_SRIOV_EN_MASK)
			dev_warn(hdev->dev,
				"PCI strap is not configured correctly, PCI bus errors may occur\n");
	}

	return 0;

disable_device:
	pci_clear_master(pdev);
	pci_disable_device(pdev);

	return rc;
}

/**
 * goya_early_fini - GOYA early finalization code
 *
 * @hdev: pointer to hl_device structure
 *
 * Unmap PCI bars
 *
 */
int goya_early_fini(struct hl_device *hdev)
{
	goya_pci_bars_unmap(hdev);

	pci_clear_master(hdev->pdev);
	pci_disable_device(hdev->pdev);

	return 0;
}

/**
 * goya_sw_init - Goya software initialization code
 *
 * @hdev: pointer to hl_device structure
 *
 */
static int goya_sw_init(struct hl_device *hdev)
{
	struct goya_device *goya;
	int rc;

	/* Allocate device structure */
	goya = kzalloc(sizeof(*goya), GFP_KERNEL);
	if (!goya)
		return -ENOMEM;

	/* according to goya_init_iatu */
	goya->ddr_bar_cur_addr = DRAM_PHYS_BASE;
	hdev->asic_specific = goya;

	/* Create DMA pool for small allocations */
	hdev->dma_pool = dma_pool_create(dev_name(hdev->dev),
			&hdev->pdev->dev, GOYA_DMA_POOL_BLK_SIZE, 8, 0);
	if (!hdev->dma_pool) {
		dev_err(hdev->dev, "failed to create DMA pool\n");
		rc = -ENOMEM;
		goto free_goya_device;
	}

	hdev->cpu_accessible_dma_mem =
			hdev->asic_funcs->dma_alloc_coherent(hdev,
					CPU_ACCESSIBLE_MEM_SIZE,
					&hdev->cpu_accessible_dma_address,
					GFP_KERNEL | __GFP_ZERO);

	if (!hdev->cpu_accessible_dma_mem) {
		dev_err(hdev->dev,
			"failed to allocate %d of dma memory for CPU accessible memory space\n",
			CPU_ACCESSIBLE_MEM_SIZE);
		rc = -ENOMEM;
		goto free_dma_pool;
	}

	hdev->cpu_accessible_dma_pool = gen_pool_create(CPU_PKT_SHIFT, -1);
	if (!hdev->cpu_accessible_dma_pool) {
		dev_err(hdev->dev,
			"Failed to create CPU accessible DMA pool\n");
		rc = -ENOMEM;
		goto free_cpu_pq_dma_mem;
	}

	rc = gen_pool_add(hdev->cpu_accessible_dma_pool,
				(u64) hdev->cpu_accessible_dma_mem,
				CPU_ACCESSIBLE_MEM_SIZE, -1);
	if (rc) {
		dev_err(hdev->dev,
			"Failed to add memory to CPU accessible DMA pool\n");
		rc = -EFAULT;
		goto free_cpu_pq_pool;
	}

	spin_lock_init(&goya->hw_queues_lock);

	return 0;

free_cpu_pq_pool:
	gen_pool_destroy(hdev->cpu_accessible_dma_pool);
free_cpu_pq_dma_mem:
	hdev->asic_funcs->dma_free_coherent(hdev, CPU_ACCESSIBLE_MEM_SIZE,
			hdev->cpu_accessible_dma_mem,
			hdev->cpu_accessible_dma_address);
free_dma_pool:
	dma_pool_destroy(hdev->dma_pool);
free_goya_device:
	kfree(goya);

	return rc;
}

/**
 * goya_sw_fini - Goya software tear-down code
 *
 * @hdev: pointer to hl_device structure
 *
 */
int goya_sw_fini(struct hl_device *hdev)
{
	struct goya_device *goya = hdev->asic_specific;

	gen_pool_destroy(hdev->cpu_accessible_dma_pool);

	hdev->asic_funcs->dma_free_coherent(hdev, CPU_ACCESSIBLE_MEM_SIZE,
			hdev->cpu_accessible_dma_mem,
			hdev->cpu_accessible_dma_address);

	dma_pool_destroy(hdev->dma_pool);

	kfree(goya);

	return 0;
}

/**
 * goya_init_pll - Initialize pll registers
 *
 * @hdev: pointer to hl_device structure
 *
 */
static void goya_init_pll(struct hl_device *hdev)
{
	struct goya_device *goya = hdev->asic_specific;
	u16 hbw_nr, hbw_nf, hbw_od, hbw_nb;
	u16 cpu_nr, cpu_nf, cpu_od, cpu_nb;
	u16 mc_nr, mc_nf, mc_od, mc_nb;
	u16 pci_nr, pci_nf, pci_od, pci_nb;
	u16 emmc_nr, emmc_nf, emmc_od, emmc_nb;

	if (!hdev->config_pll)
		return;

	if (goya->hw_cap_initialized & HW_CAP_PLL)
		return;

	if (hdev->cpu_enable) {
		dev_info(hdev->dev,
			"Waiting 5s for u-boot before configuring PLLs\n");
		ssleep(5);
	}

/*
 * PLL possible configuration values:
	{50000000,1,16,16,8},
	{100000000,1,32,16,16},
	{150000000,1,48,16,24},
	{200000000,1,64,16,32},
	{250000000,1,70,14,35},
	{300000000,1,60,10,30},
	{350000000,1,70,10,35},
	{400000000,1,64,8,32},
	{450000000,1,54,6,27},
	{500000000,1,60,6,30},
	{550000000,1,66,6,33},
	{600000000,1,48,4,24},
	{650000000,1,52,4,26},
	{700000000,1,56,4,28},
	{750000000,1,60,4,30},
	{800000000,1,64,4,32},
	{850000000,1,68,4,34},
	{900000000,1,36,2,18},
	{950000000,1,38,2,19},
	{1000000000,1,40,2,20},
	{1050000000,1,42,2,21},
	{1100000000,1,44,2,22},
	{1150000000,1,46,2,23},
	{1200000000,1,48,2,24},
	{1250000000,1,50,2,25},
	{1300000000,1,52,2,26},
	{1350000000,1,54,2,27},
	{1400000000,1,56,2,28},
	{1450000000,1,58,2,29},
	{1500000000,1,60,2,30},
	{1550000000,1,62,2,31},
*/

	if (hdev->pldm) {
		hbw_nr  = 4, hbw_nf  = 302, hbw_od  = 1, hbw_nb  = 151;
		cpu_nr  = 0, cpu_nf  = 47, cpu_od  = 1, cpu_nb  = 32;
		mc_nr   = 1, mc_nf   = 159, mc_od   = 9, mc_nb   = 79;
		pci_nr  = 4, pci_nf  = 343, pci_od  = 3, pci_nb  = 171;
		emmc_nr = 24, emmc_nf = 415, emmc_od = 15, emmc_nb = 207;
	} else {
		/* 200MHz */
		hbw_nr  = 0, hbw_nf  = 63, hbw_od  = 15, hbw_nb  = 31;
		cpu_nr  = 0, cpu_nf  = 47, cpu_od  = 1, cpu_nb  = 23;
		mc_nr   = 2, mc_nf   = 0x9f, mc_od   = 3, mc_nb   = 0x4f;
		pci_nr  = 4, pci_nf  = 343, pci_od  = 3, pci_nb  = 171;
		emmc_nr = 24, emmc_nf = 415, emmc_od = 15, emmc_nb = 207;
	}

	/* Adjust divider for SPI */
	WREG32(mmPSOC_SPI_BAUDR, 8);

	WREG32(mmCPU_PLL_RST, 1);
	WREG32(mmCPU_PLL_NR, cpu_nr);
	WREG32(mmCPU_PLL_NF, cpu_nf);
	WREG32(mmCPU_PLL_OD, cpu_od);
	WREG32(mmCPU_PLL_NB, cpu_nb);
	WREG32(mmCPU_PLL_DATA_CHNG, 0x11);

	/* delay before taking PLL out of reset */
	udelay(100);

	WREG32(mmCPU_PLL_RST, 0);
	WREG32(mmCPU_PLL_DIV_EN_0, 0x1);
	WREG32(mmCPU_PLL_DIV_SEL_0, 0x1);

	WREG32(mmCPU_PLL_DIV_FACTOR_1, 0x5);
	WREG32(mmCPU_PLL_DIV_FACTOR_CMD_1, 0x1);
	WREG32(mmCPU_PLL_DIV_EN_1, 0x1);
	WREG32(mmCPU_PLL_DIV_SEL_1, 0x3);

	WREG32(mmCPU_PLL_DIV_FACTOR_2, 0x1);
	WREG32(mmCPU_PLL_DIV_FACTOR_CMD_2, 0x1);
	WREG32(mmCPU_PLL_DIV_EN_2, 0x1);
	WREG32(mmCPU_PLL_DIV_SEL_2, 0x3);

	WREG32(mmIC_PLL_RST, 1);
	WREG32(mmIC_PLL_NR, hbw_nr);
	WREG32(mmIC_PLL_NF, hbw_nf);
	WREG32(mmIC_PLL_OD, hbw_od);
	WREG32(mmIC_PLL_NB, hbw_nb);
	WREG32(mmIC_PLL_DATA_CHNG, 0x11);

	udelay(100);

	WREG32(mmIC_PLL_RST, 0);
	WREG32(mmIC_PLL_DIV_EN_0, 0x1);
	WREG32(mmIC_PLL_DIV_SEL_0, 0x1);

	WREG32(mmIC_PLL_DIV_FACTOR_1, 0x1);
	WREG32(mmIC_PLL_DIV_FACTOR_CMD_1, 0x1);
	WREG32(mmIC_PLL_DIV_EN_1, 0x1);
	WREG32(mmIC_PLL_DIV_SEL_1, 0x3);

	WREG32(mmIC_PLL_DIV_FACTOR_2, 0x1);
	WREG32(mmIC_PLL_DIV_FACTOR_CMD_2, 0x1);
	WREG32(mmIC_PLL_DIV_EN_2, 0x1);
	WREG32(mmIC_PLL_DIV_SEL_2, 0x3);

	WREG32(mmIC_PLL_DIV_FACTOR_3, 0x8);
	WREG32(mmIC_PLL_DIV_FACTOR_CMD_3, 0x1);
	WREG32(mmIC_PLL_DIV_EN_3, 0x1);
	WREG32(mmIC_PLL_DIV_SEL_3, 0x3);

	if ((hdev->pldm) || (!hdev->cpu_enable)) {
		WREG32(mmMC_PLL_RST, 1);

		WREG32(mmMC_PLL_NR, mc_nr);
		WREG32(mmMC_PLL_NF, mc_nf);
		WREG32(mmMC_PLL_OD, mc_od);
		WREG32(mmMC_PLL_NB, mc_nb);
		WREG32(mmMC_PLL_DATA_CHNG, 0x11);

		udelay(100);

		WREG32(mmMC_PLL_RST, 0);
		WREG32(mmMC_PLL_DIV_EN_0, 0x1);
		WREG32(mmMC_PLL_DIV_SEL_0, 0x1);
	}

	WREG32(mmPSOC_MME_PLL_RST, 1);
	WREG32(mmPSOC_MME_PLL_NR, hbw_nr);
	WREG32(mmPSOC_MME_PLL_NF, hbw_nf);
	WREG32(mmPSOC_MME_PLL_OD, hbw_od);
	WREG32(mmPSOC_MME_PLL_NB, hbw_nb);
	WREG32(mmPSOC_MME_PLL_DATA_CHNG, 0x11);

	udelay(100);

	WREG32(mmPSOC_MME_PLL_RST, 0);
	WREG32(mmPSOC_MME_PLL_DIV_EN_0, 0x1);
	WREG32(mmPSOC_MME_PLL_DIV_SEL_0, 0x1);

	WREG32(mmPSOC_MME_PLL_DIV_FACTOR_1, 0x1);
	WREG32(mmPSOC_MME_PLL_DIV_FACTOR_CMD_1, 0x1);
	WREG32(mmPSOC_MME_PLL_DIV_EN_1, 0x1);
	WREG32(mmPSOC_MME_PLL_DIV_SEL_1, 0x3);

	WREG32(mmPSOC_MME_PLL_DIV_FACTOR_2, 0x2);
	WREG32(mmPSOC_MME_PLL_DIV_FACTOR_CMD_2, 0x1);
	WREG32(mmPSOC_MME_PLL_DIV_EN_2, 0x1);
	WREG32(mmPSOC_MME_PLL_DIV_SEL_2, 0x3);

	WREG32(mmPSOC_MME_PLL_DIV_FACTOR_3, 0x8);
	WREG32(mmPSOC_MME_PLL_DIV_FACTOR_CMD_3, 0x1);
	WREG32(mmPSOC_MME_PLL_DIV_EN_3, 0x1);
	WREG32(mmPSOC_MME_PLL_DIV_SEL_3, 0x3);

	WREG32(mmPSOC_PCI_PLL_RST, 1);
	WREG32(mmPSOC_PCI_PLL_NR, pci_nr);
	WREG32(mmPSOC_PCI_PLL_NF, pci_nf);
	WREG32(mmPSOC_PCI_PLL_OD, pci_od);
	WREG32(mmPSOC_PCI_PLL_NB, pci_nb);
	WREG32(mmPSOC_PCI_PLL_DATA_CHNG, 0x11);

	udelay(100);

	WREG32(mmPSOC_PCI_PLL_RST, 0);
	WREG32(mmPSOC_PCI_PLL_DIV_EN_0, 0x1);
	WREG32(mmPSOC_PCI_PLL_DIV_SEL_0, 0x1);

	WREG32(mmPSOC_PCI_PLL_DIV_FACTOR_1, 0x4);
	WREG32(mmPSOC_PCI_PLL_DIV_FACTOR_CMD_1, 0x1);
	WREG32(mmPSOC_PCI_PLL_DIV_EN_1, 0x1);
	WREG32(mmPSOC_PCI_PLL_DIV_SEL_1, 0x3);

	WREG32(mmPSOC_PCI_PLL_DIV_FACTOR_2, 0x8);
	WREG32(mmPSOC_PCI_PLL_DIV_FACTOR_CMD_2, 0x1);
	WREG32(mmPSOC_PCI_PLL_DIV_EN_2, 0x1);
	WREG32(mmPSOC_PCI_PLL_DIV_SEL_2, 0x3);

	WREG32(mmPSOC_PCI_PLL_DIV_FACTOR_3, 0x55);
	WREG32(mmPSOC_PCI_PLL_DIV_FACTOR_CMD_3, 0x1);
	WREG32(mmPSOC_PCI_PLL_DIV_EN_3, 0x1);
	WREG32(mmPSOC_PCI_PLL_DIV_SEL_3, 0x3);

	WREG32(mmPSOC_EMMC_PLL_RST, 1);
	WREG32(mmPSOC_EMMC_PLL_NR, emmc_nr);
	WREG32(mmPSOC_EMMC_PLL_NF, emmc_nf);
	WREG32(mmPSOC_EMMC_PLL_OD, emmc_od);
	WREG32(mmPSOC_EMMC_PLL_NB, emmc_nb);
	WREG32(mmPSOC_EMMC_PLL_DATA_CHNG, 0x11);

	udelay(100);

	WREG32(mmPSOC_EMMC_PLL_RST, 0);
	WREG32(mmPSOC_EMMC_PLL_DIV_EN_0, 0x1);
	WREG32(mmPSOC_EMMC_PLL_DIV_SEL_0, 0x1);

	WREG32(mmPSOC_EMMC_PLL_DIV_FACTOR_1, 0x1);
	WREG32(mmPSOC_EMMC_PLL_DIV_FACTOR_CMD_1, 0x1);
	WREG32(mmPSOC_EMMC_PLL_DIV_EN_1, 0x1);
	WREG32(mmPSOC_EMMC_PLL_DIV_SEL_1, 0x3);

	/* 200MHz*/
	WREG32(mmTPC_PLL_RST, 1);
	WREG32(mmTPC_PLL_NR, hbw_nr);
	WREG32(mmTPC_PLL_NF, hbw_nf);
	WREG32(mmTPC_PLL_OD, hbw_od);
	WREG32(mmTPC_PLL_NB, hbw_nb);
	WREG32(mmTPC_PLL_DATA_CHNG, 0x11);

	udelay(100);

	WREG32(mmTPC_PLL_RST, 0);
	WREG32(mmTPC_PLL_DIV_EN_0, 0x1);
	WREG32(mmTPC_PLL_DIV_SEL_0, 0x1);

	WREG32(mmTPC_PLL_DIV_FACTOR_1, 0x1);
	WREG32(mmTPC_PLL_DIV_FACTOR_CMD_1, 0x1);
	WREG32(mmTPC_PLL_DIV_EN_1, 0x1);
	WREG32(mmTPC_PLL_DIV_SEL_1, 0x3);

	WREG32(mmTPC_PLL_DIV_FACTOR_2, 0x1);
	WREG32(mmTPC_PLL_DIV_FACTOR_CMD_2, 0x1);
	WREG32(mmTPC_PLL_DIV_EN_2, 0x1);
	WREG32(mmTPC_PLL_DIV_SEL_2, 0x3);

	WREG32(mmTPC_PLL_DIV_FACTOR_3, 0x8);
	WREG32(mmTPC_PLL_DIV_FACTOR_CMD_3, 0x1);
	WREG32(mmTPC_PLL_DIV_EN_3, 0x1);
	WREG32(mmTPC_PLL_DIV_SEL_3, 0x3);

	goya->hw_cap_initialized |= HW_CAP_PLL;
}

static void goya_set_pll_refclk(struct hl_device *hdev)
{
	WREG32(mmCPU_PLL_DIV_SEL_0, 0x0);
	WREG32(mmCPU_PLL_DIV_SEL_1, 0x0);
	WREG32(mmCPU_PLL_DIV_SEL_2, 0x0);
	WREG32(mmCPU_PLL_DIV_SEL_3, 0x0);

	WREG32(mmIC_PLL_DIV_SEL_0, 0x0);
	WREG32(mmIC_PLL_DIV_SEL_1, 0x0);
	WREG32(mmIC_PLL_DIV_SEL_2, 0x0);
	WREG32(mmIC_PLL_DIV_SEL_3, 0x0);

	WREG32(mmMC_PLL_DIV_SEL_0, 0x0);
	WREG32(mmMC_PLL_DIV_SEL_1, 0x0);
	WREG32(mmMC_PLL_DIV_SEL_2, 0x0);
	WREG32(mmMC_PLL_DIV_SEL_3, 0x0);

	WREG32(mmPSOC_MME_PLL_DIV_SEL_0, 0x0);
	WREG32(mmPSOC_MME_PLL_DIV_SEL_1, 0x0);
	WREG32(mmPSOC_MME_PLL_DIV_SEL_2, 0x0);
	WREG32(mmPSOC_MME_PLL_DIV_SEL_3, 0x0);

	WREG32(mmPSOC_PCI_PLL_DIV_SEL_0, 0x0);
	WREG32(mmPSOC_PCI_PLL_DIV_SEL_1, 0x0);
	WREG32(mmPSOC_PCI_PLL_DIV_SEL_2, 0x0);
	WREG32(mmPSOC_PCI_PLL_DIV_SEL_3, 0x0);

	WREG32(mmPSOC_EMMC_PLL_DIV_SEL_0, 0x0);
	WREG32(mmPSOC_EMMC_PLL_DIV_SEL_1, 0x0);
	WREG32(mmPSOC_EMMC_PLL_DIV_SEL_2, 0x0);
	WREG32(mmPSOC_EMMC_PLL_DIV_SEL_3, 0x0);

	WREG32(mmTPC_PLL_DIV_SEL_0, 0x0);
	WREG32(mmTPC_PLL_DIV_SEL_1, 0x0);
	WREG32(mmTPC_PLL_DIV_SEL_2, 0x0);
	WREG32(mmTPC_PLL_DIV_SEL_3, 0x0);
}

static void goya_disable_clk_rlx(struct hl_device *hdev)
{
	WREG32(mmPSOC_MME_PLL_CLK_RLX_0, 0x100010);
	WREG32(mmIC_PLL_CLK_RLX_0, 0x100010);
}

/**
 * goya_init_ddr_ch0 - Initialize DDR CH0 controller of the chip
 *
 * @hdev: pointer to hl_device structure
 *
 */
static void goya_init_ddr_ch0(struct hl_device *hdev)
{
	struct goya_device *goya = hdev->asic_specific;
	u32 val;

	if (goya->hw_cap_initialized & HW_CAP_DDR_0)
		return;

	val = RREG32(mmDDR_MISC_CH0_CFG_DONE);
	if (val & DDR_MISC_CH0_CFG_DONE_CFG_DONE_MASK) {
		goya->hw_cap_initialized |= HW_CAP_DDR_0;
		return;
	}

	WREG32(mmDDR_MC_CH0_DBG1, 0x00000001);
	WREG32(mmDDR_MC_CH0_PWRCTL, 0x00000001);

	val = RREG32(mmDDR_MC_CH0_STAT);

	WREG32(mmDDR_MC_CH0_MSTR, 0x81040210);
	WREG32(mmDDR_MC_CH0_MRCTRL0, 0x4000a0f0);
	WREG32(mmDDR_MC_CH0_MRCTRL1, 0x00022ad0);
	WREG32(mmDDR_MC_CH0_MRCTRL2, 0x091629e1);
	WREG32(mmDDR_MC_CH0_PWRCTL, 0x00000008);
	WREG32(mmDDR_MC_CH0_PWRTMG, 0x00040002);
	WREG32(mmDDR_MC_CH0_HWLPCTL, 0x00be0002);
	WREG32(mmDDR_MC_CH0_RFSHCTL0, 0x0091f020);
	WREG32(mmDDR_MC_CH0_RFSHCTL1, 0x00120018);
	WREG32((mmDDR_MC_CH0_MSTR + 0x00000058), 0x00160005);
	WREG32(mmDDR_MC_CH0_RFSHCTL3, 0x00000020);
	WREG32(mmDDR_MC_CH0_RFSHTMG, 0x003000d0);
	WREG32(mmDDR_MC_CH0_ECCCFG0, 0x00000010);
	WREG32(mmDDR_MC_CH0_ECCCFG1, 0x00000002);
	WREG32(mmDDR_MC_CH0_ECCCTL, 0x00000300);
	WREG32(mmDDR_MC_CH0_ECCPOISONADDR0, 0x00000078);
	WREG32(mmDDR_MC_CH0_ECCPOISONADDR1, 0x100062f7);
	WREG32(mmDDR_MC_CH0_CRCPARCTL0, 0x00008000);
	WREG32(mmDDR_MC_CH0_CRCPARCTL1, 0x0e088301);
	WREG32(mmDDR_MC_CH0_CRCPARCTL2, 0x00600527);
	WREG32(mmDDR_MC_CH0_INIT0, 0x00070002);
	WREG32(mmDDR_MC_CH0_INIT1, 0x0001000e);
	WREG32(mmDDR_MC_CH0_INIT3, 0x0c510001);
	WREG32(mmDDR_MC_CH0_INIT4, 0x00280400);
	WREG32(mmDDR_MC_CH0_INIT5, 0x00110000);
	WREG32(mmDDR_MC_CH0_INIT6, 0x02000643);
	WREG32(mmDDR_MC_CH0_INIT7, 0x00001000);
	WREG32(mmDDR_MC_CH0_DIMMCTL, 0x00000000);
	WREG32(mmDDR_MC_CH0_RANKCTL, 0x000009a0);
	WREG32(mmDDR_MC_CH0_DRAMTMG0, 0x1918361a);
	WREG32(mmDDR_MC_CH0_DRAMTMG1, 0x00080724);
	WREG32(mmDDR_MC_CH0_DRAMTMG2, 0x080d0713);
	WREG32(mmDDR_MC_CH0_DRAMTMG3, 0x00012012);
	WREG32(mmDDR_MC_CH0_DRAMTMG4, 0x0b04060b);
	WREG32(mmDDR_MC_CH0_DRAMTMG5, 0x0a0c0804);
	WREG32(mmDDR_MC_CH0_DRAMTMG8, 0x0606490c);
	WREG32(mmDDR_MC_CH0_DRAMTMG9, 0x0002050f);
	WREG32(mmDDR_MC_CH0_DRAMTMG10, 0x000e0d0f);
	WREG32(mmDDR_MC_CH0_DRAMTMG11, 0x270b011f);
	WREG32(mmDDR_MC_CH0_DRAMTMG12, 0x00000010);
	WREG32(mmDDR_MC_CH0_DRAMTMG15, 0x00000000);
	WREG32(mmDDR_MC_CH0_ZQCTL0, 0x31000040);
	WREG32(mmDDR_MC_CH0_ZQCTL1, 0x00000070);
	WREG32(mmDDR_MC_CH0_DFITMG0, 0x05978211);
	WREG32(mmDDR_MC_CH0_DFITMG1, 0x00080101);
	WREG32(mmDDR_MC_CH0_DFILPCFG0, 0x07006031);
	WREG32(mmDDR_MC_CH0_DFILPCFG1, 0x00000010);
	WREG32(mmDDR_MC_CH0_DFIUPD0, 0x40400018);
	WREG32(mmDDR_MC_CH0_DFIUPD1, 0x000b0046);
	WREG32(mmDDR_MC_CH0_DFIUPD2, 0x00000000);
	WREG32(mmDDR_MC_CH0_DFIMISC, 0x00000041);
	WREG32(mmDDR_MC_CH0_DFITMG2, 0x00001711);
	WREG32(mmDDR_MC_CH0_DFITMG3, 0x0000001e);
	WREG32(mmDDR_MC_CH0_DBICTL, 0x00000001);
	WREG32(mmDDR_MC_CH0_DFIPHYMSTR, 0x00000000);
	WREG32(mmDDR_MC_CH0_ADDRMAP0, 0x00001f1f);
	WREG32(mmDDR_MC_CH0_ADDRMAP1, 0x003f1503);
	WREG32(mmDDR_MC_CH0_ADDRMAP2, 0x01000400);
	WREG32(mmDDR_MC_CH0_ADDRMAP3, 0x04000505);
	WREG32(mmDDR_MC_CH0_ADDRMAP4, 0x00001f1f);
	WREG32(mmDDR_MC_CH0_ADDRMAP5, 0x06060303);
	WREG32(mmDDR_MC_CH0_ADDRMAP6, 0x0f050709);
	WREG32(mmDDR_MC_CH0_ADDRMAP7, 0x00000f0f);
	WREG32(mmDDR_MC_CH0_ADDRMAP8, 0x00003f01);
	WREG32(mmDDR_MC_CH0_ADDRMAP9, 0x09000606);
	WREG32(mmDDR_MC_CH0_ADDRMAP10, 0x02090105);
	WREG32(mmDDR_MC_CH0_ADDRMAP11, 0x0000000a);
	WREG32(mmDDR_MC_CH0_ODTCFG, 0x09090a08);
	WREG32(mmDDR_MC_CH0_ODTMAP, 0x9ae1b5fe);
	WREG32(mmDDR_MC_CH0_SCHED, 0x664d3700);
	WREG32(mmDDR_MC_CH0_SCHED1, 0x00000000);
	WREG32(mmDDR_MC_CH0_PERFHPR1, 0x1700e024);
	WREG32(mmDDR_MC_CH0_PERFLPR1, 0x1e00836c);
	WREG32(mmDDR_MC_CH0_PERFWR1, 0x260046c9);
	WREG32(mmDDR_MC_CH0_DQMAP0, 0x0d2b3503);
	WREG32(mmDDR_MC_CH0_DQMAP1, 0x042a0537);
	WREG32(mmDDR_MC_CH0_DQMAP2, 0x330b2806);
	WREG32(mmDDR_MC_CH0_DQMAP3, 0x27013803);
	WREG32(mmDDR_MC_CH0_DQMAP4, 0x0000022c);
	WREG32(mmDDR_MC_CH0_DQMAP5, 0x00000001);
	WREG32(mmDDR_MC_CH0_DBG0, 0x00000001);
	WREG32(mmDDR_MC_CH0_DBG1, 0x00000000);
	WREG32(mmDDR_MC_CH0_DBGCMD, 0x00000000);
	WREG32(mmDDR_MC_CH0_SWCTL, 0x00000001);
	WREG32(mmDDR_MC_CH0_POISONCFG, 0x00000001);
	WREG32(mmDDR_MC_CH0_ADVECCINDEX, 0x00000004);
	WREG32(mmDDR_MC_CH0_ECCPOISONPAT0, 0x00000000);
	WREG32(mmDDR_MC_CH0_ECCPOISONPAT1, 0x00000000);
	WREG32(mmDDR_MC_CH0_ECCPOISONPAT2, 0x00000000);
	WREG32(mmDDR_MC_CH0_CAPARPOISONCTL, 0x00000000);
	WREG32(mmDDR_MC_CH0_PCCFG, 0x00000011);
	WREG32(mmDDR_MC_CH0_PCFGR_0, 0x0000518c);
	WREG32(mmDDR_MC_CH0_PCFGW_0, 0x00001263);
	WREG32(mmDDR_MC_CH0_PCTRL_0, 0x00000001);
	WREG32(mmDDR_MC_CH0_PCFGQOS0_0, 0x0011000e);
	WREG32(mmDDR_MC_CH0_SBRCTL, 0x0016b540);
	WREG32(mmDDR_MC_CH0_SBRWDATA0, 0x8c1d1786);
	WREG32(mmDDR_MC_CH0_SBRWDATA1, 0x265f03dd);

	val = RREG32(mmDDR_MC_CH0_RFSHCTL3);

	WREG32(mmDDR_MISC_CH0_CFG_DONE, 0x00000001);

	WREG32(mmDDR_MC_CH0_DBG1, 0x00000000);

	val = RREG32(mmDDR_MC_CH0_PWRCTL);

	WREG32(mmDDR_MC_CH0_PWRCTL, 0x00000002);

	val = RREG32(mmDDR_MC_CH0_PWRCTL);

	WREG32(mmDDR_MC_CH0_PWRCTL, 0x00000000);
	WREG32(mmDDR_MC_CH0_SWCTL, 0x00000000);
	WREG32(mmDDR_MC_CH0_DFIMISC, 0x00000041);
	WREG32(mmDDR_MC_CH0_DFIMISC, 0x00000040);
	WREG32(mmDDR_MC_CH0_DFIMISC, 0x00000040);
	WREG32(mmDDR_MC_CH0_DFIMISC, 0x00000060);
	WREG32(mmDDR_MC_CH0_DFIMISC, 0x00000040);
	WREG32(mmDDR_MC_CH0_DFIMISC, 0x00000041);
	WREG32(mmDDR_MC_CH0_DFIMISC, 0x00000041);
	WREG32(mmDDR_MC_CH0_PCTRL_0, 0x00000001);

	goya->hw_cap_initialized |= HW_CAP_DDR_0;
}

/**
 * goya_init_ddr_ch1 - Initialize DDR CH1 controller of the chip
 *
 * @hdev: pointer to hl_device structure
 *
 */
static void goya_init_ddr_ch1(struct hl_device *hdev)
{
	struct goya_device *goya = hdev->asic_specific;
	u32 val;

	if (goya->hw_cap_initialized & HW_CAP_DDR_1)
		return;

	val = RREG32(mmDDR_MISC_CH1_CFG_DONE);
	if (val & DDR_MISC_CH1_CFG_DONE_CFG_DONE_MASK) {
		goya->hw_cap_initialized |= HW_CAP_DDR_1;
		return;
	}

	WREG32(mmDDR_MC_CH1_DBG1, 0x00000001);
	WREG32(mmDDR_MC_CH1_PWRCTL, 0x00000001);

	val = RREG32(mmDDR_MC_CH1_STAT);

	WREG32(mmDDR_MC_CH1_MSTR, 0x81040210);
	WREG32(mmDDR_MC_CH1_MRCTRL0, 0x4000a0f0);
	WREG32(mmDDR_MC_CH1_MRCTRL1, 0x00022ad0);
	WREG32(mmDDR_MC_CH1_MRCTRL2, 0x091629e1);
	WREG32(mmDDR_MC_CH1_PWRCTL, 0x00000008);
	WREG32(mmDDR_MC_CH1_PWRTMG, 0x00040002);
	WREG32(mmDDR_MC_CH1_HWLPCTL, 0x00be0002);
	WREG32(mmDDR_MC_CH1_RFSHCTL0, 0x0091f020);
	WREG32(mmDDR_MC_CH1_RFSHCTL1, 0x00120018);
	WREG32((mmDDR_MC_CH1_MSTR + 0x00000058), 0x00160005);
	WREG32(mmDDR_MC_CH1_RFSHCTL3, 0x00000020);
	WREG32(mmDDR_MC_CH1_RFSHTMG, 0x003000d0);
	WREG32(mmDDR_MC_CH1_ECCCFG0, 0x00000010);
	WREG32(mmDDR_MC_CH1_ECCCFG1, 0x00000002);
	WREG32(mmDDR_MC_CH1_ECCCTL, 0x00000300);
	WREG32(mmDDR_MC_CH1_ECCPOISONADDR0, 0x00000078);
	WREG32(mmDDR_MC_CH1_ECCPOISONADDR1, 0x100062f7);
	WREG32(mmDDR_MC_CH1_CRCPARCTL0, 0x00008000);
	WREG32(mmDDR_MC_CH1_CRCPARCTL1, 0x0e088301);
	WREG32(mmDDR_MC_CH1_CRCPARCTL2, 0x00600527);
	WREG32(mmDDR_MC_CH1_INIT0, 0x00070002);
	WREG32(mmDDR_MC_CH1_INIT1, 0x0001000e);
	WREG32(mmDDR_MC_CH1_INIT3, 0x0c510001);
	WREG32(mmDDR_MC_CH1_INIT4, 0x00280400);
	WREG32(mmDDR_MC_CH1_INIT5, 0x00110000);
	WREG32(mmDDR_MC_CH1_INIT6, 0x02000643);
	WREG32(mmDDR_MC_CH1_INIT7, 0x00001000);
	WREG32(mmDDR_MC_CH1_DIMMCTL, 0x00000000);
	WREG32(mmDDR_MC_CH1_RANKCTL, 0x000009a0);
	WREG32(mmDDR_MC_CH1_DRAMTMG0, 0x1918361a);
	WREG32(mmDDR_MC_CH1_DRAMTMG1, 0x00080724);
	WREG32(mmDDR_MC_CH1_DRAMTMG2, 0x080d0713);
	WREG32(mmDDR_MC_CH1_DRAMTMG3, 0x00012012);
	WREG32(mmDDR_MC_CH1_DRAMTMG4, 0x0b04060b);
	WREG32(mmDDR_MC_CH1_DRAMTMG5, 0x0a0c0804);
	WREG32(mmDDR_MC_CH1_DRAMTMG8, 0x0606490c);
	WREG32(mmDDR_MC_CH1_DRAMTMG9, 0x0002050f);
	WREG32(mmDDR_MC_CH1_DRAMTMG10, 0x000e0d0f);
	WREG32(mmDDR_MC_CH1_DRAMTMG11, 0x270b011f);
	WREG32(mmDDR_MC_CH1_DRAMTMG12, 0x00000010);
	WREG32(mmDDR_MC_CH1_DRAMTMG15, 0x00000000);
	WREG32(mmDDR_MC_CH1_ZQCTL0, 0x31000040);
	WREG32(mmDDR_MC_CH1_ZQCTL1, 0x00000070);
	WREG32(mmDDR_MC_CH1_DFITMG0, 0x05978211);
	WREG32(mmDDR_MC_CH1_DFITMG1, 0x00080101);
	WREG32(mmDDR_MC_CH1_DFILPCFG0, 0x07006031);
	WREG32(mmDDR_MC_CH1_DFILPCFG1, 0x00000010);
	WREG32(mmDDR_MC_CH1_DFIUPD0, 0x40400018);
	WREG32(mmDDR_MC_CH1_DFIUPD1, 0x000b0046);
	WREG32(mmDDR_MC_CH1_DFIUPD2, 0x00000000);
	WREG32(mmDDR_MC_CH1_DFIMISC, 0x00000041);
	WREG32(mmDDR_MC_CH1_DFITMG2, 0x00001711);
	WREG32(mmDDR_MC_CH1_DFITMG3, 0x0000001e);
	WREG32(mmDDR_MC_CH1_DBICTL, 0x00000001);
	WREG32(mmDDR_MC_CH1_DFIPHYMSTR, 0x00000000);
	WREG32(mmDDR_MC_CH1_ADDRMAP0, 0x00001f1f);
	WREG32(mmDDR_MC_CH1_ADDRMAP1, 0x003f1503);
	WREG32(mmDDR_MC_CH1_ADDRMAP2, 0x01000400);
	WREG32(mmDDR_MC_CH1_ADDRMAP3, 0x04000505);
	WREG32(mmDDR_MC_CH1_ADDRMAP4, 0x00001f1f);
	WREG32(mmDDR_MC_CH1_ADDRMAP5, 0x06060303);
	WREG32(mmDDR_MC_CH1_ADDRMAP6, 0x0f050709);
	WREG32(mmDDR_MC_CH1_ADDRMAP7, 0x00000f0f);
	WREG32(mmDDR_MC_CH1_ADDRMAP8, 0x00003f01);
	WREG32(mmDDR_MC_CH1_ADDRMAP9, 0x09000606);
	WREG32(mmDDR_MC_CH1_ADDRMAP10, 0x02090105);
	WREG32(mmDDR_MC_CH1_ADDRMAP11, 0x0000000a);
	WREG32(mmDDR_MC_CH1_ODTCFG, 0x09090a08);
	WREG32(mmDDR_MC_CH1_ODTMAP, 0x9ae1b5fe);
	WREG32(mmDDR_MC_CH1_SCHED, 0x664d3700);
	WREG32(mmDDR_MC_CH1_SCHED1, 0x00000000);
	WREG32(mmDDR_MC_CH1_PERFHPR1, 0x1700e024);
	WREG32(mmDDR_MC_CH1_PERFLPR1, 0x1e00836c);
	WREG32(mmDDR_MC_CH1_PERFWR1, 0x260046c9);
	WREG32(mmDDR_MC_CH1_DQMAP0, 0x0d2b3503);
	WREG32(mmDDR_MC_CH1_DQMAP1, 0x042a0537);
	WREG32(mmDDR_MC_CH1_DQMAP2, 0x330b2806);
	WREG32(mmDDR_MC_CH1_DQMAP3, 0x27013803);
	WREG32(mmDDR_MC_CH1_DQMAP4, 0x0000022c);
	WREG32(mmDDR_MC_CH1_DQMAP5, 0x00000001);
	WREG32(mmDDR_MC_CH1_DBG0, 0x00000001);
	WREG32(mmDDR_MC_CH1_DBG1, 0x00000000);
	WREG32(mmDDR_MC_CH1_DBGCMD, 0x00000000);
	WREG32(mmDDR_MC_CH1_SWCTL, 0x00000001);
	WREG32(mmDDR_MC_CH1_POISONCFG, 0x00000001);
	WREG32(mmDDR_MC_CH1_ADVECCINDEX, 0x00000004);
	WREG32(mmDDR_MC_CH1_ECCPOISONPAT0, 0x00000000);
	WREG32(mmDDR_MC_CH1_ECCPOISONPAT1, 0x00000000);
	WREG32(mmDDR_MC_CH1_ECCPOISONPAT2, 0x00000000);
	WREG32(mmDDR_MC_CH1_CAPARPOISONCTL, 0x00000000);
	WREG32(mmDDR_MC_CH1_PCCFG, 0x00000011);
	WREG32(mmDDR_MC_CH1_PCFGR_0, 0x0000518c);
	WREG32(mmDDR_MC_CH1_PCFGW_0, 0x00001263);
	WREG32(mmDDR_MC_CH1_PCTRL_0, 0x00000001);
	WREG32(mmDDR_MC_CH1_PCFGQOS0_0, 0x0011000e);
	WREG32(mmDDR_MC_CH1_SBRCTL, 0x0016b540);
	WREG32(mmDDR_MC_CH1_SBRWDATA0, 0x8c1d1786);
	WREG32(mmDDR_MC_CH1_SBRWDATA1, 0x265f03dd);

	val = RREG32(mmDDR_MC_CH1_RFSHCTL3);

	WREG32(mmDDR_MISC_CH1_CFG_DONE, 0x00000001);

	WREG32(mmDDR_MC_CH1_DBG1, 0x00000000);

	val = RREG32(mmDDR_MC_CH1_PWRCTL);

	WREG32(mmDDR_MC_CH1_PWRCTL, 0x00000002);

	val = RREG32(mmDDR_MC_CH1_PWRCTL);

	WREG32(mmDDR_MC_CH1_PWRCTL, 0x00000000);
	WREG32(mmDDR_MC_CH1_SWCTL, 0x00000000);
	WREG32(mmDDR_MC_CH1_DFIMISC, 0x00000041);
	WREG32(mmDDR_MC_CH1_DFIMISC, 0x00000040);
	WREG32(mmDDR_MC_CH1_DFIMISC, 0x00000040);
	WREG32(mmDDR_MC_CH1_DFIMISC, 0x00000060);
	WREG32(mmDDR_MC_CH1_DFIMISC, 0x00000040);
	WREG32(mmDDR_MC_CH1_DFIMISC, 0x00000041);
	WREG32(mmDDR_MC_CH1_DFIMISC, 0x00000041);
	WREG32(mmDDR_MC_CH1_PCTRL_0, 0x00000001);

	goya->hw_cap_initialized |= HW_CAP_DDR_1;
}

static void _goya_tpc_mbist_workaround(struct hl_device *hdev, u8 tpc_id)
{
	u64 tpc_eml_address;
	u32 val, tpc_offset, tpc_eml_offset, tpc_slm_offset;
	int err, slm_index;

	WARN_ON(tpc_id >= TPC_MAX_NUM);

	tpc_offset = tpc_id * 0x40000;
	tpc_eml_offset = tpc_id * 0x200000;
	tpc_eml_address = (mmTPC0_EML_CFG_BASE + tpc_eml_offset - CFG_BASE);
	tpc_slm_offset = tpc_eml_address + 0x100000;

	/*
	 * Workaround for Bug H2 #2443 :
	 * "TPC SB is not initialized on chip reset"
	 */

	val = RREG32(mmTPC0_CFG_FUNC_MBIST_CNTRL + tpc_offset);
	if (val & TPC0_CFG_FUNC_MBIST_CNTRL_MBIST_ACTIVE_MASK)
		dev_warn(hdev->dev, "TPC%d MBIST ACTIVE is not cleared\n",
			tpc_id);

	WREG32(mmTPC0_CFG_FUNC_MBIST_PAT + tpc_offset, val & 0xFFFFF000);

	WREG32(mmTPC0_CFG_FUNC_MBIST_MEM_0 + tpc_offset, 0x37FF);
	WREG32(mmTPC0_CFG_FUNC_MBIST_MEM_1 + tpc_offset, 0x303F);
	WREG32(mmTPC0_CFG_FUNC_MBIST_MEM_2 + tpc_offset, 0x71FF);
	WREG32(mmTPC0_CFG_FUNC_MBIST_MEM_3 + tpc_offset, 0x71FF);
	WREG32(mmTPC0_CFG_FUNC_MBIST_MEM_4 + tpc_offset, 0x70FF);
	WREG32(mmTPC0_CFG_FUNC_MBIST_MEM_5 + tpc_offset, 0x70FF);
	WREG32(mmTPC0_CFG_FUNC_MBIST_MEM_6 + tpc_offset, 0x70FF);
	WREG32(mmTPC0_CFG_FUNC_MBIST_MEM_7 + tpc_offset, 0x70FF);
	WREG32(mmTPC0_CFG_FUNC_MBIST_MEM_8 + tpc_offset, 0x70FF);
	WREG32(mmTPC0_CFG_FUNC_MBIST_MEM_9 + tpc_offset, 0x70FF);

	WREG32_OR(mmTPC0_CFG_FUNC_MBIST_CNTRL + tpc_offset,
		1 << TPC0_CFG_FUNC_MBIST_CNTRL_MBIST_START_SHIFT);

	err = hl_poll_timeout(
		hdev,
		mmTPC0_CFG_FUNC_MBIST_CNTRL + tpc_offset,
		val,
		(val & TPC0_CFG_FUNC_MBIST_CNTRL_MBIST_DONE_MASK),
		1000,
		HL_DEVICE_TIMEOUT_USEC);

	if (err)
		dev_err(hdev->dev,
			"Timeout while waiting for TPC%d MBIST DONE\n", tpc_id);

	WREG32_OR(mmTPC0_EML_CFG_DBG_CNT + tpc_eml_offset,
		1 << TPC0_EML_CFG_DBG_CNT_CORE_RST_SHIFT);

	msleep(GOYA_RESET_WAIT_MSEC);

	WREG32_AND(mmTPC0_EML_CFG_DBG_CNT + tpc_eml_offset,
		~(1 << TPC0_EML_CFG_DBG_CNT_CORE_RST_SHIFT));

	msleep(GOYA_RESET_WAIT_MSEC);

	for (slm_index = 0 ; slm_index < 256 ; slm_index++)
		WREG32(tpc_slm_offset + (slm_index << 2), 0);

	val = RREG32(tpc_slm_offset);

	WREG32(mmTPC0_CFG_BASE + tpc_offset + 0xF40 - CFG_BASE, 0x100);
}

static void goya_tpc_mbist_workaround(struct hl_device *hdev)
{
	struct goya_device *goya = hdev->asic_specific;
	int i;

	if (hdev->pldm)
		return;

	if (goya->hw_cap_initialized & HW_CAP_TPC_MBIST)
		return;

	/* Workaround for H2 #2443 */

	for (i = 0 ; i < TPC_MAX_NUM ; i++)
		_goya_tpc_mbist_workaround(hdev, i);

	goya->hw_cap_initialized |= HW_CAP_TPC_MBIST;
}

/**
 * goya_init_golden_registers - Initialize golden registers
 *
 * @hdev: pointer to hl_device structure
 *
 * Initialize the H/W registers of the device
 *
 */
static void goya_init_golden_registers(struct hl_device *hdev)
{
	struct goya_device *goya = hdev->asic_specific;
	u32 polynom[10], tpc_intr_mask;

	if (goya->hw_cap_initialized & HW_CAP_GOLDEN)
		return;

	polynom[0] = 0x00020080;
	polynom[1] = 0x00401000;
	polynom[2] = 0x00200800;
	polynom[3] = 0x00002000;
	polynom[4] = 0x00080200;
	polynom[5] = 0x00040100;
	polynom[6] = 0x00100400;
	polynom[7] = 0x00004000;
	polynom[8] = 0x00010000;
	polynom[9] = 0x00008000;

	/* Mask all arithmetic interrupts from TPC */
	tpc_intr_mask = 0x7FFF;

	WREG32(mmDMA_NRTR_SPLIT_COEF_0, polynom[0] >> 7);
	WREG32(mmDMA_NRTR_SPLIT_COEF_1, polynom[1] >> 7);
	WREG32(mmDMA_NRTR_SPLIT_COEF_2, polynom[2] >> 7);
	WREG32(mmDMA_NRTR_SPLIT_COEF_3, polynom[3] >> 7);
	WREG32(mmDMA_NRTR_SPLIT_COEF_4, polynom[4] >> 7);
	WREG32(mmDMA_NRTR_SPLIT_COEF_5, polynom[5] >> 7);
	WREG32(mmDMA_NRTR_SPLIT_COEF_6, polynom[6] >> 7);
	WREG32(mmDMA_NRTR_SPLIT_COEF_7, polynom[7] >> 7);
	WREG32(mmDMA_NRTR_SPLIT_COEF_8, polynom[8] >> 7);
	WREG32(mmDMA_NRTR_SPLIT_COEF_9, polynom[9] >> 7);

	WREG32(mmDMA_NRTR_SCRAMB_EN, 1 << DMA_NRTR_SCRAMB_EN_VAL_SHIFT);
	WREG32(mmDMA_NRTR_NON_LIN_SCRAMB,
			1 << DMA_NRTR_NON_LIN_SCRAMB_EN_SHIFT);

	WREG32(mmSRAM_Y5_X0_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y4_X0_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y3_X0_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y2_X0_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y1_X0_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y0_X0_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y5_X1_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y4_X1_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y3_X1_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y2_X1_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y1_X1_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y0_X1_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y5_X2_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y4_X2_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y3_X2_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y2_X2_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y1_X2_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y0_X2_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y5_X3_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y4_X3_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y3_X3_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y2_X3_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y1_X3_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y0_X3_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y5_X4_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y4_X4_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y3_X4_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y2_X4_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y1_X4_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y0_X4_RTR_HBW_RD_RQ_L_ARB, 0x302);
	WREG32(mmSRAM_Y5_X0_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y4_X0_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y3_X0_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y2_X0_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y1_X0_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y0_X0_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y5_X1_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y4_X1_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y3_X1_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y2_X1_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y1_X1_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y0_X1_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y5_X2_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y4_X2_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y3_X2_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y2_X2_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y1_X2_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y0_X2_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y5_X3_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y4_X3_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y3_X3_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y2_X3_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y1_X3_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y0_X3_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y5_X4_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y4_X4_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y3_X4_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y2_X4_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y1_X4_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y0_X4_RTR_HBW_DATA_L_ARB, 0x204);
	WREG32(mmSRAM_Y5_X0_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y4_X0_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y3_X0_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y2_X0_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y1_X0_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y0_X0_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y5_X1_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y4_X1_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y3_X1_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y2_X1_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y1_X1_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y0_X1_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y5_X2_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y4_X2_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y3_X2_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y2_X2_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y1_X2_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y0_X2_RTR_HBW_DATA_E_ARB, 0x206);
	WREG32(mmSRAM_Y5_X3_RTR_HBW_DATA_E_ARB, 0x207);
	WREG32(mmSRAM_Y4_X3_RTR_HBW_DATA_E_ARB, 0x207);
	WREG32(mmSRAM_Y3_X3_RTR_HBW_DATA_E_ARB, 0x207);
	WREG32(mmSRAM_Y2_X3_RTR_HBW_DATA_E_ARB, 0x207);
	WREG32(mmSRAM_Y1_X3_RTR_HBW_DATA_E_ARB, 0x207);
	WREG32(mmSRAM_Y0_X3_RTR_HBW_DATA_E_ARB, 0x207);
	WREG32(mmSRAM_Y5_X4_RTR_HBW_DATA_E_ARB, 0x207);
	WREG32(mmSRAM_Y4_X4_RTR_HBW_DATA_E_ARB, 0x207);
	WREG32(mmSRAM_Y3_X4_RTR_HBW_DATA_E_ARB, 0x207);
	WREG32(mmSRAM_Y2_X4_RTR_HBW_DATA_E_ARB, 0x207);
	WREG32(mmSRAM_Y1_X4_RTR_HBW_DATA_E_ARB, 0x207);
	WREG32(mmSRAM_Y0_X4_RTR_HBW_DATA_E_ARB, 0x207);
	WREG32(mmSRAM_Y5_X0_RTR_HBW_DATA_W_ARB, 0x207);
	WREG32(mmSRAM_Y4_X0_RTR_HBW_DATA_W_ARB, 0x207);
	WREG32(mmSRAM_Y3_X0_RTR_HBW_DATA_W_ARB, 0x207);
	WREG32(mmSRAM_Y2_X0_RTR_HBW_DATA_W_ARB, 0x207);
	WREG32(mmSRAM_Y1_X0_RTR_HBW_DATA_W_ARB, 0x207);
	WREG32(mmSRAM_Y0_X0_RTR_HBW_DATA_W_ARB, 0x207);
	WREG32(mmSRAM_Y5_X1_RTR_HBW_DATA_W_ARB, 0x207);
	WREG32(mmSRAM_Y4_X1_RTR_HBW_DATA_W_ARB, 0x207);
	WREG32(mmSRAM_Y3_X1_RTR_HBW_DATA_W_ARB, 0x207);
	WREG32(mmSRAM_Y2_X1_RTR_HBW_DATA_W_ARB, 0x207);
	WREG32(mmSRAM_Y1_X1_RTR_HBW_DATA_W_ARB, 0x207);
	WREG32(mmSRAM_Y0_X1_RTR_HBW_DATA_W_ARB, 0x207);
	WREG32(mmSRAM_Y5_X2_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y4_X2_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y3_X2_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y2_X2_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y1_X2_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y0_X2_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y5_X3_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y4_X3_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y3_X3_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y2_X3_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y1_X3_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y0_X3_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y5_X4_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y4_X4_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y3_X4_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y2_X4_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y1_X4_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y0_X4_RTR_HBW_DATA_W_ARB, 0x206);
	WREG32(mmSRAM_Y5_X0_RTR_HBW_WR_RS_E_ARB, 0x101);
	WREG32(mmSRAM_Y4_X0_RTR_HBW_WR_RS_E_ARB, 0x101);
	WREG32(mmSRAM_Y3_X0_RTR_HBW_WR_RS_E_ARB, 0x101);
	WREG32(mmSRAM_Y2_X0_RTR_HBW_WR_RS_E_ARB, 0x101);
	WREG32(mmSRAM_Y1_X0_RTR_HBW_WR_RS_E_ARB, 0x101);
	WREG32(mmSRAM_Y0_X0_RTR_HBW_WR_RS_E_ARB, 0x101);
	WREG32(mmSRAM_Y5_X1_RTR_HBW_WR_RS_E_ARB, 0x102);
	WREG32(mmSRAM_Y4_X1_RTR_HBW_WR_RS_E_ARB, 0x102);
	WREG32(mmSRAM_Y3_X1_RTR_HBW_WR_RS_E_ARB, 0x102);
	WREG32(mmSRAM_Y2_X1_RTR_HBW_WR_RS_E_ARB, 0x102);
	WREG32(mmSRAM_Y1_X1_RTR_HBW_WR_RS_E_ARB, 0x102);
	WREG32(mmSRAM_Y0_X1_RTR_HBW_WR_RS_E_ARB, 0x102);
	WREG32(mmSRAM_Y5_X2_RTR_HBW_WR_RS_E_ARB, 0x103);
	WREG32(mmSRAM_Y4_X2_RTR_HBW_WR_RS_E_ARB, 0x103);
	WREG32(mmSRAM_Y3_X2_RTR_HBW_WR_RS_E_ARB, 0x103);
	WREG32(mmSRAM_Y2_X2_RTR_HBW_WR_RS_E_ARB, 0x103);
	WREG32(mmSRAM_Y1_X2_RTR_HBW_WR_RS_E_ARB, 0x103);
	WREG32(mmSRAM_Y0_X2_RTR_HBW_WR_RS_E_ARB, 0x103);
	WREG32(mmSRAM_Y5_X3_RTR_HBW_WR_RS_E_ARB, 0x104);
	WREG32(mmSRAM_Y4_X3_RTR_HBW_WR_RS_E_ARB, 0x104);
	WREG32(mmSRAM_Y3_X3_RTR_HBW_WR_RS_E_ARB, 0x104);
	WREG32(mmSRAM_Y2_X3_RTR_HBW_WR_RS_E_ARB, 0x104);
	WREG32(mmSRAM_Y1_X3_RTR_HBW_WR_RS_E_ARB, 0x104);
	WREG32(mmSRAM_Y0_X3_RTR_HBW_WR_RS_E_ARB, 0x104);
	WREG32(mmSRAM_Y5_X4_RTR_HBW_WR_RS_E_ARB, 0x105);
	WREG32(mmSRAM_Y4_X4_RTR_HBW_WR_RS_E_ARB, 0x105);
	WREG32(mmSRAM_Y3_X4_RTR_HBW_WR_RS_E_ARB, 0x105);
	WREG32(mmSRAM_Y2_X4_RTR_HBW_WR_RS_E_ARB, 0x105);
	WREG32(mmSRAM_Y1_X4_RTR_HBW_WR_RS_E_ARB, 0x105);
	WREG32(mmSRAM_Y0_X4_RTR_HBW_WR_RS_E_ARB, 0x105);
	WREG32(mmSRAM_Y5_X0_RTR_HBW_WR_RS_W_ARB, 0x105);
	WREG32(mmSRAM_Y4_X0_RTR_HBW_WR_RS_W_ARB, 0x105);
	WREG32(mmSRAM_Y3_X0_RTR_HBW_WR_RS_W_ARB, 0x105);
	WREG32(mmSRAM_Y2_X0_RTR_HBW_WR_RS_W_ARB, 0x105);
	WREG32(mmSRAM_Y1_X0_RTR_HBW_WR_RS_W_ARB, 0x105);
	WREG32(mmSRAM_Y0_X0_RTR_HBW_WR_RS_W_ARB, 0x105);
	WREG32(mmSRAM_Y5_X1_RTR_HBW_WR_RS_W_ARB, 0x104);
	WREG32(mmSRAM_Y4_X1_RTR_HBW_WR_RS_W_ARB, 0x104);
	WREG32(mmSRAM_Y3_X1_RTR_HBW_WR_RS_W_ARB, 0x104);
	WREG32(mmSRAM_Y2_X1_RTR_HBW_WR_RS_W_ARB, 0x104);
	WREG32(mmSRAM_Y1_X1_RTR_HBW_WR_RS_W_ARB, 0x104);
	WREG32(mmSRAM_Y0_X1_RTR_HBW_WR_RS_W_ARB, 0x104);
	WREG32(mmSRAM_Y5_X2_RTR_HBW_WR_RS_W_ARB, 0x103);
	WREG32(mmSRAM_Y4_X2_RTR_HBW_WR_RS_W_ARB, 0x103);
	WREG32(mmSRAM_Y3_X2_RTR_HBW_WR_RS_W_ARB, 0x103);
	WREG32(mmSRAM_Y2_X2_RTR_HBW_WR_RS_W_ARB, 0x103);
	WREG32(mmSRAM_Y1_X2_RTR_HBW_WR_RS_W_ARB, 0x103);
	WREG32(mmSRAM_Y0_X2_RTR_HBW_WR_RS_W_ARB, 0x103);
	WREG32(mmSRAM_Y5_X3_RTR_HBW_WR_RS_W_ARB, 0x102);
	WREG32(mmSRAM_Y4_X3_RTR_HBW_WR_RS_W_ARB, 0x102);
	WREG32(mmSRAM_Y3_X3_RTR_HBW_WR_RS_W_ARB, 0x102);
	WREG32(mmSRAM_Y2_X3_RTR_HBW_WR_RS_W_ARB, 0x102);
	WREG32(mmSRAM_Y1_X3_RTR_HBW_WR_RS_W_ARB, 0x102);
	WREG32(mmSRAM_Y0_X3_RTR_HBW_WR_RS_W_ARB, 0x102);
	WREG32(mmSRAM_Y5_X4_RTR_HBW_WR_RS_W_ARB, 0x101);
	WREG32(mmSRAM_Y4_X4_RTR_HBW_WR_RS_W_ARB, 0x101);
	WREG32(mmSRAM_Y3_X4_RTR_HBW_WR_RS_W_ARB, 0x101);
	WREG32(mmSRAM_Y2_X4_RTR_HBW_WR_RS_W_ARB, 0x101);
	WREG32(mmSRAM_Y1_X4_RTR_HBW_WR_RS_W_ARB, 0x101);
	WREG32(mmSRAM_Y0_X4_RTR_HBW_WR_RS_W_ARB, 0x101);

	WREG32(mmMME_STORE_MAX_CREDIT, 0x21);
	WREG32(mmMME_AGU, 0x0f0f0f10);
	WREG32(mmMME_SEI_MASK, ~0x0);

	WREG32(mmMME6_RTR_HBW_RD_RQ_N_ARB, 0x01010101);
	WREG32(mmMME5_RTR_HBW_RD_RQ_N_ARB, 0x01040101);
	WREG32(mmMME4_RTR_HBW_RD_RQ_N_ARB, 0x01030101);
	WREG32(mmMME3_RTR_HBW_RD_RQ_N_ARB, 0x01020101);
	WREG32(mmMME2_RTR_HBW_RD_RQ_N_ARB, 0x01010101);
	WREG32(mmMME1_RTR_HBW_RD_RQ_N_ARB, 0x07010701);
	WREG32(mmMME6_RTR_HBW_RD_RQ_S_ARB, 0x04010401);
	WREG32(mmMME5_RTR_HBW_RD_RQ_S_ARB, 0x04050401);
	WREG32(mmMME4_RTR_HBW_RD_RQ_S_ARB, 0x03070301);
	WREG32(mmMME3_RTR_HBW_RD_RQ_S_ARB, 0x01030101);
	WREG32(mmMME2_RTR_HBW_RD_RQ_S_ARB, 0x01040101);
	WREG32(mmMME1_RTR_HBW_RD_RQ_S_ARB, 0x01050105);
	WREG32(mmMME6_RTR_HBW_RD_RQ_W_ARB, 0x01010501);
	WREG32(mmMME5_RTR_HBW_RD_RQ_W_ARB, 0x01010501);
	WREG32(mmMME4_RTR_HBW_RD_RQ_W_ARB, 0x01040301);
	WREG32(mmMME3_RTR_HBW_RD_RQ_W_ARB, 0x01030401);
	WREG32(mmMME2_RTR_HBW_RD_RQ_W_ARB, 0x01040101);
	WREG32(mmMME1_RTR_HBW_RD_RQ_W_ARB, 0x01050101);
	WREG32(mmMME6_RTR_HBW_WR_RQ_N_ARB, 0x02020202);
	WREG32(mmMME5_RTR_HBW_WR_RQ_N_ARB, 0x01070101);
	WREG32(mmMME4_RTR_HBW_WR_RQ_N_ARB, 0x02020201);
	WREG32(mmMME3_RTR_HBW_WR_RQ_N_ARB, 0x07020701);
	WREG32(mmMME2_RTR_HBW_WR_RQ_N_ARB, 0x01020101);
	WREG32(mmMME1_RTR_HBW_WR_RQ_S_ARB, 0x01010101);
	WREG32(mmMME6_RTR_HBW_WR_RQ_S_ARB, 0x01070101);
	WREG32(mmMME5_RTR_HBW_WR_RQ_S_ARB, 0x01070101);
	WREG32(mmMME4_RTR_HBW_WR_RQ_S_ARB, 0x07020701);
	WREG32(mmMME3_RTR_HBW_WR_RQ_S_ARB, 0x02020201);
	WREG32(mmMME2_RTR_HBW_WR_RQ_S_ARB, 0x01070101);
	WREG32(mmMME1_RTR_HBW_WR_RQ_S_ARB, 0x01020102);
	WREG32(mmMME6_RTR_HBW_WR_RQ_W_ARB, 0x01020701);
	WREG32(mmMME5_RTR_HBW_WR_RQ_W_ARB, 0x01020701);
	WREG32(mmMME4_RTR_HBW_WR_RQ_W_ARB, 0x07020707);
	WREG32(mmMME3_RTR_HBW_WR_RQ_W_ARB, 0x01020201);
	WREG32(mmMME2_RTR_HBW_WR_RQ_W_ARB, 0x01070201);
	WREG32(mmMME1_RTR_HBW_WR_RQ_W_ARB, 0x01070201);
	WREG32(mmMME6_RTR_HBW_RD_RS_N_ARB, 0x01070102);
	WREG32(mmMME5_RTR_HBW_RD_RS_N_ARB, 0x01070102);
	WREG32(mmMME4_RTR_HBW_RD_RS_N_ARB, 0x01060102);
	WREG32(mmMME3_RTR_HBW_RD_RS_N_ARB, 0x01040102);
	WREG32(mmMME2_RTR_HBW_RD_RS_N_ARB, 0x01020102);
	WREG32(mmMME1_RTR_HBW_RD_RS_N_ARB, 0x01020107);
	WREG32(mmMME6_RTR_HBW_RD_RS_S_ARB, 0x01020106);
	WREG32(mmMME5_RTR_HBW_RD_RS_S_ARB, 0x01020102);
	WREG32(mmMME4_RTR_HBW_RD_RS_S_ARB, 0x01040102);
	WREG32(mmMME3_RTR_HBW_RD_RS_S_ARB, 0x01060102);
	WREG32(mmMME2_RTR_HBW_RD_RS_S_ARB, 0x01070102);
	WREG32(mmMME1_RTR_HBW_RD_RS_S_ARB, 0x01070102);
	WREG32(mmMME6_RTR_HBW_RD_RS_E_ARB, 0x01020702);
	WREG32(mmMME5_RTR_HBW_RD_RS_E_ARB, 0x01020702);
	WREG32(mmMME4_RTR_HBW_RD_RS_E_ARB, 0x01040602);
	WREG32(mmMME3_RTR_HBW_RD_RS_E_ARB, 0x01060402);
	WREG32(mmMME2_RTR_HBW_RD_RS_E_ARB, 0x01070202);
	WREG32(mmMME1_RTR_HBW_RD_RS_E_ARB, 0x01070102);
	WREG32(mmMME6_RTR_HBW_RD_RS_W_ARB, 0x01060401);
	WREG32(mmMME5_RTR_HBW_RD_RS_W_ARB, 0x01060401);
	WREG32(mmMME4_RTR_HBW_RD_RS_W_ARB, 0x01060401);
	WREG32(mmMME3_RTR_HBW_RD_RS_W_ARB, 0x01060401);
	WREG32(mmMME2_RTR_HBW_RD_RS_W_ARB, 0x01060401);
	WREG32(mmMME1_RTR_HBW_RD_RS_W_ARB, 0x01060401);
	WREG32(mmMME6_RTR_HBW_WR_RS_N_ARB, 0x01050101);
	WREG32(mmMME5_RTR_HBW_WR_RS_N_ARB, 0x01040101);
	WREG32(mmMME4_RTR_HBW_WR_RS_N_ARB, 0x01030101);
	WREG32(mmMME3_RTR_HBW_WR_RS_N_ARB, 0x01020101);
	WREG32(mmMME2_RTR_HBW_WR_RS_N_ARB, 0x01010101);
	WREG32(mmMME1_RTR_HBW_WR_RS_N_ARB, 0x01010107);
	WREG32(mmMME6_RTR_HBW_WR_RS_S_ARB, 0x01010107);
	WREG32(mmMME5_RTR_HBW_WR_RS_S_ARB, 0x01010101);
	WREG32(mmMME4_RTR_HBW_WR_RS_S_ARB, 0x01020101);
	WREG32(mmMME3_RTR_HBW_WR_RS_S_ARB, 0x01030101);
	WREG32(mmMME2_RTR_HBW_WR_RS_S_ARB, 0x01040101);
	WREG32(mmMME1_RTR_HBW_WR_RS_S_ARB, 0x01050101);
	WREG32(mmMME6_RTR_HBW_WR_RS_E_ARB, 0x01010501);
	WREG32(mmMME5_RTR_HBW_WR_RS_E_ARB, 0x01010501);
	WREG32(mmMME4_RTR_HBW_WR_RS_E_ARB, 0x01040301);
	WREG32(mmMME3_RTR_HBW_WR_RS_E_ARB, 0x01030401);
	WREG32(mmMME2_RTR_HBW_WR_RS_E_ARB, 0x01040101);
	WREG32(mmMME1_RTR_HBW_WR_RS_E_ARB, 0x01050101);
	WREG32(mmMME6_RTR_HBW_WR_RS_W_ARB, 0x01010101);
	WREG32(mmMME5_RTR_HBW_WR_RS_W_ARB, 0x01010101);
	WREG32(mmMME4_RTR_HBW_WR_RS_W_ARB, 0x01010101);
	WREG32(mmMME3_RTR_HBW_WR_RS_W_ARB, 0x01010101);
	WREG32(mmMME2_RTR_HBW_WR_RS_W_ARB, 0x01010101);
	WREG32(mmMME1_RTR_HBW_WR_RS_W_ARB, 0x01010101);

	WREG32(mmMME1_RTR_SPLIT_COEF_0, polynom[0] >> 7);
	WREG32(mmMME1_RTR_SPLIT_COEF_1, polynom[1] >> 7);
	WREG32(mmMME1_RTR_SPLIT_COEF_2, polynom[2] >> 7);
	WREG32(mmMME1_RTR_SPLIT_COEF_3, polynom[3] >> 7);
	WREG32(mmMME1_RTR_SPLIT_COEF_4, polynom[4] >> 7);
	WREG32(mmMME1_RTR_SPLIT_COEF_5, polynom[5] >> 7);
	WREG32(mmMME1_RTR_SPLIT_COEF_6, polynom[6] >> 7);
	WREG32(mmMME1_RTR_SPLIT_COEF_7, polynom[7] >> 7);
	WREG32(mmMME1_RTR_SPLIT_COEF_8, polynom[8] >> 7);
	WREG32(mmMME1_RTR_SPLIT_COEF_9, polynom[9] >> 7);

	WREG32(mmMME2_RTR_SPLIT_COEF_0, polynom[0] >> 7);
	WREG32(mmMME2_RTR_SPLIT_COEF_1, polynom[1] >> 7);
	WREG32(mmMME2_RTR_SPLIT_COEF_2, polynom[2] >> 7);
	WREG32(mmMME2_RTR_SPLIT_COEF_3, polynom[3] >> 7);
	WREG32(mmMME2_RTR_SPLIT_COEF_4, polynom[4] >> 7);
	WREG32(mmMME2_RTR_SPLIT_COEF_5, polynom[5] >> 7);
	WREG32(mmMME2_RTR_SPLIT_COEF_6, polynom[6] >> 7);
	WREG32(mmMME2_RTR_SPLIT_COEF_7, polynom[7] >> 7);
	WREG32(mmMME2_RTR_SPLIT_COEF_8, polynom[8] >> 7);
	WREG32(mmMME2_RTR_SPLIT_COEF_9, polynom[9] >> 7);

	WREG32(mmMME3_RTR_SPLIT_COEF_0, polynom[0] >> 7);
	WREG32(mmMME3_RTR_SPLIT_COEF_1, polynom[1] >> 7);
	WREG32(mmMME3_RTR_SPLIT_COEF_2, polynom[2] >> 7);
	WREG32(mmMME3_RTR_SPLIT_COEF_3, polynom[3] >> 7);
	WREG32(mmMME3_RTR_SPLIT_COEF_4, polynom[4] >> 7);
	WREG32(mmMME3_RTR_SPLIT_COEF_5, polynom[5] >> 7);
	WREG32(mmMME3_RTR_SPLIT_COEF_6, polynom[6] >> 7);
	WREG32(mmMME3_RTR_SPLIT_COEF_7, polynom[7] >> 7);
	WREG32(mmMME3_RTR_SPLIT_COEF_8, polynom[8] >> 7);
	WREG32(mmMME3_RTR_SPLIT_COEF_9, polynom[9] >> 7);

	WREG32(mmMME4_RTR_SPLIT_COEF_0, polynom[0] >> 7);
	WREG32(mmMME4_RTR_SPLIT_COEF_1, polynom[1] >> 7);
	WREG32(mmMME4_RTR_SPLIT_COEF_2, polynom[2] >> 7);
	WREG32(mmMME4_RTR_SPLIT_COEF_3, polynom[3] >> 7);
	WREG32(mmMME4_RTR_SPLIT_COEF_4, polynom[4] >> 7);
	WREG32(mmMME4_RTR_SPLIT_COEF_5, polynom[5] >> 7);
	WREG32(mmMME4_RTR_SPLIT_COEF_6, polynom[6] >> 7);
	WREG32(mmMME4_RTR_SPLIT_COEF_7, polynom[7] >> 7);
	WREG32(mmMME4_RTR_SPLIT_COEF_8, polynom[8] >> 7);
	WREG32(mmMME4_RTR_SPLIT_COEF_9, polynom[9] >> 7);

	WREG32(mmMME5_RTR_SPLIT_COEF_0, polynom[0] >> 7);
	WREG32(mmMME5_RTR_SPLIT_COEF_1, polynom[1] >> 7);
	WREG32(mmMME5_RTR_SPLIT_COEF_2, polynom[2] >> 7);
	WREG32(mmMME5_RTR_SPLIT_COEF_3, polynom[3] >> 7);
	WREG32(mmMME5_RTR_SPLIT_COEF_4, polynom[4] >> 7);
	WREG32(mmMME5_RTR_SPLIT_COEF_5, polynom[5] >> 7);
	WREG32(mmMME5_RTR_SPLIT_COEF_6, polynom[6] >> 7);
	WREG32(mmMME5_RTR_SPLIT_COEF_7, polynom[7] >> 7);
	WREG32(mmMME5_RTR_SPLIT_COEF_8, polynom[8] >> 7);
	WREG32(mmMME5_RTR_SPLIT_COEF_9, polynom[9] >> 7);

	WREG32(mmMME6_RTR_SPLIT_COEF_0, polynom[0] >> 7);
	WREG32(mmMME6_RTR_SPLIT_COEF_1, polynom[1] >> 7);
	WREG32(mmMME6_RTR_SPLIT_COEF_2, polynom[2] >> 7);
	WREG32(mmMME6_RTR_SPLIT_COEF_3, polynom[3] >> 7);
	WREG32(mmMME6_RTR_SPLIT_COEF_4, polynom[4] >> 7);
	WREG32(mmMME6_RTR_SPLIT_COEF_5, polynom[5] >> 7);
	WREG32(mmMME6_RTR_SPLIT_COEF_6, polynom[6] >> 7);
	WREG32(mmMME6_RTR_SPLIT_COEF_7, polynom[7] >> 7);
	WREG32(mmMME6_RTR_SPLIT_COEF_8, polynom[8] >> 7);
	WREG32(mmMME6_RTR_SPLIT_COEF_9, polynom[9] >> 7);

	WREG32(mmMME1_RTR_SCRAMB_EN, 1 << MME1_RTR_SCRAMB_EN_VAL_SHIFT);
	WREG32(mmMME1_RTR_NON_LIN_SCRAMB,
			1 << MME1_RTR_NON_LIN_SCRAMB_EN_SHIFT);

	WREG32(mmMME2_RTR_SCRAMB_EN, 1 << MME2_RTR_SCRAMB_EN_VAL_SHIFT);
	WREG32(mmMME2_RTR_NON_LIN_SCRAMB,
			1 << MME2_RTR_NON_LIN_SCRAMB_EN_SHIFT);

	WREG32(mmMME3_RTR_SCRAMB_EN, 1 << MME3_RTR_SCRAMB_EN_VAL_SHIFT);
	WREG32(mmMME3_RTR_NON_LIN_SCRAMB,
			1 << MME3_RTR_NON_LIN_SCRAMB_EN_SHIFT);

	WREG32(mmMME4_RTR_SCRAMB_EN, 1 << MME4_RTR_SCRAMB_EN_VAL_SHIFT);
	WREG32(mmMME4_RTR_NON_LIN_SCRAMB,
			1 << MME4_RTR_NON_LIN_SCRAMB_EN_SHIFT);

	WREG32(mmMME5_RTR_SCRAMB_EN, 1 << MME5_RTR_SCRAMB_EN_VAL_SHIFT);
	WREG32(mmMME5_RTR_NON_LIN_SCRAMB,
			1 << MME5_RTR_NON_LIN_SCRAMB_EN_SHIFT);

	WREG32(mmMME6_RTR_SCRAMB_EN, 1 << MME6_RTR_SCRAMB_EN_VAL_SHIFT);
	WREG32(mmMME6_RTR_NON_LIN_SCRAMB,
			1 << MME6_RTR_NON_LIN_SCRAMB_EN_SHIFT);

	WREG32(mmTPC0_NRTR_SPLIT_COEF_0, polynom[0] >> 7);
	WREG32(mmTPC0_NRTR_SPLIT_COEF_1, polynom[1] >> 7);
	WREG32(mmTPC0_NRTR_SPLIT_COEF_2, polynom[2] >> 7);
	WREG32(mmTPC0_NRTR_SPLIT_COEF_3, polynom[3] >> 7);
	WREG32(mmTPC0_NRTR_SPLIT_COEF_4, polynom[4] >> 7);
	WREG32(mmTPC0_NRTR_SPLIT_COEF_5, polynom[5] >> 7);
	WREG32(mmTPC0_NRTR_SPLIT_COEF_6, polynom[6] >> 7);
	WREG32(mmTPC0_NRTR_SPLIT_COEF_7, polynom[7] >> 7);
	WREG32(mmTPC0_NRTR_SPLIT_COEF_8, polynom[8] >> 7);
	WREG32(mmTPC0_NRTR_SPLIT_COEF_9, polynom[9] >> 7);

	WREG32(mmTPC0_NRTR_SCRAMB_EN, 1 << TPC0_NRTR_SCRAMB_EN_VAL_SHIFT);
	WREG32(mmTPC0_NRTR_NON_LIN_SCRAMB,
			1 << TPC0_NRTR_NON_LIN_SCRAMB_EN_SHIFT);

	/*
	 * Workaround for Bug H2 #2441 :
	 * "ST.NOP set trace event illegal opcode"
	 */
	WREG32(mmTPC0_CFG_TPC_INTR_MASK, tpc_intr_mask);

	WREG32(mmTPC1_RTR_HBW_RD_RQ_N_ARB, 0x01010101);
	WREG32(mmTPC1_RTR_HBW_RD_RQ_S_ARB, 0x01010101);
	WREG32(mmTPC1_RTR_HBW_RD_RQ_E_ARB, 0x01060101);
	WREG32(mmTPC1_RTR_HBW_WR_RQ_N_ARB, 0x02020102);
	WREG32(mmTPC1_RTR_HBW_WR_RQ_S_ARB, 0x01010101);
	WREG32(mmTPC1_RTR_HBW_WR_RQ_E_ARB, 0x02070202);
	WREG32(mmTPC1_RTR_HBW_RD_RS_N_ARB, 0x01020201);
	WREG32(mmTPC1_RTR_HBW_RD_RS_S_ARB, 0x01070201);
	WREG32(mmTPC1_RTR_HBW_RD_RS_W_ARB, 0x01070202);
	WREG32(mmTPC1_RTR_HBW_WR_RS_N_ARB, 0x01010101);
	WREG32(mmTPC1_RTR_HBW_WR_RS_S_ARB, 0x01050101);
	WREG32(mmTPC1_RTR_HBW_WR_RS_W_ARB, 0x01050101);

	WREG32(mmTPC1_RTR_SPLIT_COEF_0, polynom[0] >> 7);
	WREG32(mmTPC1_RTR_SPLIT_COEF_1, polynom[1] >> 7);
	WREG32(mmTPC1_RTR_SPLIT_COEF_2, polynom[2] >> 7);
	WREG32(mmTPC1_RTR_SPLIT_COEF_3, polynom[3] >> 7);
	WREG32(mmTPC1_RTR_SPLIT_COEF_4, polynom[4] >> 7);
	WREG32(mmTPC1_RTR_SPLIT_COEF_5, polynom[5] >> 7);
	WREG32(mmTPC1_RTR_SPLIT_COEF_6, polynom[6] >> 7);
	WREG32(mmTPC1_RTR_SPLIT_COEF_7, polynom[7] >> 7);
	WREG32(mmTPC1_RTR_SPLIT_COEF_8, polynom[8] >> 7);
	WREG32(mmTPC1_RTR_SPLIT_COEF_9, polynom[9] >> 7);

	WREG32(mmTPC1_RTR_SCRAMB_EN, 1 << TPC1_RTR_SCRAMB_EN_VAL_SHIFT);
	WREG32(mmTPC1_RTR_NON_LIN_SCRAMB,
			1 << TPC1_RTR_NON_LIN_SCRAMB_EN_SHIFT);

	/*
	 * Workaround for Bug H2 #2441 :
	 * "ST.NOP set trace event illegal opcode"
	 */
	WREG32(mmTPC1_CFG_TPC_INTR_MASK, tpc_intr_mask);

	WREG32(mmTPC2_RTR_HBW_RD_RQ_N_ARB, 0x01020101);
	WREG32(mmTPC2_RTR_HBW_RD_RQ_S_ARB, 0x01050101);
	WREG32(mmTPC2_RTR_HBW_RD_RQ_E_ARB, 0x01010201);
	WREG32(mmTPC2_RTR_HBW_WR_RQ_N_ARB, 0x02040102);
	WREG32(mmTPC2_RTR_HBW_WR_RQ_S_ARB, 0x01050101);
	WREG32(mmTPC2_RTR_HBW_WR_RQ_E_ARB, 0x02060202);
	WREG32(mmTPC2_RTR_HBW_RD_RS_N_ARB, 0x01020201);
	WREG32(mmTPC2_RTR_HBW_RD_RS_S_ARB, 0x01070201);
	WREG32(mmTPC2_RTR_HBW_RD_RS_W_ARB, 0x01070202);
	WREG32(mmTPC2_RTR_HBW_WR_RS_N_ARB, 0x01010101);
	WREG32(mmTPC2_RTR_HBW_WR_RS_S_ARB, 0x01040101);
	WREG32(mmTPC2_RTR_HBW_WR_RS_W_ARB, 0x01040101);

	WREG32(mmTPC2_RTR_SPLIT_COEF_0, polynom[0] >> 7);
	WREG32(mmTPC2_RTR_SPLIT_COEF_1, polynom[1] >> 7);
	WREG32(mmTPC2_RTR_SPLIT_COEF_2, polynom[2] >> 7);
	WREG32(mmTPC2_RTR_SPLIT_COEF_3, polynom[3] >> 7);
	WREG32(mmTPC2_RTR_SPLIT_COEF_4, polynom[4] >> 7);
	WREG32(mmTPC2_RTR_SPLIT_COEF_5, polynom[5] >> 7);
	WREG32(mmTPC2_RTR_SPLIT_COEF_6, polynom[6] >> 7);
	WREG32(mmTPC2_RTR_SPLIT_COEF_7, polynom[7] >> 7);
	WREG32(mmTPC2_RTR_SPLIT_COEF_8, polynom[8] >> 7);
	WREG32(mmTPC2_RTR_SPLIT_COEF_9, polynom[9] >> 7);

	WREG32(mmTPC2_RTR_SCRAMB_EN, 1 << TPC2_RTR_SCRAMB_EN_VAL_SHIFT);
	WREG32(mmTPC2_RTR_NON_LIN_SCRAMB,
			1 << TPC2_RTR_NON_LIN_SCRAMB_EN_SHIFT);

	/*
	 * Workaround for Bug H2 #2441 :
	 * "ST.NOP set trace event illegal opcode"
	 */
	WREG32(mmTPC2_CFG_TPC_INTR_MASK, tpc_intr_mask);

	WREG32(mmTPC3_RTR_HBW_RD_RQ_N_ARB, 0x01030101);
	WREG32(mmTPC3_RTR_HBW_RD_RQ_S_ARB, 0x01040101);
	WREG32(mmTPC3_RTR_HBW_RD_RQ_E_ARB, 0x01040301);
	WREG32(mmTPC3_RTR_HBW_WR_RQ_N_ARB, 0x02060102);
	WREG32(mmTPC3_RTR_HBW_WR_RQ_S_ARB, 0x01040101);
	WREG32(mmTPC3_RTR_HBW_WR_RQ_E_ARB, 0x01040301);
	WREG32(mmTPC3_RTR_HBW_RD_RS_N_ARB, 0x01040201);
	WREG32(mmTPC3_RTR_HBW_RD_RS_S_ARB, 0x01060201);
	WREG32(mmTPC3_RTR_HBW_RD_RS_W_ARB, 0x01060402);
	WREG32(mmTPC3_RTR_HBW_WR_RS_N_ARB, 0x01020101);
	WREG32(mmTPC3_RTR_HBW_WR_RS_S_ARB, 0x01030101);
	WREG32(mmTPC3_RTR_HBW_WR_RS_W_ARB, 0x01030401);

	WREG32(mmTPC3_RTR_SPLIT_COEF_0, polynom[0] >> 7);
	WREG32(mmTPC3_RTR_SPLIT_COEF_1, polynom[1] >> 7);
	WREG32(mmTPC3_RTR_SPLIT_COEF_2, polynom[2] >> 7);
	WREG32(mmTPC3_RTR_SPLIT_COEF_3, polynom[3] >> 7);
	WREG32(mmTPC3_RTR_SPLIT_COEF_4, polynom[4] >> 7);
	WREG32(mmTPC3_RTR_SPLIT_COEF_5, polynom[5] >> 7);
	WREG32(mmTPC3_RTR_SPLIT_COEF_6, polynom[6] >> 7);
	WREG32(mmTPC3_RTR_SPLIT_COEF_7, polynom[7] >> 7);
	WREG32(mmTPC3_RTR_SPLIT_COEF_8, polynom[8] >> 7);
	WREG32(mmTPC3_RTR_SPLIT_COEF_9, polynom[9] >> 7);

	WREG32(mmTPC3_RTR_SCRAMB_EN, 1 << TPC3_RTR_SCRAMB_EN_VAL_SHIFT);
	WREG32(mmTPC3_RTR_NON_LIN_SCRAMB,
			1 << TPC3_RTR_NON_LIN_SCRAMB_EN_SHIFT);

	/*
	 * Workaround for Bug H2 #2441 :
	 * "ST.NOP set trace event illegal opcode"
	 */
	WREG32(mmTPC3_CFG_TPC_INTR_MASK, tpc_intr_mask);

	WREG32(mmTPC4_RTR_HBW_RD_RQ_N_ARB, 0x01040101);
	WREG32(mmTPC4_RTR_HBW_RD_RQ_S_ARB, 0x01030101);
	WREG32(mmTPC4_RTR_HBW_RD_RQ_E_ARB, 0x01030401);
	WREG32(mmTPC4_RTR_HBW_WR_RQ_N_ARB, 0x02070102);
	WREG32(mmTPC4_RTR_HBW_WR_RQ_S_ARB, 0x01030101);
	WREG32(mmTPC4_RTR_HBW_WR_RQ_E_ARB, 0x02060702);
	WREG32(mmTPC4_RTR_HBW_RD_RS_N_ARB, 0x01060201);
	WREG32(mmTPC4_RTR_HBW_RD_RS_S_ARB, 0x01040201);
	WREG32(mmTPC4_RTR_HBW_RD_RS_W_ARB, 0x01040602);
	WREG32(mmTPC4_RTR_HBW_WR_RS_N_ARB, 0x01030101);
	WREG32(mmTPC4_RTR_HBW_WR_RS_S_ARB, 0x01020101);
	WREG32(mmTPC4_RTR_HBW_WR_RS_W_ARB, 0x01040301);

	WREG32(mmTPC4_RTR_SPLIT_COEF_0, polynom[0] >> 7);
	WREG32(mmTPC4_RTR_SPLIT_COEF_1, polynom[1] >> 7);
	WREG32(mmTPC4_RTR_SPLIT_COEF_2, polynom[2] >> 7);
	WREG32(mmTPC4_RTR_SPLIT_COEF_3, polynom[3] >> 7);
	WREG32(mmTPC4_RTR_SPLIT_COEF_4, polynom[4] >> 7);
	WREG32(mmTPC4_RTR_SPLIT_COEF_5, polynom[5] >> 7);
	WREG32(mmTPC4_RTR_SPLIT_COEF_6, polynom[6] >> 7);
	WREG32(mmTPC4_RTR_SPLIT_COEF_7, polynom[7] >> 7);
	WREG32(mmTPC4_RTR_SPLIT_COEF_8, polynom[8] >> 7);
	WREG32(mmTPC4_RTR_SPLIT_COEF_9, polynom[9] >> 7);

	WREG32(mmTPC4_RTR_SCRAMB_EN, 1 << TPC4_RTR_SCRAMB_EN_VAL_SHIFT);
	WREG32(mmTPC4_RTR_NON_LIN_SCRAMB,
			1 << TPC4_RTR_NON_LIN_SCRAMB_EN_SHIFT);

	/*
	 * Workaround for Bug H2 #2441 :
	 * "ST.NOP set trace event illegal opcode"
	 */
	WREG32(mmTPC4_CFG_TPC_INTR_MASK, tpc_intr_mask);

	WREG32(mmTPC5_RTR_HBW_RD_RQ_N_ARB, 0x01050101);
	WREG32(mmTPC5_RTR_HBW_RD_RQ_S_ARB, 0x01020101);
	WREG32(mmTPC5_RTR_HBW_RD_RQ_E_ARB, 0x01200501);
	WREG32(mmTPC5_RTR_HBW_WR_RQ_N_ARB, 0x02070102);
	WREG32(mmTPC5_RTR_HBW_WR_RQ_S_ARB, 0x01020101);
	WREG32(mmTPC5_RTR_HBW_WR_RQ_E_ARB, 0x02020602);
	WREG32(mmTPC5_RTR_HBW_RD_RS_N_ARB, 0x01070201);
	WREG32(mmTPC5_RTR_HBW_RD_RS_S_ARB, 0x01020201);
	WREG32(mmTPC5_RTR_HBW_RD_RS_W_ARB, 0x01020702);
	WREG32(mmTPC5_RTR_HBW_WR_RS_N_ARB, 0x01040101);
	WREG32(mmTPC5_RTR_HBW_WR_RS_S_ARB, 0x01010101);
	WREG32(mmTPC5_RTR_HBW_WR_RS_W_ARB, 0x01010501);

	WREG32(mmTPC5_RTR_SPLIT_COEF_0, polynom[0] >> 7);
	WREG32(mmTPC5_RTR_SPLIT_COEF_1, polynom[1] >> 7);
	WREG32(mmTPC5_RTR_SPLIT_COEF_2, polynom[2] >> 7);
	WREG32(mmTPC5_RTR_SPLIT_COEF_3, polynom[3] >> 7);
	WREG32(mmTPC5_RTR_SPLIT_COEF_4, polynom[4] >> 7);
	WREG32(mmTPC5_RTR_SPLIT_COEF_5, polynom[5] >> 7);
	WREG32(mmTPC5_RTR_SPLIT_COEF_6, polynom[6] >> 7);
	WREG32(mmTPC5_RTR_SPLIT_COEF_7, polynom[7] >> 7);
	WREG32(mmTPC5_RTR_SPLIT_COEF_8, polynom[8] >> 7);
	WREG32(mmTPC5_RTR_SPLIT_COEF_9, polynom[9] >> 7);

	WREG32(mmTPC5_RTR_SCRAMB_EN, 1 << TPC5_RTR_SCRAMB_EN_VAL_SHIFT);
	WREG32(mmTPC5_RTR_NON_LIN_SCRAMB,
			1 << TPC5_RTR_NON_LIN_SCRAMB_EN_SHIFT);

	/*
	 * Workaround for Bug H2 #2441 :
	 * "ST.NOP set trace event illegal opcode"
	 */
	WREG32(mmTPC5_CFG_TPC_INTR_MASK, tpc_intr_mask);

	WREG32(mmTPC6_RTR_HBW_RD_RQ_N_ARB, 0x01010101);
	WREG32(mmTPC6_RTR_HBW_RD_RQ_S_ARB, 0x01010101);
	WREG32(mmTPC6_RTR_HBW_RD_RQ_E_ARB, 0x01010601);
	WREG32(mmTPC6_RTR_HBW_WR_RQ_N_ARB, 0x01010101);
	WREG32(mmTPC6_RTR_HBW_WR_RQ_S_ARB, 0x01010101);
	WREG32(mmTPC6_RTR_HBW_WR_RQ_E_ARB, 0x02020702);
	WREG32(mmTPC6_RTR_HBW_RD_RS_N_ARB, 0x01010101);
	WREG32(mmTPC6_RTR_HBW_RD_RS_S_ARB, 0x01010101);
	WREG32(mmTPC6_RTR_HBW_RD_RS_W_ARB, 0x01020702);
	WREG32(mmTPC6_RTR_HBW_WR_RS_N_ARB, 0x01050101);
	WREG32(mmTPC6_RTR_HBW_WR_RS_S_ARB, 0x01010101);
	WREG32(mmTPC6_RTR_HBW_WR_RS_W_ARB, 0x01010501);

	WREG32(mmTPC6_RTR_SPLIT_COEF_0, polynom[0] >> 7);
	WREG32(mmTPC6_RTR_SPLIT_COEF_1, polynom[1] >> 7);
	WREG32(mmTPC6_RTR_SPLIT_COEF_2, polynom[2] >> 7);
	WREG32(mmTPC6_RTR_SPLIT_COEF_3, polynom[3] >> 7);
	WREG32(mmTPC6_RTR_SPLIT_COEF_4, polynom[4] >> 7);
	WREG32(mmTPC6_RTR_SPLIT_COEF_5, polynom[5] >> 7);
	WREG32(mmTPC6_RTR_SPLIT_COEF_6, polynom[6] >> 7);
	WREG32(mmTPC6_RTR_SPLIT_COEF_7, polynom[7] >> 7);
	WREG32(mmTPC6_RTR_SPLIT_COEF_8, polynom[8] >> 7);
	WREG32(mmTPC6_RTR_SPLIT_COEF_9, polynom[9] >> 7);

	WREG32(mmTPC6_RTR_SCRAMB_EN, 1 << TPC6_RTR_SCRAMB_EN_VAL_SHIFT);
	WREG32(mmTPC6_RTR_NON_LIN_SCRAMB,
			1 << TPC6_RTR_NON_LIN_SCRAMB_EN_SHIFT);

	/*
	 * Workaround for Bug H2 #2441 :
	 * "ST.NOP set trace event illegal opcode"
	 */
	WREG32(mmTPC6_CFG_TPC_INTR_MASK, tpc_intr_mask);

	WREG32(mmTPC7_NRTR_SPLIT_COEF_0, polynom[0] >> 7);
	WREG32(mmTPC7_NRTR_SPLIT_COEF_1, polynom[1] >> 7);
	WREG32(mmTPC7_NRTR_SPLIT_COEF_2, polynom[2] >> 7);
	WREG32(mmTPC7_NRTR_SPLIT_COEF_3, polynom[3] >> 7);
	WREG32(mmTPC7_NRTR_SPLIT_COEF_4, polynom[4] >> 7);
	WREG32(mmTPC7_NRTR_SPLIT_COEF_5, polynom[5] >> 7);
	WREG32(mmTPC7_NRTR_SPLIT_COEF_6, polynom[6] >> 7);
	WREG32(mmTPC7_NRTR_SPLIT_COEF_7, polynom[7] >> 7);
	WREG32(mmTPC7_NRTR_SPLIT_COEF_8, polynom[8] >> 7);
	WREG32(mmTPC7_NRTR_SPLIT_COEF_9, polynom[9] >> 7);

	WREG32(mmTPC7_NRTR_SCRAMB_EN, 1 << TPC7_NRTR_SCRAMB_EN_VAL_SHIFT);
	WREG32(mmTPC7_NRTR_NON_LIN_SCRAMB,
			1 << TPC7_NRTR_NON_LIN_SCRAMB_EN_SHIFT);

	/*
	 * Workaround for Bug H2 #2441 :
	 * "ST.NOP set trace event illegal opcode"
	 */
	WREG32(mmTPC7_CFG_TPC_INTR_MASK, tpc_intr_mask);

	WREG32(mmPCI_NRTR_SPLIT_COEF_0, polynom[0] >> 7);
	WREG32(mmPCI_NRTR_SPLIT_COEF_1, polynom[1] >> 7);
	WREG32(mmPCI_NRTR_SPLIT_COEF_2, polynom[2] >> 7);
	WREG32(mmPCI_NRTR_SPLIT_COEF_3, polynom[3] >> 7);
	WREG32(mmPCI_NRTR_SPLIT_COEF_4, polynom[4] >> 7);
	WREG32(mmPCI_NRTR_SPLIT_COEF_5, polynom[5] >> 7);
	WREG32(mmPCI_NRTR_SPLIT_COEF_6, polynom[6] >> 7);
	WREG32(mmPCI_NRTR_SPLIT_COEF_7, polynom[7] >> 7);
	WREG32(mmPCI_NRTR_SPLIT_COEF_8, polynom[8] >> 7);
	WREG32(mmPCI_NRTR_SPLIT_COEF_9, polynom[9] >> 7);

	WREG32(mmPCI_NRTR_SCRAMB_EN, 1 << PCI_NRTR_SCRAMB_EN_VAL_SHIFT);
	WREG32(mmPCI_NRTR_NON_LIN_SCRAMB,
			1 << PCI_NRTR_NON_LIN_SCRAMB_EN_SHIFT);

	/*
	 * Workaround for H2 #HW-23 bug
	 * Set DMA max outstanding read requests to 240 on DMA CH 1. Set it
	 * to 16 on KMD DMA
	 * We need to limit only these DMAs because the user can only read
	 * from Host using DMA CH 1
	 */
	WREG32(mmDMA_CH_0_CFG0, 0x0fff0010);
	WREG32(mmDMA_CH_1_CFG0, 0x0fff00F0);

	goya->hw_cap_initialized |= HW_CAP_GOLDEN;
}


/**
 * goya_push_uboot_to_device - Push u-boot FW code to device
 *
 * @hdev: pointer to hl_device structure
 *
 * Copy u-boot fw code from firmware file to SRAM BAR.
 * Returns 0 on success
 *
 */
static int goya_push_uboot_to_device(struct hl_device *hdev)
{
	char fw_name[200];
	const u64 *fw_data;
	void __iomem *dst;
	size_t fw_size, i;
	int rc;

	snprintf(fw_name, sizeof(fw_name), "habanalabs/goya/goya-u-boot.bin");

	rc = request_firmware(&hdev->spl_fw, fw_name, hdev->dev);

	if (rc) {
		dev_err(hdev->dev, "Failed to request u-boot fw image\n");
		goto out;
	}

	fw_size = hdev->spl_fw->size;
	if ((fw_size % 4) != 0) {
		dev_err(hdev->dev, "illegal u-boot firmware size %lu\n",
			fw_size);
		rc = -EINVAL;
		goto out;
	}

	dev_dbg(hdev->dev, "u-boot firmware size == %lu\n", fw_size);

	fw_data = (const u64 *) hdev->spl_fw->data;
	dst = hdev->pcie_bar[SRAM_CFG_BAR_ID] + UBOOT_FW_OFFSET;

	if ((hdev->spl_fw->size % 8) != 0)
		fw_size -= 8;

	for (i = 0 ; i < fw_size ; i += 8, fw_data++, dst += 8) {
		if (!(i & (0x80000 - 1)))
			dev_dbg(hdev->dev,
				"u-boot copied so far %lu out of %lu",
				i, fw_size);

		writeq(*fw_data, dst);
	}

	if ((hdev->spl_fw->size % 8) != 0)
		writel(*(const u32 *) fw_data, dst);

out:
	release_firmware(hdev->spl_fw);
	return rc;
}

/**
 * goya_push_linux_to_device - Push LINUX FW code to device
 *
 * @hdev: pointer to hl_device structure
 *
 * Copy LINXU fw code from firmware file to DDR BAR.
 * Returns 0 on success
 *
 */
static int goya_push_linux_to_device(struct hl_device *hdev)
{
	char fw_name[200];
	const u64 *fw_data;
	void __iomem *dst;
	size_t fw_size, i;
	int rc;

	snprintf(fw_name, sizeof(fw_name), "habanalabs/goya/goya-fit.itb");

	rc = request_firmware(&hdev->spl_fw, fw_name, hdev->dev);

	if (rc) {
		dev_err(hdev->dev, "Failed to request Linux fw image\n");
		goto out;
	}

	fw_size = hdev->spl_fw->size;
	if ((fw_size % 4) != 0) {
		dev_err(hdev->dev, "illegal Linux firmware size %lu\n",
			fw_size);
		rc = -EINVAL;
		goto out;
	}

	dev_dbg(hdev->dev, "Linux firmware size == %lu\n", fw_size);

	fw_data = (const u64 *) hdev->spl_fw->data;
	dst = hdev->pcie_bar[DDR_BAR_ID] + LINUX_FW_OFFSET;

	if ((hdev->spl_fw->size % 8) != 0)
		fw_size -= 8;

	for (i = 0 ; i < fw_size ; i += 8, fw_data++, dst += 8) {
		if (!(i & (0x80000 - 1))) {
			dev_dbg(hdev->dev,
				"Linux copied so far %lu out of %lu",
				i, fw_size);
			usleep_range(20, 100);
		}
		writeq(*fw_data, dst);
	}

	if ((hdev->spl_fw->size % 8) != 0)
		writel(*(const u32 *) fw_data, dst);

out:
	release_firmware(hdev->spl_fw);
	return rc;
}

static int goya_pldm_init_cpu(struct hl_device *hdev)
{
	u32 val, unit_rst_val;
	int rc;

	/* Must initialize SRAM scrambler before pushing u-boot to SRAM */
	goya_init_golden_registers(hdev);

	/* Put ARM cores into reset */
	WREG32(mmCPU_CA53_CFG_ARM_RST_CONTROL, CPU_RESET_ASSERT);
	val = RREG32(mmCPU_CA53_CFG_ARM_RST_CONTROL);

	/* Reset the CA53 MACRO */
	unit_rst_val = RREG32(mmPSOC_GLOBAL_CONF_UNIT_RST_N);
	WREG32(mmPSOC_GLOBAL_CONF_UNIT_RST_N, CA53_RESET);
	val = RREG32(mmPSOC_GLOBAL_CONF_UNIT_RST_N);
	WREG32(mmPSOC_GLOBAL_CONF_UNIT_RST_N, unit_rst_val);
	val = RREG32(mmPSOC_GLOBAL_CONF_UNIT_RST_N);

	rc = goya_push_uboot_to_device(hdev);
	if (rc)
		return rc;

	rc = goya_push_linux_to_device(hdev);
	if (rc)
		return rc;

	WREG32(mmPSOC_GLOBAL_CONF_UBOOT_MAGIC, KMD_MSG_FIT_RDY);
	WREG32(mmPSOC_GLOBAL_CONF_WARM_REBOOT, CPU_BOOT_STATUS_NA);

	WREG32(mmCPU_CA53_CFG_RST_ADDR_LSB_0,
		lower_32_bits(SRAM_BASE_ADDR + UBOOT_FW_OFFSET));
	WREG32(mmCPU_CA53_CFG_RST_ADDR_MSB_0,
		upper_32_bits(SRAM_BASE_ADDR + UBOOT_FW_OFFSET));

	/* Release ARM core 0 from reset */
	WREG32(mmCPU_CA53_CFG_ARM_RST_CONTROL,
					CPU_RESET_CORE0_DEASSERT);
	val = RREG32(mmCPU_CA53_CFG_ARM_RST_CONTROL);

	return 0;
}

/*
 * FW component passes an offset from SRAM_BASE_ADDR in SCRATCHPAD_xx.
 * The version string should be located by that offset.
 */
static void goya_read_device_fw_version(struct hl_device *hdev,
					enum goya_fw_component fwc)
{
	const char *name;
	u32 ver_off;
	char *dest;

	switch (fwc) {
	case FW_COMP_UBOOT:
		ver_off = RREG32(mmPSOC_GLOBAL_CONF_SCRATCHPAD_29);
		dest = hdev->asic_prop.uboot_ver;
		name = "U-Boot";
		break;
	case FW_COMP_PREBOOT:
		ver_off = RREG32(mmPSOC_GLOBAL_CONF_SCRATCHPAD_28);
		dest = hdev->asic_prop.preboot_ver;
		name = "Preboot";
		break;
	default:
		dev_warn(hdev->dev, "Undefined FW component: %d\n", fwc);
		return;
	}

	ver_off &= ~((u32)SRAM_BASE_ADDR);

	if (ver_off < SRAM_SIZE - VERSION_MAX_LEN) {
		memcpy_fromio(dest, hdev->pcie_bar[SRAM_CFG_BAR_ID] + ver_off,
							VERSION_MAX_LEN);
	} else {
		dev_err(hdev->dev, "%s version offset (0x%x) is above SRAM\n",
								name, ver_off);
		strcpy(dest, "unavailable");
	}
}

static int goya_init_cpu(struct hl_device *hdev, u32 cpu_timeout)
{
	struct goya_device *goya = hdev->asic_specific;
	u32 status;
	int rc;

	if (!hdev->cpu_enable)
		return 0;

	if (goya->hw_cap_initialized & HW_CAP_CPU)
		return 0;

	/*
	 * Before pushing u-boot/linux to device, need to set the ddr bar to
	 * base address of dram
	 */
	rc = goya_set_ddr_bar_base(hdev, DRAM_PHYS_BASE);
	if (rc) {
		dev_err(hdev->dev,
			"failed to map DDR bar to DRAM base address\n");
		return rc;
	}

	if (hdev->pldm) {
		rc = goya_pldm_init_cpu(hdev);
		if (rc)
			return rc;

		goto out;
	}

	/* Make sure CPU boot-loader is running */
	rc = hl_poll_timeout(
		hdev,
		mmPSOC_GLOBAL_CONF_WARM_REBOOT,
		status,
		(status == CPU_BOOT_STATUS_DRAM_RDY) ||
		(status == CPU_BOOT_STATUS_SRAM_AVAIL),
		10000,
		cpu_timeout);

	if (rc) {
		dev_err(hdev->dev, "Error in ARM u-boot !!!");
		switch (status) {
		case CPU_BOOT_STATUS_NA:
			dev_err(hdev->dev,
				"ARM status %d - BTL did NOT run\n", status);
			break;
		case CPU_BOOT_STATUS_IN_WFE:
			dev_err(hdev->dev,
				"ARM status %d - Inside WFE loop\n", status);
			break;
		case CPU_BOOT_STATUS_IN_BTL:
			dev_err(hdev->dev,
				"ARM status %d - Stuck in BTL\n", status);
			break;
		case CPU_BOOT_STATUS_IN_PREBOOT:
			dev_err(hdev->dev,
				"ARM status %d - Stuck in Preboot\n", status);
			break;
		case CPU_BOOT_STATUS_IN_SPL:
			dev_err(hdev->dev,
				"ARM status %d - Stuck in SPL\n", status);
			break;
		case CPU_BOOT_STATUS_IN_UBOOT:
			dev_err(hdev->dev,
				"ARM status %d - Stuck in u-boot\n", status);
			break;
		case CPU_BOOT_STATUS_DRAM_INIT_FAIL:
			dev_err(hdev->dev,
				"ARM status %d - DDR initialization failed\n",
				status);
			break;
		default:
			dev_err(hdev->dev,
				"ARM status %d - Invalid status code\n",
				status);
			break;
		}
		return -EIO;
	}

	/* Read U-Boot version now in case we will later fail */
	goya_read_device_fw_version(hdev, FW_COMP_UBOOT);
	goya_read_device_fw_version(hdev, FW_COMP_PREBOOT);

	if (status == CPU_BOOT_STATUS_SRAM_AVAIL)
		goto out;

	if (!hdev->fw_loading) {
		dev_info(hdev->dev, "Skip loading FW\n");
		goto out;
	}

	rc = goya_push_linux_to_device(hdev);
	if (rc)
		return rc;

	WREG32(mmPSOC_GLOBAL_CONF_UBOOT_MAGIC, KMD_MSG_FIT_RDY);

	rc = hl_poll_timeout(
		hdev,
		mmPSOC_GLOBAL_CONF_WARM_REBOOT,
		status,
		(status == CPU_BOOT_STATUS_SRAM_AVAIL),
		10000,
		cpu_timeout);

	if (rc) {
		if (status == CPU_BOOT_STATUS_FIT_CORRUPTED)
			dev_err(hdev->dev,
				"ARM u-boot reports FIT image is corrupted\n");
		else
			dev_err(hdev->dev,
				"ARM Linux failed to load, %d\n", status);
		WREG32(mmPSOC_GLOBAL_CONF_UBOOT_MAGIC, KMD_MSG_NA);
		return -EIO;
	}

	dev_info(hdev->dev, "Successfully loaded firmware to device\n");

out:
	goya->hw_cap_initialized |= HW_CAP_CPU;

	return 0;
}

/**
 * goya_hw_init - Goya hardware initialization code
 *
 * @hdev: pointer to hl_device structure
 *
 * Returns 0 on success
 *
 */
static int goya_hw_init(struct hl_device *hdev)
{
	struct asic_fixed_properties *prop = &hdev->asic_prop;
	u32 val;
	int rc;

	dev_info(hdev->dev, "Starting initialization of H/W\n");

	/* Perform read from the device to make sure device is up */
	val = RREG32(mmPCIE_DBI_DEVICE_ID_VENDOR_ID_REG);

	goya_init_pll(hdev);

	if (hdev->pldm) {
		goya_init_ddr_ch0(hdev);
		goya_init_ddr_ch1(hdev);
	}

	rc = goya_init_cpu(hdev, GOYA_CPU_TIMEOUT_USEC);
	if (rc) {
		dev_err(hdev->dev, "failed to initialize CPU\n");
		return rc;
	}

	goya_tpc_mbist_workaround(hdev);

	goya_init_golden_registers(hdev);

	/*
	 * After CPU initialization is finished, change DDR bar mapping inside
	 * iATU to point to the start address of the MMU page tables
	 */
	rc = goya_set_ddr_bar_base(hdev, DRAM_PHYS_BASE +
		(MMU_PAGE_TABLES_ADDR & ~(prop->dram_pci_bar_size - 0x1ull)));
	if (rc) {
		dev_err(hdev->dev,
			"failed to map DDR bar to MMU page tables\n");
		return rc;
	}

	goya_init_security(hdev);

	/* CPU initialization is finished, we can now move to 48 bit DMA mask */
	rc = pci_set_dma_mask(hdev->pdev, DMA_BIT_MASK(48));
	if (rc) {
		dev_warn(hdev->dev, "Unable to set pci dma mask to 48 bits\n");
		rc = pci_set_dma_mask(hdev->pdev, DMA_BIT_MASK(32));
		if (rc) {
			dev_err(hdev->dev,
				"Unable to set pci dma mask to 32 bits\n");
			return rc;
		}
	}

	rc = pci_set_consistent_dma_mask(hdev->pdev, DMA_BIT_MASK(48));
	if (rc) {
		dev_warn(hdev->dev,
			"Unable to set pci consistent dma mask to 48 bits\n");
		rc = pci_set_consistent_dma_mask(hdev->pdev, DMA_BIT_MASK(32));
		if (rc) {
			dev_err(hdev->dev,
				"Unable to set pci consistent dma mask to 32 bits\n");
			return rc;
		}
	}

	/* Perform read from the device to flush all MSI-X configuration */
	val = RREG32(mmPCIE_DBI_DEVICE_ID_VENDOR_ID_REG);

	return 0;
}

/**
 * goya_hw_fini - Goya hardware tear-down code
 *
 * @hdev: pointer to hl_device structure
 * @hard_reset: should we do hard reset to all engines or just reset the
 *              compute/dma engines
 *
 * The function does the following:
 * - Send interrupt to CPU to go into "quiet" mode
 * - Stall MME, TPC
 * - Stop External, Internal QMANs
 * - Disable MSI-X
 * - Issue reset command
 * - Wait until reset is done
 * - Start device BTL
 *
 */
static void goya_hw_fini(struct hl_device *hdev, bool hard_reset)
{
	struct goya_device *goya = hdev->asic_specific;
	u32 reset_timeout_ms, status;

	if (hdev->pldm)
		reset_timeout_ms = GOYA_PLDM_RESET_TIMEOUT_MSEC;
	else
		reset_timeout_ms = GOYA_RESET_TIMEOUT_MSEC;

	if (hard_reset) {
		goya_set_ddr_bar_base(hdev, DRAM_PHYS_BASE);
		goya_disable_clk_rlx(hdev);
		goya_set_pll_refclk(hdev);

		WREG32(mmPSOC_GLOBAL_CONF_SW_ALL_RST_CFG, RESET_ALL);
		dev_info(hdev->dev,
			"Issued HARD reset command, going to wait %dms\n",
			reset_timeout_ms);
	} else {
		WREG32(mmPSOC_GLOBAL_CONF_SW_ALL_RST_CFG, DMA_MME_TPC_RESET);
		dev_info(hdev->dev,
			"Issued SOFT reset command, going to wait %dms\n",
			reset_timeout_ms);
	}

	/*
	 * After hard reset, we can't poll the BTM_FSM register because the PSOC
	 * itself is in reset. In either reset we need to wait until the reset
	 * is deasserted
	 */
	msleep(reset_timeout_ms);

	status = RREG32(mmPSOC_GLOBAL_CONF_BTM_FSM);
	if (status & PSOC_GLOBAL_CONF_BTM_FSM_STATE_MASK)
		dev_err(hdev->dev,
			"Timeout while waiting for device to reset 0x%x\n",
			status);

	if (!hard_reset) {
		goya->hw_cap_initialized &= ~(HW_CAP_DMA | HW_CAP_MME |
						HW_CAP_GOLDEN | HW_CAP_TPC);
		WREG32(mmGIC_DISTRIBUTOR__5_GICD_SETSPI_NSR,
				GOYA_ASYNC_EVENT_ID_SOFT_RESET);
		return;
	}

	/* Chicken bit to re-initiate boot sequencer flow */
	WREG32(mmPSOC_GLOBAL_CONF_BOOT_SEQ_RE_START,
		1 << PSOC_GLOBAL_CONF_BOOT_SEQ_RE_START_IND_SHIFT);
	/* Move boot manager FSM to pre boot sequencer init state */
	WREG32(mmPSOC_GLOBAL_CONF_SW_BTM_FSM,
			0xA << PSOC_GLOBAL_CONF_SW_BTM_FSM_CTRL_SHIFT);

	goya->hw_cap_initialized &= ~(HW_CAP_CPU | HW_CAP_CPU_Q |
					HW_CAP_DDR_0 | HW_CAP_DDR_1 |
					HW_CAP_DMA | HW_CAP_MME |
					HW_CAP_MMU | HW_CAP_TPC_MBIST |
					HW_CAP_GOLDEN | HW_CAP_TPC);

	if (!hdev->pldm) {
		int rc;
		/* In case we are running inside VM and the VM is
		 * shutting down, we need to make sure CPU boot-loader
		 * is running before we can continue the VM shutdown.
		 * That is because the VM will send an FLR signal that
		 * we must answer
		 */
		dev_info(hdev->dev,
			"Going to wait up to %ds for CPU boot loader\n",
			GOYA_CPU_TIMEOUT_USEC / 1000 / 1000);

		rc = hl_poll_timeout(
			hdev,
			mmPSOC_GLOBAL_CONF_WARM_REBOOT,
			status,
			(status == CPU_BOOT_STATUS_DRAM_RDY),
			10000,
			GOYA_CPU_TIMEOUT_USEC);
		if (rc)
			dev_err(hdev->dev,
				"failed to wait for CPU boot loader\n");
	}
}

int goya_suspend(struct hl_device *hdev)
{
	return 0;
}

int goya_resume(struct hl_device *hdev)
{
	return 0;
}

int goya_mmap(struct hl_fpriv *hpriv, struct vm_area_struct *vma)
{
	return -EINVAL;
}

int goya_cb_mmap(struct hl_device *hdev, struct vm_area_struct *vma,
		u64 kaddress, phys_addr_t paddress, u32 size)
{
	int rc;

	vma->vm_flags |= VM_IO | VM_PFNMAP | VM_DONTEXPAND | VM_DONTDUMP |
			VM_DONTCOPY | VM_NORESERVE;

	rc = remap_pfn_range(vma, vma->vm_start, paddress >> PAGE_SHIFT,
				size, vma->vm_page_prot);
	if (rc)
		dev_err(hdev->dev, "remap_pfn_range error %d", rc);

	return rc;
}

void *goya_dma_alloc_coherent(struct hl_device *hdev, size_t size,
					dma_addr_t *dma_handle, gfp_t flags)
{
	return dma_alloc_coherent(&hdev->pdev->dev, size, dma_handle, flags);
}

void goya_dma_free_coherent(struct hl_device *hdev, size_t size, void *cpu_addr,
				dma_addr_t dma_handle)
{
	dma_free_coherent(&hdev->pdev->dev, size, cpu_addr, dma_handle);
}

static const struct hl_asic_funcs goya_funcs = {
	.early_init = goya_early_init,
	.early_fini = goya_early_fini,
	.sw_init = goya_sw_init,
	.sw_fini = goya_sw_fini,
	.hw_init = goya_hw_init,
	.hw_fini = goya_hw_fini,
	.suspend = goya_suspend,
	.resume = goya_resume,
	.mmap = goya_mmap,
	.cb_mmap = goya_cb_mmap,
	.dma_alloc_coherent = goya_dma_alloc_coherent,
	.dma_free_coherent = goya_dma_free_coherent,
};

/**
 * goya_set_asic_funcs - set Goya function pointers
 *
 * @*hdev: pointer to hl_device structure
 *
 */
void goya_set_asic_funcs(struct hl_device *hdev)
{
	hdev->asic_funcs = &goya_funcs;
}
