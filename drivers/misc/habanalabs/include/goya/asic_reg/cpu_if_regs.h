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

#ifndef ASIC_REG_CPU_IF_H_
#define ASIC_REG_CPU_IF_H_

/*
 *****************************************
 *   CPU_IF (Prototype: CPU_IF)
 *****************************************
 */

#define mmCPU_IF_PF_PQ_PI                                            0x442100
/* CPU_IF_PF_PQ_PI */
#define CPU_IF_PF_PQ_PI_VAL_SHIFT                                    0
#define CPU_IF_PF_PQ_PI_VAL_MASK                                     0xFFFFFFFF

#define mmCPU_IF_ARUSER_OVR                                          0x442104
/* CPU_IF_ARUSER_OVR */
#define CPU_IF_ARUSER_OVR_VAL_SHIFT                                  0
#define CPU_IF_ARUSER_OVR_VAL_MASK                                   0xFFFFFFFF

#define mmCPU_IF_ARUSER_OVR_EN                                       0x442108
/* CPU_IF_ARUSER_OVR_EN */
#define CPU_IF_ARUSER_OVR_EN_VAL_SHIFT                               0
#define CPU_IF_ARUSER_OVR_EN_VAL_MASK                                0xFFFFFFFF

#define mmCPU_IF_AWUSER_OVR                                          0x44210C
/* CPU_IF_AWUSER_OVR */
#define CPU_IF_AWUSER_OVR_VAL_SHIFT                                  0
#define CPU_IF_AWUSER_OVR_VAL_MASK                                   0xFFFFFFFF

#define mmCPU_IF_AWUSER_OVR_EN                                       0x442110
/* CPU_IF_AWUSER_OVR_EN */
#define CPU_IF_AWUSER_OVR_EN_VAL_SHIFT                               0
#define CPU_IF_AWUSER_OVR_EN_VAL_MASK                                0xFFFFFFFF

#define mmCPU_IF_AXCACHE_OVR                                         0x442114
/* CPU_IF_AXCACHE_OVR */
#define CPU_IF_AXCACHE_OVR_READ_SHIFT                                0
#define CPU_IF_AXCACHE_OVR_READ_MASK                                 0xF
#define CPU_IF_AXCACHE_OVR_WRITE_SHIFT                               4
#define CPU_IF_AXCACHE_OVR_WRITE_MASK                                0xF0
#define CPU_IF_AXCACHE_OVR_RD_EN_SHIFT                               8
#define CPU_IF_AXCACHE_OVR_RD_EN_MASK                                0xF00
#define CPU_IF_AXCACHE_OVR_WR_EN_SHIFT                               12
#define CPU_IF_AXCACHE_OVR_WR_EN_MASK                                0xF000

#define mmCPU_IF_LOCK_OVR                                            0x442118
/* CPU_IF_LOCK_OVR */
#define CPU_IF_LOCK_OVR_READ_SHIFT                                   0
#define CPU_IF_LOCK_OVR_READ_MASK                                    0x3
#define CPU_IF_LOCK_OVR_WRITE_SHIFT                                  4
#define CPU_IF_LOCK_OVR_WRITE_MASK                                   0x30
#define CPU_IF_LOCK_OVR_RD_EN_SHIFT                                  8
#define CPU_IF_LOCK_OVR_RD_EN_MASK                                   0x300
#define CPU_IF_LOCK_OVR_WR_EN_SHIFT                                  12
#define CPU_IF_LOCK_OVR_WR_EN_MASK                                   0x3000

#define mmCPU_IF_PROT_OVR                                            0x44211C
/* CPU_IF_PROT_OVR */
#define CPU_IF_PROT_OVR_READ_SHIFT                                   0
#define CPU_IF_PROT_OVR_READ_MASK                                    0x7
#define CPU_IF_PROT_OVR_WRITE_SHIFT                                  4
#define CPU_IF_PROT_OVR_WRITE_MASK                                   0x70
#define CPU_IF_PROT_OVR_RD_EN_SHIFT                                  8
#define CPU_IF_PROT_OVR_RD_EN_MASK                                   0x700
#define CPU_IF_PROT_OVR_WR_EN_SHIFT                                  12
#define CPU_IF_PROT_OVR_WR_EN_MASK                                   0x7000

#define mmCPU_IF_MAX_OUTSTANDING                                     0x442120
/* CPU_IF_MAX_OUTSTANDING */
#define CPU_IF_MAX_OUTSTANDING_READ_SHIFT                            0
#define CPU_IF_MAX_OUTSTANDING_READ_MASK                             0xFF
#define CPU_IF_MAX_OUTSTANDING_WRITE_SHIFT                           8
#define CPU_IF_MAX_OUTSTANDING_WRITE_MASK                            0xFF00

#define mmCPU_IF_EARLY_BRESP_EN                                      0x442124
/* CPU_IF_EARLY_BRESP_EN */
#define CPU_IF_EARLY_BRESP_EN_VAL_SHIFT                              0
#define CPU_IF_EARLY_BRESP_EN_VAL_MASK                               0x1

#define mmCPU_IF_FORCE_RSP_OK                                        0x442128
/* CPU_IF_FORCE_RSP_OK */
#define CPU_IF_FORCE_RSP_OK_VAL_SHIFT                                0
#define CPU_IF_FORCE_RSP_OK_VAL_MASK                                 0x1

#define mmCPU_IF_CPU_MSB_ADDR                                        0x44212C
/* CPU_IF_CPU_MSB_ADDR */
#define CPU_IF_CPU_MSB_ADDR_VAL_SHIFT                                0
#define CPU_IF_CPU_MSB_ADDR_VAL_MASK                                 0x3FF

#define mmCPU_IF_AXI_SPLIT_INTR                                      0x442130
/* CPU_IF_AXI_SPLIT_INTR */
#define CPU_IF_AXI_SPLIT_INTR_IND_SHIFT                              0
#define CPU_IF_AXI_SPLIT_INTR_IND_MASK                               0x1
#define CPU_IF_AXI_SPLIT_INTR_CLR_SHIFT                              1
#define CPU_IF_AXI_SPLIT_INTR_CLR_MASK                               0x2

#endif /* ASIC_REG_CPU_IF_H_ */

