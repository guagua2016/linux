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

#ifndef ASIC_REG_SRAM_Y0_X1_RTR_H_
#define ASIC_REG_SRAM_Y0_X1_RTR_H_

/*
 *****************************************
 *   SRAM_Y0_X1_RTR (Prototype: IC_RTR)
 *****************************************
 */

#define mmSRAM_Y0_X1_RTR_HBW_RD_RQ_E_ARB                             0x205100
/* SRAM_Y0_X1_RTR_HBW_RD_RQ_E_ARB */
#define SRAM_Y0_X1_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y0_X1_RTR_HBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y0_X1_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y0_X1_RTR_HBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y0_X1_RTR_HBW_RD_RQ_W_ARB                             0x205104
/* SRAM_Y0_X1_RTR_HBW_RD_RQ_W_ARB */
#define SRAM_Y0_X1_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y0_X1_RTR_HBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y0_X1_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y0_X1_RTR_HBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y0_X1_RTR_HBW_RD_RQ_L_ARB                             0x205110
/* SRAM_Y0_X1_RTR_HBW_RD_RQ_L_ARB */
#define SRAM_Y0_X1_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y0_X1_RTR_HBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y0_X1_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y0_X1_RTR_HBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y0_X1_RTR_HBW_E_ARB_MAX                               0x205120
/* SRAM_Y0_X1_RTR_HBW_E_ARB_MAX */
#define SRAM_Y0_X1_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X1_RTR_HBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y0_X1_RTR_HBW_W_ARB_MAX                               0x205124
/* SRAM_Y0_X1_RTR_HBW_W_ARB_MAX */
#define SRAM_Y0_X1_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X1_RTR_HBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y0_X1_RTR_HBW_L_ARB_MAX                               0x205130
/* SRAM_Y0_X1_RTR_HBW_L_ARB_MAX */
#define SRAM_Y0_X1_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X1_RTR_HBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y0_X1_RTR_HBW_DATA_E_ARB                              0x205140
/* SRAM_Y0_X1_RTR_HBW_DATA_E_ARB */
#define SRAM_Y0_X1_RTR_HBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y0_X1_RTR_HBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y0_X1_RTR_HBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y0_X1_RTR_HBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y0_X1_RTR_HBW_DATA_W_ARB                              0x205144
/* SRAM_Y0_X1_RTR_HBW_DATA_W_ARB */
#define SRAM_Y0_X1_RTR_HBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y0_X1_RTR_HBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y0_X1_RTR_HBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y0_X1_RTR_HBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y0_X1_RTR_HBW_DATA_L_ARB                              0x205148
/* SRAM_Y0_X1_RTR_HBW_DATA_L_ARB */
#define SRAM_Y0_X1_RTR_HBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y0_X1_RTR_HBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y0_X1_RTR_HBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y0_X1_RTR_HBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y0_X1_RTR_HBW_WR_RS_E_ARB                             0x205160
/* SRAM_Y0_X1_RTR_HBW_WR_RS_E_ARB */
#define SRAM_Y0_X1_RTR_HBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y0_X1_RTR_HBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y0_X1_RTR_HBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y0_X1_RTR_HBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y0_X1_RTR_HBW_WR_RS_W_ARB                             0x205164
/* SRAM_Y0_X1_RTR_HBW_WR_RS_W_ARB */
#define SRAM_Y0_X1_RTR_HBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y0_X1_RTR_HBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y0_X1_RTR_HBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y0_X1_RTR_HBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y0_X1_RTR_HBW_WR_RS_L_ARB                             0x205168
/* SRAM_Y0_X1_RTR_HBW_WR_RS_L_ARB */
#define SRAM_Y0_X1_RTR_HBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y0_X1_RTR_HBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y0_X1_RTR_HBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y0_X1_RTR_HBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y0_X1_RTR_LBW_RD_RQ_E_ARB                             0x205200
/* SRAM_Y0_X1_RTR_LBW_RD_RQ_E_ARB */
#define SRAM_Y0_X1_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y0_X1_RTR_LBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y0_X1_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y0_X1_RTR_LBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y0_X1_RTR_LBW_RD_RQ_W_ARB                             0x205204
/* SRAM_Y0_X1_RTR_LBW_RD_RQ_W_ARB */
#define SRAM_Y0_X1_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y0_X1_RTR_LBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y0_X1_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y0_X1_RTR_LBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y0_X1_RTR_LBW_RD_RQ_L_ARB                             0x205210
/* SRAM_Y0_X1_RTR_LBW_RD_RQ_L_ARB */
#define SRAM_Y0_X1_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y0_X1_RTR_LBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y0_X1_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y0_X1_RTR_LBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y0_X1_RTR_LBW_E_ARB_MAX                               0x205220
/* SRAM_Y0_X1_RTR_LBW_E_ARB_MAX */
#define SRAM_Y0_X1_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X1_RTR_LBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y0_X1_RTR_LBW_W_ARB_MAX                               0x205224
/* SRAM_Y0_X1_RTR_LBW_W_ARB_MAX */
#define SRAM_Y0_X1_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X1_RTR_LBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y0_X1_RTR_LBW_L_ARB_MAX                               0x205230
/* SRAM_Y0_X1_RTR_LBW_L_ARB_MAX */
#define SRAM_Y0_X1_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X1_RTR_LBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y0_X1_RTR_LBW_DATA_E_ARB                              0x205240
/* SRAM_Y0_X1_RTR_LBW_DATA_E_ARB */
#define SRAM_Y0_X1_RTR_LBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y0_X1_RTR_LBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y0_X1_RTR_LBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y0_X1_RTR_LBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y0_X1_RTR_LBW_DATA_W_ARB                              0x205244
/* SRAM_Y0_X1_RTR_LBW_DATA_W_ARB */
#define SRAM_Y0_X1_RTR_LBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y0_X1_RTR_LBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y0_X1_RTR_LBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y0_X1_RTR_LBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y0_X1_RTR_LBW_DATA_L_ARB                              0x205248
/* SRAM_Y0_X1_RTR_LBW_DATA_L_ARB */
#define SRAM_Y0_X1_RTR_LBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y0_X1_RTR_LBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y0_X1_RTR_LBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y0_X1_RTR_LBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y0_X1_RTR_LBW_WR_RS_E_ARB                             0x205260
/* SRAM_Y0_X1_RTR_LBW_WR_RS_E_ARB */
#define SRAM_Y0_X1_RTR_LBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y0_X1_RTR_LBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y0_X1_RTR_LBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y0_X1_RTR_LBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y0_X1_RTR_LBW_WR_RS_W_ARB                             0x205264
/* SRAM_Y0_X1_RTR_LBW_WR_RS_W_ARB */
#define SRAM_Y0_X1_RTR_LBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y0_X1_RTR_LBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y0_X1_RTR_LBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y0_X1_RTR_LBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y0_X1_RTR_LBW_WR_RS_L_ARB                             0x205268
/* SRAM_Y0_X1_RTR_LBW_WR_RS_L_ARB */
#define SRAM_Y0_X1_RTR_LBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y0_X1_RTR_LBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y0_X1_RTR_LBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y0_X1_RTR_LBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y0_X1_RTR_DBG_E_ARB                                   0x205300
/* SRAM_Y0_X1_RTR_DBG_E_ARB */
#define SRAM_Y0_X1_RTR_DBG_E_ARB_W_SHIFT                             0
#define SRAM_Y0_X1_RTR_DBG_E_ARB_W_MASK                              0x7
#define SRAM_Y0_X1_RTR_DBG_E_ARB_L_SHIFT                             8
#define SRAM_Y0_X1_RTR_DBG_E_ARB_L_MASK                              0x700

#define mmSRAM_Y0_X1_RTR_DBG_W_ARB                                   0x205304
/* SRAM_Y0_X1_RTR_DBG_W_ARB */
#define SRAM_Y0_X1_RTR_DBG_W_ARB_E_SHIFT                             0
#define SRAM_Y0_X1_RTR_DBG_W_ARB_E_MASK                              0x7
#define SRAM_Y0_X1_RTR_DBG_W_ARB_L_SHIFT                             8
#define SRAM_Y0_X1_RTR_DBG_W_ARB_L_MASK                              0x700

#define mmSRAM_Y0_X1_RTR_DBG_L_ARB                                   0x205310
/* SRAM_Y0_X1_RTR_DBG_L_ARB */
#define SRAM_Y0_X1_RTR_DBG_L_ARB_W_SHIFT                             0
#define SRAM_Y0_X1_RTR_DBG_L_ARB_W_MASK                              0x7
#define SRAM_Y0_X1_RTR_DBG_L_ARB_E_SHIFT                             8
#define SRAM_Y0_X1_RTR_DBG_L_ARB_E_MASK                              0x700

#define mmSRAM_Y0_X1_RTR_DBG_E_ARB_MAX                               0x205320
/* SRAM_Y0_X1_RTR_DBG_E_ARB_MAX */
#define SRAM_Y0_X1_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X1_RTR_DBG_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y0_X1_RTR_DBG_W_ARB_MAX                               0x205324
/* SRAM_Y0_X1_RTR_DBG_W_ARB_MAX */
#define SRAM_Y0_X1_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X1_RTR_DBG_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y0_X1_RTR_DBG_L_ARB_MAX                               0x205330
/* SRAM_Y0_X1_RTR_DBG_L_ARB_MAX */
#define SRAM_Y0_X1_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X1_RTR_DBG_L_ARB_MAX_CREDIT_MASK                     0x3F

#endif /* ASIC_REG_SRAM_Y0_X1_RTR_H_ */

