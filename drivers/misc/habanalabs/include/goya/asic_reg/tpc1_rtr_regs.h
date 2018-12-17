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

#ifndef ASIC_REG_TPC1_RTR_H_
#define ASIC_REG_TPC1_RTR_H_

/*
 *****************************************
 *   TPC1_RTR (Prototype: TPC_RTR)
 *****************************************
 */

#define mmTPC1_RTR_HBW_RD_RQ_E_ARB                                   0xE40100
/* TPC1_RTR_HBW_RD_RQ_E_ARB */
#define TPC1_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                             0
#define TPC1_RTR_HBW_RD_RQ_E_ARB_W_MASK                              0x7
#define TPC1_RTR_HBW_RD_RQ_E_ARB_S_SHIFT                             8
#define TPC1_RTR_HBW_RD_RQ_E_ARB_S_MASK                              0x700
#define TPC1_RTR_HBW_RD_RQ_E_ARB_N_SHIFT                             16
#define TPC1_RTR_HBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define TPC1_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                             24
#define TPC1_RTR_HBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_HBW_RD_RQ_W_ARB                                   0xE40104
/* TPC1_RTR_HBW_RD_RQ_W_ARB */
#define TPC1_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                             0
#define TPC1_RTR_HBW_RD_RQ_W_ARB_E_MASK                              0x7
#define TPC1_RTR_HBW_RD_RQ_W_ARB_S_SHIFT                             8
#define TPC1_RTR_HBW_RD_RQ_W_ARB_S_MASK                              0x700
#define TPC1_RTR_HBW_RD_RQ_W_ARB_N_SHIFT                             16
#define TPC1_RTR_HBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define TPC1_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                             24
#define TPC1_RTR_HBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_HBW_RD_RQ_N_ARB                                   0xE40108
/* TPC1_RTR_HBW_RD_RQ_N_ARB */
#define TPC1_RTR_HBW_RD_RQ_N_ARB_W_SHIFT                             0
#define TPC1_RTR_HBW_RD_RQ_N_ARB_W_MASK                              0x7
#define TPC1_RTR_HBW_RD_RQ_N_ARB_E_SHIFT                             8
#define TPC1_RTR_HBW_RD_RQ_N_ARB_E_MASK                              0x700
#define TPC1_RTR_HBW_RD_RQ_N_ARB_S_SHIFT                             16
#define TPC1_RTR_HBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define TPC1_RTR_HBW_RD_RQ_N_ARB_L_SHIFT                             24
#define TPC1_RTR_HBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_HBW_RD_RQ_S_ARB                                   0xE4010C
/* TPC1_RTR_HBW_RD_RQ_S_ARB */
#define TPC1_RTR_HBW_RD_RQ_S_ARB_W_SHIFT                             0
#define TPC1_RTR_HBW_RD_RQ_S_ARB_W_MASK                              0x7
#define TPC1_RTR_HBW_RD_RQ_S_ARB_E_SHIFT                             8
#define TPC1_RTR_HBW_RD_RQ_S_ARB_E_MASK                              0x700
#define TPC1_RTR_HBW_RD_RQ_S_ARB_N_SHIFT                             16
#define TPC1_RTR_HBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define TPC1_RTR_HBW_RD_RQ_S_ARB_L_SHIFT                             24
#define TPC1_RTR_HBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_HBW_RD_RQ_L_ARB                                   0xE40110
/* TPC1_RTR_HBW_RD_RQ_L_ARB */
#define TPC1_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                             0
#define TPC1_RTR_HBW_RD_RQ_L_ARB_W_MASK                              0x7
#define TPC1_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                             8
#define TPC1_RTR_HBW_RD_RQ_L_ARB_E_MASK                              0x700
#define TPC1_RTR_HBW_RD_RQ_L_ARB_S_SHIFT                             16
#define TPC1_RTR_HBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define TPC1_RTR_HBW_RD_RQ_L_ARB_N_SHIFT                             24
#define TPC1_RTR_HBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC1_RTR_HBW_E_ARB_MAX                                     0xE40120
/* TPC1_RTR_HBW_E_ARB_MAX */
#define TPC1_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC1_RTR_HBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC1_RTR_HBW_W_ARB_MAX                                     0xE40124
/* TPC1_RTR_HBW_W_ARB_MAX */
#define TPC1_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC1_RTR_HBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC1_RTR_HBW_N_ARB_MAX                                     0xE40128
/* TPC1_RTR_HBW_N_ARB_MAX */
#define TPC1_RTR_HBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC1_RTR_HBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC1_RTR_HBW_S_ARB_MAX                                     0xE4012C
/* TPC1_RTR_HBW_S_ARB_MAX */
#define TPC1_RTR_HBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC1_RTR_HBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC1_RTR_HBW_L_ARB_MAX                                     0xE40130
/* TPC1_RTR_HBW_L_ARB_MAX */
#define TPC1_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC1_RTR_HBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC1_RTR_HBW_RD_RS_E_ARB                                   0xE40140
/* TPC1_RTR_HBW_RD_RS_E_ARB */
#define TPC1_RTR_HBW_RD_RS_E_ARB_W_SHIFT                             0
#define TPC1_RTR_HBW_RD_RS_E_ARB_W_MASK                              0x7
#define TPC1_RTR_HBW_RD_RS_E_ARB_S_SHIFT                             8
#define TPC1_RTR_HBW_RD_RS_E_ARB_S_MASK                              0x700
#define TPC1_RTR_HBW_RD_RS_E_ARB_N_SHIFT                             16
#define TPC1_RTR_HBW_RD_RS_E_ARB_N_MASK                              0x70000
#define TPC1_RTR_HBW_RD_RS_E_ARB_L_SHIFT                             24
#define TPC1_RTR_HBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_HBW_RD_RS_W_ARB                                   0xE40144
/* TPC1_RTR_HBW_RD_RS_W_ARB */
#define TPC1_RTR_HBW_RD_RS_W_ARB_E_SHIFT                             0
#define TPC1_RTR_HBW_RD_RS_W_ARB_E_MASK                              0x7
#define TPC1_RTR_HBW_RD_RS_W_ARB_S_SHIFT                             8
#define TPC1_RTR_HBW_RD_RS_W_ARB_S_MASK                              0x700
#define TPC1_RTR_HBW_RD_RS_W_ARB_N_SHIFT                             16
#define TPC1_RTR_HBW_RD_RS_W_ARB_N_MASK                              0x70000
#define TPC1_RTR_HBW_RD_RS_W_ARB_L_SHIFT                             24
#define TPC1_RTR_HBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_HBW_RD_RS_N_ARB                                   0xE40148
/* TPC1_RTR_HBW_RD_RS_N_ARB */
#define TPC1_RTR_HBW_RD_RS_N_ARB_W_SHIFT                             0
#define TPC1_RTR_HBW_RD_RS_N_ARB_W_MASK                              0x7
#define TPC1_RTR_HBW_RD_RS_N_ARB_E_SHIFT                             8
#define TPC1_RTR_HBW_RD_RS_N_ARB_E_MASK                              0x700
#define TPC1_RTR_HBW_RD_RS_N_ARB_S_SHIFT                             16
#define TPC1_RTR_HBW_RD_RS_N_ARB_S_MASK                              0x70000
#define TPC1_RTR_HBW_RD_RS_N_ARB_L_SHIFT                             24
#define TPC1_RTR_HBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_HBW_RD_RS_S_ARB                                   0xE4014C
/* TPC1_RTR_HBW_RD_RS_S_ARB */
#define TPC1_RTR_HBW_RD_RS_S_ARB_W_SHIFT                             0
#define TPC1_RTR_HBW_RD_RS_S_ARB_W_MASK                              0x7
#define TPC1_RTR_HBW_RD_RS_S_ARB_E_SHIFT                             8
#define TPC1_RTR_HBW_RD_RS_S_ARB_E_MASK                              0x700
#define TPC1_RTR_HBW_RD_RS_S_ARB_N_SHIFT                             16
#define TPC1_RTR_HBW_RD_RS_S_ARB_N_MASK                              0x70000
#define TPC1_RTR_HBW_RD_RS_S_ARB_L_SHIFT                             24
#define TPC1_RTR_HBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_HBW_RD_RS_L_ARB                                   0xE40150
/* TPC1_RTR_HBW_RD_RS_L_ARB */
#define TPC1_RTR_HBW_RD_RS_L_ARB_W_SHIFT                             0
#define TPC1_RTR_HBW_RD_RS_L_ARB_W_MASK                              0x7
#define TPC1_RTR_HBW_RD_RS_L_ARB_E_SHIFT                             8
#define TPC1_RTR_HBW_RD_RS_L_ARB_E_MASK                              0x700
#define TPC1_RTR_HBW_RD_RS_L_ARB_S_SHIFT                             16
#define TPC1_RTR_HBW_RD_RS_L_ARB_S_MASK                              0x70000
#define TPC1_RTR_HBW_RD_RS_L_ARB_N_SHIFT                             24
#define TPC1_RTR_HBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC1_RTR_HBW_WR_RQ_E_ARB                                   0xE40170
/* TPC1_RTR_HBW_WR_RQ_E_ARB */
#define TPC1_RTR_HBW_WR_RQ_E_ARB_W_SHIFT                             0
#define TPC1_RTR_HBW_WR_RQ_E_ARB_W_MASK                              0x7
#define TPC1_RTR_HBW_WR_RQ_E_ARB_S_SHIFT                             8
#define TPC1_RTR_HBW_WR_RQ_E_ARB_S_MASK                              0x700
#define TPC1_RTR_HBW_WR_RQ_E_ARB_N_SHIFT                             16
#define TPC1_RTR_HBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define TPC1_RTR_HBW_WR_RQ_E_ARB_L_SHIFT                             24
#define TPC1_RTR_HBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_HBW_WR_RQ_W_ARB                                   0xE40174
/* TPC1_RTR_HBW_WR_RQ_W_ARB */
#define TPC1_RTR_HBW_WR_RQ_W_ARB_E_SHIFT                             0
#define TPC1_RTR_HBW_WR_RQ_W_ARB_E_MASK                              0x7
#define TPC1_RTR_HBW_WR_RQ_W_ARB_S_SHIFT                             8
#define TPC1_RTR_HBW_WR_RQ_W_ARB_S_MASK                              0x700
#define TPC1_RTR_HBW_WR_RQ_W_ARB_N_SHIFT                             16
#define TPC1_RTR_HBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define TPC1_RTR_HBW_WR_RQ_W_ARB_L_SHIFT                             24
#define TPC1_RTR_HBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_HBW_WR_RQ_N_ARB                                   0xE40178
/* TPC1_RTR_HBW_WR_RQ_N_ARB */
#define TPC1_RTR_HBW_WR_RQ_N_ARB_W_SHIFT                             0
#define TPC1_RTR_HBW_WR_RQ_N_ARB_W_MASK                              0x7
#define TPC1_RTR_HBW_WR_RQ_N_ARB_E_SHIFT                             8
#define TPC1_RTR_HBW_WR_RQ_N_ARB_E_MASK                              0x700
#define TPC1_RTR_HBW_WR_RQ_N_ARB_S_SHIFT                             16
#define TPC1_RTR_HBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define TPC1_RTR_HBW_WR_RQ_N_ARB_L_SHIFT                             24
#define TPC1_RTR_HBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_HBW_WR_RQ_S_ARB                                   0xE4017C
/* TPC1_RTR_HBW_WR_RQ_S_ARB */
#define TPC1_RTR_HBW_WR_RQ_S_ARB_W_SHIFT                             0
#define TPC1_RTR_HBW_WR_RQ_S_ARB_W_MASK                              0x7
#define TPC1_RTR_HBW_WR_RQ_S_ARB_E_SHIFT                             8
#define TPC1_RTR_HBW_WR_RQ_S_ARB_E_MASK                              0x700
#define TPC1_RTR_HBW_WR_RQ_S_ARB_N_SHIFT                             16
#define TPC1_RTR_HBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define TPC1_RTR_HBW_WR_RQ_S_ARB_L_SHIFT                             24
#define TPC1_RTR_HBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_HBW_WR_RQ_L_ARB                                   0xE40180
/* TPC1_RTR_HBW_WR_RQ_L_ARB */
#define TPC1_RTR_HBW_WR_RQ_L_ARB_W_SHIFT                             0
#define TPC1_RTR_HBW_WR_RQ_L_ARB_W_MASK                              0x7
#define TPC1_RTR_HBW_WR_RQ_L_ARB_E_SHIFT                             8
#define TPC1_RTR_HBW_WR_RQ_L_ARB_E_MASK                              0x700
#define TPC1_RTR_HBW_WR_RQ_L_ARB_S_SHIFT                             16
#define TPC1_RTR_HBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define TPC1_RTR_HBW_WR_RQ_L_ARB_N_SHIFT                             24
#define TPC1_RTR_HBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC1_RTR_HBW_WR_RS_E_ARB                                   0xE40190
/* TPC1_RTR_HBW_WR_RS_E_ARB */
#define TPC1_RTR_HBW_WR_RS_E_ARB_W_SHIFT                             0
#define TPC1_RTR_HBW_WR_RS_E_ARB_W_MASK                              0x7
#define TPC1_RTR_HBW_WR_RS_E_ARB_S_SHIFT                             8
#define TPC1_RTR_HBW_WR_RS_E_ARB_S_MASK                              0x700
#define TPC1_RTR_HBW_WR_RS_E_ARB_N_SHIFT                             16
#define TPC1_RTR_HBW_WR_RS_E_ARB_N_MASK                              0x70000
#define TPC1_RTR_HBW_WR_RS_E_ARB_L_SHIFT                             24
#define TPC1_RTR_HBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_HBW_WR_RS_W_ARB                                   0xE40194
/* TPC1_RTR_HBW_WR_RS_W_ARB */
#define TPC1_RTR_HBW_WR_RS_W_ARB_E_SHIFT                             0
#define TPC1_RTR_HBW_WR_RS_W_ARB_E_MASK                              0x7
#define TPC1_RTR_HBW_WR_RS_W_ARB_S_SHIFT                             8
#define TPC1_RTR_HBW_WR_RS_W_ARB_S_MASK                              0x700
#define TPC1_RTR_HBW_WR_RS_W_ARB_N_SHIFT                             16
#define TPC1_RTR_HBW_WR_RS_W_ARB_N_MASK                              0x70000
#define TPC1_RTR_HBW_WR_RS_W_ARB_L_SHIFT                             24
#define TPC1_RTR_HBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_HBW_WR_RS_N_ARB                                   0xE40198
/* TPC1_RTR_HBW_WR_RS_N_ARB */
#define TPC1_RTR_HBW_WR_RS_N_ARB_W_SHIFT                             0
#define TPC1_RTR_HBW_WR_RS_N_ARB_W_MASK                              0x7
#define TPC1_RTR_HBW_WR_RS_N_ARB_E_SHIFT                             8
#define TPC1_RTR_HBW_WR_RS_N_ARB_E_MASK                              0x700
#define TPC1_RTR_HBW_WR_RS_N_ARB_S_SHIFT                             16
#define TPC1_RTR_HBW_WR_RS_N_ARB_S_MASK                              0x70000
#define TPC1_RTR_HBW_WR_RS_N_ARB_L_SHIFT                             24
#define TPC1_RTR_HBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_HBW_WR_RS_S_ARB                                   0xE4019C
/* TPC1_RTR_HBW_WR_RS_S_ARB */
#define TPC1_RTR_HBW_WR_RS_S_ARB_W_SHIFT                             0
#define TPC1_RTR_HBW_WR_RS_S_ARB_W_MASK                              0x7
#define TPC1_RTR_HBW_WR_RS_S_ARB_E_SHIFT                             8
#define TPC1_RTR_HBW_WR_RS_S_ARB_E_MASK                              0x700
#define TPC1_RTR_HBW_WR_RS_S_ARB_N_SHIFT                             16
#define TPC1_RTR_HBW_WR_RS_S_ARB_N_MASK                              0x70000
#define TPC1_RTR_HBW_WR_RS_S_ARB_L_SHIFT                             24
#define TPC1_RTR_HBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_HBW_WR_RS_L_ARB                                   0xE401A0
/* TPC1_RTR_HBW_WR_RS_L_ARB */
#define TPC1_RTR_HBW_WR_RS_L_ARB_W_SHIFT                             0
#define TPC1_RTR_HBW_WR_RS_L_ARB_W_MASK                              0x7
#define TPC1_RTR_HBW_WR_RS_L_ARB_E_SHIFT                             8
#define TPC1_RTR_HBW_WR_RS_L_ARB_E_MASK                              0x700
#define TPC1_RTR_HBW_WR_RS_L_ARB_S_SHIFT                             16
#define TPC1_RTR_HBW_WR_RS_L_ARB_S_MASK                              0x70000
#define TPC1_RTR_HBW_WR_RS_L_ARB_N_SHIFT                             24
#define TPC1_RTR_HBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC1_RTR_LBW_RD_RQ_E_ARB                                   0xE40200
/* TPC1_RTR_LBW_RD_RQ_E_ARB */
#define TPC1_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                             0
#define TPC1_RTR_LBW_RD_RQ_E_ARB_W_MASK                              0x7
#define TPC1_RTR_LBW_RD_RQ_E_ARB_S_SHIFT                             8
#define TPC1_RTR_LBW_RD_RQ_E_ARB_S_MASK                              0x700
#define TPC1_RTR_LBW_RD_RQ_E_ARB_N_SHIFT                             16
#define TPC1_RTR_LBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define TPC1_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                             24
#define TPC1_RTR_LBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_LBW_RD_RQ_W_ARB                                   0xE40204
/* TPC1_RTR_LBW_RD_RQ_W_ARB */
#define TPC1_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                             0
#define TPC1_RTR_LBW_RD_RQ_W_ARB_E_MASK                              0x7
#define TPC1_RTR_LBW_RD_RQ_W_ARB_S_SHIFT                             8
#define TPC1_RTR_LBW_RD_RQ_W_ARB_S_MASK                              0x700
#define TPC1_RTR_LBW_RD_RQ_W_ARB_N_SHIFT                             16
#define TPC1_RTR_LBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define TPC1_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                             24
#define TPC1_RTR_LBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_LBW_RD_RQ_N_ARB                                   0xE40208
/* TPC1_RTR_LBW_RD_RQ_N_ARB */
#define TPC1_RTR_LBW_RD_RQ_N_ARB_W_SHIFT                             0
#define TPC1_RTR_LBW_RD_RQ_N_ARB_W_MASK                              0x7
#define TPC1_RTR_LBW_RD_RQ_N_ARB_E_SHIFT                             8
#define TPC1_RTR_LBW_RD_RQ_N_ARB_E_MASK                              0x700
#define TPC1_RTR_LBW_RD_RQ_N_ARB_S_SHIFT                             16
#define TPC1_RTR_LBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define TPC1_RTR_LBW_RD_RQ_N_ARB_L_SHIFT                             24
#define TPC1_RTR_LBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_LBW_RD_RQ_S_ARB                                   0xE4020C
/* TPC1_RTR_LBW_RD_RQ_S_ARB */
#define TPC1_RTR_LBW_RD_RQ_S_ARB_W_SHIFT                             0
#define TPC1_RTR_LBW_RD_RQ_S_ARB_W_MASK                              0x7
#define TPC1_RTR_LBW_RD_RQ_S_ARB_E_SHIFT                             8
#define TPC1_RTR_LBW_RD_RQ_S_ARB_E_MASK                              0x700
#define TPC1_RTR_LBW_RD_RQ_S_ARB_N_SHIFT                             16
#define TPC1_RTR_LBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define TPC1_RTR_LBW_RD_RQ_S_ARB_L_SHIFT                             24
#define TPC1_RTR_LBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_LBW_RD_RQ_L_ARB                                   0xE40210
/* TPC1_RTR_LBW_RD_RQ_L_ARB */
#define TPC1_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                             0
#define TPC1_RTR_LBW_RD_RQ_L_ARB_W_MASK                              0x7
#define TPC1_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                             8
#define TPC1_RTR_LBW_RD_RQ_L_ARB_E_MASK                              0x700
#define TPC1_RTR_LBW_RD_RQ_L_ARB_S_SHIFT                             16
#define TPC1_RTR_LBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define TPC1_RTR_LBW_RD_RQ_L_ARB_N_SHIFT                             24
#define TPC1_RTR_LBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC1_RTR_LBW_E_ARB_MAX                                     0xE40220
/* TPC1_RTR_LBW_E_ARB_MAX */
#define TPC1_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC1_RTR_LBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC1_RTR_LBW_W_ARB_MAX                                     0xE40224
/* TPC1_RTR_LBW_W_ARB_MAX */
#define TPC1_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC1_RTR_LBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC1_RTR_LBW_N_ARB_MAX                                     0xE40228
/* TPC1_RTR_LBW_N_ARB_MAX */
#define TPC1_RTR_LBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC1_RTR_LBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC1_RTR_LBW_S_ARB_MAX                                     0xE4022C
/* TPC1_RTR_LBW_S_ARB_MAX */
#define TPC1_RTR_LBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC1_RTR_LBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC1_RTR_LBW_L_ARB_MAX                                     0xE40230
/* TPC1_RTR_LBW_L_ARB_MAX */
#define TPC1_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC1_RTR_LBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC1_RTR_LBW_RD_RS_E_ARB                                   0xE40250
/* TPC1_RTR_LBW_RD_RS_E_ARB */
#define TPC1_RTR_LBW_RD_RS_E_ARB_W_SHIFT                             0
#define TPC1_RTR_LBW_RD_RS_E_ARB_W_MASK                              0x7
#define TPC1_RTR_LBW_RD_RS_E_ARB_S_SHIFT                             8
#define TPC1_RTR_LBW_RD_RS_E_ARB_S_MASK                              0x700
#define TPC1_RTR_LBW_RD_RS_E_ARB_N_SHIFT                             16
#define TPC1_RTR_LBW_RD_RS_E_ARB_N_MASK                              0x70000
#define TPC1_RTR_LBW_RD_RS_E_ARB_L_SHIFT                             24
#define TPC1_RTR_LBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_LBW_RD_RS_W_ARB                                   0xE40254
/* TPC1_RTR_LBW_RD_RS_W_ARB */
#define TPC1_RTR_LBW_RD_RS_W_ARB_E_SHIFT                             0
#define TPC1_RTR_LBW_RD_RS_W_ARB_E_MASK                              0x7
#define TPC1_RTR_LBW_RD_RS_W_ARB_S_SHIFT                             8
#define TPC1_RTR_LBW_RD_RS_W_ARB_S_MASK                              0x700
#define TPC1_RTR_LBW_RD_RS_W_ARB_N_SHIFT                             16
#define TPC1_RTR_LBW_RD_RS_W_ARB_N_MASK                              0x70000
#define TPC1_RTR_LBW_RD_RS_W_ARB_L_SHIFT                             24
#define TPC1_RTR_LBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_LBW_RD_RS_N_ARB                                   0xE40258
/* TPC1_RTR_LBW_RD_RS_N_ARB */
#define TPC1_RTR_LBW_RD_RS_N_ARB_W_SHIFT                             0
#define TPC1_RTR_LBW_RD_RS_N_ARB_W_MASK                              0x7
#define TPC1_RTR_LBW_RD_RS_N_ARB_E_SHIFT                             8
#define TPC1_RTR_LBW_RD_RS_N_ARB_E_MASK                              0x700
#define TPC1_RTR_LBW_RD_RS_N_ARB_S_SHIFT                             16
#define TPC1_RTR_LBW_RD_RS_N_ARB_S_MASK                              0x70000
#define TPC1_RTR_LBW_RD_RS_N_ARB_L_SHIFT                             24
#define TPC1_RTR_LBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_LBW_RD_RS_S_ARB                                   0xE4025C
/* TPC1_RTR_LBW_RD_RS_S_ARB */
#define TPC1_RTR_LBW_RD_RS_S_ARB_W_SHIFT                             0
#define TPC1_RTR_LBW_RD_RS_S_ARB_W_MASK                              0x7
#define TPC1_RTR_LBW_RD_RS_S_ARB_E_SHIFT                             8
#define TPC1_RTR_LBW_RD_RS_S_ARB_E_MASK                              0x700
#define TPC1_RTR_LBW_RD_RS_S_ARB_N_SHIFT                             16
#define TPC1_RTR_LBW_RD_RS_S_ARB_N_MASK                              0x70000
#define TPC1_RTR_LBW_RD_RS_S_ARB_L_SHIFT                             24
#define TPC1_RTR_LBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_LBW_RD_RS_L_ARB                                   0xE40260
/* TPC1_RTR_LBW_RD_RS_L_ARB */
#define TPC1_RTR_LBW_RD_RS_L_ARB_W_SHIFT                             0
#define TPC1_RTR_LBW_RD_RS_L_ARB_W_MASK                              0x7
#define TPC1_RTR_LBW_RD_RS_L_ARB_E_SHIFT                             8
#define TPC1_RTR_LBW_RD_RS_L_ARB_E_MASK                              0x700
#define TPC1_RTR_LBW_RD_RS_L_ARB_S_SHIFT                             16
#define TPC1_RTR_LBW_RD_RS_L_ARB_S_MASK                              0x70000
#define TPC1_RTR_LBW_RD_RS_L_ARB_N_SHIFT                             24
#define TPC1_RTR_LBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC1_RTR_LBW_WR_RQ_E_ARB                                   0xE40270
/* TPC1_RTR_LBW_WR_RQ_E_ARB */
#define TPC1_RTR_LBW_WR_RQ_E_ARB_W_SHIFT                             0
#define TPC1_RTR_LBW_WR_RQ_E_ARB_W_MASK                              0x7
#define TPC1_RTR_LBW_WR_RQ_E_ARB_S_SHIFT                             8
#define TPC1_RTR_LBW_WR_RQ_E_ARB_S_MASK                              0x700
#define TPC1_RTR_LBW_WR_RQ_E_ARB_N_SHIFT                             16
#define TPC1_RTR_LBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define TPC1_RTR_LBW_WR_RQ_E_ARB_L_SHIFT                             24
#define TPC1_RTR_LBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_LBW_WR_RQ_W_ARB                                   0xE40274
/* TPC1_RTR_LBW_WR_RQ_W_ARB */
#define TPC1_RTR_LBW_WR_RQ_W_ARB_E_SHIFT                             0
#define TPC1_RTR_LBW_WR_RQ_W_ARB_E_MASK                              0x7
#define TPC1_RTR_LBW_WR_RQ_W_ARB_S_SHIFT                             8
#define TPC1_RTR_LBW_WR_RQ_W_ARB_S_MASK                              0x700
#define TPC1_RTR_LBW_WR_RQ_W_ARB_N_SHIFT                             16
#define TPC1_RTR_LBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define TPC1_RTR_LBW_WR_RQ_W_ARB_L_SHIFT                             24
#define TPC1_RTR_LBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_LBW_WR_RQ_N_ARB                                   0xE40278
/* TPC1_RTR_LBW_WR_RQ_N_ARB */
#define TPC1_RTR_LBW_WR_RQ_N_ARB_W_SHIFT                             0
#define TPC1_RTR_LBW_WR_RQ_N_ARB_W_MASK                              0x7
#define TPC1_RTR_LBW_WR_RQ_N_ARB_E_SHIFT                             8
#define TPC1_RTR_LBW_WR_RQ_N_ARB_E_MASK                              0x700
#define TPC1_RTR_LBW_WR_RQ_N_ARB_S_SHIFT                             16
#define TPC1_RTR_LBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define TPC1_RTR_LBW_WR_RQ_N_ARB_L_SHIFT                             24
#define TPC1_RTR_LBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_LBW_WR_RQ_S_ARB                                   0xE4027C
/* TPC1_RTR_LBW_WR_RQ_S_ARB */
#define TPC1_RTR_LBW_WR_RQ_S_ARB_W_SHIFT                             0
#define TPC1_RTR_LBW_WR_RQ_S_ARB_W_MASK                              0x7
#define TPC1_RTR_LBW_WR_RQ_S_ARB_E_SHIFT                             8
#define TPC1_RTR_LBW_WR_RQ_S_ARB_E_MASK                              0x700
#define TPC1_RTR_LBW_WR_RQ_S_ARB_N_SHIFT                             16
#define TPC1_RTR_LBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define TPC1_RTR_LBW_WR_RQ_S_ARB_L_SHIFT                             24
#define TPC1_RTR_LBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_LBW_WR_RQ_L_ARB                                   0xE40280
/* TPC1_RTR_LBW_WR_RQ_L_ARB */
#define TPC1_RTR_LBW_WR_RQ_L_ARB_W_SHIFT                             0
#define TPC1_RTR_LBW_WR_RQ_L_ARB_W_MASK                              0x7
#define TPC1_RTR_LBW_WR_RQ_L_ARB_E_SHIFT                             8
#define TPC1_RTR_LBW_WR_RQ_L_ARB_E_MASK                              0x700
#define TPC1_RTR_LBW_WR_RQ_L_ARB_S_SHIFT                             16
#define TPC1_RTR_LBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define TPC1_RTR_LBW_WR_RQ_L_ARB_N_SHIFT                             24
#define TPC1_RTR_LBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC1_RTR_LBW_WR_RS_E_ARB                                   0xE40290
/* TPC1_RTR_LBW_WR_RS_E_ARB */
#define TPC1_RTR_LBW_WR_RS_E_ARB_W_SHIFT                             0
#define TPC1_RTR_LBW_WR_RS_E_ARB_W_MASK                              0x7
#define TPC1_RTR_LBW_WR_RS_E_ARB_S_SHIFT                             8
#define TPC1_RTR_LBW_WR_RS_E_ARB_S_MASK                              0x700
#define TPC1_RTR_LBW_WR_RS_E_ARB_N_SHIFT                             16
#define TPC1_RTR_LBW_WR_RS_E_ARB_N_MASK                              0x70000
#define TPC1_RTR_LBW_WR_RS_E_ARB_L_SHIFT                             24
#define TPC1_RTR_LBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_LBW_WR_RS_W_ARB                                   0xE40294
/* TPC1_RTR_LBW_WR_RS_W_ARB */
#define TPC1_RTR_LBW_WR_RS_W_ARB_E_SHIFT                             0
#define TPC1_RTR_LBW_WR_RS_W_ARB_E_MASK                              0x7
#define TPC1_RTR_LBW_WR_RS_W_ARB_S_SHIFT                             8
#define TPC1_RTR_LBW_WR_RS_W_ARB_S_MASK                              0x700
#define TPC1_RTR_LBW_WR_RS_W_ARB_N_SHIFT                             16
#define TPC1_RTR_LBW_WR_RS_W_ARB_N_MASK                              0x70000
#define TPC1_RTR_LBW_WR_RS_W_ARB_L_SHIFT                             24
#define TPC1_RTR_LBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_LBW_WR_RS_N_ARB                                   0xE40298
/* TPC1_RTR_LBW_WR_RS_N_ARB */
#define TPC1_RTR_LBW_WR_RS_N_ARB_W_SHIFT                             0
#define TPC1_RTR_LBW_WR_RS_N_ARB_W_MASK                              0x7
#define TPC1_RTR_LBW_WR_RS_N_ARB_E_SHIFT                             8
#define TPC1_RTR_LBW_WR_RS_N_ARB_E_MASK                              0x700
#define TPC1_RTR_LBW_WR_RS_N_ARB_S_SHIFT                             16
#define TPC1_RTR_LBW_WR_RS_N_ARB_S_MASK                              0x70000
#define TPC1_RTR_LBW_WR_RS_N_ARB_L_SHIFT                             24
#define TPC1_RTR_LBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_LBW_WR_RS_S_ARB                                   0xE4029C
/* TPC1_RTR_LBW_WR_RS_S_ARB */
#define TPC1_RTR_LBW_WR_RS_S_ARB_W_SHIFT                             0
#define TPC1_RTR_LBW_WR_RS_S_ARB_W_MASK                              0x7
#define TPC1_RTR_LBW_WR_RS_S_ARB_E_SHIFT                             8
#define TPC1_RTR_LBW_WR_RS_S_ARB_E_MASK                              0x700
#define TPC1_RTR_LBW_WR_RS_S_ARB_N_SHIFT                             16
#define TPC1_RTR_LBW_WR_RS_S_ARB_N_MASK                              0x70000
#define TPC1_RTR_LBW_WR_RS_S_ARB_L_SHIFT                             24
#define TPC1_RTR_LBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC1_RTR_LBW_WR_RS_L_ARB                                   0xE402A0
/* TPC1_RTR_LBW_WR_RS_L_ARB */
#define TPC1_RTR_LBW_WR_RS_L_ARB_W_SHIFT                             0
#define TPC1_RTR_LBW_WR_RS_L_ARB_W_MASK                              0x7
#define TPC1_RTR_LBW_WR_RS_L_ARB_E_SHIFT                             8
#define TPC1_RTR_LBW_WR_RS_L_ARB_E_MASK                              0x700
#define TPC1_RTR_LBW_WR_RS_L_ARB_S_SHIFT                             16
#define TPC1_RTR_LBW_WR_RS_L_ARB_S_MASK                              0x70000
#define TPC1_RTR_LBW_WR_RS_L_ARB_N_SHIFT                             24
#define TPC1_RTR_LBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC1_RTR_DBG_E_ARB                                         0xE40300
/* TPC1_RTR_DBG_E_ARB */
#define TPC1_RTR_DBG_E_ARB_W_SHIFT                                   0
#define TPC1_RTR_DBG_E_ARB_W_MASK                                    0x7
#define TPC1_RTR_DBG_E_ARB_S_SHIFT                                   8
#define TPC1_RTR_DBG_E_ARB_S_MASK                                    0x700
#define TPC1_RTR_DBG_E_ARB_N_SHIFT                                   16
#define TPC1_RTR_DBG_E_ARB_N_MASK                                    0x70000
#define TPC1_RTR_DBG_E_ARB_L_SHIFT                                   24
#define TPC1_RTR_DBG_E_ARB_L_MASK                                    0x7000000

#define mmTPC1_RTR_DBG_W_ARB                                         0xE40304
/* TPC1_RTR_DBG_W_ARB */
#define TPC1_RTR_DBG_W_ARB_E_SHIFT                                   0
#define TPC1_RTR_DBG_W_ARB_E_MASK                                    0x7
#define TPC1_RTR_DBG_W_ARB_S_SHIFT                                   8
#define TPC1_RTR_DBG_W_ARB_S_MASK                                    0x700
#define TPC1_RTR_DBG_W_ARB_N_SHIFT                                   16
#define TPC1_RTR_DBG_W_ARB_N_MASK                                    0x70000
#define TPC1_RTR_DBG_W_ARB_L_SHIFT                                   24
#define TPC1_RTR_DBG_W_ARB_L_MASK                                    0x7000000

#define mmTPC1_RTR_DBG_N_ARB                                         0xE40308
/* TPC1_RTR_DBG_N_ARB */
#define TPC1_RTR_DBG_N_ARB_W_SHIFT                                   0
#define TPC1_RTR_DBG_N_ARB_W_MASK                                    0x7
#define TPC1_RTR_DBG_N_ARB_E_SHIFT                                   8
#define TPC1_RTR_DBG_N_ARB_E_MASK                                    0x700
#define TPC1_RTR_DBG_N_ARB_S_SHIFT                                   16
#define TPC1_RTR_DBG_N_ARB_S_MASK                                    0x70000
#define TPC1_RTR_DBG_N_ARB_L_SHIFT                                   24
#define TPC1_RTR_DBG_N_ARB_L_MASK                                    0x7000000

#define mmTPC1_RTR_DBG_S_ARB                                         0xE4030C
/* TPC1_RTR_DBG_S_ARB */
#define TPC1_RTR_DBG_S_ARB_W_SHIFT                                   0
#define TPC1_RTR_DBG_S_ARB_W_MASK                                    0x7
#define TPC1_RTR_DBG_S_ARB_E_SHIFT                                   8
#define TPC1_RTR_DBG_S_ARB_E_MASK                                    0x700
#define TPC1_RTR_DBG_S_ARB_N_SHIFT                                   16
#define TPC1_RTR_DBG_S_ARB_N_MASK                                    0x70000
#define TPC1_RTR_DBG_S_ARB_L_SHIFT                                   24
#define TPC1_RTR_DBG_S_ARB_L_MASK                                    0x7000000

#define mmTPC1_RTR_DBG_L_ARB                                         0xE40310
/* TPC1_RTR_DBG_L_ARB */
#define TPC1_RTR_DBG_L_ARB_W_SHIFT                                   0
#define TPC1_RTR_DBG_L_ARB_W_MASK                                    0x7
#define TPC1_RTR_DBG_L_ARB_E_SHIFT                                   8
#define TPC1_RTR_DBG_L_ARB_E_MASK                                    0x700
#define TPC1_RTR_DBG_L_ARB_S_SHIFT                                   16
#define TPC1_RTR_DBG_L_ARB_S_MASK                                    0x70000
#define TPC1_RTR_DBG_L_ARB_N_SHIFT                                   24
#define TPC1_RTR_DBG_L_ARB_N_MASK                                    0x7000000

#define mmTPC1_RTR_DBG_E_ARB_MAX                                     0xE40320
/* TPC1_RTR_DBG_E_ARB_MAX */
#define TPC1_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC1_RTR_DBG_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC1_RTR_DBG_W_ARB_MAX                                     0xE40324
/* TPC1_RTR_DBG_W_ARB_MAX */
#define TPC1_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC1_RTR_DBG_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC1_RTR_DBG_N_ARB_MAX                                     0xE40328
/* TPC1_RTR_DBG_N_ARB_MAX */
#define TPC1_RTR_DBG_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC1_RTR_DBG_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC1_RTR_DBG_S_ARB_MAX                                     0xE4032C
/* TPC1_RTR_DBG_S_ARB_MAX */
#define TPC1_RTR_DBG_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC1_RTR_DBG_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC1_RTR_DBG_L_ARB_MAX                                     0xE40330
/* TPC1_RTR_DBG_L_ARB_MAX */
#define TPC1_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC1_RTR_DBG_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC1_RTR_SPLIT_COEF_0                                      0xE40400

#define mmTPC1_RTR_SPLIT_COEF_1                                      0xE40404

#define mmTPC1_RTR_SPLIT_COEF_2                                      0xE40408

#define mmTPC1_RTR_SPLIT_COEF_3                                      0xE4040C

#define mmTPC1_RTR_SPLIT_COEF_4                                      0xE40410

#define mmTPC1_RTR_SPLIT_COEF_5                                      0xE40414

#define mmTPC1_RTR_SPLIT_COEF_6                                      0xE40418

#define mmTPC1_RTR_SPLIT_COEF_7                                      0xE4041C

#define mmTPC1_RTR_SPLIT_COEF_8                                      0xE40420

#define mmTPC1_RTR_SPLIT_COEF_9                                      0xE40424
/* TPC1_RTR_SPLIT_COEF */
#define TPC1_RTR_SPLIT_COEF_VAL_SHIFT                                0
#define TPC1_RTR_SPLIT_COEF_VAL_MASK                                 0xFFFF

#define mmTPC1_RTR_SPLIT_CFG                                         0xE40440
/* TPC1_RTR_SPLIT_CFG */
#define TPC1_RTR_SPLIT_CFG_FORCE_WAK_ORDER_SHIFT                     0
#define TPC1_RTR_SPLIT_CFG_FORCE_WAK_ORDER_MASK                      0x1
#define TPC1_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_SHIFT                  1
#define TPC1_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_MASK                   0x2
#define TPC1_RTR_SPLIT_CFG_DEFAULT_MESH_SHIFT                        2
#define TPC1_RTR_SPLIT_CFG_DEFAULT_MESH_MASK                         0xC
#define TPC1_RTR_SPLIT_CFG_WR_RATE_LIM_EN_SHIFT                      4
#define TPC1_RTR_SPLIT_CFG_WR_RATE_LIM_EN_MASK                       0x10
#define TPC1_RTR_SPLIT_CFG_RD_RATE_LIM_EN_SHIFT                      5
#define TPC1_RTR_SPLIT_CFG_RD_RATE_LIM_EN_MASK                       0x20
#define TPC1_RTR_SPLIT_CFG_B2B_OPT_SHIFT                             6
#define TPC1_RTR_SPLIT_CFG_B2B_OPT_MASK                              0x1C0

#define mmTPC1_RTR_SPLIT_RD_SAT                                      0xE40444
/* TPC1_RTR_SPLIT_RD_SAT */
#define TPC1_RTR_SPLIT_RD_SAT_VAL_SHIFT                              0
#define TPC1_RTR_SPLIT_RD_SAT_VAL_MASK                               0xFFFF

#define mmTPC1_RTR_SPLIT_RD_RST_TOKEN                                0xE40448
/* TPC1_RTR_SPLIT_RD_RST_TOKEN */
#define TPC1_RTR_SPLIT_RD_RST_TOKEN_VAL_SHIFT                        0
#define TPC1_RTR_SPLIT_RD_RST_TOKEN_VAL_MASK                         0xFFFF

#define mmTPC1_RTR_SPLIT_RD_TIMEOUT_0                                0xE4044C

#define mmTPC1_RTR_SPLIT_RD_TIMEOUT_1                                0xE40450
/* TPC1_RTR_SPLIT_RD_TIMEOUT */
#define TPC1_RTR_SPLIT_RD_TIMEOUT_VAL_SHIFT                          0
#define TPC1_RTR_SPLIT_RD_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmTPC1_RTR_SPLIT_WR_SAT                                      0xE40454
/* TPC1_RTR_SPLIT_WR_SAT */
#define TPC1_RTR_SPLIT_WR_SAT_VAL_SHIFT                              0
#define TPC1_RTR_SPLIT_WR_SAT_VAL_MASK                               0xFFFF

#define mmTPC1_RTR_WPLIT_WR_TST_TOLEN                                0xE40458
/* TPC1_RTR_WPLIT_WR_TST_TOLEN */
#define TPC1_RTR_WPLIT_WR_TST_TOLEN_VAL_SHIFT                        0
#define TPC1_RTR_WPLIT_WR_TST_TOLEN_VAL_MASK                         0xFFFF

#define mmTPC1_RTR_SPLIT_WR_TIMEOUT_0                                0xE4045C

#define mmTPC1_RTR_SPLIT_WR_TIMEOUT_1                                0xE40460
/* TPC1_RTR_SPLIT_WR_TIMEOUT */
#define TPC1_RTR_SPLIT_WR_TIMEOUT_VAL_SHIFT                          0
#define TPC1_RTR_SPLIT_WR_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmTPC1_RTR_HBW_RANGE_HIT                                     0xE40470
/* TPC1_RTR_HBW_RANGE_HIT */
#define TPC1_RTR_HBW_RANGE_HIT_IND_SHIFT                             0
#define TPC1_RTR_HBW_RANGE_HIT_IND_MASK                              0xFF

#define mmTPC1_RTR_HBW_RANGE_MASK_L_0                                0xE40480

#define mmTPC1_RTR_HBW_RANGE_MASK_L_1                                0xE40484

#define mmTPC1_RTR_HBW_RANGE_MASK_L_2                                0xE40488

#define mmTPC1_RTR_HBW_RANGE_MASK_L_3                                0xE4048C

#define mmTPC1_RTR_HBW_RANGE_MASK_L_4                                0xE40490

#define mmTPC1_RTR_HBW_RANGE_MASK_L_5                                0xE40494

#define mmTPC1_RTR_HBW_RANGE_MASK_L_6                                0xE40498

#define mmTPC1_RTR_HBW_RANGE_MASK_L_7                                0xE4049C
/* TPC1_RTR_HBW_RANGE_MASK_L */
#define TPC1_RTR_HBW_RANGE_MASK_L_VAL_SHIFT                          0
#define TPC1_RTR_HBW_RANGE_MASK_L_VAL_MASK                           0xFFFFFFFF

#define mmTPC1_RTR_HBW_RANGE_MASK_H_0                                0xE404A0

#define mmTPC1_RTR_HBW_RANGE_MASK_H_1                                0xE404A4

#define mmTPC1_RTR_HBW_RANGE_MASK_H_2                                0xE404A8

#define mmTPC1_RTR_HBW_RANGE_MASK_H_3                                0xE404AC

#define mmTPC1_RTR_HBW_RANGE_MASK_H_4                                0xE404B0

#define mmTPC1_RTR_HBW_RANGE_MASK_H_5                                0xE404B4

#define mmTPC1_RTR_HBW_RANGE_MASK_H_6                                0xE404B8

#define mmTPC1_RTR_HBW_RANGE_MASK_H_7                                0xE404BC
/* TPC1_RTR_HBW_RANGE_MASK_H */
#define TPC1_RTR_HBW_RANGE_MASK_H_VAL_SHIFT                          0
#define TPC1_RTR_HBW_RANGE_MASK_H_VAL_MASK                           0x3FFFF

#define mmTPC1_RTR_HBW_RANGE_BASE_L_0                                0xE404C0

#define mmTPC1_RTR_HBW_RANGE_BASE_L_1                                0xE404C4

#define mmTPC1_RTR_HBW_RANGE_BASE_L_2                                0xE404C8

#define mmTPC1_RTR_HBW_RANGE_BASE_L_3                                0xE404CC

#define mmTPC1_RTR_HBW_RANGE_BASE_L_4                                0xE404D0

#define mmTPC1_RTR_HBW_RANGE_BASE_L_5                                0xE404D4

#define mmTPC1_RTR_HBW_RANGE_BASE_L_6                                0xE404D8

#define mmTPC1_RTR_HBW_RANGE_BASE_L_7                                0xE404DC
/* TPC1_RTR_HBW_RANGE_BASE_L */
#define TPC1_RTR_HBW_RANGE_BASE_L_VAL_SHIFT                          0
#define TPC1_RTR_HBW_RANGE_BASE_L_VAL_MASK                           0xFFFFFFFF

#define mmTPC1_RTR_HBW_RANGE_BASE_H_0                                0xE404E0

#define mmTPC1_RTR_HBW_RANGE_BASE_H_1                                0xE404E4

#define mmTPC1_RTR_HBW_RANGE_BASE_H_2                                0xE404E8

#define mmTPC1_RTR_HBW_RANGE_BASE_H_3                                0xE404EC

#define mmTPC1_RTR_HBW_RANGE_BASE_H_4                                0xE404F0

#define mmTPC1_RTR_HBW_RANGE_BASE_H_5                                0xE404F4

#define mmTPC1_RTR_HBW_RANGE_BASE_H_6                                0xE404F8

#define mmTPC1_RTR_HBW_RANGE_BASE_H_7                                0xE404FC
/* TPC1_RTR_HBW_RANGE_BASE_H */
#define TPC1_RTR_HBW_RANGE_BASE_H_VAL_SHIFT                          0
#define TPC1_RTR_HBW_RANGE_BASE_H_VAL_MASK                           0x3FFFF

#define mmTPC1_RTR_LBW_RANGE_HIT                                     0xE40500
/* TPC1_RTR_LBW_RANGE_HIT */
#define TPC1_RTR_LBW_RANGE_HIT_IND_SHIFT                             0
#define TPC1_RTR_LBW_RANGE_HIT_IND_MASK                              0xFFFF

#define mmTPC1_RTR_LBW_RANGE_MASK_0                                  0xE40510

#define mmTPC1_RTR_LBW_RANGE_MASK_1                                  0xE40514

#define mmTPC1_RTR_LBW_RANGE_MASK_2                                  0xE40518

#define mmTPC1_RTR_LBW_RANGE_MASK_3                                  0xE4051C

#define mmTPC1_RTR_LBW_RANGE_MASK_4                                  0xE40520

#define mmTPC1_RTR_LBW_RANGE_MASK_5                                  0xE40524

#define mmTPC1_RTR_LBW_RANGE_MASK_6                                  0xE40528

#define mmTPC1_RTR_LBW_RANGE_MASK_7                                  0xE4052C

#define mmTPC1_RTR_LBW_RANGE_MASK_8                                  0xE40530

#define mmTPC1_RTR_LBW_RANGE_MASK_9                                  0xE40534

#define mmTPC1_RTR_LBW_RANGE_MASK_10                                 0xE40538

#define mmTPC1_RTR_LBW_RANGE_MASK_11                                 0xE4053C

#define mmTPC1_RTR_LBW_RANGE_MASK_12                                 0xE40540

#define mmTPC1_RTR_LBW_RANGE_MASK_13                                 0xE40544

#define mmTPC1_RTR_LBW_RANGE_MASK_14                                 0xE40548

#define mmTPC1_RTR_LBW_RANGE_MASK_15                                 0xE4054C
/* TPC1_RTR_LBW_RANGE_MASK */
#define TPC1_RTR_LBW_RANGE_MASK_VAL_SHIFT                            0
#define TPC1_RTR_LBW_RANGE_MASK_VAL_MASK                             0x3FFFFFF

#define mmTPC1_RTR_LBW_RANGE_BASE_0                                  0xE40550

#define mmTPC1_RTR_LBW_RANGE_BASE_1                                  0xE40554

#define mmTPC1_RTR_LBW_RANGE_BASE_2                                  0xE40558

#define mmTPC1_RTR_LBW_RANGE_BASE_3                                  0xE4055C

#define mmTPC1_RTR_LBW_RANGE_BASE_4                                  0xE40560

#define mmTPC1_RTR_LBW_RANGE_BASE_5                                  0xE40564

#define mmTPC1_RTR_LBW_RANGE_BASE_6                                  0xE40568

#define mmTPC1_RTR_LBW_RANGE_BASE_7                                  0xE4056C

#define mmTPC1_RTR_LBW_RANGE_BASE_8                                  0xE40570

#define mmTPC1_RTR_LBW_RANGE_BASE_9                                  0xE40574

#define mmTPC1_RTR_LBW_RANGE_BASE_10                                 0xE40578

#define mmTPC1_RTR_LBW_RANGE_BASE_11                                 0xE4057C

#define mmTPC1_RTR_LBW_RANGE_BASE_12                                 0xE40580

#define mmTPC1_RTR_LBW_RANGE_BASE_13                                 0xE40584

#define mmTPC1_RTR_LBW_RANGE_BASE_14                                 0xE40588

#define mmTPC1_RTR_LBW_RANGE_BASE_15                                 0xE4058C
/* TPC1_RTR_LBW_RANGE_BASE */
#define TPC1_RTR_LBW_RANGE_BASE_VAL_SHIFT                            0
#define TPC1_RTR_LBW_RANGE_BASE_VAL_MASK                             0x3FFFFFF

#define mmTPC1_RTR_RGLTR                                             0xE40590
/* TPC1_RTR_RGLTR */
#define TPC1_RTR_RGLTR_WR_EN_SHIFT                                   0
#define TPC1_RTR_RGLTR_WR_EN_MASK                                    0x1
#define TPC1_RTR_RGLTR_RD_EN_SHIFT                                   4
#define TPC1_RTR_RGLTR_RD_EN_MASK                                    0x10

#define mmTPC1_RTR_RGLTR_WR_RESULT                                   0xE40594
/* TPC1_RTR_RGLTR_WR_RESULT */
#define TPC1_RTR_RGLTR_WR_RESULT_VAL_SHIFT                           0
#define TPC1_RTR_RGLTR_WR_RESULT_VAL_MASK                            0xFF

#define mmTPC1_RTR_RGLTR_RD_RESULT                                   0xE40598
/* TPC1_RTR_RGLTR_RD_RESULT */
#define TPC1_RTR_RGLTR_RD_RESULT_VAL_SHIFT                           0
#define TPC1_RTR_RGLTR_RD_RESULT_VAL_MASK                            0xFF

#define mmTPC1_RTR_SCRAMB_EN                                         0xE40600
/* TPC1_RTR_SCRAMB_EN */
#define TPC1_RTR_SCRAMB_EN_VAL_SHIFT                                 0
#define TPC1_RTR_SCRAMB_EN_VAL_MASK                                  0x1

#define mmTPC1_RTR_NON_LIN_SCRAMB                                    0xE40604
/* TPC1_RTR_NON_LIN_SCRAMB */
#define TPC1_RTR_NON_LIN_SCRAMB_EN_SHIFT                             0
#define TPC1_RTR_NON_LIN_SCRAMB_EN_MASK                              0x1

#endif /* ASIC_REG_TPC1_RTR_H_ */

