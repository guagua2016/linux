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

#ifndef ASIC_REG_SRAM_Y3_X1_RTR_H_
#define ASIC_REG_SRAM_Y3_X1_RTR_H_

/*
 *****************************************
 *   SRAM_Y3_X1_RTR (Prototype: IC_RTR)
 *****************************************
 */

#define mmSRAM_Y3_X1_RTR_HBW_RD_RQ_E_ARB                             0x265100
/* SRAM_Y3_X1_RTR_HBW_RD_RQ_E_ARB */
#define SRAM_Y3_X1_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y3_X1_RTR_HBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y3_X1_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y3_X1_RTR_HBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X1_RTR_HBW_RD_RQ_W_ARB                             0x265104
/* SRAM_Y3_X1_RTR_HBW_RD_RQ_W_ARB */
#define SRAM_Y3_X1_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y3_X1_RTR_HBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y3_X1_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y3_X1_RTR_HBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X1_RTR_HBW_RD_RQ_L_ARB                             0x265110
/* SRAM_Y3_X1_RTR_HBW_RD_RQ_L_ARB */
#define SRAM_Y3_X1_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y3_X1_RTR_HBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y3_X1_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y3_X1_RTR_HBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y3_X1_RTR_HBW_E_ARB_MAX                               0x265120
/* SRAM_Y3_X1_RTR_HBW_E_ARB_MAX */
#define SRAM_Y3_X1_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X1_RTR_HBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X1_RTR_HBW_W_ARB_MAX                               0x265124
/* SRAM_Y3_X1_RTR_HBW_W_ARB_MAX */
#define SRAM_Y3_X1_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X1_RTR_HBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X1_RTR_HBW_L_ARB_MAX                               0x265130
/* SRAM_Y3_X1_RTR_HBW_L_ARB_MAX */
#define SRAM_Y3_X1_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X1_RTR_HBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X1_RTR_HBW_DATA_E_ARB                              0x265140
/* SRAM_Y3_X1_RTR_HBW_DATA_E_ARB */
#define SRAM_Y3_X1_RTR_HBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y3_X1_RTR_HBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y3_X1_RTR_HBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y3_X1_RTR_HBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y3_X1_RTR_HBW_DATA_W_ARB                              0x265144
/* SRAM_Y3_X1_RTR_HBW_DATA_W_ARB */
#define SRAM_Y3_X1_RTR_HBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y3_X1_RTR_HBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y3_X1_RTR_HBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y3_X1_RTR_HBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y3_X1_RTR_HBW_DATA_L_ARB                              0x265148
/* SRAM_Y3_X1_RTR_HBW_DATA_L_ARB */
#define SRAM_Y3_X1_RTR_HBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y3_X1_RTR_HBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y3_X1_RTR_HBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y3_X1_RTR_HBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y3_X1_RTR_HBW_WR_RS_E_ARB                             0x265160
/* SRAM_Y3_X1_RTR_HBW_WR_RS_E_ARB */
#define SRAM_Y3_X1_RTR_HBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y3_X1_RTR_HBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y3_X1_RTR_HBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y3_X1_RTR_HBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X1_RTR_HBW_WR_RS_W_ARB                             0x265164
/* SRAM_Y3_X1_RTR_HBW_WR_RS_W_ARB */
#define SRAM_Y3_X1_RTR_HBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y3_X1_RTR_HBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y3_X1_RTR_HBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y3_X1_RTR_HBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X1_RTR_HBW_WR_RS_L_ARB                             0x265168
/* SRAM_Y3_X1_RTR_HBW_WR_RS_L_ARB */
#define SRAM_Y3_X1_RTR_HBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y3_X1_RTR_HBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y3_X1_RTR_HBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y3_X1_RTR_HBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y3_X1_RTR_LBW_RD_RQ_E_ARB                             0x265200
/* SRAM_Y3_X1_RTR_LBW_RD_RQ_E_ARB */
#define SRAM_Y3_X1_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y3_X1_RTR_LBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y3_X1_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y3_X1_RTR_LBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X1_RTR_LBW_RD_RQ_W_ARB                             0x265204
/* SRAM_Y3_X1_RTR_LBW_RD_RQ_W_ARB */
#define SRAM_Y3_X1_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y3_X1_RTR_LBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y3_X1_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y3_X1_RTR_LBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X1_RTR_LBW_RD_RQ_L_ARB                             0x265210
/* SRAM_Y3_X1_RTR_LBW_RD_RQ_L_ARB */
#define SRAM_Y3_X1_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y3_X1_RTR_LBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y3_X1_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y3_X1_RTR_LBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y3_X1_RTR_LBW_E_ARB_MAX                               0x265220
/* SRAM_Y3_X1_RTR_LBW_E_ARB_MAX */
#define SRAM_Y3_X1_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X1_RTR_LBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X1_RTR_LBW_W_ARB_MAX                               0x265224
/* SRAM_Y3_X1_RTR_LBW_W_ARB_MAX */
#define SRAM_Y3_X1_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X1_RTR_LBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X1_RTR_LBW_L_ARB_MAX                               0x265230
/* SRAM_Y3_X1_RTR_LBW_L_ARB_MAX */
#define SRAM_Y3_X1_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X1_RTR_LBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X1_RTR_LBW_DATA_E_ARB                              0x265240
/* SRAM_Y3_X1_RTR_LBW_DATA_E_ARB */
#define SRAM_Y3_X1_RTR_LBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y3_X1_RTR_LBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y3_X1_RTR_LBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y3_X1_RTR_LBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y3_X1_RTR_LBW_DATA_W_ARB                              0x265244
/* SRAM_Y3_X1_RTR_LBW_DATA_W_ARB */
#define SRAM_Y3_X1_RTR_LBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y3_X1_RTR_LBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y3_X1_RTR_LBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y3_X1_RTR_LBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y3_X1_RTR_LBW_DATA_L_ARB                              0x265248
/* SRAM_Y3_X1_RTR_LBW_DATA_L_ARB */
#define SRAM_Y3_X1_RTR_LBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y3_X1_RTR_LBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y3_X1_RTR_LBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y3_X1_RTR_LBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y3_X1_RTR_LBW_WR_RS_E_ARB                             0x265260
/* SRAM_Y3_X1_RTR_LBW_WR_RS_E_ARB */
#define SRAM_Y3_X1_RTR_LBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y3_X1_RTR_LBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y3_X1_RTR_LBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y3_X1_RTR_LBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X1_RTR_LBW_WR_RS_W_ARB                             0x265264
/* SRAM_Y3_X1_RTR_LBW_WR_RS_W_ARB */
#define SRAM_Y3_X1_RTR_LBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y3_X1_RTR_LBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y3_X1_RTR_LBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y3_X1_RTR_LBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X1_RTR_LBW_WR_RS_L_ARB                             0x265268
/* SRAM_Y3_X1_RTR_LBW_WR_RS_L_ARB */
#define SRAM_Y3_X1_RTR_LBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y3_X1_RTR_LBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y3_X1_RTR_LBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y3_X1_RTR_LBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y3_X1_RTR_DBG_E_ARB                                   0x265300
/* SRAM_Y3_X1_RTR_DBG_E_ARB */
#define SRAM_Y3_X1_RTR_DBG_E_ARB_W_SHIFT                             0
#define SRAM_Y3_X1_RTR_DBG_E_ARB_W_MASK                              0x7
#define SRAM_Y3_X1_RTR_DBG_E_ARB_L_SHIFT                             8
#define SRAM_Y3_X1_RTR_DBG_E_ARB_L_MASK                              0x700

#define mmSRAM_Y3_X1_RTR_DBG_W_ARB                                   0x265304
/* SRAM_Y3_X1_RTR_DBG_W_ARB */
#define SRAM_Y3_X1_RTR_DBG_W_ARB_E_SHIFT                             0
#define SRAM_Y3_X1_RTR_DBG_W_ARB_E_MASK                              0x7
#define SRAM_Y3_X1_RTR_DBG_W_ARB_L_SHIFT                             8
#define SRAM_Y3_X1_RTR_DBG_W_ARB_L_MASK                              0x700

#define mmSRAM_Y3_X1_RTR_DBG_L_ARB                                   0x265310
/* SRAM_Y3_X1_RTR_DBG_L_ARB */
#define SRAM_Y3_X1_RTR_DBG_L_ARB_W_SHIFT                             0
#define SRAM_Y3_X1_RTR_DBG_L_ARB_W_MASK                              0x7
#define SRAM_Y3_X1_RTR_DBG_L_ARB_E_SHIFT                             8
#define SRAM_Y3_X1_RTR_DBG_L_ARB_E_MASK                              0x700

#define mmSRAM_Y3_X1_RTR_DBG_E_ARB_MAX                               0x265320
/* SRAM_Y3_X1_RTR_DBG_E_ARB_MAX */
#define SRAM_Y3_X1_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X1_RTR_DBG_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X1_RTR_DBG_W_ARB_MAX                               0x265324
/* SRAM_Y3_X1_RTR_DBG_W_ARB_MAX */
#define SRAM_Y3_X1_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X1_RTR_DBG_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X1_RTR_DBG_L_ARB_MAX                               0x265330
/* SRAM_Y3_X1_RTR_DBG_L_ARB_MAX */
#define SRAM_Y3_X1_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X1_RTR_DBG_L_ARB_MAX_CREDIT_MASK                     0x3F

#endif /* ASIC_REG_SRAM_Y3_X1_RTR_H_ */

