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

#ifndef ASIC_REG_PSOC_MME_PLL_H_
#define ASIC_REG_PSOC_MME_PLL_H_

/*
 *****************************************
 *   PSOC_MME_PLL (Prototype: PLL)
 *****************************************
 */

#define mmPSOC_MME_PLL_NR                                            0xC71100
/* PSOC_MME_PLL_NR */
#define PSOC_MME_PLL_NR_VAL_SHIFT                                    0
#define PSOC_MME_PLL_NR_VAL_MASK                                     0x3F

#define mmPSOC_MME_PLL_NF                                            0xC71104
/* PSOC_MME_PLL_NF */
#define PSOC_MME_PLL_NF_VAL_SHIFT                                    0
#define PSOC_MME_PLL_NF_VAL_MASK                                     0x1FFF

#define mmPSOC_MME_PLL_OD                                            0xC71108
/* PSOC_MME_PLL_OD */
#define PSOC_MME_PLL_OD_VAL_SHIFT                                    0
#define PSOC_MME_PLL_OD_VAL_MASK                                     0xF

#define mmPSOC_MME_PLL_NB                                            0xC7110C
/* PSOC_MME_PLL_NB */
#define PSOC_MME_PLL_NB_VAL_SHIFT                                    0
#define PSOC_MME_PLL_NB_VAL_MASK                                     0xFFF

#define mmPSOC_MME_PLL_CFG                                           0xC71110
/* PSOC_MME_PLL_CFG */
#define PSOC_MME_PLL_CFG_PWRDN_SHIFT                                 0
#define PSOC_MME_PLL_CFG_PWRDN_MASK                                  0x1
#define PSOC_MME_PLL_CFG_LOCK_SHIFT                                  4
#define PSOC_MME_PLL_CFG_LOCK_MASK                                   0x10
#define PSOC_MME_PLL_CFG_FASTEN_SHIFT                                8
#define PSOC_MME_PLL_CFG_FASTEN_MASK                                 0x100
#define PSOC_MME_PLL_CFG_ENSAT_SHIFT                                 12
#define PSOC_MME_PLL_CFG_ENSAT_MASK                                  0x1000
#define PSOC_MME_PLL_CFG_BPS_SHIFT                                   16
#define PSOC_MME_PLL_CFG_BPS_MASK                                    0x10000

#define mmPSOC_MME_PLL_LOSE_MASK                                     0xC71120
/* PSOC_MME_PLL_LOSE_MASK */
#define PSOC_MME_PLL_LOSE_MASK_IND_SHIFT                             0
#define PSOC_MME_PLL_LOSE_MASK_IND_MASK                              0x1

#define mmPSOC_MME_PLL_LOCK_INTR                                     0xC71128
/* PSOC_MME_PLL_LOCK_INTR */
#define PSOC_MME_PLL_LOCK_INTR_IND_SHIFT                             0
#define PSOC_MME_PLL_LOCK_INTR_IND_MASK                              0x1

#define mmPSOC_MME_PLL_LOCK_BYPASS                                   0xC7112C
/* PSOC_MME_PLL_LOCK_BYPASS */
#define PSOC_MME_PLL_LOCK_BYPASS_EN_SHIFT                            0
#define PSOC_MME_PLL_LOCK_BYPASS_EN_MASK                             0x1

#define mmPSOC_MME_PLL_DATA_CHNG                                     0xC71130
/* PSOC_MME_PLL_DATA_CHNG */
#define PSOC_MME_PLL_DATA_CHNG_NF_SHIFT                              0
#define PSOC_MME_PLL_DATA_CHNG_NF_MASK                               0x1
#define PSOC_MME_PLL_DATA_CHNG_NR_SHIFT                              4
#define PSOC_MME_PLL_DATA_CHNG_NR_MASK                               0x10

#define mmPSOC_MME_PLL_RST                                           0xC71134
/* PSOC_MME_PLL_RST */
#define PSOC_MME_PLL_RST_IND_SHIFT                                   0
#define PSOC_MME_PLL_RST_IND_MASK                                    0x1

#define mmPSOC_MME_PLL_SLIP_WD_CNTR                                  0xC71150
/* PSOC_MME_PLL_SLIP_WD_CNTR */
#define PSOC_MME_PLL_SLIP_WD_CNTR_VAL_SHIFT                          0
#define PSOC_MME_PLL_SLIP_WD_CNTR_VAL_MASK                           0xFFFF

#define mmPSOC_MME_PLL_DIV_FACTOR_0                                  0xC71200

#define mmPSOC_MME_PLL_DIV_FACTOR_1                                  0xC71204

#define mmPSOC_MME_PLL_DIV_FACTOR_2                                  0xC71208

#define mmPSOC_MME_PLL_DIV_FACTOR_3                                  0xC7120C
/* PSOC_MME_PLL_DIV_FACTOR */
#define PSOC_MME_PLL_DIV_FACTOR_VAL_SHIFT                            0
#define PSOC_MME_PLL_DIV_FACTOR_VAL_MASK                             0xFF

#define mmPSOC_MME_PLL_DIV_FACTOR_CMD_0                              0xC71220

#define mmPSOC_MME_PLL_DIV_FACTOR_CMD_1                              0xC71224

#define mmPSOC_MME_PLL_DIV_FACTOR_CMD_2                              0xC71228

#define mmPSOC_MME_PLL_DIV_FACTOR_CMD_3                              0xC7122C
/* PSOC_MME_PLL_DIV_FACTOR_CMD */
#define PSOC_MME_PLL_DIV_FACTOR_CMD_IND_SHIFT                        0
#define PSOC_MME_PLL_DIV_FACTOR_CMD_IND_MASK                         0x1

#define mmPSOC_MME_PLL_DIV_SEL_0                                     0xC71280

#define mmPSOC_MME_PLL_DIV_SEL_1                                     0xC71284

#define mmPSOC_MME_PLL_DIV_SEL_2                                     0xC71288

#define mmPSOC_MME_PLL_DIV_SEL_3                                     0xC7128C
/* PSOC_MME_PLL_DIV_SEL */
#define PSOC_MME_PLL_DIV_SEL_VAL_SHIFT                               0
#define PSOC_MME_PLL_DIV_SEL_VAL_MASK                                0x3

#define mmPSOC_MME_PLL_DIV_EN_0                                      0xC712A0

#define mmPSOC_MME_PLL_DIV_EN_1                                      0xC712A4

#define mmPSOC_MME_PLL_DIV_EN_2                                      0xC712A8

#define mmPSOC_MME_PLL_DIV_EN_3                                      0xC712AC
/* PSOC_MME_PLL_DIV_EN */
#define PSOC_MME_PLL_DIV_EN_VAL_SHIFT                                0
#define PSOC_MME_PLL_DIV_EN_VAL_MASK                                 0x1

#define mmPSOC_MME_PLL_DIV_FACTOR_BUSY_0                             0xC712C0

#define mmPSOC_MME_PLL_DIV_FACTOR_BUSY_1                             0xC712C4

#define mmPSOC_MME_PLL_DIV_FACTOR_BUSY_2                             0xC712C8

#define mmPSOC_MME_PLL_DIV_FACTOR_BUSY_3                             0xC712CC
/* PSOC_MME_PLL_DIV_FACTOR_BUSY */
#define PSOC_MME_PLL_DIV_FACTOR_BUSY_STS_SHIFT                       0
#define PSOC_MME_PLL_DIV_FACTOR_BUSY_STS_MASK                        0x1

#define mmPSOC_MME_PLL_CLK_GATER                                     0xC71300
/* PSOC_MME_PLL_CLK_GATER */
#define PSOC_MME_PLL_CLK_GATER_EN_SHIFT                              0
#define PSOC_MME_PLL_CLK_GATER_EN_MASK                               0xF

#define mmPSOC_MME_PLL_CLK_RLX_0                                     0xC71310

#define mmPSOC_MME_PLL_CLK_RLX_1                                     0xC71314

#define mmPSOC_MME_PLL_CLK_RLX_2                                     0xC71318

#define mmPSOC_MME_PLL_CLK_RLX_3                                     0xC7131C
/* PSOC_MME_PLL_CLK_RLX */
#define PSOC_MME_PLL_CLK_RLX_TOTAL_SHIFT                             0
#define PSOC_MME_PLL_CLK_RLX_TOTAL_MASK                              0xFFFF
#define PSOC_MME_PLL_CLK_RLX_HIGH_SHIFT                              16
#define PSOC_MME_PLL_CLK_RLX_HIGH_MASK                               0xFFFF0000

#define mmPSOC_MME_PLL_REF_CNTR_PERIOD                               0xC71400
/* PSOC_MME_PLL_REF_CNTR_PERIOD */
#define PSOC_MME_PLL_REF_CNTR_PERIOD_VAL_SHIFT                       0
#define PSOC_MME_PLL_REF_CNTR_PERIOD_VAL_MASK                        0xFFFF

#define mmPSOC_MME_PLL_REF_LOW_THRESHOLD                             0xC71410
/* PSOC_MME_PLL_REF_LOW_THRESHOLD */
#define PSOC_MME_PLL_REF_LOW_THRESHOLD_VAL_SHIFT                     0
#define PSOC_MME_PLL_REF_LOW_THRESHOLD_VAL_MASK                      0xFFFFFFFF

#define mmPSOC_MME_PLL_REF_HIGH_THRESHOLD                            0xC71420
/* PSOC_MME_PLL_REF_HIGH_THRESHOLD */
#define PSOC_MME_PLL_REF_HIGH_THRESHOLD_VAL_SHIFT                    0
#define PSOC_MME_PLL_REF_HIGH_THRESHOLD_VAL_MASK                     0xFFFFFFFF

#define mmPSOC_MME_PLL_PLL_NOT_STABLE                                0xC71430
/* PSOC_MME_PLL_PLL_NOT_STABLE */
#define PSOC_MME_PLL_PLL_NOT_STABLE_IND_SHIFT                        0
#define PSOC_MME_PLL_PLL_NOT_STABLE_IND_MASK                         0x1

#define mmPSOC_MME_PLL_FREQ_CALC_EN                                  0xC71440
/* PSOC_MME_PLL_FREQ_CALC_EN */
#define PSOC_MME_PLL_FREQ_CALC_EN_IND_SHIFT                          0
#define PSOC_MME_PLL_FREQ_CALC_EN_IND_MASK                           0x1

#endif /* ASIC_REG_PSOC_MME_PLL_H_ */

