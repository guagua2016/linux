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

#ifndef ASIC_REG_TPC5_RTR_H_
#define ASIC_REG_TPC5_RTR_H_

/*
 *****************************************
 *   TPC5_RTR (Prototype: TPC_RTR)
 *****************************************
 */

#define mmTPC5_RTR_HBW_RD_RQ_E_ARB                                   0xF40100
/* TPC5_RTR_HBW_RD_RQ_E_ARB */
#define TPC5_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                             0
#define TPC5_RTR_HBW_RD_RQ_E_ARB_W_MASK                              0x7
#define TPC5_RTR_HBW_RD_RQ_E_ARB_S_SHIFT                             8
#define TPC5_RTR_HBW_RD_RQ_E_ARB_S_MASK                              0x700
#define TPC5_RTR_HBW_RD_RQ_E_ARB_N_SHIFT                             16
#define TPC5_RTR_HBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define TPC5_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                             24
#define TPC5_RTR_HBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_HBW_RD_RQ_W_ARB                                   0xF40104
/* TPC5_RTR_HBW_RD_RQ_W_ARB */
#define TPC5_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                             0
#define TPC5_RTR_HBW_RD_RQ_W_ARB_E_MASK                              0x7
#define TPC5_RTR_HBW_RD_RQ_W_ARB_S_SHIFT                             8
#define TPC5_RTR_HBW_RD_RQ_W_ARB_S_MASK                              0x700
#define TPC5_RTR_HBW_RD_RQ_W_ARB_N_SHIFT                             16
#define TPC5_RTR_HBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define TPC5_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                             24
#define TPC5_RTR_HBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_HBW_RD_RQ_N_ARB                                   0xF40108
/* TPC5_RTR_HBW_RD_RQ_N_ARB */
#define TPC5_RTR_HBW_RD_RQ_N_ARB_W_SHIFT                             0
#define TPC5_RTR_HBW_RD_RQ_N_ARB_W_MASK                              0x7
#define TPC5_RTR_HBW_RD_RQ_N_ARB_E_SHIFT                             8
#define TPC5_RTR_HBW_RD_RQ_N_ARB_E_MASK                              0x700
#define TPC5_RTR_HBW_RD_RQ_N_ARB_S_SHIFT                             16
#define TPC5_RTR_HBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define TPC5_RTR_HBW_RD_RQ_N_ARB_L_SHIFT                             24
#define TPC5_RTR_HBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_HBW_RD_RQ_S_ARB                                   0xF4010C
/* TPC5_RTR_HBW_RD_RQ_S_ARB */
#define TPC5_RTR_HBW_RD_RQ_S_ARB_W_SHIFT                             0
#define TPC5_RTR_HBW_RD_RQ_S_ARB_W_MASK                              0x7
#define TPC5_RTR_HBW_RD_RQ_S_ARB_E_SHIFT                             8
#define TPC5_RTR_HBW_RD_RQ_S_ARB_E_MASK                              0x700
#define TPC5_RTR_HBW_RD_RQ_S_ARB_N_SHIFT                             16
#define TPC5_RTR_HBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define TPC5_RTR_HBW_RD_RQ_S_ARB_L_SHIFT                             24
#define TPC5_RTR_HBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_HBW_RD_RQ_L_ARB                                   0xF40110
/* TPC5_RTR_HBW_RD_RQ_L_ARB */
#define TPC5_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                             0
#define TPC5_RTR_HBW_RD_RQ_L_ARB_W_MASK                              0x7
#define TPC5_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                             8
#define TPC5_RTR_HBW_RD_RQ_L_ARB_E_MASK                              0x700
#define TPC5_RTR_HBW_RD_RQ_L_ARB_S_SHIFT                             16
#define TPC5_RTR_HBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define TPC5_RTR_HBW_RD_RQ_L_ARB_N_SHIFT                             24
#define TPC5_RTR_HBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC5_RTR_HBW_E_ARB_MAX                                     0xF40120
/* TPC5_RTR_HBW_E_ARB_MAX */
#define TPC5_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC5_RTR_HBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC5_RTR_HBW_W_ARB_MAX                                     0xF40124
/* TPC5_RTR_HBW_W_ARB_MAX */
#define TPC5_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC5_RTR_HBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC5_RTR_HBW_N_ARB_MAX                                     0xF40128
/* TPC5_RTR_HBW_N_ARB_MAX */
#define TPC5_RTR_HBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC5_RTR_HBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC5_RTR_HBW_S_ARB_MAX                                     0xF4012C
/* TPC5_RTR_HBW_S_ARB_MAX */
#define TPC5_RTR_HBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC5_RTR_HBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC5_RTR_HBW_L_ARB_MAX                                     0xF40130
/* TPC5_RTR_HBW_L_ARB_MAX */
#define TPC5_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC5_RTR_HBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC5_RTR_HBW_RD_RS_E_ARB                                   0xF40140
/* TPC5_RTR_HBW_RD_RS_E_ARB */
#define TPC5_RTR_HBW_RD_RS_E_ARB_W_SHIFT                             0
#define TPC5_RTR_HBW_RD_RS_E_ARB_W_MASK                              0x7
#define TPC5_RTR_HBW_RD_RS_E_ARB_S_SHIFT                             8
#define TPC5_RTR_HBW_RD_RS_E_ARB_S_MASK                              0x700
#define TPC5_RTR_HBW_RD_RS_E_ARB_N_SHIFT                             16
#define TPC5_RTR_HBW_RD_RS_E_ARB_N_MASK                              0x70000
#define TPC5_RTR_HBW_RD_RS_E_ARB_L_SHIFT                             24
#define TPC5_RTR_HBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_HBW_RD_RS_W_ARB                                   0xF40144
/* TPC5_RTR_HBW_RD_RS_W_ARB */
#define TPC5_RTR_HBW_RD_RS_W_ARB_E_SHIFT                             0
#define TPC5_RTR_HBW_RD_RS_W_ARB_E_MASK                              0x7
#define TPC5_RTR_HBW_RD_RS_W_ARB_S_SHIFT                             8
#define TPC5_RTR_HBW_RD_RS_W_ARB_S_MASK                              0x700
#define TPC5_RTR_HBW_RD_RS_W_ARB_N_SHIFT                             16
#define TPC5_RTR_HBW_RD_RS_W_ARB_N_MASK                              0x70000
#define TPC5_RTR_HBW_RD_RS_W_ARB_L_SHIFT                             24
#define TPC5_RTR_HBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_HBW_RD_RS_N_ARB                                   0xF40148
/* TPC5_RTR_HBW_RD_RS_N_ARB */
#define TPC5_RTR_HBW_RD_RS_N_ARB_W_SHIFT                             0
#define TPC5_RTR_HBW_RD_RS_N_ARB_W_MASK                              0x7
#define TPC5_RTR_HBW_RD_RS_N_ARB_E_SHIFT                             8
#define TPC5_RTR_HBW_RD_RS_N_ARB_E_MASK                              0x700
#define TPC5_RTR_HBW_RD_RS_N_ARB_S_SHIFT                             16
#define TPC5_RTR_HBW_RD_RS_N_ARB_S_MASK                              0x70000
#define TPC5_RTR_HBW_RD_RS_N_ARB_L_SHIFT                             24
#define TPC5_RTR_HBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_HBW_RD_RS_S_ARB                                   0xF4014C
/* TPC5_RTR_HBW_RD_RS_S_ARB */
#define TPC5_RTR_HBW_RD_RS_S_ARB_W_SHIFT                             0
#define TPC5_RTR_HBW_RD_RS_S_ARB_W_MASK                              0x7
#define TPC5_RTR_HBW_RD_RS_S_ARB_E_SHIFT                             8
#define TPC5_RTR_HBW_RD_RS_S_ARB_E_MASK                              0x700
#define TPC5_RTR_HBW_RD_RS_S_ARB_N_SHIFT                             16
#define TPC5_RTR_HBW_RD_RS_S_ARB_N_MASK                              0x70000
#define TPC5_RTR_HBW_RD_RS_S_ARB_L_SHIFT                             24
#define TPC5_RTR_HBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_HBW_RD_RS_L_ARB                                   0xF40150
/* TPC5_RTR_HBW_RD_RS_L_ARB */
#define TPC5_RTR_HBW_RD_RS_L_ARB_W_SHIFT                             0
#define TPC5_RTR_HBW_RD_RS_L_ARB_W_MASK                              0x7
#define TPC5_RTR_HBW_RD_RS_L_ARB_E_SHIFT                             8
#define TPC5_RTR_HBW_RD_RS_L_ARB_E_MASK                              0x700
#define TPC5_RTR_HBW_RD_RS_L_ARB_S_SHIFT                             16
#define TPC5_RTR_HBW_RD_RS_L_ARB_S_MASK                              0x70000
#define TPC5_RTR_HBW_RD_RS_L_ARB_N_SHIFT                             24
#define TPC5_RTR_HBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC5_RTR_HBW_WR_RQ_E_ARB                                   0xF40170
/* TPC5_RTR_HBW_WR_RQ_E_ARB */
#define TPC5_RTR_HBW_WR_RQ_E_ARB_W_SHIFT                             0
#define TPC5_RTR_HBW_WR_RQ_E_ARB_W_MASK                              0x7
#define TPC5_RTR_HBW_WR_RQ_E_ARB_S_SHIFT                             8
#define TPC5_RTR_HBW_WR_RQ_E_ARB_S_MASK                              0x700
#define TPC5_RTR_HBW_WR_RQ_E_ARB_N_SHIFT                             16
#define TPC5_RTR_HBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define TPC5_RTR_HBW_WR_RQ_E_ARB_L_SHIFT                             24
#define TPC5_RTR_HBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_HBW_WR_RQ_W_ARB                                   0xF40174
/* TPC5_RTR_HBW_WR_RQ_W_ARB */
#define TPC5_RTR_HBW_WR_RQ_W_ARB_E_SHIFT                             0
#define TPC5_RTR_HBW_WR_RQ_W_ARB_E_MASK                              0x7
#define TPC5_RTR_HBW_WR_RQ_W_ARB_S_SHIFT                             8
#define TPC5_RTR_HBW_WR_RQ_W_ARB_S_MASK                              0x700
#define TPC5_RTR_HBW_WR_RQ_W_ARB_N_SHIFT                             16
#define TPC5_RTR_HBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define TPC5_RTR_HBW_WR_RQ_W_ARB_L_SHIFT                             24
#define TPC5_RTR_HBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_HBW_WR_RQ_N_ARB                                   0xF40178
/* TPC5_RTR_HBW_WR_RQ_N_ARB */
#define TPC5_RTR_HBW_WR_RQ_N_ARB_W_SHIFT                             0
#define TPC5_RTR_HBW_WR_RQ_N_ARB_W_MASK                              0x7
#define TPC5_RTR_HBW_WR_RQ_N_ARB_E_SHIFT                             8
#define TPC5_RTR_HBW_WR_RQ_N_ARB_E_MASK                              0x700
#define TPC5_RTR_HBW_WR_RQ_N_ARB_S_SHIFT                             16
#define TPC5_RTR_HBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define TPC5_RTR_HBW_WR_RQ_N_ARB_L_SHIFT                             24
#define TPC5_RTR_HBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_HBW_WR_RQ_S_ARB                                   0xF4017C
/* TPC5_RTR_HBW_WR_RQ_S_ARB */
#define TPC5_RTR_HBW_WR_RQ_S_ARB_W_SHIFT                             0
#define TPC5_RTR_HBW_WR_RQ_S_ARB_W_MASK                              0x7
#define TPC5_RTR_HBW_WR_RQ_S_ARB_E_SHIFT                             8
#define TPC5_RTR_HBW_WR_RQ_S_ARB_E_MASK                              0x700
#define TPC5_RTR_HBW_WR_RQ_S_ARB_N_SHIFT                             16
#define TPC5_RTR_HBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define TPC5_RTR_HBW_WR_RQ_S_ARB_L_SHIFT                             24
#define TPC5_RTR_HBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_HBW_WR_RQ_L_ARB                                   0xF40180
/* TPC5_RTR_HBW_WR_RQ_L_ARB */
#define TPC5_RTR_HBW_WR_RQ_L_ARB_W_SHIFT                             0
#define TPC5_RTR_HBW_WR_RQ_L_ARB_W_MASK                              0x7
#define TPC5_RTR_HBW_WR_RQ_L_ARB_E_SHIFT                             8
#define TPC5_RTR_HBW_WR_RQ_L_ARB_E_MASK                              0x700
#define TPC5_RTR_HBW_WR_RQ_L_ARB_S_SHIFT                             16
#define TPC5_RTR_HBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define TPC5_RTR_HBW_WR_RQ_L_ARB_N_SHIFT                             24
#define TPC5_RTR_HBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC5_RTR_HBW_WR_RS_E_ARB                                   0xF40190
/* TPC5_RTR_HBW_WR_RS_E_ARB */
#define TPC5_RTR_HBW_WR_RS_E_ARB_W_SHIFT                             0
#define TPC5_RTR_HBW_WR_RS_E_ARB_W_MASK                              0x7
#define TPC5_RTR_HBW_WR_RS_E_ARB_S_SHIFT                             8
#define TPC5_RTR_HBW_WR_RS_E_ARB_S_MASK                              0x700
#define TPC5_RTR_HBW_WR_RS_E_ARB_N_SHIFT                             16
#define TPC5_RTR_HBW_WR_RS_E_ARB_N_MASK                              0x70000
#define TPC5_RTR_HBW_WR_RS_E_ARB_L_SHIFT                             24
#define TPC5_RTR_HBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_HBW_WR_RS_W_ARB                                   0xF40194
/* TPC5_RTR_HBW_WR_RS_W_ARB */
#define TPC5_RTR_HBW_WR_RS_W_ARB_E_SHIFT                             0
#define TPC5_RTR_HBW_WR_RS_W_ARB_E_MASK                              0x7
#define TPC5_RTR_HBW_WR_RS_W_ARB_S_SHIFT                             8
#define TPC5_RTR_HBW_WR_RS_W_ARB_S_MASK                              0x700
#define TPC5_RTR_HBW_WR_RS_W_ARB_N_SHIFT                             16
#define TPC5_RTR_HBW_WR_RS_W_ARB_N_MASK                              0x70000
#define TPC5_RTR_HBW_WR_RS_W_ARB_L_SHIFT                             24
#define TPC5_RTR_HBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_HBW_WR_RS_N_ARB                                   0xF40198
/* TPC5_RTR_HBW_WR_RS_N_ARB */
#define TPC5_RTR_HBW_WR_RS_N_ARB_W_SHIFT                             0
#define TPC5_RTR_HBW_WR_RS_N_ARB_W_MASK                              0x7
#define TPC5_RTR_HBW_WR_RS_N_ARB_E_SHIFT                             8
#define TPC5_RTR_HBW_WR_RS_N_ARB_E_MASK                              0x700
#define TPC5_RTR_HBW_WR_RS_N_ARB_S_SHIFT                             16
#define TPC5_RTR_HBW_WR_RS_N_ARB_S_MASK                              0x70000
#define TPC5_RTR_HBW_WR_RS_N_ARB_L_SHIFT                             24
#define TPC5_RTR_HBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_HBW_WR_RS_S_ARB                                   0xF4019C
/* TPC5_RTR_HBW_WR_RS_S_ARB */
#define TPC5_RTR_HBW_WR_RS_S_ARB_W_SHIFT                             0
#define TPC5_RTR_HBW_WR_RS_S_ARB_W_MASK                              0x7
#define TPC5_RTR_HBW_WR_RS_S_ARB_E_SHIFT                             8
#define TPC5_RTR_HBW_WR_RS_S_ARB_E_MASK                              0x700
#define TPC5_RTR_HBW_WR_RS_S_ARB_N_SHIFT                             16
#define TPC5_RTR_HBW_WR_RS_S_ARB_N_MASK                              0x70000
#define TPC5_RTR_HBW_WR_RS_S_ARB_L_SHIFT                             24
#define TPC5_RTR_HBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_HBW_WR_RS_L_ARB                                   0xF401A0
/* TPC5_RTR_HBW_WR_RS_L_ARB */
#define TPC5_RTR_HBW_WR_RS_L_ARB_W_SHIFT                             0
#define TPC5_RTR_HBW_WR_RS_L_ARB_W_MASK                              0x7
#define TPC5_RTR_HBW_WR_RS_L_ARB_E_SHIFT                             8
#define TPC5_RTR_HBW_WR_RS_L_ARB_E_MASK                              0x700
#define TPC5_RTR_HBW_WR_RS_L_ARB_S_SHIFT                             16
#define TPC5_RTR_HBW_WR_RS_L_ARB_S_MASK                              0x70000
#define TPC5_RTR_HBW_WR_RS_L_ARB_N_SHIFT                             24
#define TPC5_RTR_HBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC5_RTR_LBW_RD_RQ_E_ARB                                   0xF40200
/* TPC5_RTR_LBW_RD_RQ_E_ARB */
#define TPC5_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                             0
#define TPC5_RTR_LBW_RD_RQ_E_ARB_W_MASK                              0x7
#define TPC5_RTR_LBW_RD_RQ_E_ARB_S_SHIFT                             8
#define TPC5_RTR_LBW_RD_RQ_E_ARB_S_MASK                              0x700
#define TPC5_RTR_LBW_RD_RQ_E_ARB_N_SHIFT                             16
#define TPC5_RTR_LBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define TPC5_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                             24
#define TPC5_RTR_LBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_LBW_RD_RQ_W_ARB                                   0xF40204
/* TPC5_RTR_LBW_RD_RQ_W_ARB */
#define TPC5_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                             0
#define TPC5_RTR_LBW_RD_RQ_W_ARB_E_MASK                              0x7
#define TPC5_RTR_LBW_RD_RQ_W_ARB_S_SHIFT                             8
#define TPC5_RTR_LBW_RD_RQ_W_ARB_S_MASK                              0x700
#define TPC5_RTR_LBW_RD_RQ_W_ARB_N_SHIFT                             16
#define TPC5_RTR_LBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define TPC5_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                             24
#define TPC5_RTR_LBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_LBW_RD_RQ_N_ARB                                   0xF40208
/* TPC5_RTR_LBW_RD_RQ_N_ARB */
#define TPC5_RTR_LBW_RD_RQ_N_ARB_W_SHIFT                             0
#define TPC5_RTR_LBW_RD_RQ_N_ARB_W_MASK                              0x7
#define TPC5_RTR_LBW_RD_RQ_N_ARB_E_SHIFT                             8
#define TPC5_RTR_LBW_RD_RQ_N_ARB_E_MASK                              0x700
#define TPC5_RTR_LBW_RD_RQ_N_ARB_S_SHIFT                             16
#define TPC5_RTR_LBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define TPC5_RTR_LBW_RD_RQ_N_ARB_L_SHIFT                             24
#define TPC5_RTR_LBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_LBW_RD_RQ_S_ARB                                   0xF4020C
/* TPC5_RTR_LBW_RD_RQ_S_ARB */
#define TPC5_RTR_LBW_RD_RQ_S_ARB_W_SHIFT                             0
#define TPC5_RTR_LBW_RD_RQ_S_ARB_W_MASK                              0x7
#define TPC5_RTR_LBW_RD_RQ_S_ARB_E_SHIFT                             8
#define TPC5_RTR_LBW_RD_RQ_S_ARB_E_MASK                              0x700
#define TPC5_RTR_LBW_RD_RQ_S_ARB_N_SHIFT                             16
#define TPC5_RTR_LBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define TPC5_RTR_LBW_RD_RQ_S_ARB_L_SHIFT                             24
#define TPC5_RTR_LBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_LBW_RD_RQ_L_ARB                                   0xF40210
/* TPC5_RTR_LBW_RD_RQ_L_ARB */
#define TPC5_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                             0
#define TPC5_RTR_LBW_RD_RQ_L_ARB_W_MASK                              0x7
#define TPC5_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                             8
#define TPC5_RTR_LBW_RD_RQ_L_ARB_E_MASK                              0x700
#define TPC5_RTR_LBW_RD_RQ_L_ARB_S_SHIFT                             16
#define TPC5_RTR_LBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define TPC5_RTR_LBW_RD_RQ_L_ARB_N_SHIFT                             24
#define TPC5_RTR_LBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC5_RTR_LBW_E_ARB_MAX                                     0xF40220
/* TPC5_RTR_LBW_E_ARB_MAX */
#define TPC5_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC5_RTR_LBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC5_RTR_LBW_W_ARB_MAX                                     0xF40224
/* TPC5_RTR_LBW_W_ARB_MAX */
#define TPC5_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC5_RTR_LBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC5_RTR_LBW_N_ARB_MAX                                     0xF40228
/* TPC5_RTR_LBW_N_ARB_MAX */
#define TPC5_RTR_LBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC5_RTR_LBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC5_RTR_LBW_S_ARB_MAX                                     0xF4022C
/* TPC5_RTR_LBW_S_ARB_MAX */
#define TPC5_RTR_LBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC5_RTR_LBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC5_RTR_LBW_L_ARB_MAX                                     0xF40230
/* TPC5_RTR_LBW_L_ARB_MAX */
#define TPC5_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC5_RTR_LBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC5_RTR_LBW_RD_RS_E_ARB                                   0xF40250
/* TPC5_RTR_LBW_RD_RS_E_ARB */
#define TPC5_RTR_LBW_RD_RS_E_ARB_W_SHIFT                             0
#define TPC5_RTR_LBW_RD_RS_E_ARB_W_MASK                              0x7
#define TPC5_RTR_LBW_RD_RS_E_ARB_S_SHIFT                             8
#define TPC5_RTR_LBW_RD_RS_E_ARB_S_MASK                              0x700
#define TPC5_RTR_LBW_RD_RS_E_ARB_N_SHIFT                             16
#define TPC5_RTR_LBW_RD_RS_E_ARB_N_MASK                              0x70000
#define TPC5_RTR_LBW_RD_RS_E_ARB_L_SHIFT                             24
#define TPC5_RTR_LBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_LBW_RD_RS_W_ARB                                   0xF40254
/* TPC5_RTR_LBW_RD_RS_W_ARB */
#define TPC5_RTR_LBW_RD_RS_W_ARB_E_SHIFT                             0
#define TPC5_RTR_LBW_RD_RS_W_ARB_E_MASK                              0x7
#define TPC5_RTR_LBW_RD_RS_W_ARB_S_SHIFT                             8
#define TPC5_RTR_LBW_RD_RS_W_ARB_S_MASK                              0x700
#define TPC5_RTR_LBW_RD_RS_W_ARB_N_SHIFT                             16
#define TPC5_RTR_LBW_RD_RS_W_ARB_N_MASK                              0x70000
#define TPC5_RTR_LBW_RD_RS_W_ARB_L_SHIFT                             24
#define TPC5_RTR_LBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_LBW_RD_RS_N_ARB                                   0xF40258
/* TPC5_RTR_LBW_RD_RS_N_ARB */
#define TPC5_RTR_LBW_RD_RS_N_ARB_W_SHIFT                             0
#define TPC5_RTR_LBW_RD_RS_N_ARB_W_MASK                              0x7
#define TPC5_RTR_LBW_RD_RS_N_ARB_E_SHIFT                             8
#define TPC5_RTR_LBW_RD_RS_N_ARB_E_MASK                              0x700
#define TPC5_RTR_LBW_RD_RS_N_ARB_S_SHIFT                             16
#define TPC5_RTR_LBW_RD_RS_N_ARB_S_MASK                              0x70000
#define TPC5_RTR_LBW_RD_RS_N_ARB_L_SHIFT                             24
#define TPC5_RTR_LBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_LBW_RD_RS_S_ARB                                   0xF4025C
/* TPC5_RTR_LBW_RD_RS_S_ARB */
#define TPC5_RTR_LBW_RD_RS_S_ARB_W_SHIFT                             0
#define TPC5_RTR_LBW_RD_RS_S_ARB_W_MASK                              0x7
#define TPC5_RTR_LBW_RD_RS_S_ARB_E_SHIFT                             8
#define TPC5_RTR_LBW_RD_RS_S_ARB_E_MASK                              0x700
#define TPC5_RTR_LBW_RD_RS_S_ARB_N_SHIFT                             16
#define TPC5_RTR_LBW_RD_RS_S_ARB_N_MASK                              0x70000
#define TPC5_RTR_LBW_RD_RS_S_ARB_L_SHIFT                             24
#define TPC5_RTR_LBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_LBW_RD_RS_L_ARB                                   0xF40260
/* TPC5_RTR_LBW_RD_RS_L_ARB */
#define TPC5_RTR_LBW_RD_RS_L_ARB_W_SHIFT                             0
#define TPC5_RTR_LBW_RD_RS_L_ARB_W_MASK                              0x7
#define TPC5_RTR_LBW_RD_RS_L_ARB_E_SHIFT                             8
#define TPC5_RTR_LBW_RD_RS_L_ARB_E_MASK                              0x700
#define TPC5_RTR_LBW_RD_RS_L_ARB_S_SHIFT                             16
#define TPC5_RTR_LBW_RD_RS_L_ARB_S_MASK                              0x70000
#define TPC5_RTR_LBW_RD_RS_L_ARB_N_SHIFT                             24
#define TPC5_RTR_LBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC5_RTR_LBW_WR_RQ_E_ARB                                   0xF40270
/* TPC5_RTR_LBW_WR_RQ_E_ARB */
#define TPC5_RTR_LBW_WR_RQ_E_ARB_W_SHIFT                             0
#define TPC5_RTR_LBW_WR_RQ_E_ARB_W_MASK                              0x7
#define TPC5_RTR_LBW_WR_RQ_E_ARB_S_SHIFT                             8
#define TPC5_RTR_LBW_WR_RQ_E_ARB_S_MASK                              0x700
#define TPC5_RTR_LBW_WR_RQ_E_ARB_N_SHIFT                             16
#define TPC5_RTR_LBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define TPC5_RTR_LBW_WR_RQ_E_ARB_L_SHIFT                             24
#define TPC5_RTR_LBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_LBW_WR_RQ_W_ARB                                   0xF40274
/* TPC5_RTR_LBW_WR_RQ_W_ARB */
#define TPC5_RTR_LBW_WR_RQ_W_ARB_E_SHIFT                             0
#define TPC5_RTR_LBW_WR_RQ_W_ARB_E_MASK                              0x7
#define TPC5_RTR_LBW_WR_RQ_W_ARB_S_SHIFT                             8
#define TPC5_RTR_LBW_WR_RQ_W_ARB_S_MASK                              0x700
#define TPC5_RTR_LBW_WR_RQ_W_ARB_N_SHIFT                             16
#define TPC5_RTR_LBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define TPC5_RTR_LBW_WR_RQ_W_ARB_L_SHIFT                             24
#define TPC5_RTR_LBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_LBW_WR_RQ_N_ARB                                   0xF40278
/* TPC5_RTR_LBW_WR_RQ_N_ARB */
#define TPC5_RTR_LBW_WR_RQ_N_ARB_W_SHIFT                             0
#define TPC5_RTR_LBW_WR_RQ_N_ARB_W_MASK                              0x7
#define TPC5_RTR_LBW_WR_RQ_N_ARB_E_SHIFT                             8
#define TPC5_RTR_LBW_WR_RQ_N_ARB_E_MASK                              0x700
#define TPC5_RTR_LBW_WR_RQ_N_ARB_S_SHIFT                             16
#define TPC5_RTR_LBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define TPC5_RTR_LBW_WR_RQ_N_ARB_L_SHIFT                             24
#define TPC5_RTR_LBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_LBW_WR_RQ_S_ARB                                   0xF4027C
/* TPC5_RTR_LBW_WR_RQ_S_ARB */
#define TPC5_RTR_LBW_WR_RQ_S_ARB_W_SHIFT                             0
#define TPC5_RTR_LBW_WR_RQ_S_ARB_W_MASK                              0x7
#define TPC5_RTR_LBW_WR_RQ_S_ARB_E_SHIFT                             8
#define TPC5_RTR_LBW_WR_RQ_S_ARB_E_MASK                              0x700
#define TPC5_RTR_LBW_WR_RQ_S_ARB_N_SHIFT                             16
#define TPC5_RTR_LBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define TPC5_RTR_LBW_WR_RQ_S_ARB_L_SHIFT                             24
#define TPC5_RTR_LBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_LBW_WR_RQ_L_ARB                                   0xF40280
/* TPC5_RTR_LBW_WR_RQ_L_ARB */
#define TPC5_RTR_LBW_WR_RQ_L_ARB_W_SHIFT                             0
#define TPC5_RTR_LBW_WR_RQ_L_ARB_W_MASK                              0x7
#define TPC5_RTR_LBW_WR_RQ_L_ARB_E_SHIFT                             8
#define TPC5_RTR_LBW_WR_RQ_L_ARB_E_MASK                              0x700
#define TPC5_RTR_LBW_WR_RQ_L_ARB_S_SHIFT                             16
#define TPC5_RTR_LBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define TPC5_RTR_LBW_WR_RQ_L_ARB_N_SHIFT                             24
#define TPC5_RTR_LBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC5_RTR_LBW_WR_RS_E_ARB                                   0xF40290
/* TPC5_RTR_LBW_WR_RS_E_ARB */
#define TPC5_RTR_LBW_WR_RS_E_ARB_W_SHIFT                             0
#define TPC5_RTR_LBW_WR_RS_E_ARB_W_MASK                              0x7
#define TPC5_RTR_LBW_WR_RS_E_ARB_S_SHIFT                             8
#define TPC5_RTR_LBW_WR_RS_E_ARB_S_MASK                              0x700
#define TPC5_RTR_LBW_WR_RS_E_ARB_N_SHIFT                             16
#define TPC5_RTR_LBW_WR_RS_E_ARB_N_MASK                              0x70000
#define TPC5_RTR_LBW_WR_RS_E_ARB_L_SHIFT                             24
#define TPC5_RTR_LBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_LBW_WR_RS_W_ARB                                   0xF40294
/* TPC5_RTR_LBW_WR_RS_W_ARB */
#define TPC5_RTR_LBW_WR_RS_W_ARB_E_SHIFT                             0
#define TPC5_RTR_LBW_WR_RS_W_ARB_E_MASK                              0x7
#define TPC5_RTR_LBW_WR_RS_W_ARB_S_SHIFT                             8
#define TPC5_RTR_LBW_WR_RS_W_ARB_S_MASK                              0x700
#define TPC5_RTR_LBW_WR_RS_W_ARB_N_SHIFT                             16
#define TPC5_RTR_LBW_WR_RS_W_ARB_N_MASK                              0x70000
#define TPC5_RTR_LBW_WR_RS_W_ARB_L_SHIFT                             24
#define TPC5_RTR_LBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_LBW_WR_RS_N_ARB                                   0xF40298
/* TPC5_RTR_LBW_WR_RS_N_ARB */
#define TPC5_RTR_LBW_WR_RS_N_ARB_W_SHIFT                             0
#define TPC5_RTR_LBW_WR_RS_N_ARB_W_MASK                              0x7
#define TPC5_RTR_LBW_WR_RS_N_ARB_E_SHIFT                             8
#define TPC5_RTR_LBW_WR_RS_N_ARB_E_MASK                              0x700
#define TPC5_RTR_LBW_WR_RS_N_ARB_S_SHIFT                             16
#define TPC5_RTR_LBW_WR_RS_N_ARB_S_MASK                              0x70000
#define TPC5_RTR_LBW_WR_RS_N_ARB_L_SHIFT                             24
#define TPC5_RTR_LBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_LBW_WR_RS_S_ARB                                   0xF4029C
/* TPC5_RTR_LBW_WR_RS_S_ARB */
#define TPC5_RTR_LBW_WR_RS_S_ARB_W_SHIFT                             0
#define TPC5_RTR_LBW_WR_RS_S_ARB_W_MASK                              0x7
#define TPC5_RTR_LBW_WR_RS_S_ARB_E_SHIFT                             8
#define TPC5_RTR_LBW_WR_RS_S_ARB_E_MASK                              0x700
#define TPC5_RTR_LBW_WR_RS_S_ARB_N_SHIFT                             16
#define TPC5_RTR_LBW_WR_RS_S_ARB_N_MASK                              0x70000
#define TPC5_RTR_LBW_WR_RS_S_ARB_L_SHIFT                             24
#define TPC5_RTR_LBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC5_RTR_LBW_WR_RS_L_ARB                                   0xF402A0
/* TPC5_RTR_LBW_WR_RS_L_ARB */
#define TPC5_RTR_LBW_WR_RS_L_ARB_W_SHIFT                             0
#define TPC5_RTR_LBW_WR_RS_L_ARB_W_MASK                              0x7
#define TPC5_RTR_LBW_WR_RS_L_ARB_E_SHIFT                             8
#define TPC5_RTR_LBW_WR_RS_L_ARB_E_MASK                              0x700
#define TPC5_RTR_LBW_WR_RS_L_ARB_S_SHIFT                             16
#define TPC5_RTR_LBW_WR_RS_L_ARB_S_MASK                              0x70000
#define TPC5_RTR_LBW_WR_RS_L_ARB_N_SHIFT                             24
#define TPC5_RTR_LBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC5_RTR_DBG_E_ARB                                         0xF40300
/* TPC5_RTR_DBG_E_ARB */
#define TPC5_RTR_DBG_E_ARB_W_SHIFT                                   0
#define TPC5_RTR_DBG_E_ARB_W_MASK                                    0x7
#define TPC5_RTR_DBG_E_ARB_S_SHIFT                                   8
#define TPC5_RTR_DBG_E_ARB_S_MASK                                    0x700
#define TPC5_RTR_DBG_E_ARB_N_SHIFT                                   16
#define TPC5_RTR_DBG_E_ARB_N_MASK                                    0x70000
#define TPC5_RTR_DBG_E_ARB_L_SHIFT                                   24
#define TPC5_RTR_DBG_E_ARB_L_MASK                                    0x7000000

#define mmTPC5_RTR_DBG_W_ARB                                         0xF40304
/* TPC5_RTR_DBG_W_ARB */
#define TPC5_RTR_DBG_W_ARB_E_SHIFT                                   0
#define TPC5_RTR_DBG_W_ARB_E_MASK                                    0x7
#define TPC5_RTR_DBG_W_ARB_S_SHIFT                                   8
#define TPC5_RTR_DBG_W_ARB_S_MASK                                    0x700
#define TPC5_RTR_DBG_W_ARB_N_SHIFT                                   16
#define TPC5_RTR_DBG_W_ARB_N_MASK                                    0x70000
#define TPC5_RTR_DBG_W_ARB_L_SHIFT                                   24
#define TPC5_RTR_DBG_W_ARB_L_MASK                                    0x7000000

#define mmTPC5_RTR_DBG_N_ARB                                         0xF40308
/* TPC5_RTR_DBG_N_ARB */
#define TPC5_RTR_DBG_N_ARB_W_SHIFT                                   0
#define TPC5_RTR_DBG_N_ARB_W_MASK                                    0x7
#define TPC5_RTR_DBG_N_ARB_E_SHIFT                                   8
#define TPC5_RTR_DBG_N_ARB_E_MASK                                    0x700
#define TPC5_RTR_DBG_N_ARB_S_SHIFT                                   16
#define TPC5_RTR_DBG_N_ARB_S_MASK                                    0x70000
#define TPC5_RTR_DBG_N_ARB_L_SHIFT                                   24
#define TPC5_RTR_DBG_N_ARB_L_MASK                                    0x7000000

#define mmTPC5_RTR_DBG_S_ARB                                         0xF4030C
/* TPC5_RTR_DBG_S_ARB */
#define TPC5_RTR_DBG_S_ARB_W_SHIFT                                   0
#define TPC5_RTR_DBG_S_ARB_W_MASK                                    0x7
#define TPC5_RTR_DBG_S_ARB_E_SHIFT                                   8
#define TPC5_RTR_DBG_S_ARB_E_MASK                                    0x700
#define TPC5_RTR_DBG_S_ARB_N_SHIFT                                   16
#define TPC5_RTR_DBG_S_ARB_N_MASK                                    0x70000
#define TPC5_RTR_DBG_S_ARB_L_SHIFT                                   24
#define TPC5_RTR_DBG_S_ARB_L_MASK                                    0x7000000

#define mmTPC5_RTR_DBG_L_ARB                                         0xF40310
/* TPC5_RTR_DBG_L_ARB */
#define TPC5_RTR_DBG_L_ARB_W_SHIFT                                   0
#define TPC5_RTR_DBG_L_ARB_W_MASK                                    0x7
#define TPC5_RTR_DBG_L_ARB_E_SHIFT                                   8
#define TPC5_RTR_DBG_L_ARB_E_MASK                                    0x700
#define TPC5_RTR_DBG_L_ARB_S_SHIFT                                   16
#define TPC5_RTR_DBG_L_ARB_S_MASK                                    0x70000
#define TPC5_RTR_DBG_L_ARB_N_SHIFT                                   24
#define TPC5_RTR_DBG_L_ARB_N_MASK                                    0x7000000

#define mmTPC5_RTR_DBG_E_ARB_MAX                                     0xF40320
/* TPC5_RTR_DBG_E_ARB_MAX */
#define TPC5_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC5_RTR_DBG_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC5_RTR_DBG_W_ARB_MAX                                     0xF40324
/* TPC5_RTR_DBG_W_ARB_MAX */
#define TPC5_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC5_RTR_DBG_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC5_RTR_DBG_N_ARB_MAX                                     0xF40328
/* TPC5_RTR_DBG_N_ARB_MAX */
#define TPC5_RTR_DBG_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC5_RTR_DBG_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC5_RTR_DBG_S_ARB_MAX                                     0xF4032C
/* TPC5_RTR_DBG_S_ARB_MAX */
#define TPC5_RTR_DBG_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC5_RTR_DBG_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC5_RTR_DBG_L_ARB_MAX                                     0xF40330
/* TPC5_RTR_DBG_L_ARB_MAX */
#define TPC5_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC5_RTR_DBG_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC5_RTR_SPLIT_COEF_0                                      0xF40400

#define mmTPC5_RTR_SPLIT_COEF_1                                      0xF40404

#define mmTPC5_RTR_SPLIT_COEF_2                                      0xF40408

#define mmTPC5_RTR_SPLIT_COEF_3                                      0xF4040C

#define mmTPC5_RTR_SPLIT_COEF_4                                      0xF40410

#define mmTPC5_RTR_SPLIT_COEF_5                                      0xF40414

#define mmTPC5_RTR_SPLIT_COEF_6                                      0xF40418

#define mmTPC5_RTR_SPLIT_COEF_7                                      0xF4041C

#define mmTPC5_RTR_SPLIT_COEF_8                                      0xF40420

#define mmTPC5_RTR_SPLIT_COEF_9                                      0xF40424
/* TPC5_RTR_SPLIT_COEF */
#define TPC5_RTR_SPLIT_COEF_VAL_SHIFT                                0
#define TPC5_RTR_SPLIT_COEF_VAL_MASK                                 0xFFFF

#define mmTPC5_RTR_SPLIT_CFG                                         0xF40440
/* TPC5_RTR_SPLIT_CFG */
#define TPC5_RTR_SPLIT_CFG_FORCE_WAK_ORDER_SHIFT                     0
#define TPC5_RTR_SPLIT_CFG_FORCE_WAK_ORDER_MASK                      0x1
#define TPC5_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_SHIFT                  1
#define TPC5_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_MASK                   0x2
#define TPC5_RTR_SPLIT_CFG_DEFAULT_MESH_SHIFT                        2
#define TPC5_RTR_SPLIT_CFG_DEFAULT_MESH_MASK                         0xC
#define TPC5_RTR_SPLIT_CFG_WR_RATE_LIM_EN_SHIFT                      4
#define TPC5_RTR_SPLIT_CFG_WR_RATE_LIM_EN_MASK                       0x10
#define TPC5_RTR_SPLIT_CFG_RD_RATE_LIM_EN_SHIFT                      5
#define TPC5_RTR_SPLIT_CFG_RD_RATE_LIM_EN_MASK                       0x20
#define TPC5_RTR_SPLIT_CFG_B2B_OPT_SHIFT                             6
#define TPC5_RTR_SPLIT_CFG_B2B_OPT_MASK                              0x1C0

#define mmTPC5_RTR_SPLIT_RD_SAT                                      0xF40444
/* TPC5_RTR_SPLIT_RD_SAT */
#define TPC5_RTR_SPLIT_RD_SAT_VAL_SHIFT                              0
#define TPC5_RTR_SPLIT_RD_SAT_VAL_MASK                               0xFFFF

#define mmTPC5_RTR_SPLIT_RD_RST_TOKEN                                0xF40448
/* TPC5_RTR_SPLIT_RD_RST_TOKEN */
#define TPC5_RTR_SPLIT_RD_RST_TOKEN_VAL_SHIFT                        0
#define TPC5_RTR_SPLIT_RD_RST_TOKEN_VAL_MASK                         0xFFFF

#define mmTPC5_RTR_SPLIT_RD_TIMEOUT_0                                0xF4044C

#define mmTPC5_RTR_SPLIT_RD_TIMEOUT_1                                0xF40450
/* TPC5_RTR_SPLIT_RD_TIMEOUT */
#define TPC5_RTR_SPLIT_RD_TIMEOUT_VAL_SHIFT                          0
#define TPC5_RTR_SPLIT_RD_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmTPC5_RTR_SPLIT_WR_SAT                                      0xF40454
/* TPC5_RTR_SPLIT_WR_SAT */
#define TPC5_RTR_SPLIT_WR_SAT_VAL_SHIFT                              0
#define TPC5_RTR_SPLIT_WR_SAT_VAL_MASK                               0xFFFF

#define mmTPC5_RTR_WPLIT_WR_TST_TOLEN                                0xF40458
/* TPC5_RTR_WPLIT_WR_TST_TOLEN */
#define TPC5_RTR_WPLIT_WR_TST_TOLEN_VAL_SHIFT                        0
#define TPC5_RTR_WPLIT_WR_TST_TOLEN_VAL_MASK                         0xFFFF

#define mmTPC5_RTR_SPLIT_WR_TIMEOUT_0                                0xF4045C

#define mmTPC5_RTR_SPLIT_WR_TIMEOUT_1                                0xF40460
/* TPC5_RTR_SPLIT_WR_TIMEOUT */
#define TPC5_RTR_SPLIT_WR_TIMEOUT_VAL_SHIFT                          0
#define TPC5_RTR_SPLIT_WR_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmTPC5_RTR_HBW_RANGE_HIT                                     0xF40470
/* TPC5_RTR_HBW_RANGE_HIT */
#define TPC5_RTR_HBW_RANGE_HIT_IND_SHIFT                             0
#define TPC5_RTR_HBW_RANGE_HIT_IND_MASK                              0xFF

#define mmTPC5_RTR_HBW_RANGE_MASK_L_0                                0xF40480

#define mmTPC5_RTR_HBW_RANGE_MASK_L_1                                0xF40484

#define mmTPC5_RTR_HBW_RANGE_MASK_L_2                                0xF40488

#define mmTPC5_RTR_HBW_RANGE_MASK_L_3                                0xF4048C

#define mmTPC5_RTR_HBW_RANGE_MASK_L_4                                0xF40490

#define mmTPC5_RTR_HBW_RANGE_MASK_L_5                                0xF40494

#define mmTPC5_RTR_HBW_RANGE_MASK_L_6                                0xF40498

#define mmTPC5_RTR_HBW_RANGE_MASK_L_7                                0xF4049C
/* TPC5_RTR_HBW_RANGE_MASK_L */
#define TPC5_RTR_HBW_RANGE_MASK_L_VAL_SHIFT                          0
#define TPC5_RTR_HBW_RANGE_MASK_L_VAL_MASK                           0xFFFFFFFF

#define mmTPC5_RTR_HBW_RANGE_MASK_H_0                                0xF404A0

#define mmTPC5_RTR_HBW_RANGE_MASK_H_1                                0xF404A4

#define mmTPC5_RTR_HBW_RANGE_MASK_H_2                                0xF404A8

#define mmTPC5_RTR_HBW_RANGE_MASK_H_3                                0xF404AC

#define mmTPC5_RTR_HBW_RANGE_MASK_H_4                                0xF404B0

#define mmTPC5_RTR_HBW_RANGE_MASK_H_5                                0xF404B4

#define mmTPC5_RTR_HBW_RANGE_MASK_H_6                                0xF404B8

#define mmTPC5_RTR_HBW_RANGE_MASK_H_7                                0xF404BC
/* TPC5_RTR_HBW_RANGE_MASK_H */
#define TPC5_RTR_HBW_RANGE_MASK_H_VAL_SHIFT                          0
#define TPC5_RTR_HBW_RANGE_MASK_H_VAL_MASK                           0x3FFFF

#define mmTPC5_RTR_HBW_RANGE_BASE_L_0                                0xF404C0

#define mmTPC5_RTR_HBW_RANGE_BASE_L_1                                0xF404C4

#define mmTPC5_RTR_HBW_RANGE_BASE_L_2                                0xF404C8

#define mmTPC5_RTR_HBW_RANGE_BASE_L_3                                0xF404CC

#define mmTPC5_RTR_HBW_RANGE_BASE_L_4                                0xF404D0

#define mmTPC5_RTR_HBW_RANGE_BASE_L_5                                0xF404D4

#define mmTPC5_RTR_HBW_RANGE_BASE_L_6                                0xF404D8

#define mmTPC5_RTR_HBW_RANGE_BASE_L_7                                0xF404DC
/* TPC5_RTR_HBW_RANGE_BASE_L */
#define TPC5_RTR_HBW_RANGE_BASE_L_VAL_SHIFT                          0
#define TPC5_RTR_HBW_RANGE_BASE_L_VAL_MASK                           0xFFFFFFFF

#define mmTPC5_RTR_HBW_RANGE_BASE_H_0                                0xF404E0

#define mmTPC5_RTR_HBW_RANGE_BASE_H_1                                0xF404E4

#define mmTPC5_RTR_HBW_RANGE_BASE_H_2                                0xF404E8

#define mmTPC5_RTR_HBW_RANGE_BASE_H_3                                0xF404EC

#define mmTPC5_RTR_HBW_RANGE_BASE_H_4                                0xF404F0

#define mmTPC5_RTR_HBW_RANGE_BASE_H_5                                0xF404F4

#define mmTPC5_RTR_HBW_RANGE_BASE_H_6                                0xF404F8

#define mmTPC5_RTR_HBW_RANGE_BASE_H_7                                0xF404FC
/* TPC5_RTR_HBW_RANGE_BASE_H */
#define TPC5_RTR_HBW_RANGE_BASE_H_VAL_SHIFT                          0
#define TPC5_RTR_HBW_RANGE_BASE_H_VAL_MASK                           0x3FFFF

#define mmTPC5_RTR_LBW_RANGE_HIT                                     0xF40500
/* TPC5_RTR_LBW_RANGE_HIT */
#define TPC5_RTR_LBW_RANGE_HIT_IND_SHIFT                             0
#define TPC5_RTR_LBW_RANGE_HIT_IND_MASK                              0xFFFF

#define mmTPC5_RTR_LBW_RANGE_MASK_0                                  0xF40510

#define mmTPC5_RTR_LBW_RANGE_MASK_1                                  0xF40514

#define mmTPC5_RTR_LBW_RANGE_MASK_2                                  0xF40518

#define mmTPC5_RTR_LBW_RANGE_MASK_3                                  0xF4051C

#define mmTPC5_RTR_LBW_RANGE_MASK_4                                  0xF40520

#define mmTPC5_RTR_LBW_RANGE_MASK_5                                  0xF40524

#define mmTPC5_RTR_LBW_RANGE_MASK_6                                  0xF40528

#define mmTPC5_RTR_LBW_RANGE_MASK_7                                  0xF4052C

#define mmTPC5_RTR_LBW_RANGE_MASK_8                                  0xF40530

#define mmTPC5_RTR_LBW_RANGE_MASK_9                                  0xF40534

#define mmTPC5_RTR_LBW_RANGE_MASK_10                                 0xF40538

#define mmTPC5_RTR_LBW_RANGE_MASK_11                                 0xF4053C

#define mmTPC5_RTR_LBW_RANGE_MASK_12                                 0xF40540

#define mmTPC5_RTR_LBW_RANGE_MASK_13                                 0xF40544

#define mmTPC5_RTR_LBW_RANGE_MASK_14                                 0xF40548

#define mmTPC5_RTR_LBW_RANGE_MASK_15                                 0xF4054C
/* TPC5_RTR_LBW_RANGE_MASK */
#define TPC5_RTR_LBW_RANGE_MASK_VAL_SHIFT                            0
#define TPC5_RTR_LBW_RANGE_MASK_VAL_MASK                             0x3FFFFFF

#define mmTPC5_RTR_LBW_RANGE_BASE_0                                  0xF40550

#define mmTPC5_RTR_LBW_RANGE_BASE_1                                  0xF40554

#define mmTPC5_RTR_LBW_RANGE_BASE_2                                  0xF40558

#define mmTPC5_RTR_LBW_RANGE_BASE_3                                  0xF4055C

#define mmTPC5_RTR_LBW_RANGE_BASE_4                                  0xF40560

#define mmTPC5_RTR_LBW_RANGE_BASE_5                                  0xF40564

#define mmTPC5_RTR_LBW_RANGE_BASE_6                                  0xF40568

#define mmTPC5_RTR_LBW_RANGE_BASE_7                                  0xF4056C

#define mmTPC5_RTR_LBW_RANGE_BASE_8                                  0xF40570

#define mmTPC5_RTR_LBW_RANGE_BASE_9                                  0xF40574

#define mmTPC5_RTR_LBW_RANGE_BASE_10                                 0xF40578

#define mmTPC5_RTR_LBW_RANGE_BASE_11                                 0xF4057C

#define mmTPC5_RTR_LBW_RANGE_BASE_12                                 0xF40580

#define mmTPC5_RTR_LBW_RANGE_BASE_13                                 0xF40584

#define mmTPC5_RTR_LBW_RANGE_BASE_14                                 0xF40588

#define mmTPC5_RTR_LBW_RANGE_BASE_15                                 0xF4058C
/* TPC5_RTR_LBW_RANGE_BASE */
#define TPC5_RTR_LBW_RANGE_BASE_VAL_SHIFT                            0
#define TPC5_RTR_LBW_RANGE_BASE_VAL_MASK                             0x3FFFFFF

#define mmTPC5_RTR_RGLTR                                             0xF40590
/* TPC5_RTR_RGLTR */
#define TPC5_RTR_RGLTR_WR_EN_SHIFT                                   0
#define TPC5_RTR_RGLTR_WR_EN_MASK                                    0x1
#define TPC5_RTR_RGLTR_RD_EN_SHIFT                                   4
#define TPC5_RTR_RGLTR_RD_EN_MASK                                    0x10

#define mmTPC5_RTR_RGLTR_WR_RESULT                                   0xF40594
/* TPC5_RTR_RGLTR_WR_RESULT */
#define TPC5_RTR_RGLTR_WR_RESULT_VAL_SHIFT                           0
#define TPC5_RTR_RGLTR_WR_RESULT_VAL_MASK                            0xFF

#define mmTPC5_RTR_RGLTR_RD_RESULT                                   0xF40598
/* TPC5_RTR_RGLTR_RD_RESULT */
#define TPC5_RTR_RGLTR_RD_RESULT_VAL_SHIFT                           0
#define TPC5_RTR_RGLTR_RD_RESULT_VAL_MASK                            0xFF

#define mmTPC5_RTR_SCRAMB_EN                                         0xF40600
/* TPC5_RTR_SCRAMB_EN */
#define TPC5_RTR_SCRAMB_EN_VAL_SHIFT                                 0
#define TPC5_RTR_SCRAMB_EN_VAL_MASK                                  0x1

#define mmTPC5_RTR_NON_LIN_SCRAMB                                    0xF40604
/* TPC5_RTR_NON_LIN_SCRAMB */
#define TPC5_RTR_NON_LIN_SCRAMB_EN_SHIFT                             0
#define TPC5_RTR_NON_LIN_SCRAMB_EN_MASK                              0x1

#endif /* ASIC_REG_TPC5_RTR_H_ */

