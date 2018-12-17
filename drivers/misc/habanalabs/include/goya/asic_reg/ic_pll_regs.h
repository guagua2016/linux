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

#ifndef ASIC_REG_IC_PLL_H_
#define ASIC_REG_IC_PLL_H_

/*
 *****************************************
 *   IC_PLL (Prototype: PLL)
 *****************************************
 */

#define mmIC_PLL_NR                                                  0x4A3100
/* IC_PLL_NR */
#define IC_PLL_NR_VAL_SHIFT                                          0
#define IC_PLL_NR_VAL_MASK                                           0x3F

#define mmIC_PLL_NF                                                  0x4A3104
/* IC_PLL_NF */
#define IC_PLL_NF_VAL_SHIFT                                          0
#define IC_PLL_NF_VAL_MASK                                           0x1FFF

#define mmIC_PLL_OD                                                  0x4A3108
/* IC_PLL_OD */
#define IC_PLL_OD_VAL_SHIFT                                          0
#define IC_PLL_OD_VAL_MASK                                           0xF

#define mmIC_PLL_NB                                                  0x4A310C
/* IC_PLL_NB */
#define IC_PLL_NB_VAL_SHIFT                                          0
#define IC_PLL_NB_VAL_MASK                                           0xFFF

#define mmIC_PLL_CFG                                                 0x4A3110
/* IC_PLL_CFG */
#define IC_PLL_CFG_PWRDN_SHIFT                                       0
#define IC_PLL_CFG_PWRDN_MASK                                        0x1
#define IC_PLL_CFG_LOCK_SHIFT                                        4
#define IC_PLL_CFG_LOCK_MASK                                         0x10
#define IC_PLL_CFG_FASTEN_SHIFT                                      8
#define IC_PLL_CFG_FASTEN_MASK                                       0x100
#define IC_PLL_CFG_ENSAT_SHIFT                                       12
#define IC_PLL_CFG_ENSAT_MASK                                        0x1000
#define IC_PLL_CFG_BPS_SHIFT                                         16
#define IC_PLL_CFG_BPS_MASK                                          0x10000

#define mmIC_PLL_LOSE_MASK                                           0x4A3120
/* IC_PLL_LOSE_MASK */
#define IC_PLL_LOSE_MASK_IND_SHIFT                                   0
#define IC_PLL_LOSE_MASK_IND_MASK                                    0x1

#define mmIC_PLL_LOCK_INTR                                           0x4A3128
/* IC_PLL_LOCK_INTR */
#define IC_PLL_LOCK_INTR_IND_SHIFT                                   0
#define IC_PLL_LOCK_INTR_IND_MASK                                    0x1

#define mmIC_PLL_LOCK_BYPASS                                         0x4A312C
/* IC_PLL_LOCK_BYPASS */
#define IC_PLL_LOCK_BYPASS_EN_SHIFT                                  0
#define IC_PLL_LOCK_BYPASS_EN_MASK                                   0x1

#define mmIC_PLL_DATA_CHNG                                           0x4A3130
/* IC_PLL_DATA_CHNG */
#define IC_PLL_DATA_CHNG_NF_SHIFT                                    0
#define IC_PLL_DATA_CHNG_NF_MASK                                     0x1
#define IC_PLL_DATA_CHNG_NR_SHIFT                                    4
#define IC_PLL_DATA_CHNG_NR_MASK                                     0x10

#define mmIC_PLL_RST                                                 0x4A3134
/* IC_PLL_RST */
#define IC_PLL_RST_IND_SHIFT                                         0
#define IC_PLL_RST_IND_MASK                                          0x1

#define mmIC_PLL_SLIP_WD_CNTR                                        0x4A3150
/* IC_PLL_SLIP_WD_CNTR */
#define IC_PLL_SLIP_WD_CNTR_VAL_SHIFT                                0
#define IC_PLL_SLIP_WD_CNTR_VAL_MASK                                 0xFFFF

#define mmIC_PLL_DIV_FACTOR_0                                        0x4A3200

#define mmIC_PLL_DIV_FACTOR_1                                        0x4A3204

#define mmIC_PLL_DIV_FACTOR_2                                        0x4A3208

#define mmIC_PLL_DIV_FACTOR_3                                        0x4A320C
/* IC_PLL_DIV_FACTOR */
#define IC_PLL_DIV_FACTOR_VAL_SHIFT                                  0
#define IC_PLL_DIV_FACTOR_VAL_MASK                                   0xFF

#define mmIC_PLL_DIV_FACTOR_CMD_0                                    0x4A3220

#define mmIC_PLL_DIV_FACTOR_CMD_1                                    0x4A3224

#define mmIC_PLL_DIV_FACTOR_CMD_2                                    0x4A3228

#define mmIC_PLL_DIV_FACTOR_CMD_3                                    0x4A322C
/* IC_PLL_DIV_FACTOR_CMD */
#define IC_PLL_DIV_FACTOR_CMD_IND_SHIFT                              0
#define IC_PLL_DIV_FACTOR_CMD_IND_MASK                               0x1

#define mmIC_PLL_DIV_SEL_0                                           0x4A3280

#define mmIC_PLL_DIV_SEL_1                                           0x4A3284

#define mmIC_PLL_DIV_SEL_2                                           0x4A3288

#define mmIC_PLL_DIV_SEL_3                                           0x4A328C
/* IC_PLL_DIV_SEL */
#define IC_PLL_DIV_SEL_VAL_SHIFT                                     0
#define IC_PLL_DIV_SEL_VAL_MASK                                      0x3

#define mmIC_PLL_DIV_EN_0                                            0x4A32A0

#define mmIC_PLL_DIV_EN_1                                            0x4A32A4

#define mmIC_PLL_DIV_EN_2                                            0x4A32A8

#define mmIC_PLL_DIV_EN_3                                            0x4A32AC
/* IC_PLL_DIV_EN */
#define IC_PLL_DIV_EN_VAL_SHIFT                                      0
#define IC_PLL_DIV_EN_VAL_MASK                                       0x1

#define mmIC_PLL_DIV_FACTOR_BUSY_0                                   0x4A32C0

#define mmIC_PLL_DIV_FACTOR_BUSY_1                                   0x4A32C4

#define mmIC_PLL_DIV_FACTOR_BUSY_2                                   0x4A32C8

#define mmIC_PLL_DIV_FACTOR_BUSY_3                                   0x4A32CC
/* IC_PLL_DIV_FACTOR_BUSY */
#define IC_PLL_DIV_FACTOR_BUSY_STS_SHIFT                             0
#define IC_PLL_DIV_FACTOR_BUSY_STS_MASK                              0x1

#define mmIC_PLL_CLK_GATER                                           0x4A3300
/* IC_PLL_CLK_GATER */
#define IC_PLL_CLK_GATER_EN_SHIFT                                    0
#define IC_PLL_CLK_GATER_EN_MASK                                     0xF

#define mmIC_PLL_CLK_RLX_0                                           0x4A3310

#define mmIC_PLL_CLK_RLX_1                                           0x4A3314

#define mmIC_PLL_CLK_RLX_2                                           0x4A3318

#define mmIC_PLL_CLK_RLX_3                                           0x4A331C
/* IC_PLL_CLK_RLX */
#define IC_PLL_CLK_RLX_TOTAL_SHIFT                                   0
#define IC_PLL_CLK_RLX_TOTAL_MASK                                    0xFFFF
#define IC_PLL_CLK_RLX_HIGH_SHIFT                                    16
#define IC_PLL_CLK_RLX_HIGH_MASK                                     0xFFFF0000

#define mmIC_PLL_REF_CNTR_PERIOD                                     0x4A3400
/* IC_PLL_REF_CNTR_PERIOD */
#define IC_PLL_REF_CNTR_PERIOD_VAL_SHIFT                             0
#define IC_PLL_REF_CNTR_PERIOD_VAL_MASK                              0xFFFF

#define mmIC_PLL_REF_LOW_THRESHOLD                                   0x4A3410
/* IC_PLL_REF_LOW_THRESHOLD */
#define IC_PLL_REF_LOW_THRESHOLD_VAL_SHIFT                           0
#define IC_PLL_REF_LOW_THRESHOLD_VAL_MASK                            0xFFFFFFFF

#define mmIC_PLL_REF_HIGH_THRESHOLD                                  0x4A3420
/* IC_PLL_REF_HIGH_THRESHOLD */
#define IC_PLL_REF_HIGH_THRESHOLD_VAL_SHIFT                          0
#define IC_PLL_REF_HIGH_THRESHOLD_VAL_MASK                           0xFFFFFFFF

#define mmIC_PLL_PLL_NOT_STABLE                                      0x4A3430
/* IC_PLL_PLL_NOT_STABLE */
#define IC_PLL_PLL_NOT_STABLE_IND_SHIFT                              0
#define IC_PLL_PLL_NOT_STABLE_IND_MASK                               0x1

#define mmIC_PLL_FREQ_CALC_EN                                        0x4A3440
/* IC_PLL_FREQ_CALC_EN */
#define IC_PLL_FREQ_CALC_EN_IND_SHIFT                                0
#define IC_PLL_FREQ_CALC_EN_IND_MASK                                 0x1

#endif /* ASIC_REG_IC_PLL_H_ */

