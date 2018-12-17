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

#ifndef ASIC_REG_SRAM_Y2_X4_RTR_H_
#define ASIC_REG_SRAM_Y2_X4_RTR_H_

/*
 *****************************************
 *   SRAM_Y2_X4_RTR (Prototype: IC_RTR)
 *****************************************
 */

#define mmSRAM_Y2_X4_RTR_HBW_RD_RQ_E_ARB                             0x251100
/* SRAM_Y2_X4_RTR_HBW_RD_RQ_E_ARB */
#define SRAM_Y2_X4_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y2_X4_RTR_HBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y2_X4_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y2_X4_RTR_HBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y2_X4_RTR_HBW_RD_RQ_W_ARB                             0x251104
/* SRAM_Y2_X4_RTR_HBW_RD_RQ_W_ARB */
#define SRAM_Y2_X4_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y2_X4_RTR_HBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y2_X4_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y2_X4_RTR_HBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y2_X4_RTR_HBW_RD_RQ_L_ARB                             0x251110
/* SRAM_Y2_X4_RTR_HBW_RD_RQ_L_ARB */
#define SRAM_Y2_X4_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y2_X4_RTR_HBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y2_X4_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y2_X4_RTR_HBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y2_X4_RTR_HBW_E_ARB_MAX                               0x251120
/* SRAM_Y2_X4_RTR_HBW_E_ARB_MAX */
#define SRAM_Y2_X4_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X4_RTR_HBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y2_X4_RTR_HBW_W_ARB_MAX                               0x251124
/* SRAM_Y2_X4_RTR_HBW_W_ARB_MAX */
#define SRAM_Y2_X4_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X4_RTR_HBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y2_X4_RTR_HBW_L_ARB_MAX                               0x251130
/* SRAM_Y2_X4_RTR_HBW_L_ARB_MAX */
#define SRAM_Y2_X4_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X4_RTR_HBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y2_X4_RTR_HBW_DATA_E_ARB                              0x251140
/* SRAM_Y2_X4_RTR_HBW_DATA_E_ARB */
#define SRAM_Y2_X4_RTR_HBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y2_X4_RTR_HBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y2_X4_RTR_HBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y2_X4_RTR_HBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y2_X4_RTR_HBW_DATA_W_ARB                              0x251144
/* SRAM_Y2_X4_RTR_HBW_DATA_W_ARB */
#define SRAM_Y2_X4_RTR_HBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y2_X4_RTR_HBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y2_X4_RTR_HBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y2_X4_RTR_HBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y2_X4_RTR_HBW_DATA_L_ARB                              0x251148
/* SRAM_Y2_X4_RTR_HBW_DATA_L_ARB */
#define SRAM_Y2_X4_RTR_HBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y2_X4_RTR_HBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y2_X4_RTR_HBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y2_X4_RTR_HBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y2_X4_RTR_HBW_WR_RS_E_ARB                             0x251160
/* SRAM_Y2_X4_RTR_HBW_WR_RS_E_ARB */
#define SRAM_Y2_X4_RTR_HBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y2_X4_RTR_HBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y2_X4_RTR_HBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y2_X4_RTR_HBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y2_X4_RTR_HBW_WR_RS_W_ARB                             0x251164
/* SRAM_Y2_X4_RTR_HBW_WR_RS_W_ARB */
#define SRAM_Y2_X4_RTR_HBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y2_X4_RTR_HBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y2_X4_RTR_HBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y2_X4_RTR_HBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y2_X4_RTR_HBW_WR_RS_L_ARB                             0x251168
/* SRAM_Y2_X4_RTR_HBW_WR_RS_L_ARB */
#define SRAM_Y2_X4_RTR_HBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y2_X4_RTR_HBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y2_X4_RTR_HBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y2_X4_RTR_HBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y2_X4_RTR_LBW_RD_RQ_E_ARB                             0x251200
/* SRAM_Y2_X4_RTR_LBW_RD_RQ_E_ARB */
#define SRAM_Y2_X4_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y2_X4_RTR_LBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y2_X4_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y2_X4_RTR_LBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y2_X4_RTR_LBW_RD_RQ_W_ARB                             0x251204
/* SRAM_Y2_X4_RTR_LBW_RD_RQ_W_ARB */
#define SRAM_Y2_X4_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y2_X4_RTR_LBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y2_X4_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y2_X4_RTR_LBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y2_X4_RTR_LBW_RD_RQ_L_ARB                             0x251210
/* SRAM_Y2_X4_RTR_LBW_RD_RQ_L_ARB */
#define SRAM_Y2_X4_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y2_X4_RTR_LBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y2_X4_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y2_X4_RTR_LBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y2_X4_RTR_LBW_E_ARB_MAX                               0x251220
/* SRAM_Y2_X4_RTR_LBW_E_ARB_MAX */
#define SRAM_Y2_X4_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X4_RTR_LBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y2_X4_RTR_LBW_W_ARB_MAX                               0x251224
/* SRAM_Y2_X4_RTR_LBW_W_ARB_MAX */
#define SRAM_Y2_X4_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X4_RTR_LBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y2_X4_RTR_LBW_L_ARB_MAX                               0x251230
/* SRAM_Y2_X4_RTR_LBW_L_ARB_MAX */
#define SRAM_Y2_X4_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X4_RTR_LBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y2_X4_RTR_LBW_DATA_E_ARB                              0x251240
/* SRAM_Y2_X4_RTR_LBW_DATA_E_ARB */
#define SRAM_Y2_X4_RTR_LBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y2_X4_RTR_LBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y2_X4_RTR_LBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y2_X4_RTR_LBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y2_X4_RTR_LBW_DATA_W_ARB                              0x251244
/* SRAM_Y2_X4_RTR_LBW_DATA_W_ARB */
#define SRAM_Y2_X4_RTR_LBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y2_X4_RTR_LBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y2_X4_RTR_LBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y2_X4_RTR_LBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y2_X4_RTR_LBW_DATA_L_ARB                              0x251248
/* SRAM_Y2_X4_RTR_LBW_DATA_L_ARB */
#define SRAM_Y2_X4_RTR_LBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y2_X4_RTR_LBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y2_X4_RTR_LBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y2_X4_RTR_LBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y2_X4_RTR_LBW_WR_RS_E_ARB                             0x251260
/* SRAM_Y2_X4_RTR_LBW_WR_RS_E_ARB */
#define SRAM_Y2_X4_RTR_LBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y2_X4_RTR_LBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y2_X4_RTR_LBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y2_X4_RTR_LBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y2_X4_RTR_LBW_WR_RS_W_ARB                             0x251264
/* SRAM_Y2_X4_RTR_LBW_WR_RS_W_ARB */
#define SRAM_Y2_X4_RTR_LBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y2_X4_RTR_LBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y2_X4_RTR_LBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y2_X4_RTR_LBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y2_X4_RTR_LBW_WR_RS_L_ARB                             0x251268
/* SRAM_Y2_X4_RTR_LBW_WR_RS_L_ARB */
#define SRAM_Y2_X4_RTR_LBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y2_X4_RTR_LBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y2_X4_RTR_LBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y2_X4_RTR_LBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y2_X4_RTR_DBG_E_ARB                                   0x251300
/* SRAM_Y2_X4_RTR_DBG_E_ARB */
#define SRAM_Y2_X4_RTR_DBG_E_ARB_W_SHIFT                             0
#define SRAM_Y2_X4_RTR_DBG_E_ARB_W_MASK                              0x7
#define SRAM_Y2_X4_RTR_DBG_E_ARB_L_SHIFT                             8
#define SRAM_Y2_X4_RTR_DBG_E_ARB_L_MASK                              0x700

#define mmSRAM_Y2_X4_RTR_DBG_W_ARB                                   0x251304
/* SRAM_Y2_X4_RTR_DBG_W_ARB */
#define SRAM_Y2_X4_RTR_DBG_W_ARB_E_SHIFT                             0
#define SRAM_Y2_X4_RTR_DBG_W_ARB_E_MASK                              0x7
#define SRAM_Y2_X4_RTR_DBG_W_ARB_L_SHIFT                             8
#define SRAM_Y2_X4_RTR_DBG_W_ARB_L_MASK                              0x700

#define mmSRAM_Y2_X4_RTR_DBG_L_ARB                                   0x251310
/* SRAM_Y2_X4_RTR_DBG_L_ARB */
#define SRAM_Y2_X4_RTR_DBG_L_ARB_W_SHIFT                             0
#define SRAM_Y2_X4_RTR_DBG_L_ARB_W_MASK                              0x7
#define SRAM_Y2_X4_RTR_DBG_L_ARB_E_SHIFT                             8
#define SRAM_Y2_X4_RTR_DBG_L_ARB_E_MASK                              0x700

#define mmSRAM_Y2_X4_RTR_DBG_E_ARB_MAX                               0x251320
/* SRAM_Y2_X4_RTR_DBG_E_ARB_MAX */
#define SRAM_Y2_X4_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X4_RTR_DBG_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y2_X4_RTR_DBG_W_ARB_MAX                               0x251324
/* SRAM_Y2_X4_RTR_DBG_W_ARB_MAX */
#define SRAM_Y2_X4_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X4_RTR_DBG_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y2_X4_RTR_DBG_L_ARB_MAX                               0x251330
/* SRAM_Y2_X4_RTR_DBG_L_ARB_MAX */
#define SRAM_Y2_X4_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y2_X4_RTR_DBG_L_ARB_MAX_CREDIT_MASK                     0x3F

#endif /* ASIC_REG_SRAM_Y2_X4_RTR_H_ */

