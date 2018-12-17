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

#ifndef ASIC_REG_TPC4_RTR_H_
#define ASIC_REG_TPC4_RTR_H_

/*
 *****************************************
 *   TPC4_RTR (Prototype: TPC_RTR)
 *****************************************
 */

#define mmTPC4_RTR_HBW_RD_RQ_E_ARB                                   0xF00100
/* TPC4_RTR_HBW_RD_RQ_E_ARB */
#define TPC4_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                             0
#define TPC4_RTR_HBW_RD_RQ_E_ARB_W_MASK                              0x7
#define TPC4_RTR_HBW_RD_RQ_E_ARB_S_SHIFT                             8
#define TPC4_RTR_HBW_RD_RQ_E_ARB_S_MASK                              0x700
#define TPC4_RTR_HBW_RD_RQ_E_ARB_N_SHIFT                             16
#define TPC4_RTR_HBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define TPC4_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                             24
#define TPC4_RTR_HBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_HBW_RD_RQ_W_ARB                                   0xF00104
/* TPC4_RTR_HBW_RD_RQ_W_ARB */
#define TPC4_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                             0
#define TPC4_RTR_HBW_RD_RQ_W_ARB_E_MASK                              0x7
#define TPC4_RTR_HBW_RD_RQ_W_ARB_S_SHIFT                             8
#define TPC4_RTR_HBW_RD_RQ_W_ARB_S_MASK                              0x700
#define TPC4_RTR_HBW_RD_RQ_W_ARB_N_SHIFT                             16
#define TPC4_RTR_HBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define TPC4_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                             24
#define TPC4_RTR_HBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_HBW_RD_RQ_N_ARB                                   0xF00108
/* TPC4_RTR_HBW_RD_RQ_N_ARB */
#define TPC4_RTR_HBW_RD_RQ_N_ARB_W_SHIFT                             0
#define TPC4_RTR_HBW_RD_RQ_N_ARB_W_MASK                              0x7
#define TPC4_RTR_HBW_RD_RQ_N_ARB_E_SHIFT                             8
#define TPC4_RTR_HBW_RD_RQ_N_ARB_E_MASK                              0x700
#define TPC4_RTR_HBW_RD_RQ_N_ARB_S_SHIFT                             16
#define TPC4_RTR_HBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define TPC4_RTR_HBW_RD_RQ_N_ARB_L_SHIFT                             24
#define TPC4_RTR_HBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_HBW_RD_RQ_S_ARB                                   0xF0010C
/* TPC4_RTR_HBW_RD_RQ_S_ARB */
#define TPC4_RTR_HBW_RD_RQ_S_ARB_W_SHIFT                             0
#define TPC4_RTR_HBW_RD_RQ_S_ARB_W_MASK                              0x7
#define TPC4_RTR_HBW_RD_RQ_S_ARB_E_SHIFT                             8
#define TPC4_RTR_HBW_RD_RQ_S_ARB_E_MASK                              0x700
#define TPC4_RTR_HBW_RD_RQ_S_ARB_N_SHIFT                             16
#define TPC4_RTR_HBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define TPC4_RTR_HBW_RD_RQ_S_ARB_L_SHIFT                             24
#define TPC4_RTR_HBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_HBW_RD_RQ_L_ARB                                   0xF00110
/* TPC4_RTR_HBW_RD_RQ_L_ARB */
#define TPC4_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                             0
#define TPC4_RTR_HBW_RD_RQ_L_ARB_W_MASK                              0x7
#define TPC4_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                             8
#define TPC4_RTR_HBW_RD_RQ_L_ARB_E_MASK                              0x700
#define TPC4_RTR_HBW_RD_RQ_L_ARB_S_SHIFT                             16
#define TPC4_RTR_HBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define TPC4_RTR_HBW_RD_RQ_L_ARB_N_SHIFT                             24
#define TPC4_RTR_HBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC4_RTR_HBW_E_ARB_MAX                                     0xF00120
/* TPC4_RTR_HBW_E_ARB_MAX */
#define TPC4_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC4_RTR_HBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC4_RTR_HBW_W_ARB_MAX                                     0xF00124
/* TPC4_RTR_HBW_W_ARB_MAX */
#define TPC4_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC4_RTR_HBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC4_RTR_HBW_N_ARB_MAX                                     0xF00128
/* TPC4_RTR_HBW_N_ARB_MAX */
#define TPC4_RTR_HBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC4_RTR_HBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC4_RTR_HBW_S_ARB_MAX                                     0xF0012C
/* TPC4_RTR_HBW_S_ARB_MAX */
#define TPC4_RTR_HBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC4_RTR_HBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC4_RTR_HBW_L_ARB_MAX                                     0xF00130
/* TPC4_RTR_HBW_L_ARB_MAX */
#define TPC4_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC4_RTR_HBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC4_RTR_HBW_RD_RS_E_ARB                                   0xF00140
/* TPC4_RTR_HBW_RD_RS_E_ARB */
#define TPC4_RTR_HBW_RD_RS_E_ARB_W_SHIFT                             0
#define TPC4_RTR_HBW_RD_RS_E_ARB_W_MASK                              0x7
#define TPC4_RTR_HBW_RD_RS_E_ARB_S_SHIFT                             8
#define TPC4_RTR_HBW_RD_RS_E_ARB_S_MASK                              0x700
#define TPC4_RTR_HBW_RD_RS_E_ARB_N_SHIFT                             16
#define TPC4_RTR_HBW_RD_RS_E_ARB_N_MASK                              0x70000
#define TPC4_RTR_HBW_RD_RS_E_ARB_L_SHIFT                             24
#define TPC4_RTR_HBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_HBW_RD_RS_W_ARB                                   0xF00144
/* TPC4_RTR_HBW_RD_RS_W_ARB */
#define TPC4_RTR_HBW_RD_RS_W_ARB_E_SHIFT                             0
#define TPC4_RTR_HBW_RD_RS_W_ARB_E_MASK                              0x7
#define TPC4_RTR_HBW_RD_RS_W_ARB_S_SHIFT                             8
#define TPC4_RTR_HBW_RD_RS_W_ARB_S_MASK                              0x700
#define TPC4_RTR_HBW_RD_RS_W_ARB_N_SHIFT                             16
#define TPC4_RTR_HBW_RD_RS_W_ARB_N_MASK                              0x70000
#define TPC4_RTR_HBW_RD_RS_W_ARB_L_SHIFT                             24
#define TPC4_RTR_HBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_HBW_RD_RS_N_ARB                                   0xF00148
/* TPC4_RTR_HBW_RD_RS_N_ARB */
#define TPC4_RTR_HBW_RD_RS_N_ARB_W_SHIFT                             0
#define TPC4_RTR_HBW_RD_RS_N_ARB_W_MASK                              0x7
#define TPC4_RTR_HBW_RD_RS_N_ARB_E_SHIFT                             8
#define TPC4_RTR_HBW_RD_RS_N_ARB_E_MASK                              0x700
#define TPC4_RTR_HBW_RD_RS_N_ARB_S_SHIFT                             16
#define TPC4_RTR_HBW_RD_RS_N_ARB_S_MASK                              0x70000
#define TPC4_RTR_HBW_RD_RS_N_ARB_L_SHIFT                             24
#define TPC4_RTR_HBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_HBW_RD_RS_S_ARB                                   0xF0014C
/* TPC4_RTR_HBW_RD_RS_S_ARB */
#define TPC4_RTR_HBW_RD_RS_S_ARB_W_SHIFT                             0
#define TPC4_RTR_HBW_RD_RS_S_ARB_W_MASK                              0x7
#define TPC4_RTR_HBW_RD_RS_S_ARB_E_SHIFT                             8
#define TPC4_RTR_HBW_RD_RS_S_ARB_E_MASK                              0x700
#define TPC4_RTR_HBW_RD_RS_S_ARB_N_SHIFT                             16
#define TPC4_RTR_HBW_RD_RS_S_ARB_N_MASK                              0x70000
#define TPC4_RTR_HBW_RD_RS_S_ARB_L_SHIFT                             24
#define TPC4_RTR_HBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_HBW_RD_RS_L_ARB                                   0xF00150
/* TPC4_RTR_HBW_RD_RS_L_ARB */
#define TPC4_RTR_HBW_RD_RS_L_ARB_W_SHIFT                             0
#define TPC4_RTR_HBW_RD_RS_L_ARB_W_MASK                              0x7
#define TPC4_RTR_HBW_RD_RS_L_ARB_E_SHIFT                             8
#define TPC4_RTR_HBW_RD_RS_L_ARB_E_MASK                              0x700
#define TPC4_RTR_HBW_RD_RS_L_ARB_S_SHIFT                             16
#define TPC4_RTR_HBW_RD_RS_L_ARB_S_MASK                              0x70000
#define TPC4_RTR_HBW_RD_RS_L_ARB_N_SHIFT                             24
#define TPC4_RTR_HBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC4_RTR_HBW_WR_RQ_E_ARB                                   0xF00170
/* TPC4_RTR_HBW_WR_RQ_E_ARB */
#define TPC4_RTR_HBW_WR_RQ_E_ARB_W_SHIFT                             0
#define TPC4_RTR_HBW_WR_RQ_E_ARB_W_MASK                              0x7
#define TPC4_RTR_HBW_WR_RQ_E_ARB_S_SHIFT                             8
#define TPC4_RTR_HBW_WR_RQ_E_ARB_S_MASK                              0x700
#define TPC4_RTR_HBW_WR_RQ_E_ARB_N_SHIFT                             16
#define TPC4_RTR_HBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define TPC4_RTR_HBW_WR_RQ_E_ARB_L_SHIFT                             24
#define TPC4_RTR_HBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_HBW_WR_RQ_W_ARB                                   0xF00174
/* TPC4_RTR_HBW_WR_RQ_W_ARB */
#define TPC4_RTR_HBW_WR_RQ_W_ARB_E_SHIFT                             0
#define TPC4_RTR_HBW_WR_RQ_W_ARB_E_MASK                              0x7
#define TPC4_RTR_HBW_WR_RQ_W_ARB_S_SHIFT                             8
#define TPC4_RTR_HBW_WR_RQ_W_ARB_S_MASK                              0x700
#define TPC4_RTR_HBW_WR_RQ_W_ARB_N_SHIFT                             16
#define TPC4_RTR_HBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define TPC4_RTR_HBW_WR_RQ_W_ARB_L_SHIFT                             24
#define TPC4_RTR_HBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_HBW_WR_RQ_N_ARB                                   0xF00178
/* TPC4_RTR_HBW_WR_RQ_N_ARB */
#define TPC4_RTR_HBW_WR_RQ_N_ARB_W_SHIFT                             0
#define TPC4_RTR_HBW_WR_RQ_N_ARB_W_MASK                              0x7
#define TPC4_RTR_HBW_WR_RQ_N_ARB_E_SHIFT                             8
#define TPC4_RTR_HBW_WR_RQ_N_ARB_E_MASK                              0x700
#define TPC4_RTR_HBW_WR_RQ_N_ARB_S_SHIFT                             16
#define TPC4_RTR_HBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define TPC4_RTR_HBW_WR_RQ_N_ARB_L_SHIFT                             24
#define TPC4_RTR_HBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_HBW_WR_RQ_S_ARB                                   0xF0017C
/* TPC4_RTR_HBW_WR_RQ_S_ARB */
#define TPC4_RTR_HBW_WR_RQ_S_ARB_W_SHIFT                             0
#define TPC4_RTR_HBW_WR_RQ_S_ARB_W_MASK                              0x7
#define TPC4_RTR_HBW_WR_RQ_S_ARB_E_SHIFT                             8
#define TPC4_RTR_HBW_WR_RQ_S_ARB_E_MASK                              0x700
#define TPC4_RTR_HBW_WR_RQ_S_ARB_N_SHIFT                             16
#define TPC4_RTR_HBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define TPC4_RTR_HBW_WR_RQ_S_ARB_L_SHIFT                             24
#define TPC4_RTR_HBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_HBW_WR_RQ_L_ARB                                   0xF00180
/* TPC4_RTR_HBW_WR_RQ_L_ARB */
#define TPC4_RTR_HBW_WR_RQ_L_ARB_W_SHIFT                             0
#define TPC4_RTR_HBW_WR_RQ_L_ARB_W_MASK                              0x7
#define TPC4_RTR_HBW_WR_RQ_L_ARB_E_SHIFT                             8
#define TPC4_RTR_HBW_WR_RQ_L_ARB_E_MASK                              0x700
#define TPC4_RTR_HBW_WR_RQ_L_ARB_S_SHIFT                             16
#define TPC4_RTR_HBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define TPC4_RTR_HBW_WR_RQ_L_ARB_N_SHIFT                             24
#define TPC4_RTR_HBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC4_RTR_HBW_WR_RS_E_ARB                                   0xF00190
/* TPC4_RTR_HBW_WR_RS_E_ARB */
#define TPC4_RTR_HBW_WR_RS_E_ARB_W_SHIFT                             0
#define TPC4_RTR_HBW_WR_RS_E_ARB_W_MASK                              0x7
#define TPC4_RTR_HBW_WR_RS_E_ARB_S_SHIFT                             8
#define TPC4_RTR_HBW_WR_RS_E_ARB_S_MASK                              0x700
#define TPC4_RTR_HBW_WR_RS_E_ARB_N_SHIFT                             16
#define TPC4_RTR_HBW_WR_RS_E_ARB_N_MASK                              0x70000
#define TPC4_RTR_HBW_WR_RS_E_ARB_L_SHIFT                             24
#define TPC4_RTR_HBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_HBW_WR_RS_W_ARB                                   0xF00194
/* TPC4_RTR_HBW_WR_RS_W_ARB */
#define TPC4_RTR_HBW_WR_RS_W_ARB_E_SHIFT                             0
#define TPC4_RTR_HBW_WR_RS_W_ARB_E_MASK                              0x7
#define TPC4_RTR_HBW_WR_RS_W_ARB_S_SHIFT                             8
#define TPC4_RTR_HBW_WR_RS_W_ARB_S_MASK                              0x700
#define TPC4_RTR_HBW_WR_RS_W_ARB_N_SHIFT                             16
#define TPC4_RTR_HBW_WR_RS_W_ARB_N_MASK                              0x70000
#define TPC4_RTR_HBW_WR_RS_W_ARB_L_SHIFT                             24
#define TPC4_RTR_HBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_HBW_WR_RS_N_ARB                                   0xF00198
/* TPC4_RTR_HBW_WR_RS_N_ARB */
#define TPC4_RTR_HBW_WR_RS_N_ARB_W_SHIFT                             0
#define TPC4_RTR_HBW_WR_RS_N_ARB_W_MASK                              0x7
#define TPC4_RTR_HBW_WR_RS_N_ARB_E_SHIFT                             8
#define TPC4_RTR_HBW_WR_RS_N_ARB_E_MASK                              0x700
#define TPC4_RTR_HBW_WR_RS_N_ARB_S_SHIFT                             16
#define TPC4_RTR_HBW_WR_RS_N_ARB_S_MASK                              0x70000
#define TPC4_RTR_HBW_WR_RS_N_ARB_L_SHIFT                             24
#define TPC4_RTR_HBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_HBW_WR_RS_S_ARB                                   0xF0019C
/* TPC4_RTR_HBW_WR_RS_S_ARB */
#define TPC4_RTR_HBW_WR_RS_S_ARB_W_SHIFT                             0
#define TPC4_RTR_HBW_WR_RS_S_ARB_W_MASK                              0x7
#define TPC4_RTR_HBW_WR_RS_S_ARB_E_SHIFT                             8
#define TPC4_RTR_HBW_WR_RS_S_ARB_E_MASK                              0x700
#define TPC4_RTR_HBW_WR_RS_S_ARB_N_SHIFT                             16
#define TPC4_RTR_HBW_WR_RS_S_ARB_N_MASK                              0x70000
#define TPC4_RTR_HBW_WR_RS_S_ARB_L_SHIFT                             24
#define TPC4_RTR_HBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_HBW_WR_RS_L_ARB                                   0xF001A0
/* TPC4_RTR_HBW_WR_RS_L_ARB */
#define TPC4_RTR_HBW_WR_RS_L_ARB_W_SHIFT                             0
#define TPC4_RTR_HBW_WR_RS_L_ARB_W_MASK                              0x7
#define TPC4_RTR_HBW_WR_RS_L_ARB_E_SHIFT                             8
#define TPC4_RTR_HBW_WR_RS_L_ARB_E_MASK                              0x700
#define TPC4_RTR_HBW_WR_RS_L_ARB_S_SHIFT                             16
#define TPC4_RTR_HBW_WR_RS_L_ARB_S_MASK                              0x70000
#define TPC4_RTR_HBW_WR_RS_L_ARB_N_SHIFT                             24
#define TPC4_RTR_HBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC4_RTR_LBW_RD_RQ_E_ARB                                   0xF00200
/* TPC4_RTR_LBW_RD_RQ_E_ARB */
#define TPC4_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                             0
#define TPC4_RTR_LBW_RD_RQ_E_ARB_W_MASK                              0x7
#define TPC4_RTR_LBW_RD_RQ_E_ARB_S_SHIFT                             8
#define TPC4_RTR_LBW_RD_RQ_E_ARB_S_MASK                              0x700
#define TPC4_RTR_LBW_RD_RQ_E_ARB_N_SHIFT                             16
#define TPC4_RTR_LBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define TPC4_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                             24
#define TPC4_RTR_LBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_LBW_RD_RQ_W_ARB                                   0xF00204
/* TPC4_RTR_LBW_RD_RQ_W_ARB */
#define TPC4_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                             0
#define TPC4_RTR_LBW_RD_RQ_W_ARB_E_MASK                              0x7
#define TPC4_RTR_LBW_RD_RQ_W_ARB_S_SHIFT                             8
#define TPC4_RTR_LBW_RD_RQ_W_ARB_S_MASK                              0x700
#define TPC4_RTR_LBW_RD_RQ_W_ARB_N_SHIFT                             16
#define TPC4_RTR_LBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define TPC4_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                             24
#define TPC4_RTR_LBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_LBW_RD_RQ_N_ARB                                   0xF00208
/* TPC4_RTR_LBW_RD_RQ_N_ARB */
#define TPC4_RTR_LBW_RD_RQ_N_ARB_W_SHIFT                             0
#define TPC4_RTR_LBW_RD_RQ_N_ARB_W_MASK                              0x7
#define TPC4_RTR_LBW_RD_RQ_N_ARB_E_SHIFT                             8
#define TPC4_RTR_LBW_RD_RQ_N_ARB_E_MASK                              0x700
#define TPC4_RTR_LBW_RD_RQ_N_ARB_S_SHIFT                             16
#define TPC4_RTR_LBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define TPC4_RTR_LBW_RD_RQ_N_ARB_L_SHIFT                             24
#define TPC4_RTR_LBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_LBW_RD_RQ_S_ARB                                   0xF0020C
/* TPC4_RTR_LBW_RD_RQ_S_ARB */
#define TPC4_RTR_LBW_RD_RQ_S_ARB_W_SHIFT                             0
#define TPC4_RTR_LBW_RD_RQ_S_ARB_W_MASK                              0x7
#define TPC4_RTR_LBW_RD_RQ_S_ARB_E_SHIFT                             8
#define TPC4_RTR_LBW_RD_RQ_S_ARB_E_MASK                              0x700
#define TPC4_RTR_LBW_RD_RQ_S_ARB_N_SHIFT                             16
#define TPC4_RTR_LBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define TPC4_RTR_LBW_RD_RQ_S_ARB_L_SHIFT                             24
#define TPC4_RTR_LBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_LBW_RD_RQ_L_ARB                                   0xF00210
/* TPC4_RTR_LBW_RD_RQ_L_ARB */
#define TPC4_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                             0
#define TPC4_RTR_LBW_RD_RQ_L_ARB_W_MASK                              0x7
#define TPC4_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                             8
#define TPC4_RTR_LBW_RD_RQ_L_ARB_E_MASK                              0x700
#define TPC4_RTR_LBW_RD_RQ_L_ARB_S_SHIFT                             16
#define TPC4_RTR_LBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define TPC4_RTR_LBW_RD_RQ_L_ARB_N_SHIFT                             24
#define TPC4_RTR_LBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC4_RTR_LBW_E_ARB_MAX                                     0xF00220
/* TPC4_RTR_LBW_E_ARB_MAX */
#define TPC4_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC4_RTR_LBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC4_RTR_LBW_W_ARB_MAX                                     0xF00224
/* TPC4_RTR_LBW_W_ARB_MAX */
#define TPC4_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC4_RTR_LBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC4_RTR_LBW_N_ARB_MAX                                     0xF00228
/* TPC4_RTR_LBW_N_ARB_MAX */
#define TPC4_RTR_LBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC4_RTR_LBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC4_RTR_LBW_S_ARB_MAX                                     0xF0022C
/* TPC4_RTR_LBW_S_ARB_MAX */
#define TPC4_RTR_LBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC4_RTR_LBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC4_RTR_LBW_L_ARB_MAX                                     0xF00230
/* TPC4_RTR_LBW_L_ARB_MAX */
#define TPC4_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC4_RTR_LBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC4_RTR_LBW_RD_RS_E_ARB                                   0xF00250
/* TPC4_RTR_LBW_RD_RS_E_ARB */
#define TPC4_RTR_LBW_RD_RS_E_ARB_W_SHIFT                             0
#define TPC4_RTR_LBW_RD_RS_E_ARB_W_MASK                              0x7
#define TPC4_RTR_LBW_RD_RS_E_ARB_S_SHIFT                             8
#define TPC4_RTR_LBW_RD_RS_E_ARB_S_MASK                              0x700
#define TPC4_RTR_LBW_RD_RS_E_ARB_N_SHIFT                             16
#define TPC4_RTR_LBW_RD_RS_E_ARB_N_MASK                              0x70000
#define TPC4_RTR_LBW_RD_RS_E_ARB_L_SHIFT                             24
#define TPC4_RTR_LBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_LBW_RD_RS_W_ARB                                   0xF00254
/* TPC4_RTR_LBW_RD_RS_W_ARB */
#define TPC4_RTR_LBW_RD_RS_W_ARB_E_SHIFT                             0
#define TPC4_RTR_LBW_RD_RS_W_ARB_E_MASK                              0x7
#define TPC4_RTR_LBW_RD_RS_W_ARB_S_SHIFT                             8
#define TPC4_RTR_LBW_RD_RS_W_ARB_S_MASK                              0x700
#define TPC4_RTR_LBW_RD_RS_W_ARB_N_SHIFT                             16
#define TPC4_RTR_LBW_RD_RS_W_ARB_N_MASK                              0x70000
#define TPC4_RTR_LBW_RD_RS_W_ARB_L_SHIFT                             24
#define TPC4_RTR_LBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_LBW_RD_RS_N_ARB                                   0xF00258
/* TPC4_RTR_LBW_RD_RS_N_ARB */
#define TPC4_RTR_LBW_RD_RS_N_ARB_W_SHIFT                             0
#define TPC4_RTR_LBW_RD_RS_N_ARB_W_MASK                              0x7
#define TPC4_RTR_LBW_RD_RS_N_ARB_E_SHIFT                             8
#define TPC4_RTR_LBW_RD_RS_N_ARB_E_MASK                              0x700
#define TPC4_RTR_LBW_RD_RS_N_ARB_S_SHIFT                             16
#define TPC4_RTR_LBW_RD_RS_N_ARB_S_MASK                              0x70000
#define TPC4_RTR_LBW_RD_RS_N_ARB_L_SHIFT                             24
#define TPC4_RTR_LBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_LBW_RD_RS_S_ARB                                   0xF0025C
/* TPC4_RTR_LBW_RD_RS_S_ARB */
#define TPC4_RTR_LBW_RD_RS_S_ARB_W_SHIFT                             0
#define TPC4_RTR_LBW_RD_RS_S_ARB_W_MASK                              0x7
#define TPC4_RTR_LBW_RD_RS_S_ARB_E_SHIFT                             8
#define TPC4_RTR_LBW_RD_RS_S_ARB_E_MASK                              0x700
#define TPC4_RTR_LBW_RD_RS_S_ARB_N_SHIFT                             16
#define TPC4_RTR_LBW_RD_RS_S_ARB_N_MASK                              0x70000
#define TPC4_RTR_LBW_RD_RS_S_ARB_L_SHIFT                             24
#define TPC4_RTR_LBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_LBW_RD_RS_L_ARB                                   0xF00260
/* TPC4_RTR_LBW_RD_RS_L_ARB */
#define TPC4_RTR_LBW_RD_RS_L_ARB_W_SHIFT                             0
#define TPC4_RTR_LBW_RD_RS_L_ARB_W_MASK                              0x7
#define TPC4_RTR_LBW_RD_RS_L_ARB_E_SHIFT                             8
#define TPC4_RTR_LBW_RD_RS_L_ARB_E_MASK                              0x700
#define TPC4_RTR_LBW_RD_RS_L_ARB_S_SHIFT                             16
#define TPC4_RTR_LBW_RD_RS_L_ARB_S_MASK                              0x70000
#define TPC4_RTR_LBW_RD_RS_L_ARB_N_SHIFT                             24
#define TPC4_RTR_LBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC4_RTR_LBW_WR_RQ_E_ARB                                   0xF00270
/* TPC4_RTR_LBW_WR_RQ_E_ARB */
#define TPC4_RTR_LBW_WR_RQ_E_ARB_W_SHIFT                             0
#define TPC4_RTR_LBW_WR_RQ_E_ARB_W_MASK                              0x7
#define TPC4_RTR_LBW_WR_RQ_E_ARB_S_SHIFT                             8
#define TPC4_RTR_LBW_WR_RQ_E_ARB_S_MASK                              0x700
#define TPC4_RTR_LBW_WR_RQ_E_ARB_N_SHIFT                             16
#define TPC4_RTR_LBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define TPC4_RTR_LBW_WR_RQ_E_ARB_L_SHIFT                             24
#define TPC4_RTR_LBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_LBW_WR_RQ_W_ARB                                   0xF00274
/* TPC4_RTR_LBW_WR_RQ_W_ARB */
#define TPC4_RTR_LBW_WR_RQ_W_ARB_E_SHIFT                             0
#define TPC4_RTR_LBW_WR_RQ_W_ARB_E_MASK                              0x7
#define TPC4_RTR_LBW_WR_RQ_W_ARB_S_SHIFT                             8
#define TPC4_RTR_LBW_WR_RQ_W_ARB_S_MASK                              0x700
#define TPC4_RTR_LBW_WR_RQ_W_ARB_N_SHIFT                             16
#define TPC4_RTR_LBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define TPC4_RTR_LBW_WR_RQ_W_ARB_L_SHIFT                             24
#define TPC4_RTR_LBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_LBW_WR_RQ_N_ARB                                   0xF00278
/* TPC4_RTR_LBW_WR_RQ_N_ARB */
#define TPC4_RTR_LBW_WR_RQ_N_ARB_W_SHIFT                             0
#define TPC4_RTR_LBW_WR_RQ_N_ARB_W_MASK                              0x7
#define TPC4_RTR_LBW_WR_RQ_N_ARB_E_SHIFT                             8
#define TPC4_RTR_LBW_WR_RQ_N_ARB_E_MASK                              0x700
#define TPC4_RTR_LBW_WR_RQ_N_ARB_S_SHIFT                             16
#define TPC4_RTR_LBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define TPC4_RTR_LBW_WR_RQ_N_ARB_L_SHIFT                             24
#define TPC4_RTR_LBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_LBW_WR_RQ_S_ARB                                   0xF0027C
/* TPC4_RTR_LBW_WR_RQ_S_ARB */
#define TPC4_RTR_LBW_WR_RQ_S_ARB_W_SHIFT                             0
#define TPC4_RTR_LBW_WR_RQ_S_ARB_W_MASK                              0x7
#define TPC4_RTR_LBW_WR_RQ_S_ARB_E_SHIFT                             8
#define TPC4_RTR_LBW_WR_RQ_S_ARB_E_MASK                              0x700
#define TPC4_RTR_LBW_WR_RQ_S_ARB_N_SHIFT                             16
#define TPC4_RTR_LBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define TPC4_RTR_LBW_WR_RQ_S_ARB_L_SHIFT                             24
#define TPC4_RTR_LBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_LBW_WR_RQ_L_ARB                                   0xF00280
/* TPC4_RTR_LBW_WR_RQ_L_ARB */
#define TPC4_RTR_LBW_WR_RQ_L_ARB_W_SHIFT                             0
#define TPC4_RTR_LBW_WR_RQ_L_ARB_W_MASK                              0x7
#define TPC4_RTR_LBW_WR_RQ_L_ARB_E_SHIFT                             8
#define TPC4_RTR_LBW_WR_RQ_L_ARB_E_MASK                              0x700
#define TPC4_RTR_LBW_WR_RQ_L_ARB_S_SHIFT                             16
#define TPC4_RTR_LBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define TPC4_RTR_LBW_WR_RQ_L_ARB_N_SHIFT                             24
#define TPC4_RTR_LBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC4_RTR_LBW_WR_RS_E_ARB                                   0xF00290
/* TPC4_RTR_LBW_WR_RS_E_ARB */
#define TPC4_RTR_LBW_WR_RS_E_ARB_W_SHIFT                             0
#define TPC4_RTR_LBW_WR_RS_E_ARB_W_MASK                              0x7
#define TPC4_RTR_LBW_WR_RS_E_ARB_S_SHIFT                             8
#define TPC4_RTR_LBW_WR_RS_E_ARB_S_MASK                              0x700
#define TPC4_RTR_LBW_WR_RS_E_ARB_N_SHIFT                             16
#define TPC4_RTR_LBW_WR_RS_E_ARB_N_MASK                              0x70000
#define TPC4_RTR_LBW_WR_RS_E_ARB_L_SHIFT                             24
#define TPC4_RTR_LBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_LBW_WR_RS_W_ARB                                   0xF00294
/* TPC4_RTR_LBW_WR_RS_W_ARB */
#define TPC4_RTR_LBW_WR_RS_W_ARB_E_SHIFT                             0
#define TPC4_RTR_LBW_WR_RS_W_ARB_E_MASK                              0x7
#define TPC4_RTR_LBW_WR_RS_W_ARB_S_SHIFT                             8
#define TPC4_RTR_LBW_WR_RS_W_ARB_S_MASK                              0x700
#define TPC4_RTR_LBW_WR_RS_W_ARB_N_SHIFT                             16
#define TPC4_RTR_LBW_WR_RS_W_ARB_N_MASK                              0x70000
#define TPC4_RTR_LBW_WR_RS_W_ARB_L_SHIFT                             24
#define TPC4_RTR_LBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_LBW_WR_RS_N_ARB                                   0xF00298
/* TPC4_RTR_LBW_WR_RS_N_ARB */
#define TPC4_RTR_LBW_WR_RS_N_ARB_W_SHIFT                             0
#define TPC4_RTR_LBW_WR_RS_N_ARB_W_MASK                              0x7
#define TPC4_RTR_LBW_WR_RS_N_ARB_E_SHIFT                             8
#define TPC4_RTR_LBW_WR_RS_N_ARB_E_MASK                              0x700
#define TPC4_RTR_LBW_WR_RS_N_ARB_S_SHIFT                             16
#define TPC4_RTR_LBW_WR_RS_N_ARB_S_MASK                              0x70000
#define TPC4_RTR_LBW_WR_RS_N_ARB_L_SHIFT                             24
#define TPC4_RTR_LBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_LBW_WR_RS_S_ARB                                   0xF0029C
/* TPC4_RTR_LBW_WR_RS_S_ARB */
#define TPC4_RTR_LBW_WR_RS_S_ARB_W_SHIFT                             0
#define TPC4_RTR_LBW_WR_RS_S_ARB_W_MASK                              0x7
#define TPC4_RTR_LBW_WR_RS_S_ARB_E_SHIFT                             8
#define TPC4_RTR_LBW_WR_RS_S_ARB_E_MASK                              0x700
#define TPC4_RTR_LBW_WR_RS_S_ARB_N_SHIFT                             16
#define TPC4_RTR_LBW_WR_RS_S_ARB_N_MASK                              0x70000
#define TPC4_RTR_LBW_WR_RS_S_ARB_L_SHIFT                             24
#define TPC4_RTR_LBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC4_RTR_LBW_WR_RS_L_ARB                                   0xF002A0
/* TPC4_RTR_LBW_WR_RS_L_ARB */
#define TPC4_RTR_LBW_WR_RS_L_ARB_W_SHIFT                             0
#define TPC4_RTR_LBW_WR_RS_L_ARB_W_MASK                              0x7
#define TPC4_RTR_LBW_WR_RS_L_ARB_E_SHIFT                             8
#define TPC4_RTR_LBW_WR_RS_L_ARB_E_MASK                              0x700
#define TPC4_RTR_LBW_WR_RS_L_ARB_S_SHIFT                             16
#define TPC4_RTR_LBW_WR_RS_L_ARB_S_MASK                              0x70000
#define TPC4_RTR_LBW_WR_RS_L_ARB_N_SHIFT                             24
#define TPC4_RTR_LBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC4_RTR_DBG_E_ARB                                         0xF00300
/* TPC4_RTR_DBG_E_ARB */
#define TPC4_RTR_DBG_E_ARB_W_SHIFT                                   0
#define TPC4_RTR_DBG_E_ARB_W_MASK                                    0x7
#define TPC4_RTR_DBG_E_ARB_S_SHIFT                                   8
#define TPC4_RTR_DBG_E_ARB_S_MASK                                    0x700
#define TPC4_RTR_DBG_E_ARB_N_SHIFT                                   16
#define TPC4_RTR_DBG_E_ARB_N_MASK                                    0x70000
#define TPC4_RTR_DBG_E_ARB_L_SHIFT                                   24
#define TPC4_RTR_DBG_E_ARB_L_MASK                                    0x7000000

#define mmTPC4_RTR_DBG_W_ARB                                         0xF00304
/* TPC4_RTR_DBG_W_ARB */
#define TPC4_RTR_DBG_W_ARB_E_SHIFT                                   0
#define TPC4_RTR_DBG_W_ARB_E_MASK                                    0x7
#define TPC4_RTR_DBG_W_ARB_S_SHIFT                                   8
#define TPC4_RTR_DBG_W_ARB_S_MASK                                    0x700
#define TPC4_RTR_DBG_W_ARB_N_SHIFT                                   16
#define TPC4_RTR_DBG_W_ARB_N_MASK                                    0x70000
#define TPC4_RTR_DBG_W_ARB_L_SHIFT                                   24
#define TPC4_RTR_DBG_W_ARB_L_MASK                                    0x7000000

#define mmTPC4_RTR_DBG_N_ARB                                         0xF00308
/* TPC4_RTR_DBG_N_ARB */
#define TPC4_RTR_DBG_N_ARB_W_SHIFT                                   0
#define TPC4_RTR_DBG_N_ARB_W_MASK                                    0x7
#define TPC4_RTR_DBG_N_ARB_E_SHIFT                                   8
#define TPC4_RTR_DBG_N_ARB_E_MASK                                    0x700
#define TPC4_RTR_DBG_N_ARB_S_SHIFT                                   16
#define TPC4_RTR_DBG_N_ARB_S_MASK                                    0x70000
#define TPC4_RTR_DBG_N_ARB_L_SHIFT                                   24
#define TPC4_RTR_DBG_N_ARB_L_MASK                                    0x7000000

#define mmTPC4_RTR_DBG_S_ARB                                         0xF0030C
/* TPC4_RTR_DBG_S_ARB */
#define TPC4_RTR_DBG_S_ARB_W_SHIFT                                   0
#define TPC4_RTR_DBG_S_ARB_W_MASK                                    0x7
#define TPC4_RTR_DBG_S_ARB_E_SHIFT                                   8
#define TPC4_RTR_DBG_S_ARB_E_MASK                                    0x700
#define TPC4_RTR_DBG_S_ARB_N_SHIFT                                   16
#define TPC4_RTR_DBG_S_ARB_N_MASK                                    0x70000
#define TPC4_RTR_DBG_S_ARB_L_SHIFT                                   24
#define TPC4_RTR_DBG_S_ARB_L_MASK                                    0x7000000

#define mmTPC4_RTR_DBG_L_ARB                                         0xF00310
/* TPC4_RTR_DBG_L_ARB */
#define TPC4_RTR_DBG_L_ARB_W_SHIFT                                   0
#define TPC4_RTR_DBG_L_ARB_W_MASK                                    0x7
#define TPC4_RTR_DBG_L_ARB_E_SHIFT                                   8
#define TPC4_RTR_DBG_L_ARB_E_MASK                                    0x700
#define TPC4_RTR_DBG_L_ARB_S_SHIFT                                   16
#define TPC4_RTR_DBG_L_ARB_S_MASK                                    0x70000
#define TPC4_RTR_DBG_L_ARB_N_SHIFT                                   24
#define TPC4_RTR_DBG_L_ARB_N_MASK                                    0x7000000

#define mmTPC4_RTR_DBG_E_ARB_MAX                                     0xF00320
/* TPC4_RTR_DBG_E_ARB_MAX */
#define TPC4_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC4_RTR_DBG_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC4_RTR_DBG_W_ARB_MAX                                     0xF00324
/* TPC4_RTR_DBG_W_ARB_MAX */
#define TPC4_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC4_RTR_DBG_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC4_RTR_DBG_N_ARB_MAX                                     0xF00328
/* TPC4_RTR_DBG_N_ARB_MAX */
#define TPC4_RTR_DBG_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC4_RTR_DBG_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC4_RTR_DBG_S_ARB_MAX                                     0xF0032C
/* TPC4_RTR_DBG_S_ARB_MAX */
#define TPC4_RTR_DBG_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC4_RTR_DBG_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC4_RTR_DBG_L_ARB_MAX                                     0xF00330
/* TPC4_RTR_DBG_L_ARB_MAX */
#define TPC4_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC4_RTR_DBG_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC4_RTR_SPLIT_COEF_0                                      0xF00400

#define mmTPC4_RTR_SPLIT_COEF_1                                      0xF00404

#define mmTPC4_RTR_SPLIT_COEF_2                                      0xF00408

#define mmTPC4_RTR_SPLIT_COEF_3                                      0xF0040C

#define mmTPC4_RTR_SPLIT_COEF_4                                      0xF00410

#define mmTPC4_RTR_SPLIT_COEF_5                                      0xF00414

#define mmTPC4_RTR_SPLIT_COEF_6                                      0xF00418

#define mmTPC4_RTR_SPLIT_COEF_7                                      0xF0041C

#define mmTPC4_RTR_SPLIT_COEF_8                                      0xF00420

#define mmTPC4_RTR_SPLIT_COEF_9                                      0xF00424
/* TPC4_RTR_SPLIT_COEF */
#define TPC4_RTR_SPLIT_COEF_VAL_SHIFT                                0
#define TPC4_RTR_SPLIT_COEF_VAL_MASK                                 0xFFFF

#define mmTPC4_RTR_SPLIT_CFG                                         0xF00440
/* TPC4_RTR_SPLIT_CFG */
#define TPC4_RTR_SPLIT_CFG_FORCE_WAK_ORDER_SHIFT                     0
#define TPC4_RTR_SPLIT_CFG_FORCE_WAK_ORDER_MASK                      0x1
#define TPC4_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_SHIFT                  1
#define TPC4_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_MASK                   0x2
#define TPC4_RTR_SPLIT_CFG_DEFAULT_MESH_SHIFT                        2
#define TPC4_RTR_SPLIT_CFG_DEFAULT_MESH_MASK                         0xC
#define TPC4_RTR_SPLIT_CFG_WR_RATE_LIM_EN_SHIFT                      4
#define TPC4_RTR_SPLIT_CFG_WR_RATE_LIM_EN_MASK                       0x10
#define TPC4_RTR_SPLIT_CFG_RD_RATE_LIM_EN_SHIFT                      5
#define TPC4_RTR_SPLIT_CFG_RD_RATE_LIM_EN_MASK                       0x20
#define TPC4_RTR_SPLIT_CFG_B2B_OPT_SHIFT                             6
#define TPC4_RTR_SPLIT_CFG_B2B_OPT_MASK                              0x1C0

#define mmTPC4_RTR_SPLIT_RD_SAT                                      0xF00444
/* TPC4_RTR_SPLIT_RD_SAT */
#define TPC4_RTR_SPLIT_RD_SAT_VAL_SHIFT                              0
#define TPC4_RTR_SPLIT_RD_SAT_VAL_MASK                               0xFFFF

#define mmTPC4_RTR_SPLIT_RD_RST_TOKEN                                0xF00448
/* TPC4_RTR_SPLIT_RD_RST_TOKEN */
#define TPC4_RTR_SPLIT_RD_RST_TOKEN_VAL_SHIFT                        0
#define TPC4_RTR_SPLIT_RD_RST_TOKEN_VAL_MASK                         0xFFFF

#define mmTPC4_RTR_SPLIT_RD_TIMEOUT_0                                0xF0044C

#define mmTPC4_RTR_SPLIT_RD_TIMEOUT_1                                0xF00450
/* TPC4_RTR_SPLIT_RD_TIMEOUT */
#define TPC4_RTR_SPLIT_RD_TIMEOUT_VAL_SHIFT                          0
#define TPC4_RTR_SPLIT_RD_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmTPC4_RTR_SPLIT_WR_SAT                                      0xF00454
/* TPC4_RTR_SPLIT_WR_SAT */
#define TPC4_RTR_SPLIT_WR_SAT_VAL_SHIFT                              0
#define TPC4_RTR_SPLIT_WR_SAT_VAL_MASK                               0xFFFF

#define mmTPC4_RTR_WPLIT_WR_TST_TOLEN                                0xF00458
/* TPC4_RTR_WPLIT_WR_TST_TOLEN */
#define TPC4_RTR_WPLIT_WR_TST_TOLEN_VAL_SHIFT                        0
#define TPC4_RTR_WPLIT_WR_TST_TOLEN_VAL_MASK                         0xFFFF

#define mmTPC4_RTR_SPLIT_WR_TIMEOUT_0                                0xF0045C

#define mmTPC4_RTR_SPLIT_WR_TIMEOUT_1                                0xF00460
/* TPC4_RTR_SPLIT_WR_TIMEOUT */
#define TPC4_RTR_SPLIT_WR_TIMEOUT_VAL_SHIFT                          0
#define TPC4_RTR_SPLIT_WR_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmTPC4_RTR_HBW_RANGE_HIT                                     0xF00470
/* TPC4_RTR_HBW_RANGE_HIT */
#define TPC4_RTR_HBW_RANGE_HIT_IND_SHIFT                             0
#define TPC4_RTR_HBW_RANGE_HIT_IND_MASK                              0xFF

#define mmTPC4_RTR_HBW_RANGE_MASK_L_0                                0xF00480

#define mmTPC4_RTR_HBW_RANGE_MASK_L_1                                0xF00484

#define mmTPC4_RTR_HBW_RANGE_MASK_L_2                                0xF00488

#define mmTPC4_RTR_HBW_RANGE_MASK_L_3                                0xF0048C

#define mmTPC4_RTR_HBW_RANGE_MASK_L_4                                0xF00490

#define mmTPC4_RTR_HBW_RANGE_MASK_L_5                                0xF00494

#define mmTPC4_RTR_HBW_RANGE_MASK_L_6                                0xF00498

#define mmTPC4_RTR_HBW_RANGE_MASK_L_7                                0xF0049C
/* TPC4_RTR_HBW_RANGE_MASK_L */
#define TPC4_RTR_HBW_RANGE_MASK_L_VAL_SHIFT                          0
#define TPC4_RTR_HBW_RANGE_MASK_L_VAL_MASK                           0xFFFFFFFF

#define mmTPC4_RTR_HBW_RANGE_MASK_H_0                                0xF004A0

#define mmTPC4_RTR_HBW_RANGE_MASK_H_1                                0xF004A4

#define mmTPC4_RTR_HBW_RANGE_MASK_H_2                                0xF004A8

#define mmTPC4_RTR_HBW_RANGE_MASK_H_3                                0xF004AC

#define mmTPC4_RTR_HBW_RANGE_MASK_H_4                                0xF004B0

#define mmTPC4_RTR_HBW_RANGE_MASK_H_5                                0xF004B4

#define mmTPC4_RTR_HBW_RANGE_MASK_H_6                                0xF004B8

#define mmTPC4_RTR_HBW_RANGE_MASK_H_7                                0xF004BC
/* TPC4_RTR_HBW_RANGE_MASK_H */
#define TPC4_RTR_HBW_RANGE_MASK_H_VAL_SHIFT                          0
#define TPC4_RTR_HBW_RANGE_MASK_H_VAL_MASK                           0x3FFFF

#define mmTPC4_RTR_HBW_RANGE_BASE_L_0                                0xF004C0

#define mmTPC4_RTR_HBW_RANGE_BASE_L_1                                0xF004C4

#define mmTPC4_RTR_HBW_RANGE_BASE_L_2                                0xF004C8

#define mmTPC4_RTR_HBW_RANGE_BASE_L_3                                0xF004CC

#define mmTPC4_RTR_HBW_RANGE_BASE_L_4                                0xF004D0

#define mmTPC4_RTR_HBW_RANGE_BASE_L_5                                0xF004D4

#define mmTPC4_RTR_HBW_RANGE_BASE_L_6                                0xF004D8

#define mmTPC4_RTR_HBW_RANGE_BASE_L_7                                0xF004DC
/* TPC4_RTR_HBW_RANGE_BASE_L */
#define TPC4_RTR_HBW_RANGE_BASE_L_VAL_SHIFT                          0
#define TPC4_RTR_HBW_RANGE_BASE_L_VAL_MASK                           0xFFFFFFFF

#define mmTPC4_RTR_HBW_RANGE_BASE_H_0                                0xF004E0

#define mmTPC4_RTR_HBW_RANGE_BASE_H_1                                0xF004E4

#define mmTPC4_RTR_HBW_RANGE_BASE_H_2                                0xF004E8

#define mmTPC4_RTR_HBW_RANGE_BASE_H_3                                0xF004EC

#define mmTPC4_RTR_HBW_RANGE_BASE_H_4                                0xF004F0

#define mmTPC4_RTR_HBW_RANGE_BASE_H_5                                0xF004F4

#define mmTPC4_RTR_HBW_RANGE_BASE_H_6                                0xF004F8

#define mmTPC4_RTR_HBW_RANGE_BASE_H_7                                0xF004FC
/* TPC4_RTR_HBW_RANGE_BASE_H */
#define TPC4_RTR_HBW_RANGE_BASE_H_VAL_SHIFT                          0
#define TPC4_RTR_HBW_RANGE_BASE_H_VAL_MASK                           0x3FFFF

#define mmTPC4_RTR_LBW_RANGE_HIT                                     0xF00500
/* TPC4_RTR_LBW_RANGE_HIT */
#define TPC4_RTR_LBW_RANGE_HIT_IND_SHIFT                             0
#define TPC4_RTR_LBW_RANGE_HIT_IND_MASK                              0xFFFF

#define mmTPC4_RTR_LBW_RANGE_MASK_0                                  0xF00510

#define mmTPC4_RTR_LBW_RANGE_MASK_1                                  0xF00514

#define mmTPC4_RTR_LBW_RANGE_MASK_2                                  0xF00518

#define mmTPC4_RTR_LBW_RANGE_MASK_3                                  0xF0051C

#define mmTPC4_RTR_LBW_RANGE_MASK_4                                  0xF00520

#define mmTPC4_RTR_LBW_RANGE_MASK_5                                  0xF00524

#define mmTPC4_RTR_LBW_RANGE_MASK_6                                  0xF00528

#define mmTPC4_RTR_LBW_RANGE_MASK_7                                  0xF0052C

#define mmTPC4_RTR_LBW_RANGE_MASK_8                                  0xF00530

#define mmTPC4_RTR_LBW_RANGE_MASK_9                                  0xF00534

#define mmTPC4_RTR_LBW_RANGE_MASK_10                                 0xF00538

#define mmTPC4_RTR_LBW_RANGE_MASK_11                                 0xF0053C

#define mmTPC4_RTR_LBW_RANGE_MASK_12                                 0xF00540

#define mmTPC4_RTR_LBW_RANGE_MASK_13                                 0xF00544

#define mmTPC4_RTR_LBW_RANGE_MASK_14                                 0xF00548

#define mmTPC4_RTR_LBW_RANGE_MASK_15                                 0xF0054C
/* TPC4_RTR_LBW_RANGE_MASK */
#define TPC4_RTR_LBW_RANGE_MASK_VAL_SHIFT                            0
#define TPC4_RTR_LBW_RANGE_MASK_VAL_MASK                             0x3FFFFFF

#define mmTPC4_RTR_LBW_RANGE_BASE_0                                  0xF00550

#define mmTPC4_RTR_LBW_RANGE_BASE_1                                  0xF00554

#define mmTPC4_RTR_LBW_RANGE_BASE_2                                  0xF00558

#define mmTPC4_RTR_LBW_RANGE_BASE_3                                  0xF0055C

#define mmTPC4_RTR_LBW_RANGE_BASE_4                                  0xF00560

#define mmTPC4_RTR_LBW_RANGE_BASE_5                                  0xF00564

#define mmTPC4_RTR_LBW_RANGE_BASE_6                                  0xF00568

#define mmTPC4_RTR_LBW_RANGE_BASE_7                                  0xF0056C

#define mmTPC4_RTR_LBW_RANGE_BASE_8                                  0xF00570

#define mmTPC4_RTR_LBW_RANGE_BASE_9                                  0xF00574

#define mmTPC4_RTR_LBW_RANGE_BASE_10                                 0xF00578

#define mmTPC4_RTR_LBW_RANGE_BASE_11                                 0xF0057C

#define mmTPC4_RTR_LBW_RANGE_BASE_12                                 0xF00580

#define mmTPC4_RTR_LBW_RANGE_BASE_13                                 0xF00584

#define mmTPC4_RTR_LBW_RANGE_BASE_14                                 0xF00588

#define mmTPC4_RTR_LBW_RANGE_BASE_15                                 0xF0058C
/* TPC4_RTR_LBW_RANGE_BASE */
#define TPC4_RTR_LBW_RANGE_BASE_VAL_SHIFT                            0
#define TPC4_RTR_LBW_RANGE_BASE_VAL_MASK                             0x3FFFFFF

#define mmTPC4_RTR_RGLTR                                             0xF00590
/* TPC4_RTR_RGLTR */
#define TPC4_RTR_RGLTR_WR_EN_SHIFT                                   0
#define TPC4_RTR_RGLTR_WR_EN_MASK                                    0x1
#define TPC4_RTR_RGLTR_RD_EN_SHIFT                                   4
#define TPC4_RTR_RGLTR_RD_EN_MASK                                    0x10

#define mmTPC4_RTR_RGLTR_WR_RESULT                                   0xF00594
/* TPC4_RTR_RGLTR_WR_RESULT */
#define TPC4_RTR_RGLTR_WR_RESULT_VAL_SHIFT                           0
#define TPC4_RTR_RGLTR_WR_RESULT_VAL_MASK                            0xFF

#define mmTPC4_RTR_RGLTR_RD_RESULT                                   0xF00598
/* TPC4_RTR_RGLTR_RD_RESULT */
#define TPC4_RTR_RGLTR_RD_RESULT_VAL_SHIFT                           0
#define TPC4_RTR_RGLTR_RD_RESULT_VAL_MASK                            0xFF

#define mmTPC4_RTR_SCRAMB_EN                                         0xF00600
/* TPC4_RTR_SCRAMB_EN */
#define TPC4_RTR_SCRAMB_EN_VAL_SHIFT                                 0
#define TPC4_RTR_SCRAMB_EN_VAL_MASK                                  0x1

#define mmTPC4_RTR_NON_LIN_SCRAMB                                    0xF00604
/* TPC4_RTR_NON_LIN_SCRAMB */
#define TPC4_RTR_NON_LIN_SCRAMB_EN_SHIFT                             0
#define TPC4_RTR_NON_LIN_SCRAMB_EN_MASK                              0x1

#endif /* ASIC_REG_TPC4_RTR_H_ */

