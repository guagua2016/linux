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

#ifndef ASIC_REG_TPC_PLL_H_
#define ASIC_REG_TPC_PLL_H_

/*
 *****************************************
 *   TPC_PLL (Prototype: PLL)
 *****************************************
 */

#define mmTPC_PLL_NR                                                 0xE01100
/* TPC_PLL_NR */
#define TPC_PLL_NR_VAL_SHIFT                                         0
#define TPC_PLL_NR_VAL_MASK                                          0x3F

#define mmTPC_PLL_NF                                                 0xE01104
/* TPC_PLL_NF */
#define TPC_PLL_NF_VAL_SHIFT                                         0
#define TPC_PLL_NF_VAL_MASK                                          0x1FFF

#define mmTPC_PLL_OD                                                 0xE01108
/* TPC_PLL_OD */
#define TPC_PLL_OD_VAL_SHIFT                                         0
#define TPC_PLL_OD_VAL_MASK                                          0xF

#define mmTPC_PLL_NB                                                 0xE0110C
/* TPC_PLL_NB */
#define TPC_PLL_NB_VAL_SHIFT                                         0
#define TPC_PLL_NB_VAL_MASK                                          0xFFF

#define mmTPC_PLL_CFG                                                0xE01110
/* TPC_PLL_CFG */
#define TPC_PLL_CFG_PWRDN_SHIFT                                      0
#define TPC_PLL_CFG_PWRDN_MASK                                       0x1
#define TPC_PLL_CFG_LOCK_SHIFT                                       4
#define TPC_PLL_CFG_LOCK_MASK                                        0x10
#define TPC_PLL_CFG_FASTEN_SHIFT                                     8
#define TPC_PLL_CFG_FASTEN_MASK                                      0x100
#define TPC_PLL_CFG_ENSAT_SHIFT                                      12
#define TPC_PLL_CFG_ENSAT_MASK                                       0x1000
#define TPC_PLL_CFG_BPS_SHIFT                                        16
#define TPC_PLL_CFG_BPS_MASK                                         0x10000

#define mmTPC_PLL_LOSE_MASK                                          0xE01120
/* TPC_PLL_LOSE_MASK */
#define TPC_PLL_LOSE_MASK_IND_SHIFT                                  0
#define TPC_PLL_LOSE_MASK_IND_MASK                                   0x1

#define mmTPC_PLL_LOCK_INTR                                          0xE01128
/* TPC_PLL_LOCK_INTR */
#define TPC_PLL_LOCK_INTR_IND_SHIFT                                  0
#define TPC_PLL_LOCK_INTR_IND_MASK                                   0x1

#define mmTPC_PLL_LOCK_BYPASS                                        0xE0112C
/* TPC_PLL_LOCK_BYPASS */
#define TPC_PLL_LOCK_BYPASS_EN_SHIFT                                 0
#define TPC_PLL_LOCK_BYPASS_EN_MASK                                  0x1

#define mmTPC_PLL_DATA_CHNG                                          0xE01130
/* TPC_PLL_DATA_CHNG */
#define TPC_PLL_DATA_CHNG_NF_SHIFT                                   0
#define TPC_PLL_DATA_CHNG_NF_MASK                                    0x1
#define TPC_PLL_DATA_CHNG_NR_SHIFT                                   4
#define TPC_PLL_DATA_CHNG_NR_MASK                                    0x10

#define mmTPC_PLL_RST                                                0xE01134
/* TPC_PLL_RST */
#define TPC_PLL_RST_IND_SHIFT                                        0
#define TPC_PLL_RST_IND_MASK                                         0x1

#define mmTPC_PLL_SLIP_WD_CNTR                                       0xE01150
/* TPC_PLL_SLIP_WD_CNTR */
#define TPC_PLL_SLIP_WD_CNTR_VAL_SHIFT                               0
#define TPC_PLL_SLIP_WD_CNTR_VAL_MASK                                0xFFFF

#define mmTPC_PLL_DIV_FACTOR_0                                       0xE01200

#define mmTPC_PLL_DIV_FACTOR_1                                       0xE01204

#define mmTPC_PLL_DIV_FACTOR_2                                       0xE01208

#define mmTPC_PLL_DIV_FACTOR_3                                       0xE0120C
/* TPC_PLL_DIV_FACTOR */
#define TPC_PLL_DIV_FACTOR_VAL_SHIFT                                 0
#define TPC_PLL_DIV_FACTOR_VAL_MASK                                  0xFF

#define mmTPC_PLL_DIV_FACTOR_CMD_0                                   0xE01220

#define mmTPC_PLL_DIV_FACTOR_CMD_1                                   0xE01224

#define mmTPC_PLL_DIV_FACTOR_CMD_2                                   0xE01228

#define mmTPC_PLL_DIV_FACTOR_CMD_3                                   0xE0122C
/* TPC_PLL_DIV_FACTOR_CMD */
#define TPC_PLL_DIV_FACTOR_CMD_IND_SHIFT                             0
#define TPC_PLL_DIV_FACTOR_CMD_IND_MASK                              0x1

#define mmTPC_PLL_DIV_SEL_0                                          0xE01280

#define mmTPC_PLL_DIV_SEL_1                                          0xE01284

#define mmTPC_PLL_DIV_SEL_2                                          0xE01288

#define mmTPC_PLL_DIV_SEL_3                                          0xE0128C
/* TPC_PLL_DIV_SEL */
#define TPC_PLL_DIV_SEL_VAL_SHIFT                                    0
#define TPC_PLL_DIV_SEL_VAL_MASK                                     0x3

#define mmTPC_PLL_DIV_EN_0                                           0xE012A0

#define mmTPC_PLL_DIV_EN_1                                           0xE012A4

#define mmTPC_PLL_DIV_EN_2                                           0xE012A8

#define mmTPC_PLL_DIV_EN_3                                           0xE012AC
/* TPC_PLL_DIV_EN */
#define TPC_PLL_DIV_EN_VAL_SHIFT                                     0
#define TPC_PLL_DIV_EN_VAL_MASK                                      0x1

#define mmTPC_PLL_DIV_FACTOR_BUSY_0                                  0xE012C0

#define mmTPC_PLL_DIV_FACTOR_BUSY_1                                  0xE012C4

#define mmTPC_PLL_DIV_FACTOR_BUSY_2                                  0xE012C8

#define mmTPC_PLL_DIV_FACTOR_BUSY_3                                  0xE012CC
/* TPC_PLL_DIV_FACTOR_BUSY */
#define TPC_PLL_DIV_FACTOR_BUSY_STS_SHIFT                            0
#define TPC_PLL_DIV_FACTOR_BUSY_STS_MASK                             0x1

#define mmTPC_PLL_CLK_GATER                                          0xE01300
/* TPC_PLL_CLK_GATER */
#define TPC_PLL_CLK_GATER_EN_SHIFT                                   0
#define TPC_PLL_CLK_GATER_EN_MASK                                    0xF

#define mmTPC_PLL_CLK_RLX_0                                          0xE01310

#define mmTPC_PLL_CLK_RLX_1                                          0xE01314

#define mmTPC_PLL_CLK_RLX_2                                          0xE01318

#define mmTPC_PLL_CLK_RLX_3                                          0xE0131C
/* TPC_PLL_CLK_RLX */
#define TPC_PLL_CLK_RLX_TOTAL_SHIFT                                  0
#define TPC_PLL_CLK_RLX_TOTAL_MASK                                   0xFFFF
#define TPC_PLL_CLK_RLX_HIGH_SHIFT                                   16
#define TPC_PLL_CLK_RLX_HIGH_MASK                                    0xFFFF0000

#define mmTPC_PLL_REF_CNTR_PERIOD                                    0xE01400
/* TPC_PLL_REF_CNTR_PERIOD */
#define TPC_PLL_REF_CNTR_PERIOD_VAL_SHIFT                            0
#define TPC_PLL_REF_CNTR_PERIOD_VAL_MASK                             0xFFFF

#define mmTPC_PLL_REF_LOW_THRESHOLD                                  0xE01410
/* TPC_PLL_REF_LOW_THRESHOLD */
#define TPC_PLL_REF_LOW_THRESHOLD_VAL_SHIFT                          0
#define TPC_PLL_REF_LOW_THRESHOLD_VAL_MASK                           0xFFFFFFFF

#define mmTPC_PLL_REF_HIGH_THRESHOLD                                 0xE01420
/* TPC_PLL_REF_HIGH_THRESHOLD */
#define TPC_PLL_REF_HIGH_THRESHOLD_VAL_SHIFT                         0
#define TPC_PLL_REF_HIGH_THRESHOLD_VAL_MASK                          0xFFFFFFFF

#define mmTPC_PLL_PLL_NOT_STABLE                                     0xE01430
/* TPC_PLL_PLL_NOT_STABLE */
#define TPC_PLL_PLL_NOT_STABLE_IND_SHIFT                             0
#define TPC_PLL_PLL_NOT_STABLE_IND_MASK                              0x1

#define mmTPC_PLL_FREQ_CALC_EN                                       0xE01440
/* TPC_PLL_FREQ_CALC_EN */
#define TPC_PLL_FREQ_CALC_EN_IND_SHIFT                               0
#define TPC_PLL_FREQ_CALC_EN_IND_MASK                                0x1

#endif /* ASIC_REG_TPC_PLL_H_ */

