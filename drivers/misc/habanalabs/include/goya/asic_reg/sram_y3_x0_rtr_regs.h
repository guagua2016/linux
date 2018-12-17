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

#ifndef ASIC_REG_SRAM_Y3_X0_RTR_H_
#define ASIC_REG_SRAM_Y3_X0_RTR_H_

/*
 *****************************************
 *   SRAM_Y3_X0_RTR (Prototype: IC_RTR)
 *****************************************
 */

#define mmSRAM_Y3_X0_RTR_HBW_RD_RQ_E_ARB                             0x261100
/* SRAM_Y3_X0_RTR_HBW_RD_RQ_E_ARB */
#define SRAM_Y3_X0_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y3_X0_RTR_HBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y3_X0_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y3_X0_RTR_HBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X0_RTR_HBW_RD_RQ_W_ARB                             0x261104
/* SRAM_Y3_X0_RTR_HBW_RD_RQ_W_ARB */
#define SRAM_Y3_X0_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y3_X0_RTR_HBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y3_X0_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y3_X0_RTR_HBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X0_RTR_HBW_RD_RQ_L_ARB                             0x261110
/* SRAM_Y3_X0_RTR_HBW_RD_RQ_L_ARB */
#define SRAM_Y3_X0_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y3_X0_RTR_HBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y3_X0_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y3_X0_RTR_HBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y3_X0_RTR_HBW_E_ARB_MAX                               0x261120
/* SRAM_Y3_X0_RTR_HBW_E_ARB_MAX */
#define SRAM_Y3_X0_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X0_RTR_HBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X0_RTR_HBW_W_ARB_MAX                               0x261124
/* SRAM_Y3_X0_RTR_HBW_W_ARB_MAX */
#define SRAM_Y3_X0_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X0_RTR_HBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X0_RTR_HBW_L_ARB_MAX                               0x261130
/* SRAM_Y3_X0_RTR_HBW_L_ARB_MAX */
#define SRAM_Y3_X0_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X0_RTR_HBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X0_RTR_HBW_DATA_E_ARB                              0x261140
/* SRAM_Y3_X0_RTR_HBW_DATA_E_ARB */
#define SRAM_Y3_X0_RTR_HBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y3_X0_RTR_HBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y3_X0_RTR_HBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y3_X0_RTR_HBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y3_X0_RTR_HBW_DATA_W_ARB                              0x261144
/* SRAM_Y3_X0_RTR_HBW_DATA_W_ARB */
#define SRAM_Y3_X0_RTR_HBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y3_X0_RTR_HBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y3_X0_RTR_HBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y3_X0_RTR_HBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y3_X0_RTR_HBW_DATA_L_ARB                              0x261148
/* SRAM_Y3_X0_RTR_HBW_DATA_L_ARB */
#define SRAM_Y3_X0_RTR_HBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y3_X0_RTR_HBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y3_X0_RTR_HBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y3_X0_RTR_HBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y3_X0_RTR_HBW_WR_RS_E_ARB                             0x261160
/* SRAM_Y3_X0_RTR_HBW_WR_RS_E_ARB */
#define SRAM_Y3_X0_RTR_HBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y3_X0_RTR_HBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y3_X0_RTR_HBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y3_X0_RTR_HBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X0_RTR_HBW_WR_RS_W_ARB                             0x261164
/* SRAM_Y3_X0_RTR_HBW_WR_RS_W_ARB */
#define SRAM_Y3_X0_RTR_HBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y3_X0_RTR_HBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y3_X0_RTR_HBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y3_X0_RTR_HBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X0_RTR_HBW_WR_RS_L_ARB                             0x261168
/* SRAM_Y3_X0_RTR_HBW_WR_RS_L_ARB */
#define SRAM_Y3_X0_RTR_HBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y3_X0_RTR_HBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y3_X0_RTR_HBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y3_X0_RTR_HBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y3_X0_RTR_LBW_RD_RQ_E_ARB                             0x261200
/* SRAM_Y3_X0_RTR_LBW_RD_RQ_E_ARB */
#define SRAM_Y3_X0_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y3_X0_RTR_LBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y3_X0_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y3_X0_RTR_LBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X0_RTR_LBW_RD_RQ_W_ARB                             0x261204
/* SRAM_Y3_X0_RTR_LBW_RD_RQ_W_ARB */
#define SRAM_Y3_X0_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y3_X0_RTR_LBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y3_X0_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y3_X0_RTR_LBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X0_RTR_LBW_RD_RQ_L_ARB                             0x261210
/* SRAM_Y3_X0_RTR_LBW_RD_RQ_L_ARB */
#define SRAM_Y3_X0_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y3_X0_RTR_LBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y3_X0_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y3_X0_RTR_LBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y3_X0_RTR_LBW_E_ARB_MAX                               0x261220
/* SRAM_Y3_X0_RTR_LBW_E_ARB_MAX */
#define SRAM_Y3_X0_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X0_RTR_LBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X0_RTR_LBW_W_ARB_MAX                               0x261224
/* SRAM_Y3_X0_RTR_LBW_W_ARB_MAX */
#define SRAM_Y3_X0_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X0_RTR_LBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X0_RTR_LBW_L_ARB_MAX                               0x261230
/* SRAM_Y3_X0_RTR_LBW_L_ARB_MAX */
#define SRAM_Y3_X0_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X0_RTR_LBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X0_RTR_LBW_DATA_E_ARB                              0x261240
/* SRAM_Y3_X0_RTR_LBW_DATA_E_ARB */
#define SRAM_Y3_X0_RTR_LBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y3_X0_RTR_LBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y3_X0_RTR_LBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y3_X0_RTR_LBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y3_X0_RTR_LBW_DATA_W_ARB                              0x261244
/* SRAM_Y3_X0_RTR_LBW_DATA_W_ARB */
#define SRAM_Y3_X0_RTR_LBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y3_X0_RTR_LBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y3_X0_RTR_LBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y3_X0_RTR_LBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y3_X0_RTR_LBW_DATA_L_ARB                              0x261248
/* SRAM_Y3_X0_RTR_LBW_DATA_L_ARB */
#define SRAM_Y3_X0_RTR_LBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y3_X0_RTR_LBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y3_X0_RTR_LBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y3_X0_RTR_LBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y3_X0_RTR_LBW_WR_RS_E_ARB                             0x261260
/* SRAM_Y3_X0_RTR_LBW_WR_RS_E_ARB */
#define SRAM_Y3_X0_RTR_LBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y3_X0_RTR_LBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y3_X0_RTR_LBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y3_X0_RTR_LBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X0_RTR_LBW_WR_RS_W_ARB                             0x261264
/* SRAM_Y3_X0_RTR_LBW_WR_RS_W_ARB */
#define SRAM_Y3_X0_RTR_LBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y3_X0_RTR_LBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y3_X0_RTR_LBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y3_X0_RTR_LBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X0_RTR_LBW_WR_RS_L_ARB                             0x261268
/* SRAM_Y3_X0_RTR_LBW_WR_RS_L_ARB */
#define SRAM_Y3_X0_RTR_LBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y3_X0_RTR_LBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y3_X0_RTR_LBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y3_X0_RTR_LBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y3_X0_RTR_DBG_E_ARB                                   0x261300
/* SRAM_Y3_X0_RTR_DBG_E_ARB */
#define SRAM_Y3_X0_RTR_DBG_E_ARB_W_SHIFT                             0
#define SRAM_Y3_X0_RTR_DBG_E_ARB_W_MASK                              0x7
#define SRAM_Y3_X0_RTR_DBG_E_ARB_L_SHIFT                             8
#define SRAM_Y3_X0_RTR_DBG_E_ARB_L_MASK                              0x700

#define mmSRAM_Y3_X0_RTR_DBG_W_ARB                                   0x261304
/* SRAM_Y3_X0_RTR_DBG_W_ARB */
#define SRAM_Y3_X0_RTR_DBG_W_ARB_E_SHIFT                             0
#define SRAM_Y3_X0_RTR_DBG_W_ARB_E_MASK                              0x7
#define SRAM_Y3_X0_RTR_DBG_W_ARB_L_SHIFT                             8
#define SRAM_Y3_X0_RTR_DBG_W_ARB_L_MASK                              0x700

#define mmSRAM_Y3_X0_RTR_DBG_L_ARB                                   0x261310
/* SRAM_Y3_X0_RTR_DBG_L_ARB */
#define SRAM_Y3_X0_RTR_DBG_L_ARB_W_SHIFT                             0
#define SRAM_Y3_X0_RTR_DBG_L_ARB_W_MASK                              0x7
#define SRAM_Y3_X0_RTR_DBG_L_ARB_E_SHIFT                             8
#define SRAM_Y3_X0_RTR_DBG_L_ARB_E_MASK                              0x700

#define mmSRAM_Y3_X0_RTR_DBG_E_ARB_MAX                               0x261320
/* SRAM_Y3_X0_RTR_DBG_E_ARB_MAX */
#define SRAM_Y3_X0_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X0_RTR_DBG_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X0_RTR_DBG_W_ARB_MAX                               0x261324
/* SRAM_Y3_X0_RTR_DBG_W_ARB_MAX */
#define SRAM_Y3_X0_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X0_RTR_DBG_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X0_RTR_DBG_L_ARB_MAX                               0x261330
/* SRAM_Y3_X0_RTR_DBG_L_ARB_MAX */
#define SRAM_Y3_X0_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X0_RTR_DBG_L_ARB_MAX_CREDIT_MASK                     0x3F

#endif /* ASIC_REG_SRAM_Y3_X0_RTR_H_ */

