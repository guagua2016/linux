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

#ifndef ASIC_REG_SRAM_Y4_X4_RTR_H_
#define ASIC_REG_SRAM_Y4_X4_RTR_H_

/*
 *****************************************
 *   SRAM_Y4_X4_RTR (Prototype: IC_RTR)
 *****************************************
 */

#define mmSRAM_Y4_X4_RTR_HBW_RD_RQ_E_ARB                             0x291100
/* SRAM_Y4_X4_RTR_HBW_RD_RQ_E_ARB */
#define SRAM_Y4_X4_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y4_X4_RTR_HBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y4_X4_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y4_X4_RTR_HBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y4_X4_RTR_HBW_RD_RQ_W_ARB                             0x291104
/* SRAM_Y4_X4_RTR_HBW_RD_RQ_W_ARB */
#define SRAM_Y4_X4_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y4_X4_RTR_HBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y4_X4_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y4_X4_RTR_HBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y4_X4_RTR_HBW_RD_RQ_L_ARB                             0x291110
/* SRAM_Y4_X4_RTR_HBW_RD_RQ_L_ARB */
#define SRAM_Y4_X4_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y4_X4_RTR_HBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y4_X4_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y4_X4_RTR_HBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y4_X4_RTR_HBW_E_ARB_MAX                               0x291120
/* SRAM_Y4_X4_RTR_HBW_E_ARB_MAX */
#define SRAM_Y4_X4_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y4_X4_RTR_HBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y4_X4_RTR_HBW_W_ARB_MAX                               0x291124
/* SRAM_Y4_X4_RTR_HBW_W_ARB_MAX */
#define SRAM_Y4_X4_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y4_X4_RTR_HBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y4_X4_RTR_HBW_L_ARB_MAX                               0x291130
/* SRAM_Y4_X4_RTR_HBW_L_ARB_MAX */
#define SRAM_Y4_X4_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y4_X4_RTR_HBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y4_X4_RTR_HBW_DATA_E_ARB                              0x291140
/* SRAM_Y4_X4_RTR_HBW_DATA_E_ARB */
#define SRAM_Y4_X4_RTR_HBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y4_X4_RTR_HBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y4_X4_RTR_HBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y4_X4_RTR_HBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y4_X4_RTR_HBW_DATA_W_ARB                              0x291144
/* SRAM_Y4_X4_RTR_HBW_DATA_W_ARB */
#define SRAM_Y4_X4_RTR_HBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y4_X4_RTR_HBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y4_X4_RTR_HBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y4_X4_RTR_HBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y4_X4_RTR_HBW_DATA_L_ARB                              0x291148
/* SRAM_Y4_X4_RTR_HBW_DATA_L_ARB */
#define SRAM_Y4_X4_RTR_HBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y4_X4_RTR_HBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y4_X4_RTR_HBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y4_X4_RTR_HBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y4_X4_RTR_HBW_WR_RS_E_ARB                             0x291160
/* SRAM_Y4_X4_RTR_HBW_WR_RS_E_ARB */
#define SRAM_Y4_X4_RTR_HBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y4_X4_RTR_HBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y4_X4_RTR_HBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y4_X4_RTR_HBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y4_X4_RTR_HBW_WR_RS_W_ARB                             0x291164
/* SRAM_Y4_X4_RTR_HBW_WR_RS_W_ARB */
#define SRAM_Y4_X4_RTR_HBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y4_X4_RTR_HBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y4_X4_RTR_HBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y4_X4_RTR_HBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y4_X4_RTR_HBW_WR_RS_L_ARB                             0x291168
/* SRAM_Y4_X4_RTR_HBW_WR_RS_L_ARB */
#define SRAM_Y4_X4_RTR_HBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y4_X4_RTR_HBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y4_X4_RTR_HBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y4_X4_RTR_HBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y4_X4_RTR_LBW_RD_RQ_E_ARB                             0x291200
/* SRAM_Y4_X4_RTR_LBW_RD_RQ_E_ARB */
#define SRAM_Y4_X4_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y4_X4_RTR_LBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y4_X4_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y4_X4_RTR_LBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y4_X4_RTR_LBW_RD_RQ_W_ARB                             0x291204
/* SRAM_Y4_X4_RTR_LBW_RD_RQ_W_ARB */
#define SRAM_Y4_X4_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y4_X4_RTR_LBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y4_X4_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y4_X4_RTR_LBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y4_X4_RTR_LBW_RD_RQ_L_ARB                             0x291210
/* SRAM_Y4_X4_RTR_LBW_RD_RQ_L_ARB */
#define SRAM_Y4_X4_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y4_X4_RTR_LBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y4_X4_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y4_X4_RTR_LBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y4_X4_RTR_LBW_E_ARB_MAX                               0x291220
/* SRAM_Y4_X4_RTR_LBW_E_ARB_MAX */
#define SRAM_Y4_X4_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y4_X4_RTR_LBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y4_X4_RTR_LBW_W_ARB_MAX                               0x291224
/* SRAM_Y4_X4_RTR_LBW_W_ARB_MAX */
#define SRAM_Y4_X4_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y4_X4_RTR_LBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y4_X4_RTR_LBW_L_ARB_MAX                               0x291230
/* SRAM_Y4_X4_RTR_LBW_L_ARB_MAX */
#define SRAM_Y4_X4_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y4_X4_RTR_LBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y4_X4_RTR_LBW_DATA_E_ARB                              0x291240
/* SRAM_Y4_X4_RTR_LBW_DATA_E_ARB */
#define SRAM_Y4_X4_RTR_LBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y4_X4_RTR_LBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y4_X4_RTR_LBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y4_X4_RTR_LBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y4_X4_RTR_LBW_DATA_W_ARB                              0x291244
/* SRAM_Y4_X4_RTR_LBW_DATA_W_ARB */
#define SRAM_Y4_X4_RTR_LBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y4_X4_RTR_LBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y4_X4_RTR_LBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y4_X4_RTR_LBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y4_X4_RTR_LBW_DATA_L_ARB                              0x291248
/* SRAM_Y4_X4_RTR_LBW_DATA_L_ARB */
#define SRAM_Y4_X4_RTR_LBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y4_X4_RTR_LBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y4_X4_RTR_LBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y4_X4_RTR_LBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y4_X4_RTR_LBW_WR_RS_E_ARB                             0x291260
/* SRAM_Y4_X4_RTR_LBW_WR_RS_E_ARB */
#define SRAM_Y4_X4_RTR_LBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y4_X4_RTR_LBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y4_X4_RTR_LBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y4_X4_RTR_LBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y4_X4_RTR_LBW_WR_RS_W_ARB                             0x291264
/* SRAM_Y4_X4_RTR_LBW_WR_RS_W_ARB */
#define SRAM_Y4_X4_RTR_LBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y4_X4_RTR_LBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y4_X4_RTR_LBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y4_X4_RTR_LBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y4_X4_RTR_LBW_WR_RS_L_ARB                             0x291268
/* SRAM_Y4_X4_RTR_LBW_WR_RS_L_ARB */
#define SRAM_Y4_X4_RTR_LBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y4_X4_RTR_LBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y4_X4_RTR_LBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y4_X4_RTR_LBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y4_X4_RTR_DBG_E_ARB                                   0x291300
/* SRAM_Y4_X4_RTR_DBG_E_ARB */
#define SRAM_Y4_X4_RTR_DBG_E_ARB_W_SHIFT                             0
#define SRAM_Y4_X4_RTR_DBG_E_ARB_W_MASK                              0x7
#define SRAM_Y4_X4_RTR_DBG_E_ARB_L_SHIFT                             8
#define SRAM_Y4_X4_RTR_DBG_E_ARB_L_MASK                              0x700

#define mmSRAM_Y4_X4_RTR_DBG_W_ARB                                   0x291304
/* SRAM_Y4_X4_RTR_DBG_W_ARB */
#define SRAM_Y4_X4_RTR_DBG_W_ARB_E_SHIFT                             0
#define SRAM_Y4_X4_RTR_DBG_W_ARB_E_MASK                              0x7
#define SRAM_Y4_X4_RTR_DBG_W_ARB_L_SHIFT                             8
#define SRAM_Y4_X4_RTR_DBG_W_ARB_L_MASK                              0x700

#define mmSRAM_Y4_X4_RTR_DBG_L_ARB                                   0x291310
/* SRAM_Y4_X4_RTR_DBG_L_ARB */
#define SRAM_Y4_X4_RTR_DBG_L_ARB_W_SHIFT                             0
#define SRAM_Y4_X4_RTR_DBG_L_ARB_W_MASK                              0x7
#define SRAM_Y4_X4_RTR_DBG_L_ARB_E_SHIFT                             8
#define SRAM_Y4_X4_RTR_DBG_L_ARB_E_MASK                              0x700

#define mmSRAM_Y4_X4_RTR_DBG_E_ARB_MAX                               0x291320
/* SRAM_Y4_X4_RTR_DBG_E_ARB_MAX */
#define SRAM_Y4_X4_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y4_X4_RTR_DBG_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y4_X4_RTR_DBG_W_ARB_MAX                               0x291324
/* SRAM_Y4_X4_RTR_DBG_W_ARB_MAX */
#define SRAM_Y4_X4_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y4_X4_RTR_DBG_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y4_X4_RTR_DBG_L_ARB_MAX                               0x291330
/* SRAM_Y4_X4_RTR_DBG_L_ARB_MAX */
#define SRAM_Y4_X4_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y4_X4_RTR_DBG_L_ARB_MAX_CREDIT_MASK                     0x3F

#endif /* ASIC_REG_SRAM_Y4_X4_RTR_H_ */

