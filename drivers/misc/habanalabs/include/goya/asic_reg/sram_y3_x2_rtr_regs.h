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

#ifndef ASIC_REG_SRAM_Y3_X2_RTR_H_
#define ASIC_REG_SRAM_Y3_X2_RTR_H_

/*
 *****************************************
 *   SRAM_Y3_X2_RTR (Prototype: IC_RTR)
 *****************************************
 */

#define mmSRAM_Y3_X2_RTR_HBW_RD_RQ_E_ARB                             0x269100
/* SRAM_Y3_X2_RTR_HBW_RD_RQ_E_ARB */
#define SRAM_Y3_X2_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y3_X2_RTR_HBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y3_X2_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y3_X2_RTR_HBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X2_RTR_HBW_RD_RQ_W_ARB                             0x269104
/* SRAM_Y3_X2_RTR_HBW_RD_RQ_W_ARB */
#define SRAM_Y3_X2_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y3_X2_RTR_HBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y3_X2_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y3_X2_RTR_HBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X2_RTR_HBW_RD_RQ_L_ARB                             0x269110
/* SRAM_Y3_X2_RTR_HBW_RD_RQ_L_ARB */
#define SRAM_Y3_X2_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y3_X2_RTR_HBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y3_X2_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y3_X2_RTR_HBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y3_X2_RTR_HBW_E_ARB_MAX                               0x269120
/* SRAM_Y3_X2_RTR_HBW_E_ARB_MAX */
#define SRAM_Y3_X2_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X2_RTR_HBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X2_RTR_HBW_W_ARB_MAX                               0x269124
/* SRAM_Y3_X2_RTR_HBW_W_ARB_MAX */
#define SRAM_Y3_X2_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X2_RTR_HBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X2_RTR_HBW_L_ARB_MAX                               0x269130
/* SRAM_Y3_X2_RTR_HBW_L_ARB_MAX */
#define SRAM_Y3_X2_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X2_RTR_HBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X2_RTR_HBW_DATA_E_ARB                              0x269140
/* SRAM_Y3_X2_RTR_HBW_DATA_E_ARB */
#define SRAM_Y3_X2_RTR_HBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y3_X2_RTR_HBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y3_X2_RTR_HBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y3_X2_RTR_HBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y3_X2_RTR_HBW_DATA_W_ARB                              0x269144
/* SRAM_Y3_X2_RTR_HBW_DATA_W_ARB */
#define SRAM_Y3_X2_RTR_HBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y3_X2_RTR_HBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y3_X2_RTR_HBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y3_X2_RTR_HBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y3_X2_RTR_HBW_DATA_L_ARB                              0x269148
/* SRAM_Y3_X2_RTR_HBW_DATA_L_ARB */
#define SRAM_Y3_X2_RTR_HBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y3_X2_RTR_HBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y3_X2_RTR_HBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y3_X2_RTR_HBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y3_X2_RTR_HBW_WR_RS_E_ARB                             0x269160
/* SRAM_Y3_X2_RTR_HBW_WR_RS_E_ARB */
#define SRAM_Y3_X2_RTR_HBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y3_X2_RTR_HBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y3_X2_RTR_HBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y3_X2_RTR_HBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X2_RTR_HBW_WR_RS_W_ARB                             0x269164
/* SRAM_Y3_X2_RTR_HBW_WR_RS_W_ARB */
#define SRAM_Y3_X2_RTR_HBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y3_X2_RTR_HBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y3_X2_RTR_HBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y3_X2_RTR_HBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X2_RTR_HBW_WR_RS_L_ARB                             0x269168
/* SRAM_Y3_X2_RTR_HBW_WR_RS_L_ARB */
#define SRAM_Y3_X2_RTR_HBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y3_X2_RTR_HBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y3_X2_RTR_HBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y3_X2_RTR_HBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y3_X2_RTR_LBW_RD_RQ_E_ARB                             0x269200
/* SRAM_Y3_X2_RTR_LBW_RD_RQ_E_ARB */
#define SRAM_Y3_X2_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y3_X2_RTR_LBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y3_X2_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y3_X2_RTR_LBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X2_RTR_LBW_RD_RQ_W_ARB                             0x269204
/* SRAM_Y3_X2_RTR_LBW_RD_RQ_W_ARB */
#define SRAM_Y3_X2_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y3_X2_RTR_LBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y3_X2_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y3_X2_RTR_LBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X2_RTR_LBW_RD_RQ_L_ARB                             0x269210
/* SRAM_Y3_X2_RTR_LBW_RD_RQ_L_ARB */
#define SRAM_Y3_X2_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y3_X2_RTR_LBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y3_X2_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y3_X2_RTR_LBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y3_X2_RTR_LBW_E_ARB_MAX                               0x269220
/* SRAM_Y3_X2_RTR_LBW_E_ARB_MAX */
#define SRAM_Y3_X2_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X2_RTR_LBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X2_RTR_LBW_W_ARB_MAX                               0x269224
/* SRAM_Y3_X2_RTR_LBW_W_ARB_MAX */
#define SRAM_Y3_X2_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X2_RTR_LBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X2_RTR_LBW_L_ARB_MAX                               0x269230
/* SRAM_Y3_X2_RTR_LBW_L_ARB_MAX */
#define SRAM_Y3_X2_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X2_RTR_LBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X2_RTR_LBW_DATA_E_ARB                              0x269240
/* SRAM_Y3_X2_RTR_LBW_DATA_E_ARB */
#define SRAM_Y3_X2_RTR_LBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y3_X2_RTR_LBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y3_X2_RTR_LBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y3_X2_RTR_LBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y3_X2_RTR_LBW_DATA_W_ARB                              0x269244
/* SRAM_Y3_X2_RTR_LBW_DATA_W_ARB */
#define SRAM_Y3_X2_RTR_LBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y3_X2_RTR_LBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y3_X2_RTR_LBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y3_X2_RTR_LBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y3_X2_RTR_LBW_DATA_L_ARB                              0x269248
/* SRAM_Y3_X2_RTR_LBW_DATA_L_ARB */
#define SRAM_Y3_X2_RTR_LBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y3_X2_RTR_LBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y3_X2_RTR_LBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y3_X2_RTR_LBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y3_X2_RTR_LBW_WR_RS_E_ARB                             0x269260
/* SRAM_Y3_X2_RTR_LBW_WR_RS_E_ARB */
#define SRAM_Y3_X2_RTR_LBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y3_X2_RTR_LBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y3_X2_RTR_LBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y3_X2_RTR_LBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X2_RTR_LBW_WR_RS_W_ARB                             0x269264
/* SRAM_Y3_X2_RTR_LBW_WR_RS_W_ARB */
#define SRAM_Y3_X2_RTR_LBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y3_X2_RTR_LBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y3_X2_RTR_LBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y3_X2_RTR_LBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y3_X2_RTR_LBW_WR_RS_L_ARB                             0x269268
/* SRAM_Y3_X2_RTR_LBW_WR_RS_L_ARB */
#define SRAM_Y3_X2_RTR_LBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y3_X2_RTR_LBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y3_X2_RTR_LBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y3_X2_RTR_LBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y3_X2_RTR_DBG_E_ARB                                   0x269300
/* SRAM_Y3_X2_RTR_DBG_E_ARB */
#define SRAM_Y3_X2_RTR_DBG_E_ARB_W_SHIFT                             0
#define SRAM_Y3_X2_RTR_DBG_E_ARB_W_MASK                              0x7
#define SRAM_Y3_X2_RTR_DBG_E_ARB_L_SHIFT                             8
#define SRAM_Y3_X2_RTR_DBG_E_ARB_L_MASK                              0x700

#define mmSRAM_Y3_X2_RTR_DBG_W_ARB                                   0x269304
/* SRAM_Y3_X2_RTR_DBG_W_ARB */
#define SRAM_Y3_X2_RTR_DBG_W_ARB_E_SHIFT                             0
#define SRAM_Y3_X2_RTR_DBG_W_ARB_E_MASK                              0x7
#define SRAM_Y3_X2_RTR_DBG_W_ARB_L_SHIFT                             8
#define SRAM_Y3_X2_RTR_DBG_W_ARB_L_MASK                              0x700

#define mmSRAM_Y3_X2_RTR_DBG_L_ARB                                   0x269310
/* SRAM_Y3_X2_RTR_DBG_L_ARB */
#define SRAM_Y3_X2_RTR_DBG_L_ARB_W_SHIFT                             0
#define SRAM_Y3_X2_RTR_DBG_L_ARB_W_MASK                              0x7
#define SRAM_Y3_X2_RTR_DBG_L_ARB_E_SHIFT                             8
#define SRAM_Y3_X2_RTR_DBG_L_ARB_E_MASK                              0x700

#define mmSRAM_Y3_X2_RTR_DBG_E_ARB_MAX                               0x269320
/* SRAM_Y3_X2_RTR_DBG_E_ARB_MAX */
#define SRAM_Y3_X2_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X2_RTR_DBG_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X2_RTR_DBG_W_ARB_MAX                               0x269324
/* SRAM_Y3_X2_RTR_DBG_W_ARB_MAX */
#define SRAM_Y3_X2_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X2_RTR_DBG_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y3_X2_RTR_DBG_L_ARB_MAX                               0x269330
/* SRAM_Y3_X2_RTR_DBG_L_ARB_MAX */
#define SRAM_Y3_X2_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y3_X2_RTR_DBG_L_ARB_MAX_CREDIT_MASK                     0x3F

#endif /* ASIC_REG_SRAM_Y3_X2_RTR_H_ */

