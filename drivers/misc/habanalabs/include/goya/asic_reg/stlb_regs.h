/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2016-2017 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

/************************************
 ** This is an auto-generated file **
 **       DO NOT EDIT BELOW        **
 ************************************/

#ifndef ASIC_REG_STLB_H_
#define ASIC_REG_STLB_H_

/*
 *****************************************
 *   STLB (Prototype: STLB)
 *****************************************
 */

#define mmSTLB_CACHE_INV                                             0x490010
/* STLB_CACHE_INV */
#define STLB_CACHE_INV_PRODUCER_INDEX_SHIFT                          0
#define STLB_CACHE_INV_PRODUCER_INDEX_MASK                           0xFF
#define STLB_CACHE_INV_INDEX_MASK_SHIFT                              8
#define STLB_CACHE_INV_INDEX_MASK_MASK                               0xFF00

#define mmSTLB_CACHE_INV_BASE_39_8                                   0x490014
/* STLB_CACHE_INV_BASE_39_8 */
#define STLB_CACHE_INV_BASE_39_8_PA_SHIFT                            0
#define STLB_CACHE_INV_BASE_39_8_PA_MASK                             0xFFFFFFFF

#define mmSTLB_CACHE_INV_BASE_49_40                                  0x490018
/* STLB_CACHE_INV_BASE_49_40 */
#define STLB_CACHE_INV_BASE_49_40_PA_SHIFT                           0
#define STLB_CACHE_INV_BASE_49_40_PA_MASK                            0x3FF

#define mmSTLB_STLB_FEATURE_EN                                       0x49001C
/* STLB_STLB_FEATURE_EN */
#define STLB_STLB_FEATURE_EN_STLB_CTRL_MULTI_PAGE_SIZE_EN_SHIFT      0
#define STLB_STLB_FEATURE_EN_STLB_CTRL_MULTI_PAGE_SIZE_EN_MASK       0x1
#define STLB_STLB_FEATURE_EN_MULTI_PAGE_SIZE_EN_SHIFT                1
#define STLB_STLB_FEATURE_EN_MULTI_PAGE_SIZE_EN_MASK                 0x2
#define STLB_STLB_FEATURE_EN_LOOKUP_EN_SHIFT                         2
#define STLB_STLB_FEATURE_EN_LOOKUP_EN_MASK                          0x4
#define STLB_STLB_FEATURE_EN_BYPASS_SHIFT                            3
#define STLB_STLB_FEATURE_EN_BYPASS_MASK                             0x8
#define STLB_STLB_FEATURE_EN_BANK_STOP_SHIFT                         4
#define STLB_STLB_FEATURE_EN_BANK_STOP_MASK                          0x10
#define STLB_STLB_FEATURE_EN_TRACE_EN_SHIFT                          5
#define STLB_STLB_FEATURE_EN_TRACE_EN_MASK                           0x20
#define STLB_STLB_FEATURE_EN_FOLLOWER_EN_SHIFT                       6
#define STLB_STLB_FEATURE_EN_FOLLOWER_EN_MASK                        0x40
#define STLB_STLB_FEATURE_EN_CACHING_EN_SHIFT                        7
#define STLB_STLB_FEATURE_EN_CACHING_EN_MASK                         0xF80

#define mmSTLB_STLB_AXI_CACHE                                        0x490020
/* STLB_STLB_AXI_CACHE */
#define STLB_STLB_AXI_CACHE_STLB_CTRL_ARCACHE_SHIFT                  0
#define STLB_STLB_AXI_CACHE_STLB_CTRL_ARCACHE_MASK                   0xF
#define STLB_STLB_AXI_CACHE_STLB_CTRL_AWCACHE_SHIFT                  4
#define STLB_STLB_AXI_CACHE_STLB_CTRL_AWCACHE_MASK                   0xF0
#define STLB_STLB_AXI_CACHE_INV_ARCACHE_SHIFT                        8
#define STLB_STLB_AXI_CACHE_INV_ARCACHE_MASK                         0xF00

#define mmSTLB_HOP_CONFIGURATION                                     0x490024
/* STLB_HOP_CONFIGURATION */
#define STLB_HOP_CONFIGURATION_FIRST_HOP_SHIFT                       0
#define STLB_HOP_CONFIGURATION_FIRST_HOP_MASK                        0x7
#define STLB_HOP_CONFIGURATION_FIRST_LOOKUP_HOP_SHIFT                4
#define STLB_HOP_CONFIGURATION_FIRST_LOOKUP_HOP_MASK                 0x70
#define STLB_HOP_CONFIGURATION_LAST_HOP_SHIFT                        8
#define STLB_HOP_CONFIGURATION_LAST_HOP_MASK                         0x700

#define mmSTLB_LINK_LIST_LOOKUP_MASK_49_32                           0x490028
/* STLB_LINK_LIST_LOOKUP_MASK_49_32 */
#define STLB_LINK_LIST_LOOKUP_MASK_49_32_R_SHIFT                     0
#define STLB_LINK_LIST_LOOKUP_MASK_49_32_R_MASK                      0x3FFFF

#define mmSTLB_LINK_LIST_LOOKUP_MASK_31_0                            0x49002C
/* STLB_LINK_LIST_LOOKUP_MASK_31_0 */
#define STLB_LINK_LIST_LOOKUP_MASK_31_0_R_SHIFT                      0
#define STLB_LINK_LIST_LOOKUP_MASK_31_0_R_MASK                       0xFFFFFFFF

#define mmSTLB_LINK_LIST                                             0x490030
/* STLB_LINK_LIST */
#define STLB_LINK_LIST_CLEAR_SHIFT                                   0
#define STLB_LINK_LIST_CLEAR_MASK                                    0x1
#define STLB_LINK_LIST_EN_SHIFT                                      1
#define STLB_LINK_LIST_EN_MASK                                       0x2

#define mmSTLB_INV_ALL_START                                         0x490034
/* STLB_INV_ALL_START */
#define STLB_INV_ALL_START_R_SHIFT                                   0
#define STLB_INV_ALL_START_R_MASK                                    0x1

#define mmSTLB_INV_ALL_SET                                           0x490038
/* STLB_INV_ALL_SET */
#define STLB_INV_ALL_SET_R_SHIFT                                     0
#define STLB_INV_ALL_SET_R_MASK                                      0xFF

#define mmSTLB_INV_PS                                                0x49003C
/* STLB_INV_PS */
#define STLB_INV_PS_R_SHIFT                                          0
#define STLB_INV_PS_R_MASK                                           0x3

#define mmSTLB_INV_CONSUMER_INDEX                                    0x490040
/* STLB_INV_CONSUMER_INDEX */
#define STLB_INV_CONSUMER_INDEX_R_SHIFT                              0
#define STLB_INV_CONSUMER_INDEX_R_MASK                               0xFF

#define mmSTLB_INV_HIT_COUNT                                         0x490044
/* STLB_INV_HIT_COUNT */
#define STLB_INV_HIT_COUNT_R_SHIFT                                   0
#define STLB_INV_HIT_COUNT_R_MASK                                    0x7FF

#define mmSTLB_INV_SET                                               0x490048
/* STLB_INV_SET */
#define STLB_INV_SET_R_SHIFT                                         0
#define STLB_INV_SET_R_MASK                                          0xFF

#define mmSTLB_SRAM_INIT                                             0x49004C
/* STLB_SRAM_INIT */
#define STLB_SRAM_INIT_BUSY_TAG_SHIFT                                0
#define STLB_SRAM_INIT_BUSY_TAG_MASK                                 0x3
#define STLB_SRAM_INIT_BUSY_SLICE_SHIFT                              2
#define STLB_SRAM_INIT_BUSY_SLICE_MASK                               0xC
#define STLB_SRAM_INIT_BUSY_DATA_SHIFT                               4
#define STLB_SRAM_INIT_BUSY_DATA_MASK                                0x10

#endif /* ASIC_REG_STLB_H_ */

