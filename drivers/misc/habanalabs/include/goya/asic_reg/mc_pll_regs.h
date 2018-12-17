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

#ifndef ASIC_REG_MC_PLL_H_
#define ASIC_REG_MC_PLL_H_

/*
 *****************************************
 *   MC_PLL (Prototype: PLL)
 *****************************************
 */

#define mmMC_PLL_NR                                                  0x4A1100
/* MC_PLL_NR */
#define MC_PLL_NR_VAL_SHIFT                                          0
#define MC_PLL_NR_VAL_MASK                                           0x3F

#define mmMC_PLL_NF                                                  0x4A1104
/* MC_PLL_NF */
#define MC_PLL_NF_VAL_SHIFT                                          0
#define MC_PLL_NF_VAL_MASK                                           0x1FFF

#define mmMC_PLL_OD                                                  0x4A1108
/* MC_PLL_OD */
#define MC_PLL_OD_VAL_SHIFT                                          0
#define MC_PLL_OD_VAL_MASK                                           0xF

#define mmMC_PLL_NB                                                  0x4A110C
/* MC_PLL_NB */
#define MC_PLL_NB_VAL_SHIFT                                          0
#define MC_PLL_NB_VAL_MASK                                           0xFFF

#define mmMC_PLL_CFG                                                 0x4A1110
/* MC_PLL_CFG */
#define MC_PLL_CFG_PWRDN_SHIFT                                       0
#define MC_PLL_CFG_PWRDN_MASK                                        0x1
#define MC_PLL_CFG_LOCK_SHIFT                                        4
#define MC_PLL_CFG_LOCK_MASK                                         0x10
#define MC_PLL_CFG_FASTEN_SHIFT                                      8
#define MC_PLL_CFG_FASTEN_MASK                                       0x100
#define MC_PLL_CFG_ENSAT_SHIFT                                       12
#define MC_PLL_CFG_ENSAT_MASK                                        0x1000
#define MC_PLL_CFG_BPS_SHIFT                                         16
#define MC_PLL_CFG_BPS_MASK                                          0x10000

#define mmMC_PLL_LOSE_MASK                                           0x4A1120
/* MC_PLL_LOSE_MASK */
#define MC_PLL_LOSE_MASK_IND_SHIFT                                   0
#define MC_PLL_LOSE_MASK_IND_MASK                                    0x1

#define mmMC_PLL_LOCK_INTR                                           0x4A1128
/* MC_PLL_LOCK_INTR */
#define MC_PLL_LOCK_INTR_IND_SHIFT                                   0
#define MC_PLL_LOCK_INTR_IND_MASK                                    0x1

#define mmMC_PLL_LOCK_BYPASS                                         0x4A112C
/* MC_PLL_LOCK_BYPASS */
#define MC_PLL_LOCK_BYPASS_EN_SHIFT                                  0
#define MC_PLL_LOCK_BYPASS_EN_MASK                                   0x1

#define mmMC_PLL_DATA_CHNG                                           0x4A1130
/* MC_PLL_DATA_CHNG */
#define MC_PLL_DATA_CHNG_NF_SHIFT                                    0
#define MC_PLL_DATA_CHNG_NF_MASK                                     0x1
#define MC_PLL_DATA_CHNG_NR_SHIFT                                    4
#define MC_PLL_DATA_CHNG_NR_MASK                                     0x10

#define mmMC_PLL_RST                                                 0x4A1134
/* MC_PLL_RST */
#define MC_PLL_RST_IND_SHIFT                                         0
#define MC_PLL_RST_IND_MASK                                          0x1

#define mmMC_PLL_SLIP_WD_CNTR                                        0x4A1150
/* MC_PLL_SLIP_WD_CNTR */
#define MC_PLL_SLIP_WD_CNTR_VAL_SHIFT                                0
#define MC_PLL_SLIP_WD_CNTR_VAL_MASK                                 0xFFFF

#define mmMC_PLL_DIV_FACTOR_0                                        0x4A1200

#define mmMC_PLL_DIV_FACTOR_1                                        0x4A1204

#define mmMC_PLL_DIV_FACTOR_2                                        0x4A1208

#define mmMC_PLL_DIV_FACTOR_3                                        0x4A120C
/* MC_PLL_DIV_FACTOR */
#define MC_PLL_DIV_FACTOR_VAL_SHIFT                                  0
#define MC_PLL_DIV_FACTOR_VAL_MASK                                   0xFF

#define mmMC_PLL_DIV_FACTOR_CMD_0                                    0x4A1220

#define mmMC_PLL_DIV_FACTOR_CMD_1                                    0x4A1224

#define mmMC_PLL_DIV_FACTOR_CMD_2                                    0x4A1228

#define mmMC_PLL_DIV_FACTOR_CMD_3                                    0x4A122C
/* MC_PLL_DIV_FACTOR_CMD */
#define MC_PLL_DIV_FACTOR_CMD_IND_SHIFT                              0
#define MC_PLL_DIV_FACTOR_CMD_IND_MASK                               0x1

#define mmMC_PLL_DIV_SEL_0                                           0x4A1280

#define mmMC_PLL_DIV_SEL_1                                           0x4A1284

#define mmMC_PLL_DIV_SEL_2                                           0x4A1288

#define mmMC_PLL_DIV_SEL_3                                           0x4A128C
/* MC_PLL_DIV_SEL */
#define MC_PLL_DIV_SEL_VAL_SHIFT                                     0
#define MC_PLL_DIV_SEL_VAL_MASK                                      0x3

#define mmMC_PLL_DIV_EN_0                                            0x4A12A0

#define mmMC_PLL_DIV_EN_1                                            0x4A12A4

#define mmMC_PLL_DIV_EN_2                                            0x4A12A8

#define mmMC_PLL_DIV_EN_3                                            0x4A12AC
/* MC_PLL_DIV_EN */
#define MC_PLL_DIV_EN_VAL_SHIFT                                      0
#define MC_PLL_DIV_EN_VAL_MASK                                       0x1

#define mmMC_PLL_DIV_FACTOR_BUSY_0                                   0x4A12C0

#define mmMC_PLL_DIV_FACTOR_BUSY_1                                   0x4A12C4

#define mmMC_PLL_DIV_FACTOR_BUSY_2                                   0x4A12C8

#define mmMC_PLL_DIV_FACTOR_BUSY_3                                   0x4A12CC
/* MC_PLL_DIV_FACTOR_BUSY */
#define MC_PLL_DIV_FACTOR_BUSY_STS_SHIFT                             0
#define MC_PLL_DIV_FACTOR_BUSY_STS_MASK                              0x1

#define mmMC_PLL_CLK_GATER                                           0x4A1300
/* MC_PLL_CLK_GATER */
#define MC_PLL_CLK_GATER_EN_SHIFT                                    0
#define MC_PLL_CLK_GATER_EN_MASK                                     0xF

#define mmMC_PLL_CLK_RLX_0                                           0x4A1310

#define mmMC_PLL_CLK_RLX_1                                           0x4A1314

#define mmMC_PLL_CLK_RLX_2                                           0x4A1318

#define mmMC_PLL_CLK_RLX_3                                           0x4A131C
/* MC_PLL_CLK_RLX */
#define MC_PLL_CLK_RLX_TOTAL_SHIFT                                   0
#define MC_PLL_CLK_RLX_TOTAL_MASK                                    0xFFFF
#define MC_PLL_CLK_RLX_HIGH_SHIFT                                    16
#define MC_PLL_CLK_RLX_HIGH_MASK                                     0xFFFF0000

#define mmMC_PLL_REF_CNTR_PERIOD                                     0x4A1400
/* MC_PLL_REF_CNTR_PERIOD */
#define MC_PLL_REF_CNTR_PERIOD_VAL_SHIFT                             0
#define MC_PLL_REF_CNTR_PERIOD_VAL_MASK                              0xFFFF

#define mmMC_PLL_REF_LOW_THRESHOLD                                   0x4A1410
/* MC_PLL_REF_LOW_THRESHOLD */
#define MC_PLL_REF_LOW_THRESHOLD_VAL_SHIFT                           0
#define MC_PLL_REF_LOW_THRESHOLD_VAL_MASK                            0xFFFFFFFF

#define mmMC_PLL_REF_HIGH_THRESHOLD                                  0x4A1420
/* MC_PLL_REF_HIGH_THRESHOLD */
#define MC_PLL_REF_HIGH_THRESHOLD_VAL_SHIFT                          0
#define MC_PLL_REF_HIGH_THRESHOLD_VAL_MASK                           0xFFFFFFFF

#define mmMC_PLL_PLL_NOT_STABLE                                      0x4A1430
/* MC_PLL_PLL_NOT_STABLE */
#define MC_PLL_PLL_NOT_STABLE_IND_SHIFT                              0
#define MC_PLL_PLL_NOT_STABLE_IND_MASK                               0x1

#define mmMC_PLL_FREQ_CALC_EN                                        0x4A1440
/* MC_PLL_FREQ_CALC_EN */
#define MC_PLL_FREQ_CALC_EN_IND_SHIFT                                0
#define MC_PLL_FREQ_CALC_EN_IND_MASK                                 0x1

#endif /* ASIC_REG_MC_PLL_H_ */

