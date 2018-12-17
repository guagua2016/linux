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

#ifndef ASIC_REG_TPC3_RTR_H_
#define ASIC_REG_TPC3_RTR_H_

/*
 *****************************************
 *   TPC3_RTR (Prototype: TPC_RTR)
 *****************************************
 */

#define mmTPC3_RTR_HBW_RD_RQ_E_ARB                                   0xEC0100
/* TPC3_RTR_HBW_RD_RQ_E_ARB */
#define TPC3_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                             0
#define TPC3_RTR_HBW_RD_RQ_E_ARB_W_MASK                              0x7
#define TPC3_RTR_HBW_RD_RQ_E_ARB_S_SHIFT                             8
#define TPC3_RTR_HBW_RD_RQ_E_ARB_S_MASK                              0x700
#define TPC3_RTR_HBW_RD_RQ_E_ARB_N_SHIFT                             16
#define TPC3_RTR_HBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define TPC3_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                             24
#define TPC3_RTR_HBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_HBW_RD_RQ_W_ARB                                   0xEC0104
/* TPC3_RTR_HBW_RD_RQ_W_ARB */
#define TPC3_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                             0
#define TPC3_RTR_HBW_RD_RQ_W_ARB_E_MASK                              0x7
#define TPC3_RTR_HBW_RD_RQ_W_ARB_S_SHIFT                             8
#define TPC3_RTR_HBW_RD_RQ_W_ARB_S_MASK                              0x700
#define TPC3_RTR_HBW_RD_RQ_W_ARB_N_SHIFT                             16
#define TPC3_RTR_HBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define TPC3_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                             24
#define TPC3_RTR_HBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_HBW_RD_RQ_N_ARB                                   0xEC0108
/* TPC3_RTR_HBW_RD_RQ_N_ARB */
#define TPC3_RTR_HBW_RD_RQ_N_ARB_W_SHIFT                             0
#define TPC3_RTR_HBW_RD_RQ_N_ARB_W_MASK                              0x7
#define TPC3_RTR_HBW_RD_RQ_N_ARB_E_SHIFT                             8
#define TPC3_RTR_HBW_RD_RQ_N_ARB_E_MASK                              0x700
#define TPC3_RTR_HBW_RD_RQ_N_ARB_S_SHIFT                             16
#define TPC3_RTR_HBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define TPC3_RTR_HBW_RD_RQ_N_ARB_L_SHIFT                             24
#define TPC3_RTR_HBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_HBW_RD_RQ_S_ARB                                   0xEC010C
/* TPC3_RTR_HBW_RD_RQ_S_ARB */
#define TPC3_RTR_HBW_RD_RQ_S_ARB_W_SHIFT                             0
#define TPC3_RTR_HBW_RD_RQ_S_ARB_W_MASK                              0x7
#define TPC3_RTR_HBW_RD_RQ_S_ARB_E_SHIFT                             8
#define TPC3_RTR_HBW_RD_RQ_S_ARB_E_MASK                              0x700
#define TPC3_RTR_HBW_RD_RQ_S_ARB_N_SHIFT                             16
#define TPC3_RTR_HBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define TPC3_RTR_HBW_RD_RQ_S_ARB_L_SHIFT                             24
#define TPC3_RTR_HBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_HBW_RD_RQ_L_ARB                                   0xEC0110
/* TPC3_RTR_HBW_RD_RQ_L_ARB */
#define TPC3_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                             0
#define TPC3_RTR_HBW_RD_RQ_L_ARB_W_MASK                              0x7
#define TPC3_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                             8
#define TPC3_RTR_HBW_RD_RQ_L_ARB_E_MASK                              0x700
#define TPC3_RTR_HBW_RD_RQ_L_ARB_S_SHIFT                             16
#define TPC3_RTR_HBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define TPC3_RTR_HBW_RD_RQ_L_ARB_N_SHIFT                             24
#define TPC3_RTR_HBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC3_RTR_HBW_E_ARB_MAX                                     0xEC0120
/* TPC3_RTR_HBW_E_ARB_MAX */
#define TPC3_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC3_RTR_HBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC3_RTR_HBW_W_ARB_MAX                                     0xEC0124
/* TPC3_RTR_HBW_W_ARB_MAX */
#define TPC3_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC3_RTR_HBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC3_RTR_HBW_N_ARB_MAX                                     0xEC0128
/* TPC3_RTR_HBW_N_ARB_MAX */
#define TPC3_RTR_HBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC3_RTR_HBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC3_RTR_HBW_S_ARB_MAX                                     0xEC012C
/* TPC3_RTR_HBW_S_ARB_MAX */
#define TPC3_RTR_HBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC3_RTR_HBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC3_RTR_HBW_L_ARB_MAX                                     0xEC0130
/* TPC3_RTR_HBW_L_ARB_MAX */
#define TPC3_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC3_RTR_HBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC3_RTR_HBW_RD_RS_E_ARB                                   0xEC0140
/* TPC3_RTR_HBW_RD_RS_E_ARB */
#define TPC3_RTR_HBW_RD_RS_E_ARB_W_SHIFT                             0
#define TPC3_RTR_HBW_RD_RS_E_ARB_W_MASK                              0x7
#define TPC3_RTR_HBW_RD_RS_E_ARB_S_SHIFT                             8
#define TPC3_RTR_HBW_RD_RS_E_ARB_S_MASK                              0x700
#define TPC3_RTR_HBW_RD_RS_E_ARB_N_SHIFT                             16
#define TPC3_RTR_HBW_RD_RS_E_ARB_N_MASK                              0x70000
#define TPC3_RTR_HBW_RD_RS_E_ARB_L_SHIFT                             24
#define TPC3_RTR_HBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_HBW_RD_RS_W_ARB                                   0xEC0144
/* TPC3_RTR_HBW_RD_RS_W_ARB */
#define TPC3_RTR_HBW_RD_RS_W_ARB_E_SHIFT                             0
#define TPC3_RTR_HBW_RD_RS_W_ARB_E_MASK                              0x7
#define TPC3_RTR_HBW_RD_RS_W_ARB_S_SHIFT                             8
#define TPC3_RTR_HBW_RD_RS_W_ARB_S_MASK                              0x700
#define TPC3_RTR_HBW_RD_RS_W_ARB_N_SHIFT                             16
#define TPC3_RTR_HBW_RD_RS_W_ARB_N_MASK                              0x70000
#define TPC3_RTR_HBW_RD_RS_W_ARB_L_SHIFT                             24
#define TPC3_RTR_HBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_HBW_RD_RS_N_ARB                                   0xEC0148
/* TPC3_RTR_HBW_RD_RS_N_ARB */
#define TPC3_RTR_HBW_RD_RS_N_ARB_W_SHIFT                             0
#define TPC3_RTR_HBW_RD_RS_N_ARB_W_MASK                              0x7
#define TPC3_RTR_HBW_RD_RS_N_ARB_E_SHIFT                             8
#define TPC3_RTR_HBW_RD_RS_N_ARB_E_MASK                              0x700
#define TPC3_RTR_HBW_RD_RS_N_ARB_S_SHIFT                             16
#define TPC3_RTR_HBW_RD_RS_N_ARB_S_MASK                              0x70000
#define TPC3_RTR_HBW_RD_RS_N_ARB_L_SHIFT                             24
#define TPC3_RTR_HBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_HBW_RD_RS_S_ARB                                   0xEC014C
/* TPC3_RTR_HBW_RD_RS_S_ARB */
#define TPC3_RTR_HBW_RD_RS_S_ARB_W_SHIFT                             0
#define TPC3_RTR_HBW_RD_RS_S_ARB_W_MASK                              0x7
#define TPC3_RTR_HBW_RD_RS_S_ARB_E_SHIFT                             8
#define TPC3_RTR_HBW_RD_RS_S_ARB_E_MASK                              0x700
#define TPC3_RTR_HBW_RD_RS_S_ARB_N_SHIFT                             16
#define TPC3_RTR_HBW_RD_RS_S_ARB_N_MASK                              0x70000
#define TPC3_RTR_HBW_RD_RS_S_ARB_L_SHIFT                             24
#define TPC3_RTR_HBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_HBW_RD_RS_L_ARB                                   0xEC0150
/* TPC3_RTR_HBW_RD_RS_L_ARB */
#define TPC3_RTR_HBW_RD_RS_L_ARB_W_SHIFT                             0
#define TPC3_RTR_HBW_RD_RS_L_ARB_W_MASK                              0x7
#define TPC3_RTR_HBW_RD_RS_L_ARB_E_SHIFT                             8
#define TPC3_RTR_HBW_RD_RS_L_ARB_E_MASK                              0x700
#define TPC3_RTR_HBW_RD_RS_L_ARB_S_SHIFT                             16
#define TPC3_RTR_HBW_RD_RS_L_ARB_S_MASK                              0x70000
#define TPC3_RTR_HBW_RD_RS_L_ARB_N_SHIFT                             24
#define TPC3_RTR_HBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC3_RTR_HBW_WR_RQ_E_ARB                                   0xEC0170
/* TPC3_RTR_HBW_WR_RQ_E_ARB */
#define TPC3_RTR_HBW_WR_RQ_E_ARB_W_SHIFT                             0
#define TPC3_RTR_HBW_WR_RQ_E_ARB_W_MASK                              0x7
#define TPC3_RTR_HBW_WR_RQ_E_ARB_S_SHIFT                             8
#define TPC3_RTR_HBW_WR_RQ_E_ARB_S_MASK                              0x700
#define TPC3_RTR_HBW_WR_RQ_E_ARB_N_SHIFT                             16
#define TPC3_RTR_HBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define TPC3_RTR_HBW_WR_RQ_E_ARB_L_SHIFT                             24
#define TPC3_RTR_HBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_HBW_WR_RQ_W_ARB                                   0xEC0174
/* TPC3_RTR_HBW_WR_RQ_W_ARB */
#define TPC3_RTR_HBW_WR_RQ_W_ARB_E_SHIFT                             0
#define TPC3_RTR_HBW_WR_RQ_W_ARB_E_MASK                              0x7
#define TPC3_RTR_HBW_WR_RQ_W_ARB_S_SHIFT                             8
#define TPC3_RTR_HBW_WR_RQ_W_ARB_S_MASK                              0x700
#define TPC3_RTR_HBW_WR_RQ_W_ARB_N_SHIFT                             16
#define TPC3_RTR_HBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define TPC3_RTR_HBW_WR_RQ_W_ARB_L_SHIFT                             24
#define TPC3_RTR_HBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_HBW_WR_RQ_N_ARB                                   0xEC0178
/* TPC3_RTR_HBW_WR_RQ_N_ARB */
#define TPC3_RTR_HBW_WR_RQ_N_ARB_W_SHIFT                             0
#define TPC3_RTR_HBW_WR_RQ_N_ARB_W_MASK                              0x7
#define TPC3_RTR_HBW_WR_RQ_N_ARB_E_SHIFT                             8
#define TPC3_RTR_HBW_WR_RQ_N_ARB_E_MASK                              0x700
#define TPC3_RTR_HBW_WR_RQ_N_ARB_S_SHIFT                             16
#define TPC3_RTR_HBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define TPC3_RTR_HBW_WR_RQ_N_ARB_L_SHIFT                             24
#define TPC3_RTR_HBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_HBW_WR_RQ_S_ARB                                   0xEC017C
/* TPC3_RTR_HBW_WR_RQ_S_ARB */
#define TPC3_RTR_HBW_WR_RQ_S_ARB_W_SHIFT                             0
#define TPC3_RTR_HBW_WR_RQ_S_ARB_W_MASK                              0x7
#define TPC3_RTR_HBW_WR_RQ_S_ARB_E_SHIFT                             8
#define TPC3_RTR_HBW_WR_RQ_S_ARB_E_MASK                              0x700
#define TPC3_RTR_HBW_WR_RQ_S_ARB_N_SHIFT                             16
#define TPC3_RTR_HBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define TPC3_RTR_HBW_WR_RQ_S_ARB_L_SHIFT                             24
#define TPC3_RTR_HBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_HBW_WR_RQ_L_ARB                                   0xEC0180
/* TPC3_RTR_HBW_WR_RQ_L_ARB */
#define TPC3_RTR_HBW_WR_RQ_L_ARB_W_SHIFT                             0
#define TPC3_RTR_HBW_WR_RQ_L_ARB_W_MASK                              0x7
#define TPC3_RTR_HBW_WR_RQ_L_ARB_E_SHIFT                             8
#define TPC3_RTR_HBW_WR_RQ_L_ARB_E_MASK                              0x700
#define TPC3_RTR_HBW_WR_RQ_L_ARB_S_SHIFT                             16
#define TPC3_RTR_HBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define TPC3_RTR_HBW_WR_RQ_L_ARB_N_SHIFT                             24
#define TPC3_RTR_HBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC3_RTR_HBW_WR_RS_E_ARB                                   0xEC0190
/* TPC3_RTR_HBW_WR_RS_E_ARB */
#define TPC3_RTR_HBW_WR_RS_E_ARB_W_SHIFT                             0
#define TPC3_RTR_HBW_WR_RS_E_ARB_W_MASK                              0x7
#define TPC3_RTR_HBW_WR_RS_E_ARB_S_SHIFT                             8
#define TPC3_RTR_HBW_WR_RS_E_ARB_S_MASK                              0x700
#define TPC3_RTR_HBW_WR_RS_E_ARB_N_SHIFT                             16
#define TPC3_RTR_HBW_WR_RS_E_ARB_N_MASK                              0x70000
#define TPC3_RTR_HBW_WR_RS_E_ARB_L_SHIFT                             24
#define TPC3_RTR_HBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_HBW_WR_RS_W_ARB                                   0xEC0194
/* TPC3_RTR_HBW_WR_RS_W_ARB */
#define TPC3_RTR_HBW_WR_RS_W_ARB_E_SHIFT                             0
#define TPC3_RTR_HBW_WR_RS_W_ARB_E_MASK                              0x7
#define TPC3_RTR_HBW_WR_RS_W_ARB_S_SHIFT                             8
#define TPC3_RTR_HBW_WR_RS_W_ARB_S_MASK                              0x700
#define TPC3_RTR_HBW_WR_RS_W_ARB_N_SHIFT                             16
#define TPC3_RTR_HBW_WR_RS_W_ARB_N_MASK                              0x70000
#define TPC3_RTR_HBW_WR_RS_W_ARB_L_SHIFT                             24
#define TPC3_RTR_HBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_HBW_WR_RS_N_ARB                                   0xEC0198
/* TPC3_RTR_HBW_WR_RS_N_ARB */
#define TPC3_RTR_HBW_WR_RS_N_ARB_W_SHIFT                             0
#define TPC3_RTR_HBW_WR_RS_N_ARB_W_MASK                              0x7
#define TPC3_RTR_HBW_WR_RS_N_ARB_E_SHIFT                             8
#define TPC3_RTR_HBW_WR_RS_N_ARB_E_MASK                              0x700
#define TPC3_RTR_HBW_WR_RS_N_ARB_S_SHIFT                             16
#define TPC3_RTR_HBW_WR_RS_N_ARB_S_MASK                              0x70000
#define TPC3_RTR_HBW_WR_RS_N_ARB_L_SHIFT                             24
#define TPC3_RTR_HBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_HBW_WR_RS_S_ARB                                   0xEC019C
/* TPC3_RTR_HBW_WR_RS_S_ARB */
#define TPC3_RTR_HBW_WR_RS_S_ARB_W_SHIFT                             0
#define TPC3_RTR_HBW_WR_RS_S_ARB_W_MASK                              0x7
#define TPC3_RTR_HBW_WR_RS_S_ARB_E_SHIFT                             8
#define TPC3_RTR_HBW_WR_RS_S_ARB_E_MASK                              0x700
#define TPC3_RTR_HBW_WR_RS_S_ARB_N_SHIFT                             16
#define TPC3_RTR_HBW_WR_RS_S_ARB_N_MASK                              0x70000
#define TPC3_RTR_HBW_WR_RS_S_ARB_L_SHIFT                             24
#define TPC3_RTR_HBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_HBW_WR_RS_L_ARB                                   0xEC01A0
/* TPC3_RTR_HBW_WR_RS_L_ARB */
#define TPC3_RTR_HBW_WR_RS_L_ARB_W_SHIFT                             0
#define TPC3_RTR_HBW_WR_RS_L_ARB_W_MASK                              0x7
#define TPC3_RTR_HBW_WR_RS_L_ARB_E_SHIFT                             8
#define TPC3_RTR_HBW_WR_RS_L_ARB_E_MASK                              0x700
#define TPC3_RTR_HBW_WR_RS_L_ARB_S_SHIFT                             16
#define TPC3_RTR_HBW_WR_RS_L_ARB_S_MASK                              0x70000
#define TPC3_RTR_HBW_WR_RS_L_ARB_N_SHIFT                             24
#define TPC3_RTR_HBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC3_RTR_LBW_RD_RQ_E_ARB                                   0xEC0200
/* TPC3_RTR_LBW_RD_RQ_E_ARB */
#define TPC3_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                             0
#define TPC3_RTR_LBW_RD_RQ_E_ARB_W_MASK                              0x7
#define TPC3_RTR_LBW_RD_RQ_E_ARB_S_SHIFT                             8
#define TPC3_RTR_LBW_RD_RQ_E_ARB_S_MASK                              0x700
#define TPC3_RTR_LBW_RD_RQ_E_ARB_N_SHIFT                             16
#define TPC3_RTR_LBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define TPC3_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                             24
#define TPC3_RTR_LBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_LBW_RD_RQ_W_ARB                                   0xEC0204
/* TPC3_RTR_LBW_RD_RQ_W_ARB */
#define TPC3_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                             0
#define TPC3_RTR_LBW_RD_RQ_W_ARB_E_MASK                              0x7
#define TPC3_RTR_LBW_RD_RQ_W_ARB_S_SHIFT                             8
#define TPC3_RTR_LBW_RD_RQ_W_ARB_S_MASK                              0x700
#define TPC3_RTR_LBW_RD_RQ_W_ARB_N_SHIFT                             16
#define TPC3_RTR_LBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define TPC3_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                             24
#define TPC3_RTR_LBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_LBW_RD_RQ_N_ARB                                   0xEC0208
/* TPC3_RTR_LBW_RD_RQ_N_ARB */
#define TPC3_RTR_LBW_RD_RQ_N_ARB_W_SHIFT                             0
#define TPC3_RTR_LBW_RD_RQ_N_ARB_W_MASK                              0x7
#define TPC3_RTR_LBW_RD_RQ_N_ARB_E_SHIFT                             8
#define TPC3_RTR_LBW_RD_RQ_N_ARB_E_MASK                              0x700
#define TPC3_RTR_LBW_RD_RQ_N_ARB_S_SHIFT                             16
#define TPC3_RTR_LBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define TPC3_RTR_LBW_RD_RQ_N_ARB_L_SHIFT                             24
#define TPC3_RTR_LBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_LBW_RD_RQ_S_ARB                                   0xEC020C
/* TPC3_RTR_LBW_RD_RQ_S_ARB */
#define TPC3_RTR_LBW_RD_RQ_S_ARB_W_SHIFT                             0
#define TPC3_RTR_LBW_RD_RQ_S_ARB_W_MASK                              0x7
#define TPC3_RTR_LBW_RD_RQ_S_ARB_E_SHIFT                             8
#define TPC3_RTR_LBW_RD_RQ_S_ARB_E_MASK                              0x700
#define TPC3_RTR_LBW_RD_RQ_S_ARB_N_SHIFT                             16
#define TPC3_RTR_LBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define TPC3_RTR_LBW_RD_RQ_S_ARB_L_SHIFT                             24
#define TPC3_RTR_LBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_LBW_RD_RQ_L_ARB                                   0xEC0210
/* TPC3_RTR_LBW_RD_RQ_L_ARB */
#define TPC3_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                             0
#define TPC3_RTR_LBW_RD_RQ_L_ARB_W_MASK                              0x7
#define TPC3_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                             8
#define TPC3_RTR_LBW_RD_RQ_L_ARB_E_MASK                              0x700
#define TPC3_RTR_LBW_RD_RQ_L_ARB_S_SHIFT                             16
#define TPC3_RTR_LBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define TPC3_RTR_LBW_RD_RQ_L_ARB_N_SHIFT                             24
#define TPC3_RTR_LBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC3_RTR_LBW_E_ARB_MAX                                     0xEC0220
/* TPC3_RTR_LBW_E_ARB_MAX */
#define TPC3_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC3_RTR_LBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC3_RTR_LBW_W_ARB_MAX                                     0xEC0224
/* TPC3_RTR_LBW_W_ARB_MAX */
#define TPC3_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC3_RTR_LBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC3_RTR_LBW_N_ARB_MAX                                     0xEC0228
/* TPC3_RTR_LBW_N_ARB_MAX */
#define TPC3_RTR_LBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC3_RTR_LBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC3_RTR_LBW_S_ARB_MAX                                     0xEC022C
/* TPC3_RTR_LBW_S_ARB_MAX */
#define TPC3_RTR_LBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC3_RTR_LBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC3_RTR_LBW_L_ARB_MAX                                     0xEC0230
/* TPC3_RTR_LBW_L_ARB_MAX */
#define TPC3_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC3_RTR_LBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC3_RTR_LBW_RD_RS_E_ARB                                   0xEC0250
/* TPC3_RTR_LBW_RD_RS_E_ARB */
#define TPC3_RTR_LBW_RD_RS_E_ARB_W_SHIFT                             0
#define TPC3_RTR_LBW_RD_RS_E_ARB_W_MASK                              0x7
#define TPC3_RTR_LBW_RD_RS_E_ARB_S_SHIFT                             8
#define TPC3_RTR_LBW_RD_RS_E_ARB_S_MASK                              0x700
#define TPC3_RTR_LBW_RD_RS_E_ARB_N_SHIFT                             16
#define TPC3_RTR_LBW_RD_RS_E_ARB_N_MASK                              0x70000
#define TPC3_RTR_LBW_RD_RS_E_ARB_L_SHIFT                             24
#define TPC3_RTR_LBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_LBW_RD_RS_W_ARB                                   0xEC0254
/* TPC3_RTR_LBW_RD_RS_W_ARB */
#define TPC3_RTR_LBW_RD_RS_W_ARB_E_SHIFT                             0
#define TPC3_RTR_LBW_RD_RS_W_ARB_E_MASK                              0x7
#define TPC3_RTR_LBW_RD_RS_W_ARB_S_SHIFT                             8
#define TPC3_RTR_LBW_RD_RS_W_ARB_S_MASK                              0x700
#define TPC3_RTR_LBW_RD_RS_W_ARB_N_SHIFT                             16
#define TPC3_RTR_LBW_RD_RS_W_ARB_N_MASK                              0x70000
#define TPC3_RTR_LBW_RD_RS_W_ARB_L_SHIFT                             24
#define TPC3_RTR_LBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_LBW_RD_RS_N_ARB                                   0xEC0258
/* TPC3_RTR_LBW_RD_RS_N_ARB */
#define TPC3_RTR_LBW_RD_RS_N_ARB_W_SHIFT                             0
#define TPC3_RTR_LBW_RD_RS_N_ARB_W_MASK                              0x7
#define TPC3_RTR_LBW_RD_RS_N_ARB_E_SHIFT                             8
#define TPC3_RTR_LBW_RD_RS_N_ARB_E_MASK                              0x700
#define TPC3_RTR_LBW_RD_RS_N_ARB_S_SHIFT                             16
#define TPC3_RTR_LBW_RD_RS_N_ARB_S_MASK                              0x70000
#define TPC3_RTR_LBW_RD_RS_N_ARB_L_SHIFT                             24
#define TPC3_RTR_LBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_LBW_RD_RS_S_ARB                                   0xEC025C
/* TPC3_RTR_LBW_RD_RS_S_ARB */
#define TPC3_RTR_LBW_RD_RS_S_ARB_W_SHIFT                             0
#define TPC3_RTR_LBW_RD_RS_S_ARB_W_MASK                              0x7
#define TPC3_RTR_LBW_RD_RS_S_ARB_E_SHIFT                             8
#define TPC3_RTR_LBW_RD_RS_S_ARB_E_MASK                              0x700
#define TPC3_RTR_LBW_RD_RS_S_ARB_N_SHIFT                             16
#define TPC3_RTR_LBW_RD_RS_S_ARB_N_MASK                              0x70000
#define TPC3_RTR_LBW_RD_RS_S_ARB_L_SHIFT                             24
#define TPC3_RTR_LBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_LBW_RD_RS_L_ARB                                   0xEC0260
/* TPC3_RTR_LBW_RD_RS_L_ARB */
#define TPC3_RTR_LBW_RD_RS_L_ARB_W_SHIFT                             0
#define TPC3_RTR_LBW_RD_RS_L_ARB_W_MASK                              0x7
#define TPC3_RTR_LBW_RD_RS_L_ARB_E_SHIFT                             8
#define TPC3_RTR_LBW_RD_RS_L_ARB_E_MASK                              0x700
#define TPC3_RTR_LBW_RD_RS_L_ARB_S_SHIFT                             16
#define TPC3_RTR_LBW_RD_RS_L_ARB_S_MASK                              0x70000
#define TPC3_RTR_LBW_RD_RS_L_ARB_N_SHIFT                             24
#define TPC3_RTR_LBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC3_RTR_LBW_WR_RQ_E_ARB                                   0xEC0270
/* TPC3_RTR_LBW_WR_RQ_E_ARB */
#define TPC3_RTR_LBW_WR_RQ_E_ARB_W_SHIFT                             0
#define TPC3_RTR_LBW_WR_RQ_E_ARB_W_MASK                              0x7
#define TPC3_RTR_LBW_WR_RQ_E_ARB_S_SHIFT                             8
#define TPC3_RTR_LBW_WR_RQ_E_ARB_S_MASK                              0x700
#define TPC3_RTR_LBW_WR_RQ_E_ARB_N_SHIFT                             16
#define TPC3_RTR_LBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define TPC3_RTR_LBW_WR_RQ_E_ARB_L_SHIFT                             24
#define TPC3_RTR_LBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_LBW_WR_RQ_W_ARB                                   0xEC0274
/* TPC3_RTR_LBW_WR_RQ_W_ARB */
#define TPC3_RTR_LBW_WR_RQ_W_ARB_E_SHIFT                             0
#define TPC3_RTR_LBW_WR_RQ_W_ARB_E_MASK                              0x7
#define TPC3_RTR_LBW_WR_RQ_W_ARB_S_SHIFT                             8
#define TPC3_RTR_LBW_WR_RQ_W_ARB_S_MASK                              0x700
#define TPC3_RTR_LBW_WR_RQ_W_ARB_N_SHIFT                             16
#define TPC3_RTR_LBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define TPC3_RTR_LBW_WR_RQ_W_ARB_L_SHIFT                             24
#define TPC3_RTR_LBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_LBW_WR_RQ_N_ARB                                   0xEC0278
/* TPC3_RTR_LBW_WR_RQ_N_ARB */
#define TPC3_RTR_LBW_WR_RQ_N_ARB_W_SHIFT                             0
#define TPC3_RTR_LBW_WR_RQ_N_ARB_W_MASK                              0x7
#define TPC3_RTR_LBW_WR_RQ_N_ARB_E_SHIFT                             8
#define TPC3_RTR_LBW_WR_RQ_N_ARB_E_MASK                              0x700
#define TPC3_RTR_LBW_WR_RQ_N_ARB_S_SHIFT                             16
#define TPC3_RTR_LBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define TPC3_RTR_LBW_WR_RQ_N_ARB_L_SHIFT                             24
#define TPC3_RTR_LBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_LBW_WR_RQ_S_ARB                                   0xEC027C
/* TPC3_RTR_LBW_WR_RQ_S_ARB */
#define TPC3_RTR_LBW_WR_RQ_S_ARB_W_SHIFT                             0
#define TPC3_RTR_LBW_WR_RQ_S_ARB_W_MASK                              0x7
#define TPC3_RTR_LBW_WR_RQ_S_ARB_E_SHIFT                             8
#define TPC3_RTR_LBW_WR_RQ_S_ARB_E_MASK                              0x700
#define TPC3_RTR_LBW_WR_RQ_S_ARB_N_SHIFT                             16
#define TPC3_RTR_LBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define TPC3_RTR_LBW_WR_RQ_S_ARB_L_SHIFT                             24
#define TPC3_RTR_LBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_LBW_WR_RQ_L_ARB                                   0xEC0280
/* TPC3_RTR_LBW_WR_RQ_L_ARB */
#define TPC3_RTR_LBW_WR_RQ_L_ARB_W_SHIFT                             0
#define TPC3_RTR_LBW_WR_RQ_L_ARB_W_MASK                              0x7
#define TPC3_RTR_LBW_WR_RQ_L_ARB_E_SHIFT                             8
#define TPC3_RTR_LBW_WR_RQ_L_ARB_E_MASK                              0x700
#define TPC3_RTR_LBW_WR_RQ_L_ARB_S_SHIFT                             16
#define TPC3_RTR_LBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define TPC3_RTR_LBW_WR_RQ_L_ARB_N_SHIFT                             24
#define TPC3_RTR_LBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC3_RTR_LBW_WR_RS_E_ARB                                   0xEC0290
/* TPC3_RTR_LBW_WR_RS_E_ARB */
#define TPC3_RTR_LBW_WR_RS_E_ARB_W_SHIFT                             0
#define TPC3_RTR_LBW_WR_RS_E_ARB_W_MASK                              0x7
#define TPC3_RTR_LBW_WR_RS_E_ARB_S_SHIFT                             8
#define TPC3_RTR_LBW_WR_RS_E_ARB_S_MASK                              0x700
#define TPC3_RTR_LBW_WR_RS_E_ARB_N_SHIFT                             16
#define TPC3_RTR_LBW_WR_RS_E_ARB_N_MASK                              0x70000
#define TPC3_RTR_LBW_WR_RS_E_ARB_L_SHIFT                             24
#define TPC3_RTR_LBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_LBW_WR_RS_W_ARB                                   0xEC0294
/* TPC3_RTR_LBW_WR_RS_W_ARB */
#define TPC3_RTR_LBW_WR_RS_W_ARB_E_SHIFT                             0
#define TPC3_RTR_LBW_WR_RS_W_ARB_E_MASK                              0x7
#define TPC3_RTR_LBW_WR_RS_W_ARB_S_SHIFT                             8
#define TPC3_RTR_LBW_WR_RS_W_ARB_S_MASK                              0x700
#define TPC3_RTR_LBW_WR_RS_W_ARB_N_SHIFT                             16
#define TPC3_RTR_LBW_WR_RS_W_ARB_N_MASK                              0x70000
#define TPC3_RTR_LBW_WR_RS_W_ARB_L_SHIFT                             24
#define TPC3_RTR_LBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_LBW_WR_RS_N_ARB                                   0xEC0298
/* TPC3_RTR_LBW_WR_RS_N_ARB */
#define TPC3_RTR_LBW_WR_RS_N_ARB_W_SHIFT                             0
#define TPC3_RTR_LBW_WR_RS_N_ARB_W_MASK                              0x7
#define TPC3_RTR_LBW_WR_RS_N_ARB_E_SHIFT                             8
#define TPC3_RTR_LBW_WR_RS_N_ARB_E_MASK                              0x700
#define TPC3_RTR_LBW_WR_RS_N_ARB_S_SHIFT                             16
#define TPC3_RTR_LBW_WR_RS_N_ARB_S_MASK                              0x70000
#define TPC3_RTR_LBW_WR_RS_N_ARB_L_SHIFT                             24
#define TPC3_RTR_LBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_LBW_WR_RS_S_ARB                                   0xEC029C
/* TPC3_RTR_LBW_WR_RS_S_ARB */
#define TPC3_RTR_LBW_WR_RS_S_ARB_W_SHIFT                             0
#define TPC3_RTR_LBW_WR_RS_S_ARB_W_MASK                              0x7
#define TPC3_RTR_LBW_WR_RS_S_ARB_E_SHIFT                             8
#define TPC3_RTR_LBW_WR_RS_S_ARB_E_MASK                              0x700
#define TPC3_RTR_LBW_WR_RS_S_ARB_N_SHIFT                             16
#define TPC3_RTR_LBW_WR_RS_S_ARB_N_MASK                              0x70000
#define TPC3_RTR_LBW_WR_RS_S_ARB_L_SHIFT                             24
#define TPC3_RTR_LBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC3_RTR_LBW_WR_RS_L_ARB                                   0xEC02A0
/* TPC3_RTR_LBW_WR_RS_L_ARB */
#define TPC3_RTR_LBW_WR_RS_L_ARB_W_SHIFT                             0
#define TPC3_RTR_LBW_WR_RS_L_ARB_W_MASK                              0x7
#define TPC3_RTR_LBW_WR_RS_L_ARB_E_SHIFT                             8
#define TPC3_RTR_LBW_WR_RS_L_ARB_E_MASK                              0x700
#define TPC3_RTR_LBW_WR_RS_L_ARB_S_SHIFT                             16
#define TPC3_RTR_LBW_WR_RS_L_ARB_S_MASK                              0x70000
#define TPC3_RTR_LBW_WR_RS_L_ARB_N_SHIFT                             24
#define TPC3_RTR_LBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC3_RTR_DBG_E_ARB                                         0xEC0300
/* TPC3_RTR_DBG_E_ARB */
#define TPC3_RTR_DBG_E_ARB_W_SHIFT                                   0
#define TPC3_RTR_DBG_E_ARB_W_MASK                                    0x7
#define TPC3_RTR_DBG_E_ARB_S_SHIFT                                   8
#define TPC3_RTR_DBG_E_ARB_S_MASK                                    0x700
#define TPC3_RTR_DBG_E_ARB_N_SHIFT                                   16
#define TPC3_RTR_DBG_E_ARB_N_MASK                                    0x70000
#define TPC3_RTR_DBG_E_ARB_L_SHIFT                                   24
#define TPC3_RTR_DBG_E_ARB_L_MASK                                    0x7000000

#define mmTPC3_RTR_DBG_W_ARB                                         0xEC0304
/* TPC3_RTR_DBG_W_ARB */
#define TPC3_RTR_DBG_W_ARB_E_SHIFT                                   0
#define TPC3_RTR_DBG_W_ARB_E_MASK                                    0x7
#define TPC3_RTR_DBG_W_ARB_S_SHIFT                                   8
#define TPC3_RTR_DBG_W_ARB_S_MASK                                    0x700
#define TPC3_RTR_DBG_W_ARB_N_SHIFT                                   16
#define TPC3_RTR_DBG_W_ARB_N_MASK                                    0x70000
#define TPC3_RTR_DBG_W_ARB_L_SHIFT                                   24
#define TPC3_RTR_DBG_W_ARB_L_MASK                                    0x7000000

#define mmTPC3_RTR_DBG_N_ARB                                         0xEC0308
/* TPC3_RTR_DBG_N_ARB */
#define TPC3_RTR_DBG_N_ARB_W_SHIFT                                   0
#define TPC3_RTR_DBG_N_ARB_W_MASK                                    0x7
#define TPC3_RTR_DBG_N_ARB_E_SHIFT                                   8
#define TPC3_RTR_DBG_N_ARB_E_MASK                                    0x700
#define TPC3_RTR_DBG_N_ARB_S_SHIFT                                   16
#define TPC3_RTR_DBG_N_ARB_S_MASK                                    0x70000
#define TPC3_RTR_DBG_N_ARB_L_SHIFT                                   24
#define TPC3_RTR_DBG_N_ARB_L_MASK                                    0x7000000

#define mmTPC3_RTR_DBG_S_ARB                                         0xEC030C
/* TPC3_RTR_DBG_S_ARB */
#define TPC3_RTR_DBG_S_ARB_W_SHIFT                                   0
#define TPC3_RTR_DBG_S_ARB_W_MASK                                    0x7
#define TPC3_RTR_DBG_S_ARB_E_SHIFT                                   8
#define TPC3_RTR_DBG_S_ARB_E_MASK                                    0x700
#define TPC3_RTR_DBG_S_ARB_N_SHIFT                                   16
#define TPC3_RTR_DBG_S_ARB_N_MASK                                    0x70000
#define TPC3_RTR_DBG_S_ARB_L_SHIFT                                   24
#define TPC3_RTR_DBG_S_ARB_L_MASK                                    0x7000000

#define mmTPC3_RTR_DBG_L_ARB                                         0xEC0310
/* TPC3_RTR_DBG_L_ARB */
#define TPC3_RTR_DBG_L_ARB_W_SHIFT                                   0
#define TPC3_RTR_DBG_L_ARB_W_MASK                                    0x7
#define TPC3_RTR_DBG_L_ARB_E_SHIFT                                   8
#define TPC3_RTR_DBG_L_ARB_E_MASK                                    0x700
#define TPC3_RTR_DBG_L_ARB_S_SHIFT                                   16
#define TPC3_RTR_DBG_L_ARB_S_MASK                                    0x70000
#define TPC3_RTR_DBG_L_ARB_N_SHIFT                                   24
#define TPC3_RTR_DBG_L_ARB_N_MASK                                    0x7000000

#define mmTPC3_RTR_DBG_E_ARB_MAX                                     0xEC0320
/* TPC3_RTR_DBG_E_ARB_MAX */
#define TPC3_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC3_RTR_DBG_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC3_RTR_DBG_W_ARB_MAX                                     0xEC0324
/* TPC3_RTR_DBG_W_ARB_MAX */
#define TPC3_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC3_RTR_DBG_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC3_RTR_DBG_N_ARB_MAX                                     0xEC0328
/* TPC3_RTR_DBG_N_ARB_MAX */
#define TPC3_RTR_DBG_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC3_RTR_DBG_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC3_RTR_DBG_S_ARB_MAX                                     0xEC032C
/* TPC3_RTR_DBG_S_ARB_MAX */
#define TPC3_RTR_DBG_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC3_RTR_DBG_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC3_RTR_DBG_L_ARB_MAX                                     0xEC0330
/* TPC3_RTR_DBG_L_ARB_MAX */
#define TPC3_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC3_RTR_DBG_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC3_RTR_SPLIT_COEF_0                                      0xEC0400

#define mmTPC3_RTR_SPLIT_COEF_1                                      0xEC0404

#define mmTPC3_RTR_SPLIT_COEF_2                                      0xEC0408

#define mmTPC3_RTR_SPLIT_COEF_3                                      0xEC040C

#define mmTPC3_RTR_SPLIT_COEF_4                                      0xEC0410

#define mmTPC3_RTR_SPLIT_COEF_5                                      0xEC0414

#define mmTPC3_RTR_SPLIT_COEF_6                                      0xEC0418

#define mmTPC3_RTR_SPLIT_COEF_7                                      0xEC041C

#define mmTPC3_RTR_SPLIT_COEF_8                                      0xEC0420

#define mmTPC3_RTR_SPLIT_COEF_9                                      0xEC0424
/* TPC3_RTR_SPLIT_COEF */
#define TPC3_RTR_SPLIT_COEF_VAL_SHIFT                                0
#define TPC3_RTR_SPLIT_COEF_VAL_MASK                                 0xFFFF

#define mmTPC3_RTR_SPLIT_CFG                                         0xEC0440
/* TPC3_RTR_SPLIT_CFG */
#define TPC3_RTR_SPLIT_CFG_FORCE_WAK_ORDER_SHIFT                     0
#define TPC3_RTR_SPLIT_CFG_FORCE_WAK_ORDER_MASK                      0x1
#define TPC3_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_SHIFT                  1
#define TPC3_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_MASK                   0x2
#define TPC3_RTR_SPLIT_CFG_DEFAULT_MESH_SHIFT                        2
#define TPC3_RTR_SPLIT_CFG_DEFAULT_MESH_MASK                         0xC
#define TPC3_RTR_SPLIT_CFG_WR_RATE_LIM_EN_SHIFT                      4
#define TPC3_RTR_SPLIT_CFG_WR_RATE_LIM_EN_MASK                       0x10
#define TPC3_RTR_SPLIT_CFG_RD_RATE_LIM_EN_SHIFT                      5
#define TPC3_RTR_SPLIT_CFG_RD_RATE_LIM_EN_MASK                       0x20
#define TPC3_RTR_SPLIT_CFG_B2B_OPT_SHIFT                             6
#define TPC3_RTR_SPLIT_CFG_B2B_OPT_MASK                              0x1C0

#define mmTPC3_RTR_SPLIT_RD_SAT                                      0xEC0444
/* TPC3_RTR_SPLIT_RD_SAT */
#define TPC3_RTR_SPLIT_RD_SAT_VAL_SHIFT                              0
#define TPC3_RTR_SPLIT_RD_SAT_VAL_MASK                               0xFFFF

#define mmTPC3_RTR_SPLIT_RD_RST_TOKEN                                0xEC0448
/* TPC3_RTR_SPLIT_RD_RST_TOKEN */
#define TPC3_RTR_SPLIT_RD_RST_TOKEN_VAL_SHIFT                        0
#define TPC3_RTR_SPLIT_RD_RST_TOKEN_VAL_MASK                         0xFFFF

#define mmTPC3_RTR_SPLIT_RD_TIMEOUT_0                                0xEC044C

#define mmTPC3_RTR_SPLIT_RD_TIMEOUT_1                                0xEC0450
/* TPC3_RTR_SPLIT_RD_TIMEOUT */
#define TPC3_RTR_SPLIT_RD_TIMEOUT_VAL_SHIFT                          0
#define TPC3_RTR_SPLIT_RD_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmTPC3_RTR_SPLIT_WR_SAT                                      0xEC0454
/* TPC3_RTR_SPLIT_WR_SAT */
#define TPC3_RTR_SPLIT_WR_SAT_VAL_SHIFT                              0
#define TPC3_RTR_SPLIT_WR_SAT_VAL_MASK                               0xFFFF

#define mmTPC3_RTR_WPLIT_WR_TST_TOLEN                                0xEC0458
/* TPC3_RTR_WPLIT_WR_TST_TOLEN */
#define TPC3_RTR_WPLIT_WR_TST_TOLEN_VAL_SHIFT                        0
#define TPC3_RTR_WPLIT_WR_TST_TOLEN_VAL_MASK                         0xFFFF

#define mmTPC3_RTR_SPLIT_WR_TIMEOUT_0                                0xEC045C

#define mmTPC3_RTR_SPLIT_WR_TIMEOUT_1                                0xEC0460
/* TPC3_RTR_SPLIT_WR_TIMEOUT */
#define TPC3_RTR_SPLIT_WR_TIMEOUT_VAL_SHIFT                          0
#define TPC3_RTR_SPLIT_WR_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmTPC3_RTR_HBW_RANGE_HIT                                     0xEC0470
/* TPC3_RTR_HBW_RANGE_HIT */
#define TPC3_RTR_HBW_RANGE_HIT_IND_SHIFT                             0
#define TPC3_RTR_HBW_RANGE_HIT_IND_MASK                              0xFF

#define mmTPC3_RTR_HBW_RANGE_MASK_L_0                                0xEC0480

#define mmTPC3_RTR_HBW_RANGE_MASK_L_1                                0xEC0484

#define mmTPC3_RTR_HBW_RANGE_MASK_L_2                                0xEC0488

#define mmTPC3_RTR_HBW_RANGE_MASK_L_3                                0xEC048C

#define mmTPC3_RTR_HBW_RANGE_MASK_L_4                                0xEC0490

#define mmTPC3_RTR_HBW_RANGE_MASK_L_5                                0xEC0494

#define mmTPC3_RTR_HBW_RANGE_MASK_L_6                                0xEC0498

#define mmTPC3_RTR_HBW_RANGE_MASK_L_7                                0xEC049C
/* TPC3_RTR_HBW_RANGE_MASK_L */
#define TPC3_RTR_HBW_RANGE_MASK_L_VAL_SHIFT                          0
#define TPC3_RTR_HBW_RANGE_MASK_L_VAL_MASK                           0xFFFFFFFF

#define mmTPC3_RTR_HBW_RANGE_MASK_H_0                                0xEC04A0

#define mmTPC3_RTR_HBW_RANGE_MASK_H_1                                0xEC04A4

#define mmTPC3_RTR_HBW_RANGE_MASK_H_2                                0xEC04A8

#define mmTPC3_RTR_HBW_RANGE_MASK_H_3                                0xEC04AC

#define mmTPC3_RTR_HBW_RANGE_MASK_H_4                                0xEC04B0

#define mmTPC3_RTR_HBW_RANGE_MASK_H_5                                0xEC04B4

#define mmTPC3_RTR_HBW_RANGE_MASK_H_6                                0xEC04B8

#define mmTPC3_RTR_HBW_RANGE_MASK_H_7                                0xEC04BC
/* TPC3_RTR_HBW_RANGE_MASK_H */
#define TPC3_RTR_HBW_RANGE_MASK_H_VAL_SHIFT                          0
#define TPC3_RTR_HBW_RANGE_MASK_H_VAL_MASK                           0x3FFFF

#define mmTPC3_RTR_HBW_RANGE_BASE_L_0                                0xEC04C0

#define mmTPC3_RTR_HBW_RANGE_BASE_L_1                                0xEC04C4

#define mmTPC3_RTR_HBW_RANGE_BASE_L_2                                0xEC04C8

#define mmTPC3_RTR_HBW_RANGE_BASE_L_3                                0xEC04CC

#define mmTPC3_RTR_HBW_RANGE_BASE_L_4                                0xEC04D0

#define mmTPC3_RTR_HBW_RANGE_BASE_L_5                                0xEC04D4

#define mmTPC3_RTR_HBW_RANGE_BASE_L_6                                0xEC04D8

#define mmTPC3_RTR_HBW_RANGE_BASE_L_7                                0xEC04DC
/* TPC3_RTR_HBW_RANGE_BASE_L */
#define TPC3_RTR_HBW_RANGE_BASE_L_VAL_SHIFT                          0
#define TPC3_RTR_HBW_RANGE_BASE_L_VAL_MASK                           0xFFFFFFFF

#define mmTPC3_RTR_HBW_RANGE_BASE_H_0                                0xEC04E0

#define mmTPC3_RTR_HBW_RANGE_BASE_H_1                                0xEC04E4

#define mmTPC3_RTR_HBW_RANGE_BASE_H_2                                0xEC04E8

#define mmTPC3_RTR_HBW_RANGE_BASE_H_3                                0xEC04EC

#define mmTPC3_RTR_HBW_RANGE_BASE_H_4                                0xEC04F0

#define mmTPC3_RTR_HBW_RANGE_BASE_H_5                                0xEC04F4

#define mmTPC3_RTR_HBW_RANGE_BASE_H_6                                0xEC04F8

#define mmTPC3_RTR_HBW_RANGE_BASE_H_7                                0xEC04FC
/* TPC3_RTR_HBW_RANGE_BASE_H */
#define TPC3_RTR_HBW_RANGE_BASE_H_VAL_SHIFT                          0
#define TPC3_RTR_HBW_RANGE_BASE_H_VAL_MASK                           0x3FFFF

#define mmTPC3_RTR_LBW_RANGE_HIT                                     0xEC0500
/* TPC3_RTR_LBW_RANGE_HIT */
#define TPC3_RTR_LBW_RANGE_HIT_IND_SHIFT                             0
#define TPC3_RTR_LBW_RANGE_HIT_IND_MASK                              0xFFFF

#define mmTPC3_RTR_LBW_RANGE_MASK_0                                  0xEC0510

#define mmTPC3_RTR_LBW_RANGE_MASK_1                                  0xEC0514

#define mmTPC3_RTR_LBW_RANGE_MASK_2                                  0xEC0518

#define mmTPC3_RTR_LBW_RANGE_MASK_3                                  0xEC051C

#define mmTPC3_RTR_LBW_RANGE_MASK_4                                  0xEC0520

#define mmTPC3_RTR_LBW_RANGE_MASK_5                                  0xEC0524

#define mmTPC3_RTR_LBW_RANGE_MASK_6                                  0xEC0528

#define mmTPC3_RTR_LBW_RANGE_MASK_7                                  0xEC052C

#define mmTPC3_RTR_LBW_RANGE_MASK_8                                  0xEC0530

#define mmTPC3_RTR_LBW_RANGE_MASK_9                                  0xEC0534

#define mmTPC3_RTR_LBW_RANGE_MASK_10                                 0xEC0538

#define mmTPC3_RTR_LBW_RANGE_MASK_11                                 0xEC053C

#define mmTPC3_RTR_LBW_RANGE_MASK_12                                 0xEC0540

#define mmTPC3_RTR_LBW_RANGE_MASK_13                                 0xEC0544

#define mmTPC3_RTR_LBW_RANGE_MASK_14                                 0xEC0548

#define mmTPC3_RTR_LBW_RANGE_MASK_15                                 0xEC054C
/* TPC3_RTR_LBW_RANGE_MASK */
#define TPC3_RTR_LBW_RANGE_MASK_VAL_SHIFT                            0
#define TPC3_RTR_LBW_RANGE_MASK_VAL_MASK                             0x3FFFFFF

#define mmTPC3_RTR_LBW_RANGE_BASE_0                                  0xEC0550

#define mmTPC3_RTR_LBW_RANGE_BASE_1                                  0xEC0554

#define mmTPC3_RTR_LBW_RANGE_BASE_2                                  0xEC0558

#define mmTPC3_RTR_LBW_RANGE_BASE_3                                  0xEC055C

#define mmTPC3_RTR_LBW_RANGE_BASE_4                                  0xEC0560

#define mmTPC3_RTR_LBW_RANGE_BASE_5                                  0xEC0564

#define mmTPC3_RTR_LBW_RANGE_BASE_6                                  0xEC0568

#define mmTPC3_RTR_LBW_RANGE_BASE_7                                  0xEC056C

#define mmTPC3_RTR_LBW_RANGE_BASE_8                                  0xEC0570

#define mmTPC3_RTR_LBW_RANGE_BASE_9                                  0xEC0574

#define mmTPC3_RTR_LBW_RANGE_BASE_10                                 0xEC0578

#define mmTPC3_RTR_LBW_RANGE_BASE_11                                 0xEC057C

#define mmTPC3_RTR_LBW_RANGE_BASE_12                                 0xEC0580

#define mmTPC3_RTR_LBW_RANGE_BASE_13                                 0xEC0584

#define mmTPC3_RTR_LBW_RANGE_BASE_14                                 0xEC0588

#define mmTPC3_RTR_LBW_RANGE_BASE_15                                 0xEC058C
/* TPC3_RTR_LBW_RANGE_BASE */
#define TPC3_RTR_LBW_RANGE_BASE_VAL_SHIFT                            0
#define TPC3_RTR_LBW_RANGE_BASE_VAL_MASK                             0x3FFFFFF

#define mmTPC3_RTR_RGLTR                                             0xEC0590
/* TPC3_RTR_RGLTR */
#define TPC3_RTR_RGLTR_WR_EN_SHIFT                                   0
#define TPC3_RTR_RGLTR_WR_EN_MASK                                    0x1
#define TPC3_RTR_RGLTR_RD_EN_SHIFT                                   4
#define TPC3_RTR_RGLTR_RD_EN_MASK                                    0x10

#define mmTPC3_RTR_RGLTR_WR_RESULT                                   0xEC0594
/* TPC3_RTR_RGLTR_WR_RESULT */
#define TPC3_RTR_RGLTR_WR_RESULT_VAL_SHIFT                           0
#define TPC3_RTR_RGLTR_WR_RESULT_VAL_MASK                            0xFF

#define mmTPC3_RTR_RGLTR_RD_RESULT                                   0xEC0598
/* TPC3_RTR_RGLTR_RD_RESULT */
#define TPC3_RTR_RGLTR_RD_RESULT_VAL_SHIFT                           0
#define TPC3_RTR_RGLTR_RD_RESULT_VAL_MASK                            0xFF

#define mmTPC3_RTR_SCRAMB_EN                                         0xEC0600
/* TPC3_RTR_SCRAMB_EN */
#define TPC3_RTR_SCRAMB_EN_VAL_SHIFT                                 0
#define TPC3_RTR_SCRAMB_EN_VAL_MASK                                  0x1

#define mmTPC3_RTR_NON_LIN_SCRAMB                                    0xEC0604
/* TPC3_RTR_NON_LIN_SCRAMB */
#define TPC3_RTR_NON_LIN_SCRAMB_EN_SHIFT                             0
#define TPC3_RTR_NON_LIN_SCRAMB_EN_MASK                              0x1

#endif /* ASIC_REG_TPC3_RTR_H_ */

