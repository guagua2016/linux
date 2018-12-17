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

#ifndef ASIC_REG_SRAM_Y5_X4_RTR_H_
#define ASIC_REG_SRAM_Y5_X4_RTR_H_

/*
 *****************************************
 *   SRAM_Y5_X4_RTR (Prototype: IC_RTR)
 *****************************************
 */

#define mmSRAM_Y5_X4_RTR_HBW_RD_RQ_E_ARB                             0x2B1100
/* SRAM_Y5_X4_RTR_HBW_RD_RQ_E_ARB */
#define SRAM_Y5_X4_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y5_X4_RTR_HBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y5_X4_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y5_X4_RTR_HBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y5_X4_RTR_HBW_RD_RQ_W_ARB                             0x2B1104
/* SRAM_Y5_X4_RTR_HBW_RD_RQ_W_ARB */
#define SRAM_Y5_X4_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y5_X4_RTR_HBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y5_X4_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y5_X4_RTR_HBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y5_X4_RTR_HBW_RD_RQ_L_ARB                             0x2B1110
/* SRAM_Y5_X4_RTR_HBW_RD_RQ_L_ARB */
#define SRAM_Y5_X4_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y5_X4_RTR_HBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y5_X4_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y5_X4_RTR_HBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y5_X4_RTR_HBW_E_ARB_MAX                               0x2B1120
/* SRAM_Y5_X4_RTR_HBW_E_ARB_MAX */
#define SRAM_Y5_X4_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y5_X4_RTR_HBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y5_X4_RTR_HBW_W_ARB_MAX                               0x2B1124
/* SRAM_Y5_X4_RTR_HBW_W_ARB_MAX */
#define SRAM_Y5_X4_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y5_X4_RTR_HBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y5_X4_RTR_HBW_L_ARB_MAX                               0x2B1130
/* SRAM_Y5_X4_RTR_HBW_L_ARB_MAX */
#define SRAM_Y5_X4_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y5_X4_RTR_HBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y5_X4_RTR_HBW_DATA_E_ARB                              0x2B1140
/* SRAM_Y5_X4_RTR_HBW_DATA_E_ARB */
#define SRAM_Y5_X4_RTR_HBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y5_X4_RTR_HBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y5_X4_RTR_HBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y5_X4_RTR_HBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y5_X4_RTR_HBW_DATA_W_ARB                              0x2B1144
/* SRAM_Y5_X4_RTR_HBW_DATA_W_ARB */
#define SRAM_Y5_X4_RTR_HBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y5_X4_RTR_HBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y5_X4_RTR_HBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y5_X4_RTR_HBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y5_X4_RTR_HBW_DATA_L_ARB                              0x2B1148
/* SRAM_Y5_X4_RTR_HBW_DATA_L_ARB */
#define SRAM_Y5_X4_RTR_HBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y5_X4_RTR_HBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y5_X4_RTR_HBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y5_X4_RTR_HBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y5_X4_RTR_HBW_WR_RS_E_ARB                             0x2B1160
/* SRAM_Y5_X4_RTR_HBW_WR_RS_E_ARB */
#define SRAM_Y5_X4_RTR_HBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y5_X4_RTR_HBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y5_X4_RTR_HBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y5_X4_RTR_HBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y5_X4_RTR_HBW_WR_RS_W_ARB                             0x2B1164
/* SRAM_Y5_X4_RTR_HBW_WR_RS_W_ARB */
#define SRAM_Y5_X4_RTR_HBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y5_X4_RTR_HBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y5_X4_RTR_HBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y5_X4_RTR_HBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y5_X4_RTR_HBW_WR_RS_L_ARB                             0x2B1168
/* SRAM_Y5_X4_RTR_HBW_WR_RS_L_ARB */
#define SRAM_Y5_X4_RTR_HBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y5_X4_RTR_HBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y5_X4_RTR_HBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y5_X4_RTR_HBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y5_X4_RTR_LBW_RD_RQ_E_ARB                             0x2B1200
/* SRAM_Y5_X4_RTR_LBW_RD_RQ_E_ARB */
#define SRAM_Y5_X4_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                       0
#define SRAM_Y5_X4_RTR_LBW_RD_RQ_E_ARB_W_MASK                        0x7
#define SRAM_Y5_X4_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                       8
#define SRAM_Y5_X4_RTR_LBW_RD_RQ_E_ARB_L_MASK                        0x700

#define mmSRAM_Y5_X4_RTR_LBW_RD_RQ_W_ARB                             0x2B1204
/* SRAM_Y5_X4_RTR_LBW_RD_RQ_W_ARB */
#define SRAM_Y5_X4_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                       0
#define SRAM_Y5_X4_RTR_LBW_RD_RQ_W_ARB_E_MASK                        0x7
#define SRAM_Y5_X4_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                       8
#define SRAM_Y5_X4_RTR_LBW_RD_RQ_W_ARB_L_MASK                        0x700

#define mmSRAM_Y5_X4_RTR_LBW_RD_RQ_L_ARB                             0x2B1210
/* SRAM_Y5_X4_RTR_LBW_RD_RQ_L_ARB */
#define SRAM_Y5_X4_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                       0
#define SRAM_Y5_X4_RTR_LBW_RD_RQ_L_ARB_W_MASK                        0x7
#define SRAM_Y5_X4_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                       8
#define SRAM_Y5_X4_RTR_LBW_RD_RQ_L_ARB_E_MASK                        0x700

#define mmSRAM_Y5_X4_RTR_LBW_E_ARB_MAX                               0x2B1220
/* SRAM_Y5_X4_RTR_LBW_E_ARB_MAX */
#define SRAM_Y5_X4_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y5_X4_RTR_LBW_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y5_X4_RTR_LBW_W_ARB_MAX                               0x2B1224
/* SRAM_Y5_X4_RTR_LBW_W_ARB_MAX */
#define SRAM_Y5_X4_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y5_X4_RTR_LBW_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y5_X4_RTR_LBW_L_ARB_MAX                               0x2B1230
/* SRAM_Y5_X4_RTR_LBW_L_ARB_MAX */
#define SRAM_Y5_X4_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y5_X4_RTR_LBW_L_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y5_X4_RTR_LBW_DATA_E_ARB                              0x2B1240
/* SRAM_Y5_X4_RTR_LBW_DATA_E_ARB */
#define SRAM_Y5_X4_RTR_LBW_DATA_E_ARB_W_SHIFT                        0
#define SRAM_Y5_X4_RTR_LBW_DATA_E_ARB_W_MASK                         0x7
#define SRAM_Y5_X4_RTR_LBW_DATA_E_ARB_L_SHIFT                        8
#define SRAM_Y5_X4_RTR_LBW_DATA_E_ARB_L_MASK                         0x700

#define mmSRAM_Y5_X4_RTR_LBW_DATA_W_ARB                              0x2B1244
/* SRAM_Y5_X4_RTR_LBW_DATA_W_ARB */
#define SRAM_Y5_X4_RTR_LBW_DATA_W_ARB_E_SHIFT                        0
#define SRAM_Y5_X4_RTR_LBW_DATA_W_ARB_E_MASK                         0x7
#define SRAM_Y5_X4_RTR_LBW_DATA_W_ARB_L_SHIFT                        8
#define SRAM_Y5_X4_RTR_LBW_DATA_W_ARB_L_MASK                         0x700

#define mmSRAM_Y5_X4_RTR_LBW_DATA_L_ARB                              0x2B1248
/* SRAM_Y5_X4_RTR_LBW_DATA_L_ARB */
#define SRAM_Y5_X4_RTR_LBW_DATA_L_ARB_W_SHIFT                        0
#define SRAM_Y5_X4_RTR_LBW_DATA_L_ARB_W_MASK                         0x7
#define SRAM_Y5_X4_RTR_LBW_DATA_L_ARB_E_SHIFT                        8
#define SRAM_Y5_X4_RTR_LBW_DATA_L_ARB_E_MASK                         0x700

#define mmSRAM_Y5_X4_RTR_LBW_WR_RS_E_ARB                             0x2B1260
/* SRAM_Y5_X4_RTR_LBW_WR_RS_E_ARB */
#define SRAM_Y5_X4_RTR_LBW_WR_RS_E_ARB_W_SHIFT                       0
#define SRAM_Y5_X4_RTR_LBW_WR_RS_E_ARB_W_MASK                        0x7
#define SRAM_Y5_X4_RTR_LBW_WR_RS_E_ARB_L_SHIFT                       8
#define SRAM_Y5_X4_RTR_LBW_WR_RS_E_ARB_L_MASK                        0x700

#define mmSRAM_Y5_X4_RTR_LBW_WR_RS_W_ARB                             0x2B1264
/* SRAM_Y5_X4_RTR_LBW_WR_RS_W_ARB */
#define SRAM_Y5_X4_RTR_LBW_WR_RS_W_ARB_E_SHIFT                       0
#define SRAM_Y5_X4_RTR_LBW_WR_RS_W_ARB_E_MASK                        0x7
#define SRAM_Y5_X4_RTR_LBW_WR_RS_W_ARB_L_SHIFT                       8
#define SRAM_Y5_X4_RTR_LBW_WR_RS_W_ARB_L_MASK                        0x700

#define mmSRAM_Y5_X4_RTR_LBW_WR_RS_L_ARB                             0x2B1268
/* SRAM_Y5_X4_RTR_LBW_WR_RS_L_ARB */
#define SRAM_Y5_X4_RTR_LBW_WR_RS_L_ARB_W_SHIFT                       0
#define SRAM_Y5_X4_RTR_LBW_WR_RS_L_ARB_W_MASK                        0x7
#define SRAM_Y5_X4_RTR_LBW_WR_RS_L_ARB_E_SHIFT                       8
#define SRAM_Y5_X4_RTR_LBW_WR_RS_L_ARB_E_MASK                        0x700

#define mmSRAM_Y5_X4_RTR_DBG_E_ARB                                   0x2B1300
/* SRAM_Y5_X4_RTR_DBG_E_ARB */
#define SRAM_Y5_X4_RTR_DBG_E_ARB_W_SHIFT                             0
#define SRAM_Y5_X4_RTR_DBG_E_ARB_W_MASK                              0x7
#define SRAM_Y5_X4_RTR_DBG_E_ARB_L_SHIFT                             8
#define SRAM_Y5_X4_RTR_DBG_E_ARB_L_MASK                              0x700

#define mmSRAM_Y5_X4_RTR_DBG_W_ARB                                   0x2B1304
/* SRAM_Y5_X4_RTR_DBG_W_ARB */
#define SRAM_Y5_X4_RTR_DBG_W_ARB_E_SHIFT                             0
#define SRAM_Y5_X4_RTR_DBG_W_ARB_E_MASK                              0x7
#define SRAM_Y5_X4_RTR_DBG_W_ARB_L_SHIFT                             8
#define SRAM_Y5_X4_RTR_DBG_W_ARB_L_MASK                              0x700

#define mmSRAM_Y5_X4_RTR_DBG_L_ARB                                   0x2B1310
/* SRAM_Y5_X4_RTR_DBG_L_ARB */
#define SRAM_Y5_X4_RTR_DBG_L_ARB_W_SHIFT                             0
#define SRAM_Y5_X4_RTR_DBG_L_ARB_W_MASK                              0x7
#define SRAM_Y5_X4_RTR_DBG_L_ARB_E_SHIFT                             8
#define SRAM_Y5_X4_RTR_DBG_L_ARB_E_MASK                              0x700

#define mmSRAM_Y5_X4_RTR_DBG_E_ARB_MAX                               0x2B1320
/* SRAM_Y5_X4_RTR_DBG_E_ARB_MAX */
#define SRAM_Y5_X4_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y5_X4_RTR_DBG_E_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y5_X4_RTR_DBG_W_ARB_MAX                               0x2B1324
/* SRAM_Y5_X4_RTR_DBG_W_ARB_MAX */
#define SRAM_Y5_X4_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y5_X4_RTR_DBG_W_ARB_MAX_CREDIT_MASK                     0x3F

#define mmSRAM_Y5_X4_RTR_DBG_L_ARB_MAX                               0x2B1330
/* SRAM_Y5_X4_RTR_DBG_L_ARB_MAX */
#define SRAM_Y5_X4_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                    0
#define SRAM_Y5_X4_RTR_DBG_L_ARB_MAX_CREDIT_MASK                     0x3F

#endif /* ASIC_REG_SRAM_Y5_X4_RTR_H_ */

