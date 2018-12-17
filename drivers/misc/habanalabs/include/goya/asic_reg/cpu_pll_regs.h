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

#ifndef ASIC_REG_CPU_PLL_H_
#define ASIC_REG_CPU_PLL_H_

/*
 *****************************************
 *   CPU_PLL (Prototype: PLL)
 *****************************************
 */

#define mmCPU_PLL_NR                                                 0x4A2100
/* CPU_PLL_NR */
#define CPU_PLL_NR_VAL_SHIFT                                         0
#define CPU_PLL_NR_VAL_MASK                                          0x3F

#define mmCPU_PLL_NF                                                 0x4A2104
/* CPU_PLL_NF */
#define CPU_PLL_NF_VAL_SHIFT                                         0
#define CPU_PLL_NF_VAL_MASK                                          0x1FFF

#define mmCPU_PLL_OD                                                 0x4A2108
/* CPU_PLL_OD */
#define CPU_PLL_OD_VAL_SHIFT                                         0
#define CPU_PLL_OD_VAL_MASK                                          0xF

#define mmCPU_PLL_NB                                                 0x4A210C
/* CPU_PLL_NB */
#define CPU_PLL_NB_VAL_SHIFT                                         0
#define CPU_PLL_NB_VAL_MASK                                          0xFFF

#define mmCPU_PLL_CFG                                                0x4A2110
/* CPU_PLL_CFG */
#define CPU_PLL_CFG_PWRDN_SHIFT                                      0
#define CPU_PLL_CFG_PWRDN_MASK                                       0x1
#define CPU_PLL_CFG_LOCK_SHIFT                                       4
#define CPU_PLL_CFG_LOCK_MASK                                        0x10
#define CPU_PLL_CFG_FASTEN_SHIFT                                     8
#define CPU_PLL_CFG_FASTEN_MASK                                      0x100
#define CPU_PLL_CFG_ENSAT_SHIFT                                      12
#define CPU_PLL_CFG_ENSAT_MASK                                       0x1000
#define CPU_PLL_CFG_BPS_SHIFT                                        16
#define CPU_PLL_CFG_BPS_MASK                                         0x10000

#define mmCPU_PLL_LOSE_MASK                                          0x4A2120
/* CPU_PLL_LOSE_MASK */
#define CPU_PLL_LOSE_MASK_IND_SHIFT                                  0
#define CPU_PLL_LOSE_MASK_IND_MASK                                   0x1

#define mmCPU_PLL_LOCK_INTR                                          0x4A2128
/* CPU_PLL_LOCK_INTR */
#define CPU_PLL_LOCK_INTR_IND_SHIFT                                  0
#define CPU_PLL_LOCK_INTR_IND_MASK                                   0x1

#define mmCPU_PLL_LOCK_BYPASS                                        0x4A212C
/* CPU_PLL_LOCK_BYPASS */
#define CPU_PLL_LOCK_BYPASS_EN_SHIFT                                 0
#define CPU_PLL_LOCK_BYPASS_EN_MASK                                  0x1

#define mmCPU_PLL_DATA_CHNG                                          0x4A2130
/* CPU_PLL_DATA_CHNG */
#define CPU_PLL_DATA_CHNG_NF_SHIFT                                   0
#define CPU_PLL_DATA_CHNG_NF_MASK                                    0x1
#define CPU_PLL_DATA_CHNG_NR_SHIFT                                   4
#define CPU_PLL_DATA_CHNG_NR_MASK                                    0x10

#define mmCPU_PLL_RST                                                0x4A2134
/* CPU_PLL_RST */
#define CPU_PLL_RST_IND_SHIFT                                        0
#define CPU_PLL_RST_IND_MASK                                         0x1

#define mmCPU_PLL_SLIP_WD_CNTR                                       0x4A2150
/* CPU_PLL_SLIP_WD_CNTR */
#define CPU_PLL_SLIP_WD_CNTR_VAL_SHIFT                               0
#define CPU_PLL_SLIP_WD_CNTR_VAL_MASK                                0xFFFF

#define mmCPU_PLL_DIV_FACTOR_0                                       0x4A2200

#define mmCPU_PLL_DIV_FACTOR_1                                       0x4A2204

#define mmCPU_PLL_DIV_FACTOR_2                                       0x4A2208

#define mmCPU_PLL_DIV_FACTOR_3                                       0x4A220C
/* CPU_PLL_DIV_FACTOR */
#define CPU_PLL_DIV_FACTOR_VAL_SHIFT                                 0
#define CPU_PLL_DIV_FACTOR_VAL_MASK                                  0xFF

#define mmCPU_PLL_DIV_FACTOR_CMD_0                                   0x4A2220

#define mmCPU_PLL_DIV_FACTOR_CMD_1                                   0x4A2224

#define mmCPU_PLL_DIV_FACTOR_CMD_2                                   0x4A2228

#define mmCPU_PLL_DIV_FACTOR_CMD_3                                   0x4A222C
/* CPU_PLL_DIV_FACTOR_CMD */
#define CPU_PLL_DIV_FACTOR_CMD_IND_SHIFT                             0
#define CPU_PLL_DIV_FACTOR_CMD_IND_MASK                              0x1

#define mmCPU_PLL_DIV_SEL_0                                          0x4A2280

#define mmCPU_PLL_DIV_SEL_1                                          0x4A2284

#define mmCPU_PLL_DIV_SEL_2                                          0x4A2288

#define mmCPU_PLL_DIV_SEL_3                                          0x4A228C
/* CPU_PLL_DIV_SEL */
#define CPU_PLL_DIV_SEL_VAL_SHIFT                                    0
#define CPU_PLL_DIV_SEL_VAL_MASK                                     0x3

#define mmCPU_PLL_DIV_EN_0                                           0x4A22A0

#define mmCPU_PLL_DIV_EN_1                                           0x4A22A4

#define mmCPU_PLL_DIV_EN_2                                           0x4A22A8

#define mmCPU_PLL_DIV_EN_3                                           0x4A22AC
/* CPU_PLL_DIV_EN */
#define CPU_PLL_DIV_EN_VAL_SHIFT                                     0
#define CPU_PLL_DIV_EN_VAL_MASK                                      0x1

#define mmCPU_PLL_DIV_FACTOR_BUSY_0                                  0x4A22C0

#define mmCPU_PLL_DIV_FACTOR_BUSY_1                                  0x4A22C4

#define mmCPU_PLL_DIV_FACTOR_BUSY_2                                  0x4A22C8

#define mmCPU_PLL_DIV_FACTOR_BUSY_3                                  0x4A22CC
/* CPU_PLL_DIV_FACTOR_BUSY */
#define CPU_PLL_DIV_FACTOR_BUSY_STS_SHIFT                            0
#define CPU_PLL_DIV_FACTOR_BUSY_STS_MASK                             0x1

#define mmCPU_PLL_CLK_GATER                                          0x4A2300
/* CPU_PLL_CLK_GATER */
#define CPU_PLL_CLK_GATER_EN_SHIFT                                   0
#define CPU_PLL_CLK_GATER_EN_MASK                                    0xF

#define mmCPU_PLL_CLK_RLX_0                                          0x4A2310

#define mmCPU_PLL_CLK_RLX_1                                          0x4A2314

#define mmCPU_PLL_CLK_RLX_2                                          0x4A2318

#define mmCPU_PLL_CLK_RLX_3                                          0x4A231C
/* CPU_PLL_CLK_RLX */
#define CPU_PLL_CLK_RLX_TOTAL_SHIFT                                  0
#define CPU_PLL_CLK_RLX_TOTAL_MASK                                   0xFFFF
#define CPU_PLL_CLK_RLX_HIGH_SHIFT                                   16
#define CPU_PLL_CLK_RLX_HIGH_MASK                                    0xFFFF0000

#define mmCPU_PLL_REF_CNTR_PERIOD                                    0x4A2400
/* CPU_PLL_REF_CNTR_PERIOD */
#define CPU_PLL_REF_CNTR_PERIOD_VAL_SHIFT                            0
#define CPU_PLL_REF_CNTR_PERIOD_VAL_MASK                             0xFFFF

#define mmCPU_PLL_REF_LOW_THRESHOLD                                  0x4A2410
/* CPU_PLL_REF_LOW_THRESHOLD */
#define CPU_PLL_REF_LOW_THRESHOLD_VAL_SHIFT                          0
#define CPU_PLL_REF_LOW_THRESHOLD_VAL_MASK                           0xFFFFFFFF

#define mmCPU_PLL_REF_HIGH_THRESHOLD                                 0x4A2420
/* CPU_PLL_REF_HIGH_THRESHOLD */
#define CPU_PLL_REF_HIGH_THRESHOLD_VAL_SHIFT                         0
#define CPU_PLL_REF_HIGH_THRESHOLD_VAL_MASK                          0xFFFFFFFF

#define mmCPU_PLL_PLL_NOT_STABLE                                     0x4A2430
/* CPU_PLL_PLL_NOT_STABLE */
#define CPU_PLL_PLL_NOT_STABLE_IND_SHIFT                             0
#define CPU_PLL_PLL_NOT_STABLE_IND_MASK                              0x1

#define mmCPU_PLL_FREQ_CALC_EN                                       0x4A2440
/* CPU_PLL_FREQ_CALC_EN */
#define CPU_PLL_FREQ_CALC_EN_IND_SHIFT                               0
#define CPU_PLL_FREQ_CALC_EN_IND_MASK                                0x1

#endif /* ASIC_REG_CPU_PLL_H_ */

