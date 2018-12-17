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

#ifndef ASIC_REG_SRAM_Y0_X0_RTR_H_
#define ASIC_REG_SRAM_Y0_X0_RTR_H_

/*
 *****************************************
 *   SRAM_Y0_X0_RTR (Prototype: IC_RTR)
 *****************************************
 */

#define mmSRAM_Y0_X0_RTR_HBW_RD_RQ_E_ARB                             0x201100
/* SRAM_Y0_X0_RTR_HBW_RD_RQ_E_ARB */
#define SRAM_Y0_X0_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y0_X0_RTR_HBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y0_X0_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y0_X0_RTR_HBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y0_X0_RTR_HBW_RD_RQ_W_ARB                             0x201104
/* SRAM_Y0_X0_RTR_HBW_RD_RQ_W_ARB */
#define SRAM_Y0_X0_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y0_X0_RTR_HBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y0_X0_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y0_X0_RTR_HBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y0_X0_RTR_HBW_RD_RQ_L_ARB                             0x201110
/* SRAM_Y0_X0_RTR_HBW_RD_RQ_L_ARB */
#define SRAM_Y0_X0_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y0_X0_RTR_HBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y0_X0_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y0_X0_RTR_HBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y0_X0_RTR_HBW_E_ARB_MAX                               0x201120
/* SRAM_Y0_X0_RTR_HBW_E_ARB_MAX */
#define SRAM_Y0_X0_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X0_RTR_HBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y0_X0_RTR_HBW_W_ARB_MAX                               0x201124
/* SRAM_Y0_X0_RTR_HBW_W_ARB_MAX */
#define SRAM_Y0_X0_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X0_RTR_HBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y0_X0_RTR_HBW_L_ARB_MAX                               0x201130
/* SRAM_Y0_X0_RTR_HBW_L_ARB_MAX */
#define SRAM_Y0_X0_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X0_RTR_HBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y0_X0_RTR_HBW_DATA_E_ARB                              0x201140
/* SRAM_Y0_X0_RTR_HBW_DATA_E_ARB */
#define SRAM_Y0_X0_RTR_HBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y0_X0_RTR_HBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y0_X0_RTR_HBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y0_X0_RTR_HBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y0_X0_RTR_HBW_DATA_W_ARB                              0x201144
/* SRAM_Y0_X0_RTR_HBW_DATA_W_ARB */
#define SRAM_Y0_X0_RTR_HBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y0_X0_RTR_HBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y0_X0_RTR_HBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y0_X0_RTR_HBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y0_X0_RTR_HBW_DATA_L_ARB                              0x201148
/* SRAM_Y0_X0_RTR_HBW_DATA_L_ARB */
#define SRAM_Y0_X0_RTR_HBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y0_X0_RTR_HBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y0_X0_RTR_HBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y0_X0_RTR_HBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y0_X0_RTR_HBW_WR_RS_E_ARB                             0x201160
/* SRAM_Y0_X0_RTR_HBW_WR_RS_E_ARB */
#define SRAM_Y0_X0_RTR_HBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y0_X0_RTR_HBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y0_X0_RTR_HBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y0_X0_RTR_HBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y0_X0_RTR_HBW_WR_RS_W_ARB                             0x201164
/* SRAM_Y0_X0_RTR_HBW_WR_RS_W_ARB */
#define SRAM_Y0_X0_RTR_HBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y0_X0_RTR_HBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y0_X0_RTR_HBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y0_X0_RTR_HBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y0_X0_RTR_HBW_WR_RS_L_ARB                             0x201168
/* SRAM_Y0_X0_RTR_HBW_WR_RS_L_ARB */
#define SRAM_Y0_X0_RTR_HBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y0_X0_RTR_HBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y0_X0_RTR_HBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y0_X0_RTR_HBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y0_X0_RTR_LBW_RD_RQ_E_ARB                             0x201200
/* SRAM_Y0_X0_RTR_LBW_RD_RQ_E_ARB */
#define SRAM_Y0_X0_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y0_X0_RTR_LBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y0_X0_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y0_X0_RTR_LBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y0_X0_RTR_LBW_RD_RQ_W_ARB                             0x201204
/* SRAM_Y0_X0_RTR_LBW_RD_RQ_W_ARB */
#define SRAM_Y0_X0_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y0_X0_RTR_LBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y0_X0_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y0_X0_RTR_LBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y0_X0_RTR_LBW_RD_RQ_L_ARB                             0x201210
/* SRAM_Y0_X0_RTR_LBW_RD_RQ_L_ARB */
#define SRAM_Y0_X0_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y0_X0_RTR_LBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y0_X0_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y0_X0_RTR_LBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y0_X0_RTR_LBW_E_ARB_MAX                               0x201220
/* SRAM_Y0_X0_RTR_LBW_E_ARB_MAX */
#define SRAM_Y0_X0_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X0_RTR_LBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y0_X0_RTR_LBW_W_ARB_MAX                               0x201224
/* SRAM_Y0_X0_RTR_LBW_W_ARB_MAX */
#define SRAM_Y0_X0_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X0_RTR_LBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y0_X0_RTR_LBW_L_ARB_MAX                               0x201230
/* SRAM_Y0_X0_RTR_LBW_L_ARB_MAX */
#define SRAM_Y0_X0_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X0_RTR_LBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y0_X0_RTR_LBW_DATA_E_ARB                              0x201240
/* SRAM_Y0_X0_RTR_LBW_DATA_E_ARB */
#define SRAM_Y0_X0_RTR_LBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y0_X0_RTR_LBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y0_X0_RTR_LBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y0_X0_RTR_LBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y0_X0_RTR_LBW_DATA_W_ARB                              0x201244
/* SRAM_Y0_X0_RTR_LBW_DATA_W_ARB */
#define SRAM_Y0_X0_RTR_LBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y0_X0_RTR_LBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y0_X0_RTR_LBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y0_X0_RTR_LBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y0_X0_RTR_LBW_DATA_L_ARB                              0x201248
/* SRAM_Y0_X0_RTR_LBW_DATA_L_ARB */
#define SRAM_Y0_X0_RTR_LBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y0_X0_RTR_LBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y0_X0_RTR_LBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y0_X0_RTR_LBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y0_X0_RTR_LBW_WR_RS_E_ARB                             0x201260
/* SRAM_Y0_X0_RTR_LBW_WR_RS_E_ARB */
#define SRAM_Y0_X0_RTR_LBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y0_X0_RTR_LBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y0_X0_RTR_LBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y0_X0_RTR_LBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y0_X0_RTR_LBW_WR_RS_W_ARB                             0x201264
/* SRAM_Y0_X0_RTR_LBW_WR_RS_W_ARB */
#define SRAM_Y0_X0_RTR_LBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y0_X0_RTR_LBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y0_X0_RTR_LBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y0_X0_RTR_LBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y0_X0_RTR_LBW_WR_RS_L_ARB                             0x201268
/* SRAM_Y0_X0_RTR_LBW_WR_RS_L_ARB */
#define SRAM_Y0_X0_RTR_LBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y0_X0_RTR_LBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y0_X0_RTR_LBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y0_X0_RTR_LBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y0_X0_RTR_DBG_E_ARB                                   0x201300
/* SRAM_Y0_X0_RTR_DBG_E_ARB */
#define SRAM_Y0_X0_RTR_DBG_E_ARB_W_SHIFT                             0
#define SRAM_Y0_X0_RTR_DBG_E_ARB_W_MASK                              0x7
#define SRAM_Y0_X0_RTR_DBG_E_ARB_L_SHIFT                             8
#define SRAM_Y0_X0_RTR_DBG_E_ARB_L_MASK                              0x700

#define mmSRAM_Y0_X0_RTR_DBG_W_ARB                                   0x201304
/* SRAM_Y0_X0_RTR_DBG_W_ARB */
#define SRAM_Y0_X0_RTR_DBG_W_ARB_E_SHIFT                             0
#define SRAM_Y0_X0_RTR_DBG_W_ARB_E_MASK                              0x7
#define SRAM_Y0_X0_RTR_DBG_W_ARB_L_SHIFT                             8
#define SRAM_Y0_X0_RTR_DBG_W_ARB_L_MASK                              0x700

#define mmSRAM_Y0_X0_RTR_DBG_L_ARB                                   0x201310
/* SRAM_Y0_X0_RTR_DBG_L_ARB */
#define SRAM_Y0_X0_RTR_DBG_L_ARB_W_SHIFT                             0
#define SRAM_Y0_X0_RTR_DBG_L_ARB_W_MASK                              0x7
#define SRAM_Y0_X0_RTR_DBG_L_ARB_E_SHIFT                             8
#define SRAM_Y0_X0_RTR_DBG_L_ARB_E_MASK                              0x700

#define mmSRAM_Y0_X0_RTR_DBG_E_ARB_MAX                               0x201320
/* SRAM_Y0_X0_RTR_DBG_E_ARB_MAX */
#define SRAM_Y0_X0_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X0_RTR_DBG_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y0_X0_RTR_DBG_W_ARB_MAX                               0x201324
/* SRAM_Y0_X0_RTR_DBG_W_ARB_MAX */
#define SRAM_Y0_X0_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X0_RTR_DBG_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y0_X0_RTR_DBG_L_ARB_MAX                               0x201330
/* SRAM_Y0_X0_RTR_DBG_L_ARB_MAX */
#define SRAM_Y0_X0_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y0_X0_RTR_DBG_L_ARB_MAX_CREDIT_MASK                     0x3F

#endif /* ASIC_REG_SRAM_Y0_X0_RTR_H_ */

