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

#ifndef ASIC_REG_CPU_CA53_CFG_H_
#define ASIC_REG_CPU_CA53_CFG_H_

/*
 *****************************************
 *   CPU_CA53_CFG (Prototype: CA53_CFG)
 *****************************************
 */

#define mmCPU_CA53_CFG_ARM_CFG                                       0x441100
/* CPU_CA53_CFG_ARM_CFG */
#define CPU_CA53_CFG_ARM_CFG_AA64NAA32_SHIFT                         0
#define CPU_CA53_CFG_ARM_CFG_AA64NAA32_MASK                          0x3
#define CPU_CA53_CFG_ARM_CFG_END_SHIFT                               4
#define CPU_CA53_CFG_ARM_CFG_END_MASK                                0x30
#define CPU_CA53_CFG_ARM_CFG_TE_SHIFT                                8
#define CPU_CA53_CFG_ARM_CFG_TE_MASK                                 0x300
#define CPU_CA53_CFG_ARM_CFG_VINITHI_SHIFT                           12
#define CPU_CA53_CFG_ARM_CFG_VINITHI_MASK                            0x3000

#define mmCPU_CA53_CFG_RST_ADDR_LSB_0                                0x441104

#define mmCPU_CA53_CFG_RST_ADDR_LSB_1                                0x441108
/* CPU_CA53_CFG_RST_ADDR_LSB */
#define CPU_CA53_CFG_RST_ADDR_LSB_VECTOR_SHIFT                       0
#define CPU_CA53_CFG_RST_ADDR_LSB_VECTOR_MASK                        0xFFFFFFFF

#define mmCPU_CA53_CFG_RST_ADDR_MSB_0                                0x441114

#define mmCPU_CA53_CFG_RST_ADDR_MSB_1                                0x441118
/* CPU_CA53_CFG_RST_ADDR_MSB */
#define CPU_CA53_CFG_RST_ADDR_MSB_VECTOR_SHIFT                       0
#define CPU_CA53_CFG_RST_ADDR_MSB_VECTOR_MASK                        0xFF

#define mmCPU_CA53_CFG_ARM_RST_CONTROL                               0x441124
/* CPU_CA53_CFG_ARM_RST_CONTROL */
#define CPU_CA53_CFG_ARM_RST_CONTROL_NCPUPORESET_SHIFT               0
#define CPU_CA53_CFG_ARM_RST_CONTROL_NCPUPORESET_MASK                0x3
#define CPU_CA53_CFG_ARM_RST_CONTROL_NCORERESET_SHIFT                4
#define CPU_CA53_CFG_ARM_RST_CONTROL_NCORERESET_MASK                 0x30
#define CPU_CA53_CFG_ARM_RST_CONTROL_NL2RESET_SHIFT                  8
#define CPU_CA53_CFG_ARM_RST_CONTROL_NL2RESET_MASK                   0x100
#define CPU_CA53_CFG_ARM_RST_CONTROL_NPRESETDBG_SHIFT                12
#define CPU_CA53_CFG_ARM_RST_CONTROL_NPRESETDBG_MASK                 0x1000
#define CPU_CA53_CFG_ARM_RST_CONTROL_NMBISTRESET_SHIFT               16
#define CPU_CA53_CFG_ARM_RST_CONTROL_NMBISTRESET_MASK                0x10000
#define CPU_CA53_CFG_ARM_RST_CONTROL_WARMRSTREQ_SHIFT                20
#define CPU_CA53_CFG_ARM_RST_CONTROL_WARMRSTREQ_MASK                 0x300000

#define mmCPU_CA53_CFG_ARM_AFFINITY                                  0x441128
/* CPU_CA53_CFG_ARM_AFFINITY */
#define CPU_CA53_CFG_ARM_AFFINITY_LEVEL_1_SHIFT                      0
#define CPU_CA53_CFG_ARM_AFFINITY_LEVEL_1_MASK                       0xFF
#define CPU_CA53_CFG_ARM_AFFINITY_LEVEL_2_SHIFT                      8
#define CPU_CA53_CFG_ARM_AFFINITY_LEVEL_2_MASK                       0xFF00

#define mmCPU_CA53_CFG_ARM_DISABLE                                   0x44112C
/* CPU_CA53_CFG_ARM_DISABLE */
#define CPU_CA53_CFG_ARM_DISABLE_CP15S_SHIFT                         0
#define CPU_CA53_CFG_ARM_DISABLE_CP15S_MASK                          0x3
#define CPU_CA53_CFG_ARM_DISABLE_CRYPTO_SHIFT                        4
#define CPU_CA53_CFG_ARM_DISABLE_CRYPTO_MASK                         0x30
#define CPU_CA53_CFG_ARM_DISABLE_L2_RST_SHIFT                        8
#define CPU_CA53_CFG_ARM_DISABLE_L2_RST_MASK                         0x100
#define CPU_CA53_CFG_ARM_DISABLE_DBG_L1_RST_SHIFT                    9
#define CPU_CA53_CFG_ARM_DISABLE_DBG_L1_RST_MASK                     0x200

#define mmCPU_CA53_CFG_ARM_GIC_PERIPHBASE                            0x441130
/* CPU_CA53_CFG_ARM_GIC_PERIPHBASE */
#define CPU_CA53_CFG_ARM_GIC_PERIPHBASE_PERIPHBASE_SHIFT             0
#define CPU_CA53_CFG_ARM_GIC_PERIPHBASE_PERIPHBASE_MASK              0x3FFFFF

#define mmCPU_CA53_CFG_ARM_GIC_IRQ_CFG                               0x441134
/* CPU_CA53_CFG_ARM_GIC_IRQ_CFG */
#define CPU_CA53_CFG_ARM_GIC_IRQ_CFG_NREI_SHIFT                      0
#define CPU_CA53_CFG_ARM_GIC_IRQ_CFG_NREI_MASK                       0x3
#define CPU_CA53_CFG_ARM_GIC_IRQ_CFG_NSEI_SHIFT                      4
#define CPU_CA53_CFG_ARM_GIC_IRQ_CFG_NSEI_MASK                       0x30
#define CPU_CA53_CFG_ARM_GIC_IRQ_CFG_NIRQ_SHIFT                      8
#define CPU_CA53_CFG_ARM_GIC_IRQ_CFG_NIRQ_MASK                       0x300
#define CPU_CA53_CFG_ARM_GIC_IRQ_CFG_NFIQ_SHIFT                      12
#define CPU_CA53_CFG_ARM_GIC_IRQ_CFG_NFIQ_MASK                       0x3000
#define CPU_CA53_CFG_ARM_GIC_IRQ_CFG_NVFIQ_SHIFT                     16
#define CPU_CA53_CFG_ARM_GIC_IRQ_CFG_NVFIQ_MASK                      0x30000
#define CPU_CA53_CFG_ARM_GIC_IRQ_CFG_NVIRQ_SHIFT                     20
#define CPU_CA53_CFG_ARM_GIC_IRQ_CFG_NVIRQ_MASK                      0x300000
#define CPU_CA53_CFG_ARM_GIC_IRQ_CFG_NVSEI_SHIFT                     24
#define CPU_CA53_CFG_ARM_GIC_IRQ_CFG_NVSEI_MASK                      0x3000000
#define CPU_CA53_CFG_ARM_GIC_IRQ_CFG_GIC_EN_SHIFT                    31
#define CPU_CA53_CFG_ARM_GIC_IRQ_CFG_GIC_EN_MASK                     0x80000000

#define mmCPU_CA53_CFG_ARM_PWR_MNG                                   0x441138
/* CPU_CA53_CFG_ARM_PWR_MNG */
#define CPU_CA53_CFG_ARM_PWR_MNG_CLREXMONREQ_SHIFT                   0
#define CPU_CA53_CFG_ARM_PWR_MNG_CLREXMONREQ_MASK                    0x1
#define CPU_CA53_CFG_ARM_PWR_MNG_EVENTI_SHIFT                        1
#define CPU_CA53_CFG_ARM_PWR_MNG_EVENTI_MASK                         0x2
#define CPU_CA53_CFG_ARM_PWR_MNG_L2FLUSHREQ_SHIFT                    2
#define CPU_CA53_CFG_ARM_PWR_MNG_L2FLUSHREQ_MASK                     0x4
#define CPU_CA53_CFG_ARM_PWR_MNG_L2QREQN_SHIFT                       3
#define CPU_CA53_CFG_ARM_PWR_MNG_L2QREQN_MASK                        0x8
#define CPU_CA53_CFG_ARM_PWR_MNG_CPUQREQN_SHIFT                      4
#define CPU_CA53_CFG_ARM_PWR_MNG_CPUQREQN_MASK                       0x30
#define CPU_CA53_CFG_ARM_PWR_MNG_NEONQREQN_SHIFT                     8
#define CPU_CA53_CFG_ARM_PWR_MNG_NEONQREQN_MASK                      0x300
#define CPU_CA53_CFG_ARM_PWR_MNG_DBGPWRDUP_SHIFT                     12
#define CPU_CA53_CFG_ARM_PWR_MNG_DBGPWRDUP_MASK                      0x3000

#define mmCPU_CA53_CFG_ARB_DBG_ROM_ADDR                              0x44113C
/* CPU_CA53_CFG_ARB_DBG_ROM_ADDR */
#define CPU_CA53_CFG_ARB_DBG_ROM_ADDR_DEBUG_ROM_BASE_ADDR_SHIFT      0
#define CPU_CA53_CFG_ARB_DBG_ROM_ADDR_DEBUG_ROM_BASE_ADDR_MASK       0xFFFFFFF
#define CPU_CA53_CFG_ARB_DBG_ROM_ADDR_DEBUG_ROM_BASE_ADDR_VALID_SHIFT 31
#define CPU_CA53_CFG_ARB_DBG_ROM_ADDR_DEBUG_ROM_BASE_ADDR_VALID_MASK 0x80000000

#define mmCPU_CA53_CFG_ARM_DBG_MODES                                 0x441140
/* CPU_CA53_CFG_ARM_DBG_MODES */
#define CPU_CA53_CFG_ARM_DBG_MODES_EDBGRQ_SHIFT                      0
#define CPU_CA53_CFG_ARM_DBG_MODES_EDBGRQ_MASK                       0x3
#define CPU_CA53_CFG_ARM_DBG_MODES_DBGEN_SHIFT                       4
#define CPU_CA53_CFG_ARM_DBG_MODES_DBGEN_MASK                        0x30
#define CPU_CA53_CFG_ARM_DBG_MODES_NIDEN_SHIFT                       8
#define CPU_CA53_CFG_ARM_DBG_MODES_NIDEN_MASK                        0x300
#define CPU_CA53_CFG_ARM_DBG_MODES_SPIDEN_SHIFT                      12
#define CPU_CA53_CFG_ARM_DBG_MODES_SPIDEN_MASK                       0x3000
#define CPU_CA53_CFG_ARM_DBG_MODES_SPNIDEN_SHIFT                     16
#define CPU_CA53_CFG_ARM_DBG_MODES_SPNIDEN_MASK                      0x30000

#define mmCPU_CA53_CFG_ARM_PWR_STAT_0                                0x441200
/* CPU_CA53_CFG_ARM_PWR_STAT_0 */
#define CPU_CA53_CFG_ARM_PWR_STAT_0_CLREXMONACK_SHIFT                0
#define CPU_CA53_CFG_ARM_PWR_STAT_0_CLREXMONACK_MASK                 0x1
#define CPU_CA53_CFG_ARM_PWR_STAT_0_EVENTO_SHIFT                     1
#define CPU_CA53_CFG_ARM_PWR_STAT_0_EVENTO_MASK                      0x2
#define CPU_CA53_CFG_ARM_PWR_STAT_0_STANDBYWFI_SHIFT                 4
#define CPU_CA53_CFG_ARM_PWR_STAT_0_STANDBYWFI_MASK                  0x30
#define CPU_CA53_CFG_ARM_PWR_STAT_0_STANDBYWFE_SHIFT                 8
#define CPU_CA53_CFG_ARM_PWR_STAT_0_STANDBYWFE_MASK                  0x300
#define CPU_CA53_CFG_ARM_PWR_STAT_0_STANDBYWFIL2_SHIFT               12
#define CPU_CA53_CFG_ARM_PWR_STAT_0_STANDBYWFIL2_MASK                0x1000
#define CPU_CA53_CFG_ARM_PWR_STAT_0_L2FLUSHDONE_SHIFT                13
#define CPU_CA53_CFG_ARM_PWR_STAT_0_L2FLUSHDONE_MASK                 0x2000
#define CPU_CA53_CFG_ARM_PWR_STAT_0_SMPEN_SHIFT                      16
#define CPU_CA53_CFG_ARM_PWR_STAT_0_SMPEN_MASK                       0x30000

#define mmCPU_CA53_CFG_ARM_PWR_STAT_1                                0x441204
/* CPU_CA53_CFG_ARM_PWR_STAT_1 */
#define CPU_CA53_CFG_ARM_PWR_STAT_1_CPUQACTIVE_SHIFT                 0
#define CPU_CA53_CFG_ARM_PWR_STAT_1_CPUQACTIVE_MASK                  0x3
#define CPU_CA53_CFG_ARM_PWR_STAT_1_CPUQDENY_SHIFT                   4
#define CPU_CA53_CFG_ARM_PWR_STAT_1_CPUQDENY_MASK                    0x30
#define CPU_CA53_CFG_ARM_PWR_STAT_1_CPUQACCEPTN_SHIFT                8
#define CPU_CA53_CFG_ARM_PWR_STAT_1_CPUQACCEPTN_MASK                 0x300
#define CPU_CA53_CFG_ARM_PWR_STAT_1_NEONQACTIVE_SHIFT                12
#define CPU_CA53_CFG_ARM_PWR_STAT_1_NEONQACTIVE_MASK                 0x3000
#define CPU_CA53_CFG_ARM_PWR_STAT_1_NEONQDENY_SHIFT                  16
#define CPU_CA53_CFG_ARM_PWR_STAT_1_NEONQDENY_MASK                   0x30000
#define CPU_CA53_CFG_ARM_PWR_STAT_1_NEONQACCEPTN_SHIFT               20
#define CPU_CA53_CFG_ARM_PWR_STAT_1_NEONQACCEPTN_MASK                0x300000
#define CPU_CA53_CFG_ARM_PWR_STAT_1_L2QACTIVE_SHIFT                  24
#define CPU_CA53_CFG_ARM_PWR_STAT_1_L2QACTIVE_MASK                   0x1000000
#define CPU_CA53_CFG_ARM_PWR_STAT_1_L2QDENY_SHIFT                    25
#define CPU_CA53_CFG_ARM_PWR_STAT_1_L2QDENY_MASK                     0x2000000
#define CPU_CA53_CFG_ARM_PWR_STAT_1_L2QACCEPTN_SHIFT                 26
#define CPU_CA53_CFG_ARM_PWR_STAT_1_L2QACCEPTN_MASK                  0x4000000

#define mmCPU_CA53_CFG_ARM_DBG_STATUS                                0x441208
/* CPU_CA53_CFG_ARM_DBG_STATUS */
#define CPU_CA53_CFG_ARM_DBG_STATUS_DBGACK_SHIFT                     0
#define CPU_CA53_CFG_ARM_DBG_STATUS_DBGACK_MASK                      0x3
#define CPU_CA53_CFG_ARM_DBG_STATUS_COMMRX_SHIFT                     4
#define CPU_CA53_CFG_ARM_DBG_STATUS_COMMRX_MASK                      0x30
#define CPU_CA53_CFG_ARM_DBG_STATUS_COMMTX_SHIFT                     8
#define CPU_CA53_CFG_ARM_DBG_STATUS_COMMTX_MASK                      0x300
#define CPU_CA53_CFG_ARM_DBG_STATUS_DBGRSTREQ_SHIFT                  12
#define CPU_CA53_CFG_ARM_DBG_STATUS_DBGRSTREQ_MASK                   0x3000
#define CPU_CA53_CFG_ARM_DBG_STATUS_DBGNOPWRDWN_SHIFT                16
#define CPU_CA53_CFG_ARM_DBG_STATUS_DBGNOPWRDWN_MASK                 0x30000
#define CPU_CA53_CFG_ARM_DBG_STATUS_DBGPWRUPREQ_SHIFT                20
#define CPU_CA53_CFG_ARM_DBG_STATUS_DBGPWRUPREQ_MASK                 0x300000

#define mmCPU_CA53_CFG_ARM_MEM_ATTR                                  0x44120C
/* CPU_CA53_CFG_ARM_MEM_ATTR */
#define CPU_CA53_CFG_ARM_MEM_ATTR_RDMEMATTR_SHIFT                    0
#define CPU_CA53_CFG_ARM_MEM_ATTR_RDMEMATTR_MASK                     0xFF
#define CPU_CA53_CFG_ARM_MEM_ATTR_WRMEMATTR_SHIFT                    8
#define CPU_CA53_CFG_ARM_MEM_ATTR_WRMEMATTR_MASK                     0xFF00
#define CPU_CA53_CFG_ARM_MEM_ATTR_RACKM_SHIFT                        16
#define CPU_CA53_CFG_ARM_MEM_ATTR_RACKM_MASK                         0x10000
#define CPU_CA53_CFG_ARM_MEM_ATTR_WACKM_SHIFT                        20
#define CPU_CA53_CFG_ARM_MEM_ATTR_WACKM_MASK                         0x100000

#define mmCPU_CA53_CFG_ARM_PMU_0                                     0x441210

#define mmCPU_CA53_CFG_ARM_PMU_1                                     0x441214
/* CPU_CA53_CFG_ARM_PMU */
#define CPU_CA53_CFG_ARM_PMU_EVENT_SHIFT                             0
#define CPU_CA53_CFG_ARM_PMU_EVENT_MASK                              0x3FFFFFFF

#endif /* ASIC_REG_CPU_CA53_CFG_H_ */

