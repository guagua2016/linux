// SPDX-License-Identifier: GPL-2.0

/*
 * Copyright 2016-2018 HabanaLabs, Ltd.
 * All Rights Reserved.
 */

#include "habanalabs.h"
#include "include/hw_ip/mmu/mmu_general.h"

#include <linux/genalloc.h>

#define HOP_NOT_FREED	0
#define HOP_FREED	1

static struct pgt_info *get_pgt_info(struct hl_ctx *ctx, u64 addr)
{
	struct pgt_info *pgt_info = NULL;

	hash_for_each_possible(ctx->mmu_hash, pgt_info, node,
				(unsigned long) addr)
		if (addr == pgt_info->addr)
			break;

	return pgt_info;
}

static void free_hop(struct hl_ctx *ctx, u64 hop_addr)
{
	struct pgt_info *pgt_info = get_pgt_info(ctx, hop_addr);

	gen_pool_free(pgt_info->ctx->hdev->mmu_pgt_pool, pgt_info->addr,
			ctx->hdev->asic_prop.mmu_hop_table_size);
	hash_del(&pgt_info->node);

	kfree(pgt_info);
}

static u64 alloc_hop(struct hl_ctx *ctx)
{
	struct hl_device *hdev = ctx->hdev;
	struct pgt_info *pgt_info;
	u64 addr;

	pgt_info = kmalloc(sizeof(*pgt_info), GFP_KERNEL);
	if (!pgt_info)
		return ULLONG_MAX;

	addr = (u64) gen_pool_alloc(hdev->mmu_pgt_pool,
			hdev->asic_prop.mmu_hop_table_size);
	if (!addr) {
		dev_err(hdev->dev, "failed to allocate page\n");
		kfree(pgt_info);
		return ULLONG_MAX;
	}

	pgt_info->addr = addr;
	pgt_info->ctx = ctx;
	pgt_info->num_of_ptes = 0;
	hash_add(ctx->mmu_hash, &pgt_info->node, addr);

	return addr;
}

static inline void clear_pte(struct hl_device *hdev, u64 pte_addr)
{
	/* clear the last and present bits */
	hdev->asic_funcs->write_pte(hdev, pte_addr, 0);
}

static inline void inc_num_of_ptes(struct hl_ctx *ctx, u64 hop_addr)
{
	get_pgt_info(ctx, hop_addr)->num_of_ptes++;
}

/**
 * dec_num_of_ptes - decrement the num of ptes and free the hop if possible
 *
 * @ctx: pointer to the context structure
 * @hop_addr: addr of the hop
 *
 * This function returns HOP_FREED if the hop was freed or HOP_NOT_FREED if the
 * num of ptes was decremented without freeing the hop.
 */
static inline int dec_num_of_ptes(struct hl_ctx *ctx, u64 hop_addr)
{
	struct pgt_info *pgt_info = get_pgt_info(ctx, hop_addr);

	pgt_info->num_of_ptes--;

	if (pgt_info->num_of_ptes == 0) {
		free_hop(ctx, hop_addr);
		return HOP_FREED;
	}

	return HOP_NOT_FREED;
}

static inline u64 get_hop0_addr(struct hl_ctx *ctx)
{
	return ctx->hdev->asic_prop.mmu_pgt_addr +
			(ctx->asid * ctx->hdev->asic_prop.mmu_hop_table_size);
}

static inline u64 get_hop0_pte_addr(struct hl_ctx *ctx, u64 hop_addr,
					u64 virt_addr)
{
	return hop_addr + ctx->hdev->asic_prop.mmu_pte_size *
			((virt_addr & HOP0_MASK) >> HOP0_SHIFT);
}

static inline u64 get_hop1_pte_addr(struct hl_ctx *ctx, u64 hop_addr,
					u64 virt_addr)
{
	return hop_addr + ctx->hdev->asic_prop.mmu_pte_size *
			((virt_addr & HOP1_MASK) >> HOP1_SHIFT);
}

static inline u64 get_hop2_pte_addr(struct hl_ctx *ctx, u64 hop_addr,
					u64 virt_addr)
{
	return hop_addr + ctx->hdev->asic_prop.mmu_pte_size *
			((virt_addr & HOP2_MASK) >> HOP2_SHIFT);
}

static inline u64 get_hop3_pte_addr(struct hl_ctx *ctx, u64 hop_addr,
					u64 virt_addr)
{
	return hop_addr + ctx->hdev->asic_prop.mmu_pte_size *
			((virt_addr & HOP3_MASK) >> HOP3_SHIFT);
}

static inline u64 get_hop4_pte_addr(struct hl_ctx *ctx, u64 hop_addr,
					u64 virt_addr)
{
	return hop_addr + ctx->hdev->asic_prop.mmu_pte_size *
			((virt_addr & HOP4_MASK) >> HOP4_SHIFT);
}

static inline u64 get_next_hop_addr(u64 curr_pte)
{
	if (curr_pte & PAGE_PRESENT_MASK)
		return curr_pte & PHYS_ADDR_MASK;
	else
		return ULLONG_MAX;
}

/**
 * hl_mmu_init - init the mmu module
 *
 * @hdev: pointer to the habanalabs device structure
 *
 * This function does the following:
 * - Allocate max_asid zeroed hop0 pgts so no mapping is available
 * - Enable mmu in hw
 * - Invalidate the mmu cache
 * - Create a pool of pages for pgts
 * - Returns 0 on success
 *
 * This function depends on DMA QMAN to be working!
 */
int hl_mmu_init(struct hl_device *hdev)
{
	struct asic_fixed_properties *prop = &hdev->asic_prop;
	int rc;

	if (!hdev->mmu_enable)
		return 0;

	/* MMU HW init was already done in device hw_init() */

	mutex_init(&hdev->mmu_cache_lock);

	hdev->mmu_pgt_pool =
			gen_pool_create(__ffs(prop->mmu_hop_table_size), -1);

	if (!hdev->mmu_pgt_pool) {
		dev_err(hdev->dev, "Failed to create page gen pool\n");
		rc = -ENOMEM;
		goto err_pool_create;
	}

	rc = gen_pool_add(hdev->mmu_pgt_pool, prop->mmu_pgt_addr +
			prop->mmu_hop0_tables_total_size,
			prop->mmu_pgt_size - prop->mmu_hop0_tables_total_size,
			-1);
	if (rc) {
		dev_err(hdev->dev, "Failed to add memory to page gen pool\n");
		goto err_pool_add;
	}

	return 0;

err_pool_add:
	gen_pool_destroy(hdev->mmu_pgt_pool);
err_pool_create:
	mutex_destroy(&hdev->mmu_cache_lock);

	return rc;
}

/**
 * hl_mmu_fini - release the mmu module.
 *
 * @hdev: pointer to the habanalabs device structure
 *
 * This function does the following:
 * - Disable mmu in hw
 * - free the pgts pool
 *
 * All ctxs should be freed before calling this func
 */
void hl_mmu_fini(struct hl_device *hdev)
{
	if (!hdev->mmu_enable)
		return;

	gen_pool_destroy(hdev->mmu_pgt_pool);

	mutex_destroy(&hdev->mmu_cache_lock);

	/* MMU HW fini will be done in device hw_fini() */
}

/**
 * hl_mmu_ctx_init - init a ctx for using the mmu module
 *
 * @ctx: pointer to the context structure
 *
 * This function does the following:
 * - Init a mutex to protect the concurrent mapping flow
 * - Init a hash to hold all pgts related to this ctx
 */
void hl_mmu_ctx_init(struct hl_ctx *ctx)
{
	if (!ctx->hdev->mmu_enable)
		return;

	mutex_init(&ctx->mmu_lock);
	hash_init(ctx->mmu_hash);
}

/**
 * hl_mmu_ctx_fini - disable a ctx from using the mmu module
 *
 * @ctx: pointer to the context structure
 *
 * This function does the following:
 * - Free any pgts which were not freed yet
 * - Free the mutex
 */
void hl_mmu_ctx_fini(struct hl_ctx *ctx)
{
	struct pgt_info *pgt_info;
	struct hlist_node *tmp;
	int i;

	if (!ctx->hdev->mmu_enable)
		return;

	if (!hash_empty(ctx->mmu_hash))
		dev_err(ctx->hdev->dev,
				"ctx is freed while it has pgts in use\n");

	hash_for_each_safe(ctx->mmu_hash, i, tmp, pgt_info, node) {
		dev_err(ctx->hdev->dev,
			"pgt_info of addr 0x%llx of asid %d was not destroyed, num_ptes: %d\n",
			pgt_info->addr, ctx->asid, pgt_info->num_of_ptes);
		free_hop(ctx, pgt_info->addr);
	}

	mutex_destroy(&ctx->mmu_lock);
}

/**
 * hl_mmu_map - maps a virtual addr to physical addr
 *
 * @ctx: pointer to the context structure
 * @virt_addr: virt addr to map from
 * @phys_addr: phys addr to map to
 * @page_size: physical page size
 *
 * This function does the following:
 * - Check that the virt addr is not mapped
 * - Allocate pgts as necessary in order to map the virt addr to the phys
 * - Returns 0 on success, -EINVAL if addr is already mapped, or -ENOMEM.
 *
 * Because this function changes the page tables in the device and because it
 * changes the MMU hash, it must be protected by a lock.
 * However, because it maps only a single page, the lock should be implemented
 * in a higher level in order to protect the entire mapping of the memory area
 */
int hl_mmu_map(struct hl_ctx *ctx, u64 virt_addr, u64 phys_addr, u32 page_size)
{
	struct hl_device *hdev = ctx->hdev;
	u64 hop0_addr = 0, hop0_pte_addr = 0,
		hop1_addr = 0, hop1_pte_addr = 0,
		hop2_addr = 0, hop2_pte_addr = 0,
		hop3_addr = 0, hop3_pte_addr = 0,
		hop4_addr = 0, hop4_pte_addr = 0,
		curr_pte = 0;
	int hop1_new = 0, hop2_new = 0, hop3_new = 0, hop4_new = 0,
			rc = -ENOMEM;
	bool is_huge;

	if (!hdev->mmu_enable)
		return 0;

	/*
	 * This mapping function can map a 4KB/2MB page. For 2MB page there are
	 * only 3 hops rather than 4. Currently the DRAM allocation uses 2MB
	 * pages only but user memory could have been allocated with one of the
	 * two page sizes. Since this is a common code for all the three cases,
	 * we need this hugs page check.
	 */
	is_huge = page_size == PAGE_SIZE_2MB;

	hop0_addr = get_hop0_addr(ctx);

	hop0_pte_addr = get_hop0_pte_addr(ctx, hop0_addr, virt_addr);

	curr_pte = hdev->asic_funcs->read_pte(hdev, hop0_pte_addr);

	hop1_addr = get_next_hop_addr(curr_pte);

	if (hop1_addr == ULLONG_MAX) {
		hop1_addr = alloc_hop(ctx);
		if (hop1_addr == ULLONG_MAX)
			goto err;
		else
			hop1_new = 1;
	}

	hop1_pte_addr = get_hop1_pte_addr(ctx, hop1_addr, virt_addr);

	curr_pte = hdev->asic_funcs->read_pte(hdev, hop1_pte_addr);

	hop2_addr = get_next_hop_addr(curr_pte);

	if (hop2_addr == ULLONG_MAX) {
		hop2_addr = alloc_hop(ctx);
		if (hop2_addr == ULLONG_MAX)
			goto err;
		else
			hop2_new = 1;
	}

	hop2_pte_addr = get_hop2_pte_addr(ctx, hop2_addr, virt_addr);

	curr_pte = hdev->asic_funcs->read_pte(hdev, hop2_pte_addr);

	hop3_addr = get_next_hop_addr(curr_pte);

	if (hop3_addr == ULLONG_MAX) {
		hop3_addr = alloc_hop(ctx);
		if (hop3_addr == ULLONG_MAX)
			goto err;
		else
			hop3_new = 1;
	}

	hop3_pte_addr = get_hop3_pte_addr(ctx, hop3_addr, virt_addr);

	curr_pte = hdev->asic_funcs->read_pte(hdev, hop3_pte_addr);

	if (!is_huge) {
		hop4_addr = get_next_hop_addr(curr_pte);

		if (hop4_addr == ULLONG_MAX) {
			hop4_addr = alloc_hop(ctx);
			if (hop4_addr == ULLONG_MAX)
				goto err;
			else
				hop4_new = 1;
		}

		hop4_pte_addr = get_hop4_pte_addr(ctx, hop4_addr, virt_addr);

		curr_pte = hdev->asic_funcs->read_pte(hdev, hop4_pte_addr);
	}

	if (curr_pte & PAGE_PRESENT_MASK) {
		dev_err(hdev->dev,
				"mapping already exists for virt_addr 0x%llx\n",
					virt_addr);

		dev_dbg(hdev->dev, "hop0 pte: 0x%llx (0x%llx)\n",
				hdev->asic_funcs->read_pte(hdev, hop0_pte_addr),
				hop0_pte_addr);
		dev_dbg(hdev->dev, "hop1 pte: 0x%llx (0x%llx)\n",
				hdev->asic_funcs->read_pte(hdev, hop1_pte_addr),
				hop1_pte_addr);
		dev_dbg(hdev->dev, "hop2 pte: 0x%llx (0x%llx)\n",
				hdev->asic_funcs->read_pte(hdev, hop2_pte_addr),
				hop2_pte_addr);
		dev_dbg(hdev->dev, "hop3 pte: 0x%llx (0x%llx)\n",
				hdev->asic_funcs->read_pte(hdev, hop3_pte_addr),
				hop3_pte_addr);

		if (!is_huge)
			dev_dbg(hdev->dev, "hop4 pte: 0x%llx (0x%llx)\n",
				hdev->asic_funcs->read_pte(hdev,
							hop4_pte_addr),
							hop4_pte_addr);

		rc = EINVAL;
		goto err;
	}

	curr_pte = (phys_addr & PTE_PHYS_ADDR_MASK) | LAST_MASK
			| PAGE_PRESENT_MASK;

	hdev->asic_funcs->write_pte(hdev,
				is_huge ? hop3_pte_addr : hop4_pte_addr,
				curr_pte);

	if (hop1_new) {
		curr_pte = (hop1_addr & PTE_PHYS_ADDR_MASK) |
				PAGE_PRESENT_MASK;
		ctx->hdev->asic_funcs->write_pte(ctx->hdev, hop0_pte_addr,
				curr_pte);
	}
	if (hop2_new) {
		curr_pte = (hop2_addr & PTE_PHYS_ADDR_MASK) |
				PAGE_PRESENT_MASK;
		ctx->hdev->asic_funcs->write_pte(ctx->hdev, hop1_pte_addr,
				curr_pte);
		inc_num_of_ptes(ctx, hop1_addr);
	}
	if (hop3_new) {
		curr_pte = (hop3_addr & PTE_PHYS_ADDR_MASK) |
				PAGE_PRESENT_MASK;
		ctx->hdev->asic_funcs->write_pte(ctx->hdev, hop2_pte_addr,
				curr_pte);
		inc_num_of_ptes(ctx, hop2_addr);
	}

	if (!is_huge) {
		if (hop4_new) {
			curr_pte = (hop4_addr & PTE_PHYS_ADDR_MASK) |
					PAGE_PRESENT_MASK;
			ctx->hdev->asic_funcs->write_pte(ctx->hdev,
					hop3_pte_addr, curr_pte);
			inc_num_of_ptes(ctx, hop3_addr);
		}

		inc_num_of_ptes(ctx, hop4_addr);
	} else
		inc_num_of_ptes(ctx, hop3_addr);

	/* flush all writes from all cores to reach PCI */
	mb();

	hdev->asic_funcs->read_pte(hdev,
				is_huge ? hop3_pte_addr : hop4_pte_addr);

	return 0;

err:
	if (hop4_new)
		free_hop(ctx, hop4_addr);
	if (hop3_new)
		free_hop(ctx, hop3_addr);
	if (hop2_new)
		free_hop(ctx, hop2_addr);
	if (hop1_new)
		free_hop(ctx, hop1_addr);

	return rc;
}

/**
 * hl_mmu_unmap - unmaps a virtual addr
 *
 * @ctx: pointer to the context structure
 * @virt_addr: virt addr to map from
 *
 * This function does the following:
 * - Check that the virt addr is mapped
 * - Unmap the vurt addr and frees pgts if possible
 * - Returns 0 on success, -EINVAL if the given addr is not mapped
 *
 * Because this function changes the page tables in the device and because it
 * changes the MMU hash, it must be protected by a lock.
 * However, because it maps only a single page, the lock should be implemented
 * in a higher level in order to protect the entire mapping of the memory area
 */
int hl_mmu_unmap(struct hl_ctx *ctx, u64 virt_addr)
{
	struct hl_device *hdev = ctx->hdev;
	u64 hop0_addr = 0, hop0_pte_addr = 0,
		hop1_addr = 0, hop1_pte_addr = 0,
		hop2_addr = 0, hop2_pte_addr = 0,
		hop3_addr = 0, hop3_pte_addr = 0,
		hop4_addr = 0, hop4_pte_addr = 0,
		curr_pte;
	int clear_hop3 = 1;

	if (!hdev->mmu_enable)
		return 0;

	hop0_addr = get_hop0_addr(ctx);

	hop0_pte_addr = get_hop0_pte_addr(ctx, hop0_addr, virt_addr);

	curr_pte = hdev->asic_funcs->read_pte(hdev, hop0_pte_addr);

	hop1_addr = get_next_hop_addr(curr_pte);

	if (hop1_addr == ULLONG_MAX)
		goto not_mapped;

	hop1_pte_addr = get_hop1_pte_addr(ctx, hop1_addr, virt_addr);

	curr_pte = hdev->asic_funcs->read_pte(hdev, hop1_pte_addr);

	hop2_addr = get_next_hop_addr(curr_pte);

	if (hop2_addr == ULLONG_MAX)
		goto not_mapped;

	hop2_pte_addr = get_hop2_pte_addr(ctx, hop2_addr, virt_addr);

	curr_pte = hdev->asic_funcs->read_pte(hdev, hop2_pte_addr);

	hop3_addr = get_next_hop_addr(curr_pte);

	if (hop3_addr == ULLONG_MAX)
		goto not_mapped;

	hop3_pte_addr = get_hop3_pte_addr(ctx, hop3_addr, virt_addr);

	curr_pte = hdev->asic_funcs->read_pte(hdev, hop3_pte_addr);

	if (!(curr_pte & LAST_MASK)) {
		hop4_addr = get_next_hop_addr(curr_pte);

		if (hop4_addr == ULLONG_MAX)
			goto not_mapped;

		hop4_pte_addr = get_hop4_pte_addr(ctx, hop4_addr, virt_addr);

		curr_pte = hdev->asic_funcs->read_pte(hdev, hop4_pte_addr);

		clear_hop3 = 0;
	}

	if (!(curr_pte & PAGE_PRESENT_MASK))
		goto not_mapped;

	clear_pte(hdev, hop4_addr ? hop4_pte_addr : hop3_pte_addr);

	if (hop4_addr && dec_num_of_ptes(ctx, hop4_addr) == HOP_FREED)
		clear_hop3 = 1;

	if (clear_hop3) {
		clear_pte(hdev, hop3_pte_addr);
		if (dec_num_of_ptes(ctx, hop3_addr) == HOP_FREED) {
			clear_pte(hdev, hop2_pte_addr);
			if (dec_num_of_ptes(ctx, hop2_addr) == HOP_FREED) {
				clear_pte(hdev, hop1_pte_addr);
				if (dec_num_of_ptes(ctx, hop1_addr) ==
						HOP_FREED)
					clear_pte(hdev, hop0_pte_addr);
			}
		}
	}

	/* flush all writes from all cores to reach PCI */
	mb();

	hdev->asic_funcs->read_pte(hdev,
				hop4_addr ? hop4_pte_addr : hop3_pte_addr);

	return 0;

not_mapped:
	dev_err(hdev->dev, "virt addr 0x%llx is not mapped to phys addr\n",
		virt_addr);

	return -EINVAL;
}

/**
 * hl_mmu_swap_out - marks all mapping of the given ctx as swapped out
 *
 * @ctx: pointer to the context structure
 *
 */
void hl_mmu_swap_out(struct hl_ctx *ctx)
{

}

/**
 * hl_mmu_swap_in - marks all mapping of the given ctx as swapped in
 *
 * @ctx: pointer to the context structure
 *
 */
void hl_mmu_swap_in(struct hl_ctx *ctx)
{

}
