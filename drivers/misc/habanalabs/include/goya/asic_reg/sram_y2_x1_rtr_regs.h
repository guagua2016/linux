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

#ifndef ASIC_REG_SRAM_Y2_X1_RTR_H_
#define ASIC_REG_SRAM_Y2_X1_RTR_H_

/*
 *****************************************
 *   SRAM_Y2_X1_RTR (Prototype: IC_RTR)
 *****************************************
 */

#define mmSRAM_Y2_X1_RTR_HBW_RD_RQ_E_ARB                             0x245100
/* SRAM_Y2_X1_RTR_HBW_RD_RQ_E_ARB */
#define SRAM_Y2_X1_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y2_X1_RTR_HBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y2_X1_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y2_X1_RTR_HBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y2_X1_RTR_HBW_RD_RQ_W_ARB                             0x245104
/* SRAM_Y2_X1_RTR_HBW_RD_RQ_W_ARB */
#define SRAM_Y2_X1_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y2_X1_RTR_HBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y2_X1_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y2_X1_RTR_HBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y2_X1_RTR_HBW_RD_RQ_L_ARB                             0x245110
/* SRAM_Y2_X1_RTR_HBW_RD_RQ_L_ARB */
#define SRAM_Y2_X1_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y2_X1_RTR_HBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y2_X1_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y2_X1_RTR_HBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y2_X1_RTR_HBW_E_ARB_MAX                               0x245120
/* SRAM_Y2_X1_RTR_HBW_E_ARB_MAX */
#define SRAM_Y2_X1_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X1_RTR_HBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y2_X1_RTR_HBW_W_ARB_MAX                               0x245124
/* SRAM_Y2_X1_RTR_HBW_W_ARB_MAX */
#define SRAM_Y2_X1_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X1_RTR_HBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y2_X1_RTR_HBW_L_ARB_MAX                               0x245130
/* SRAM_Y2_X1_RTR_HBW_L_ARB_MAX */
#define SRAM_Y2_X1_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X1_RTR_HBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y2_X1_RTR_HBW_DATA_E_ARB                              0x245140
/* SRAM_Y2_X1_RTR_HBW_DATA_E_ARB */
#define SRAM_Y2_X1_RTR_HBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y2_X1_RTR_HBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y2_X1_RTR_HBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y2_X1_RTR_HBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y2_X1_RTR_HBW_DATA_W_ARB                              0x245144
/* SRAM_Y2_X1_RTR_HBW_DATA_W_ARB */
#define SRAM_Y2_X1_RTR_HBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y2_X1_RTR_HBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y2_X1_RTR_HBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y2_X1_RTR_HBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y2_X1_RTR_HBW_DATA_L_ARB                              0x245148
/* SRAM_Y2_X1_RTR_HBW_DATA_L_ARB */
#define SRAM_Y2_X1_RTR_HBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y2_X1_RTR_HBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y2_X1_RTR_HBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y2_X1_RTR_HBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y2_X1_RTR_HBW_WR_RS_E_ARB                             0x245160
/* SRAM_Y2_X1_RTR_HBW_WR_RS_E_ARB */
#define SRAM_Y2_X1_RTR_HBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y2_X1_RTR_HBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y2_X1_RTR_HBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y2_X1_RTR_HBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y2_X1_RTR_HBW_WR_RS_W_ARB                             0x245164
/* SRAM_Y2_X1_RTR_HBW_WR_RS_W_ARB */
#define SRAM_Y2_X1_RTR_HBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y2_X1_RTR_HBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y2_X1_RTR_HBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y2_X1_RTR_HBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y2_X1_RTR_HBW_WR_RS_L_ARB                             0x245168
/* SRAM_Y2_X1_RTR_HBW_WR_RS_L_ARB */
#define SRAM_Y2_X1_RTR_HBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y2_X1_RTR_HBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y2_X1_RTR_HBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y2_X1_RTR_HBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y2_X1_RTR_LBW_RD_RQ_E_ARB                             0x245200
/* SRAM_Y2_X1_RTR_LBW_RD_RQ_E_ARB */
#define SRAM_Y2_X1_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y2_X1_RTR_LBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y2_X1_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y2_X1_RTR_LBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y2_X1_RTR_LBW_RD_RQ_W_ARB                             0x245204
/* SRAM_Y2_X1_RTR_LBW_RD_RQ_W_ARB */
#define SRAM_Y2_X1_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y2_X1_RTR_LBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y2_X1_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y2_X1_RTR_LBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y2_X1_RTR_LBW_RD_RQ_L_ARB                             0x245210
/* SRAM_Y2_X1_RTR_LBW_RD_RQ_L_ARB */
#define SRAM_Y2_X1_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y2_X1_RTR_LBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y2_X1_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y2_X1_RTR_LBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y2_X1_RTR_LBW_E_ARB_MAX                               0x245220
/* SRAM_Y2_X1_RTR_LBW_E_ARB_MAX */
#define SRAM_Y2_X1_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X1_RTR_LBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y2_X1_RTR_LBW_W_ARB_MAX                               0x245224
/* SRAM_Y2_X1_RTR_LBW_W_ARB_MAX */
#define SRAM_Y2_X1_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X1_RTR_LBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y2_X1_RTR_LBW_L_ARB_MAX                               0x245230
/* SRAM_Y2_X1_RTR_LBW_L_ARB_MAX */
#define SRAM_Y2_X1_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X1_RTR_LBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y2_X1_RTR_LBW_DATA_E_ARB                              0x245240
/* SRAM_Y2_X1_RTR_LBW_DATA_E_ARB */
#define SRAM_Y2_X1_RTR_LBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y2_X1_RTR_LBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y2_X1_RTR_LBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y2_X1_RTR_LBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y2_X1_RTR_LBW_DATA_W_ARB                              0x245244
/* SRAM_Y2_X1_RTR_LBW_DATA_W_ARB */
#define SRAM_Y2_X1_RTR_LBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y2_X1_RTR_LBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y2_X1_RTR_LBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y2_X1_RTR_LBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y2_X1_RTR_LBW_DATA_L_ARB                              0x245248
/* SRAM_Y2_X1_RTR_LBW_DATA_L_ARB */
#define SRAM_Y2_X1_RTR_LBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y2_X1_RTR_LBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y2_X1_RTR_LBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y2_X1_RTR_LBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y2_X1_RTR_LBW_WR_RS_E_ARB                             0x245260
/* SRAM_Y2_X1_RTR_LBW_WR_RS_E_ARB */
#define SRAM_Y2_X1_RTR_LBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y2_X1_RTR_LBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y2_X1_RTR_LBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y2_X1_RTR_LBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y2_X1_RTR_LBW_WR_RS_W_ARB                             0x245264
/* SRAM_Y2_X1_RTR_LBW_WR_RS_W_ARB */
#define SRAM_Y2_X1_RTR_LBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y2_X1_RTR_LBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y2_X1_RTR_LBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y2_X1_RTR_LBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y2_X1_RTR_LBW_WR_RS_L_ARB                             0x245268
/* SRAM_Y2_X1_RTR_LBW_WR_RS_L_ARB */
#define SRAM_Y2_X1_RTR_LBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y2_X1_RTR_LBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y2_X1_RTR_LBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y2_X1_RTR_LBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y2_X1_RTR_DBG_E_ARB                                   0x245300
/* SRAM_Y2_X1_RTR_DBG_E_ARB */
#define SRAM_Y2_X1_RTR_DBG_E_ARB_W_SHIFT                             0
#define SRAM_Y2_X1_RTR_DBG_E_ARB_W_MASK                              0x7
#define SRAM_Y2_X1_RTR_DBG_E_ARB_L_SHIFT                             8
#define SRAM_Y2_X1_RTR_DBG_E_ARB_L_MASK                              0x700

#define mmSRAM_Y2_X1_RTR_DBG_W_ARB                                   0x245304
/* SRAM_Y2_X1_RTR_DBG_W_ARB */
#define SRAM_Y2_X1_RTR_DBG_W_ARB_E_SHIFT                             0
#define SRAM_Y2_X1_RTR_DBG_W_ARB_E_MASK                              0x7
#define SRAM_Y2_X1_RTR_DBG_W_ARB_L_SHIFT                             8
#define SRAM_Y2_X1_RTR_DBG_W_ARB_L_MASK                              0x700

#define mmSRAM_Y2_X1_RTR_DBG_L_ARB                                   0x245310
/* SRAM_Y2_X1_RTR_DBG_L_ARB */
#define SRAM_Y2_X1_RTR_DBG_L_ARB_W_SHIFT                             0
#define SRAM_Y2_X1_RTR_DBG_L_ARB_W_MASK                              0x7
#define SRAM_Y2_X1_RTR_DBG_L_ARB_E_SHIFT                             8
#define SRAM_Y2_X1_RTR_DBG_L_ARB_E_MASK                              0x700

#define mmSRAM_Y2_X1_RTR_DBG_E_ARB_MAX                               0x245320
/* SRAM_Y2_X1_RTR_DBG_E_ARB_MAX */
#define SRAM_Y2_X1_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X1_RTR_DBG_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y2_X1_RTR_DBG_W_ARB_MAX                               0x245324
/* SRAM_Y2_X1_RTR_DBG_W_ARB_MAX */
#define SRAM_Y2_X1_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X1_RTR_DBG_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y2_X1_RTR_DBG_L_ARB_MAX                               0x245330
/* SRAM_Y2_X1_RTR_DBG_L_ARB_MAX */
#define SRAM_Y2_X1_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X1_RTR_DBG_L_ARB_MAX_CREDIT_MASK                     0x3F

#endif /* ASIC_REG_SRAM_Y2_X1_RTR_H_ */

