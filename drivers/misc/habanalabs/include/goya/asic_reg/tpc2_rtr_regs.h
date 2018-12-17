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

#ifndef ASIC_REG_TPC2_RTR_H_
#define ASIC_REG_TPC2_RTR_H_

/*
 *****************************************
 *   TPC2_RTR (Prototype: TPC_RTR)
 *****************************************
 */

#define mmTPC2_RTR_HBW_RD_RQ_E_ARB                                   0xE80100
/* TPC2_RTR_HBW_RD_RQ_E_ARB */
#define TPC2_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                             0
#define TPC2_RTR_HBW_RD_RQ_E_ARB_W_MASK                              0x7
#define TPC2_RTR_HBW_RD_RQ_E_ARB_S_SHIFT                             8
#define TPC2_RTR_HBW_RD_RQ_E_ARB_S_MASK                              0x700
#define TPC2_RTR_HBW_RD_RQ_E_ARB_N_SHIFT                             16
#define TPC2_RTR_HBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define TPC2_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                             24
#define TPC2_RTR_HBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_HBW_RD_RQ_W_ARB                                   0xE80104
/* TPC2_RTR_HBW_RD_RQ_W_ARB */
#define TPC2_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                             0
#define TPC2_RTR_HBW_RD_RQ_W_ARB_E_MASK                              0x7
#define TPC2_RTR_HBW_RD_RQ_W_ARB_S_SHIFT                             8
#define TPC2_RTR_HBW_RD_RQ_W_ARB_S_MASK                              0x700
#define TPC2_RTR_HBW_RD_RQ_W_ARB_N_SHIFT                             16
#define TPC2_RTR_HBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define TPC2_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                             24
#define TPC2_RTR_HBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_HBW_RD_RQ_N_ARB                                   0xE80108
/* TPC2_RTR_HBW_RD_RQ_N_ARB */
#define TPC2_RTR_HBW_RD_RQ_N_ARB_W_SHIFT                             0
#define TPC2_RTR_HBW_RD_RQ_N_ARB_W_MASK                              0x7
#define TPC2_RTR_HBW_RD_RQ_N_ARB_E_SHIFT                             8
#define TPC2_RTR_HBW_RD_RQ_N_ARB_E_MASK                              0x700
#define TPC2_RTR_HBW_RD_RQ_N_ARB_S_SHIFT                             16
#define TPC2_RTR_HBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define TPC2_RTR_HBW_RD_RQ_N_ARB_L_SHIFT                             24
#define TPC2_RTR_HBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_HBW_RD_RQ_S_ARB                                   0xE8010C
/* TPC2_RTR_HBW_RD_RQ_S_ARB */
#define TPC2_RTR_HBW_RD_RQ_S_ARB_W_SHIFT                             0
#define TPC2_RTR_HBW_RD_RQ_S_ARB_W_MASK                              0x7
#define TPC2_RTR_HBW_RD_RQ_S_ARB_E_SHIFT                             8
#define TPC2_RTR_HBW_RD_RQ_S_ARB_E_MASK                              0x700
#define TPC2_RTR_HBW_RD_RQ_S_ARB_N_SHIFT                             16
#define TPC2_RTR_HBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define TPC2_RTR_HBW_RD_RQ_S_ARB_L_SHIFT                             24
#define TPC2_RTR_HBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_HBW_RD_RQ_L_ARB                                   0xE80110
/* TPC2_RTR_HBW_RD_RQ_L_ARB */
#define TPC2_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                             0
#define TPC2_RTR_HBW_RD_RQ_L_ARB_W_MASK                              0x7
#define TPC2_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                             8
#define TPC2_RTR_HBW_RD_RQ_L_ARB_E_MASK                              0x700
#define TPC2_RTR_HBW_RD_RQ_L_ARB_S_SHIFT                             16
#define TPC2_RTR_HBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define TPC2_RTR_HBW_RD_RQ_L_ARB_N_SHIFT                             24
#define TPC2_RTR_HBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC2_RTR_HBW_E_ARB_MAX                                     0xE80120
/* TPC2_RTR_HBW_E_ARB_MAX */
#define TPC2_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC2_RTR_HBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC2_RTR_HBW_W_ARB_MAX                                     0xE80124
/* TPC2_RTR_HBW_W_ARB_MAX */
#define TPC2_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC2_RTR_HBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC2_RTR_HBW_N_ARB_MAX                                     0xE80128
/* TPC2_RTR_HBW_N_ARB_MAX */
#define TPC2_RTR_HBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC2_RTR_HBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC2_RTR_HBW_S_ARB_MAX                                     0xE8012C
/* TPC2_RTR_HBW_S_ARB_MAX */
#define TPC2_RTR_HBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC2_RTR_HBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC2_RTR_HBW_L_ARB_MAX                                     0xE80130
/* TPC2_RTR_HBW_L_ARB_MAX */
#define TPC2_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC2_RTR_HBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC2_RTR_HBW_RD_RS_E_ARB                                   0xE80140
/* TPC2_RTR_HBW_RD_RS_E_ARB */
#define TPC2_RTR_HBW_RD_RS_E_ARB_W_SHIFT                             0
#define TPC2_RTR_HBW_RD_RS_E_ARB_W_MASK                              0x7
#define TPC2_RTR_HBW_RD_RS_E_ARB_S_SHIFT                             8
#define TPC2_RTR_HBW_RD_RS_E_ARB_S_MASK                              0x700
#define TPC2_RTR_HBW_RD_RS_E_ARB_N_SHIFT                             16
#define TPC2_RTR_HBW_RD_RS_E_ARB_N_MASK                              0x70000
#define TPC2_RTR_HBW_RD_RS_E_ARB_L_SHIFT                             24
#define TPC2_RTR_HBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_HBW_RD_RS_W_ARB                                   0xE80144
/* TPC2_RTR_HBW_RD_RS_W_ARB */
#define TPC2_RTR_HBW_RD_RS_W_ARB_E_SHIFT                             0
#define TPC2_RTR_HBW_RD_RS_W_ARB_E_MASK                              0x7
#define TPC2_RTR_HBW_RD_RS_W_ARB_S_SHIFT                             8
#define TPC2_RTR_HBW_RD_RS_W_ARB_S_MASK                              0x700
#define TPC2_RTR_HBW_RD_RS_W_ARB_N_SHIFT                             16
#define TPC2_RTR_HBW_RD_RS_W_ARB_N_MASK                              0x70000
#define TPC2_RTR_HBW_RD_RS_W_ARB_L_SHIFT                             24
#define TPC2_RTR_HBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_HBW_RD_RS_N_ARB                                   0xE80148
/* TPC2_RTR_HBW_RD_RS_N_ARB */
#define TPC2_RTR_HBW_RD_RS_N_ARB_W_SHIFT                             0
#define TPC2_RTR_HBW_RD_RS_N_ARB_W_MASK                              0x7
#define TPC2_RTR_HBW_RD_RS_N_ARB_E_SHIFT                             8
#define TPC2_RTR_HBW_RD_RS_N_ARB_E_MASK                              0x700
#define TPC2_RTR_HBW_RD_RS_N_ARB_S_SHIFT                             16
#define TPC2_RTR_HBW_RD_RS_N_ARB_S_MASK                              0x70000
#define TPC2_RTR_HBW_RD_RS_N_ARB_L_SHIFT                             24
#define TPC2_RTR_HBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_HBW_RD_RS_S_ARB                                   0xE8014C
/* TPC2_RTR_HBW_RD_RS_S_ARB */
#define TPC2_RTR_HBW_RD_RS_S_ARB_W_SHIFT                             0
#define TPC2_RTR_HBW_RD_RS_S_ARB_W_MASK                              0x7
#define TPC2_RTR_HBW_RD_RS_S_ARB_E_SHIFT                             8
#define TPC2_RTR_HBW_RD_RS_S_ARB_E_MASK                              0x700
#define TPC2_RTR_HBW_RD_RS_S_ARB_N_SHIFT                             16
#define TPC2_RTR_HBW_RD_RS_S_ARB_N_MASK                              0x70000
#define TPC2_RTR_HBW_RD_RS_S_ARB_L_SHIFT                             24
#define TPC2_RTR_HBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_HBW_RD_RS_L_ARB                                   0xE80150
/* TPC2_RTR_HBW_RD_RS_L_ARB */
#define TPC2_RTR_HBW_RD_RS_L_ARB_W_SHIFT                             0
#define TPC2_RTR_HBW_RD_RS_L_ARB_W_MASK                              0x7
#define TPC2_RTR_HBW_RD_RS_L_ARB_E_SHIFT                             8
#define TPC2_RTR_HBW_RD_RS_L_ARB_E_MASK                              0x700
#define TPC2_RTR_HBW_RD_RS_L_ARB_S_SHIFT                             16
#define TPC2_RTR_HBW_RD_RS_L_ARB_S_MASK                              0x70000
#define TPC2_RTR_HBW_RD_RS_L_ARB_N_SHIFT                             24
#define TPC2_RTR_HBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC2_RTR_HBW_WR_RQ_E_ARB                                   0xE80170
/* TPC2_RTR_HBW_WR_RQ_E_ARB */
#define TPC2_RTR_HBW_WR_RQ_E_ARB_W_SHIFT                             0
#define TPC2_RTR_HBW_WR_RQ_E_ARB_W_MASK                              0x7
#define TPC2_RTR_HBW_WR_RQ_E_ARB_S_SHIFT                             8
#define TPC2_RTR_HBW_WR_RQ_E_ARB_S_MASK                              0x700
#define TPC2_RTR_HBW_WR_RQ_E_ARB_N_SHIFT                             16
#define TPC2_RTR_HBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define TPC2_RTR_HBW_WR_RQ_E_ARB_L_SHIFT                             24
#define TPC2_RTR_HBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_HBW_WR_RQ_W_ARB                                   0xE80174
/* TPC2_RTR_HBW_WR_RQ_W_ARB */
#define TPC2_RTR_HBW_WR_RQ_W_ARB_E_SHIFT                             0
#define TPC2_RTR_HBW_WR_RQ_W_ARB_E_MASK                              0x7
#define TPC2_RTR_HBW_WR_RQ_W_ARB_S_SHIFT                             8
#define TPC2_RTR_HBW_WR_RQ_W_ARB_S_MASK                              0x700
#define TPC2_RTR_HBW_WR_RQ_W_ARB_N_SHIFT                             16
#define TPC2_RTR_HBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define TPC2_RTR_HBW_WR_RQ_W_ARB_L_SHIFT                             24
#define TPC2_RTR_HBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_HBW_WR_RQ_N_ARB                                   0xE80178
/* TPC2_RTR_HBW_WR_RQ_N_ARB */
#define TPC2_RTR_HBW_WR_RQ_N_ARB_W_SHIFT                             0
#define TPC2_RTR_HBW_WR_RQ_N_ARB_W_MASK                              0x7
#define TPC2_RTR_HBW_WR_RQ_N_ARB_E_SHIFT                             8
#define TPC2_RTR_HBW_WR_RQ_N_ARB_E_MASK                              0x700
#define TPC2_RTR_HBW_WR_RQ_N_ARB_S_SHIFT                             16
#define TPC2_RTR_HBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define TPC2_RTR_HBW_WR_RQ_N_ARB_L_SHIFT                             24
#define TPC2_RTR_HBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_HBW_WR_RQ_S_ARB                                   0xE8017C
/* TPC2_RTR_HBW_WR_RQ_S_ARB */
#define TPC2_RTR_HBW_WR_RQ_S_ARB_W_SHIFT                             0
#define TPC2_RTR_HBW_WR_RQ_S_ARB_W_MASK                              0x7
#define TPC2_RTR_HBW_WR_RQ_S_ARB_E_SHIFT                             8
#define TPC2_RTR_HBW_WR_RQ_S_ARB_E_MASK                              0x700
#define TPC2_RTR_HBW_WR_RQ_S_ARB_N_SHIFT                             16
#define TPC2_RTR_HBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define TPC2_RTR_HBW_WR_RQ_S_ARB_L_SHIFT                             24
#define TPC2_RTR_HBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_HBW_WR_RQ_L_ARB                                   0xE80180
/* TPC2_RTR_HBW_WR_RQ_L_ARB */
#define TPC2_RTR_HBW_WR_RQ_L_ARB_W_SHIFT                             0
#define TPC2_RTR_HBW_WR_RQ_L_ARB_W_MASK                              0x7
#define TPC2_RTR_HBW_WR_RQ_L_ARB_E_SHIFT                             8
#define TPC2_RTR_HBW_WR_RQ_L_ARB_E_MASK                              0x700
#define TPC2_RTR_HBW_WR_RQ_L_ARB_S_SHIFT                             16
#define TPC2_RTR_HBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define TPC2_RTR_HBW_WR_RQ_L_ARB_N_SHIFT                             24
#define TPC2_RTR_HBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC2_RTR_HBW_WR_RS_E_ARB                                   0xE80190
/* TPC2_RTR_HBW_WR_RS_E_ARB */
#define TPC2_RTR_HBW_WR_RS_E_ARB_W_SHIFT                             0
#define TPC2_RTR_HBW_WR_RS_E_ARB_W_MASK                              0x7
#define TPC2_RTR_HBW_WR_RS_E_ARB_S_SHIFT                             8
#define TPC2_RTR_HBW_WR_RS_E_ARB_S_MASK                              0x700
#define TPC2_RTR_HBW_WR_RS_E_ARB_N_SHIFT                             16
#define TPC2_RTR_HBW_WR_RS_E_ARB_N_MASK                              0x70000
#define TPC2_RTR_HBW_WR_RS_E_ARB_L_SHIFT                             24
#define TPC2_RTR_HBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_HBW_WR_RS_W_ARB                                   0xE80194
/* TPC2_RTR_HBW_WR_RS_W_ARB */
#define TPC2_RTR_HBW_WR_RS_W_ARB_E_SHIFT                             0
#define TPC2_RTR_HBW_WR_RS_W_ARB_E_MASK                              0x7
#define TPC2_RTR_HBW_WR_RS_W_ARB_S_SHIFT                             8
#define TPC2_RTR_HBW_WR_RS_W_ARB_S_MASK                              0x700
#define TPC2_RTR_HBW_WR_RS_W_ARB_N_SHIFT                             16
#define TPC2_RTR_HBW_WR_RS_W_ARB_N_MASK                              0x70000
#define TPC2_RTR_HBW_WR_RS_W_ARB_L_SHIFT                             24
#define TPC2_RTR_HBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_HBW_WR_RS_N_ARB                                   0xE80198
/* TPC2_RTR_HBW_WR_RS_N_ARB */
#define TPC2_RTR_HBW_WR_RS_N_ARB_W_SHIFT                             0
#define TPC2_RTR_HBW_WR_RS_N_ARB_W_MASK                              0x7
#define TPC2_RTR_HBW_WR_RS_N_ARB_E_SHIFT                             8
#define TPC2_RTR_HBW_WR_RS_N_ARB_E_MASK                              0x700
#define TPC2_RTR_HBW_WR_RS_N_ARB_S_SHIFT                             16
#define TPC2_RTR_HBW_WR_RS_N_ARB_S_MASK                              0x70000
#define TPC2_RTR_HBW_WR_RS_N_ARB_L_SHIFT                             24
#define TPC2_RTR_HBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_HBW_WR_RS_S_ARB                                   0xE8019C
/* TPC2_RTR_HBW_WR_RS_S_ARB */
#define TPC2_RTR_HBW_WR_RS_S_ARB_W_SHIFT                             0
#define TPC2_RTR_HBW_WR_RS_S_ARB_W_MASK                              0x7
#define TPC2_RTR_HBW_WR_RS_S_ARB_E_SHIFT                             8
#define TPC2_RTR_HBW_WR_RS_S_ARB_E_MASK                              0x700
#define TPC2_RTR_HBW_WR_RS_S_ARB_N_SHIFT                             16
#define TPC2_RTR_HBW_WR_RS_S_ARB_N_MASK                              0x70000
#define TPC2_RTR_HBW_WR_RS_S_ARB_L_SHIFT                             24
#define TPC2_RTR_HBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_HBW_WR_RS_L_ARB                                   0xE801A0
/* TPC2_RTR_HBW_WR_RS_L_ARB */
#define TPC2_RTR_HBW_WR_RS_L_ARB_W_SHIFT                             0
#define TPC2_RTR_HBW_WR_RS_L_ARB_W_MASK                              0x7
#define TPC2_RTR_HBW_WR_RS_L_ARB_E_SHIFT                             8
#define TPC2_RTR_HBW_WR_RS_L_ARB_E_MASK                              0x700
#define TPC2_RTR_HBW_WR_RS_L_ARB_S_SHIFT                             16
#define TPC2_RTR_HBW_WR_RS_L_ARB_S_MASK                              0x70000
#define TPC2_RTR_HBW_WR_RS_L_ARB_N_SHIFT                             24
#define TPC2_RTR_HBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC2_RTR_LBW_RD_RQ_E_ARB                                   0xE80200
/* TPC2_RTR_LBW_RD_RQ_E_ARB */
#define TPC2_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                             0
#define TPC2_RTR_LBW_RD_RQ_E_ARB_W_MASK                              0x7
#define TPC2_RTR_LBW_RD_RQ_E_ARB_S_SHIFT                             8
#define TPC2_RTR_LBW_RD_RQ_E_ARB_S_MASK                              0x700
#define TPC2_RTR_LBW_RD_RQ_E_ARB_N_SHIFT                             16
#define TPC2_RTR_LBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define TPC2_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                             24
#define TPC2_RTR_LBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_LBW_RD_RQ_W_ARB                                   0xE80204
/* TPC2_RTR_LBW_RD_RQ_W_ARB */
#define TPC2_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                             0
#define TPC2_RTR_LBW_RD_RQ_W_ARB_E_MASK                              0x7
#define TPC2_RTR_LBW_RD_RQ_W_ARB_S_SHIFT                             8
#define TPC2_RTR_LBW_RD_RQ_W_ARB_S_MASK                              0x700
#define TPC2_RTR_LBW_RD_RQ_W_ARB_N_SHIFT                             16
#define TPC2_RTR_LBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define TPC2_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                             24
#define TPC2_RTR_LBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_LBW_RD_RQ_N_ARB                                   0xE80208
/* TPC2_RTR_LBW_RD_RQ_N_ARB */
#define TPC2_RTR_LBW_RD_RQ_N_ARB_W_SHIFT                             0
#define TPC2_RTR_LBW_RD_RQ_N_ARB_W_MASK                              0x7
#define TPC2_RTR_LBW_RD_RQ_N_ARB_E_SHIFT                             8
#define TPC2_RTR_LBW_RD_RQ_N_ARB_E_MASK                              0x700
#define TPC2_RTR_LBW_RD_RQ_N_ARB_S_SHIFT                             16
#define TPC2_RTR_LBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define TPC2_RTR_LBW_RD_RQ_N_ARB_L_SHIFT                             24
#define TPC2_RTR_LBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_LBW_RD_RQ_S_ARB                                   0xE8020C
/* TPC2_RTR_LBW_RD_RQ_S_ARB */
#define TPC2_RTR_LBW_RD_RQ_S_ARB_W_SHIFT                             0
#define TPC2_RTR_LBW_RD_RQ_S_ARB_W_MASK                              0x7
#define TPC2_RTR_LBW_RD_RQ_S_ARB_E_SHIFT                             8
#define TPC2_RTR_LBW_RD_RQ_S_ARB_E_MASK                              0x700
#define TPC2_RTR_LBW_RD_RQ_S_ARB_N_SHIFT                             16
#define TPC2_RTR_LBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define TPC2_RTR_LBW_RD_RQ_S_ARB_L_SHIFT                             24
#define TPC2_RTR_LBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_LBW_RD_RQ_L_ARB                                   0xE80210
/* TPC2_RTR_LBW_RD_RQ_L_ARB */
#define TPC2_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                             0
#define TPC2_RTR_LBW_RD_RQ_L_ARB_W_MASK                              0x7
#define TPC2_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                             8
#define TPC2_RTR_LBW_RD_RQ_L_ARB_E_MASK                              0x700
#define TPC2_RTR_LBW_RD_RQ_L_ARB_S_SHIFT                             16
#define TPC2_RTR_LBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define TPC2_RTR_LBW_RD_RQ_L_ARB_N_SHIFT                             24
#define TPC2_RTR_LBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC2_RTR_LBW_E_ARB_MAX                                     0xE80220
/* TPC2_RTR_LBW_E_ARB_MAX */
#define TPC2_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC2_RTR_LBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC2_RTR_LBW_W_ARB_MAX                                     0xE80224
/* TPC2_RTR_LBW_W_ARB_MAX */
#define TPC2_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC2_RTR_LBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC2_RTR_LBW_N_ARB_MAX                                     0xE80228
/* TPC2_RTR_LBW_N_ARB_MAX */
#define TPC2_RTR_LBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC2_RTR_LBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC2_RTR_LBW_S_ARB_MAX                                     0xE8022C
/* TPC2_RTR_LBW_S_ARB_MAX */
#define TPC2_RTR_LBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC2_RTR_LBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC2_RTR_LBW_L_ARB_MAX                                     0xE80230
/* TPC2_RTR_LBW_L_ARB_MAX */
#define TPC2_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC2_RTR_LBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC2_RTR_LBW_RD_RS_E_ARB                                   0xE80250
/* TPC2_RTR_LBW_RD_RS_E_ARB */
#define TPC2_RTR_LBW_RD_RS_E_ARB_W_SHIFT                             0
#define TPC2_RTR_LBW_RD_RS_E_ARB_W_MASK                              0x7
#define TPC2_RTR_LBW_RD_RS_E_ARB_S_SHIFT                             8
#define TPC2_RTR_LBW_RD_RS_E_ARB_S_MASK                              0x700
#define TPC2_RTR_LBW_RD_RS_E_ARB_N_SHIFT                             16
#define TPC2_RTR_LBW_RD_RS_E_ARB_N_MASK                              0x70000
#define TPC2_RTR_LBW_RD_RS_E_ARB_L_SHIFT                             24
#define TPC2_RTR_LBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_LBW_RD_RS_W_ARB                                   0xE80254
/* TPC2_RTR_LBW_RD_RS_W_ARB */
#define TPC2_RTR_LBW_RD_RS_W_ARB_E_SHIFT                             0
#define TPC2_RTR_LBW_RD_RS_W_ARB_E_MASK                              0x7
#define TPC2_RTR_LBW_RD_RS_W_ARB_S_SHIFT                             8
#define TPC2_RTR_LBW_RD_RS_W_ARB_S_MASK                              0x700
#define TPC2_RTR_LBW_RD_RS_W_ARB_N_SHIFT                             16
#define TPC2_RTR_LBW_RD_RS_W_ARB_N_MASK                              0x70000
#define TPC2_RTR_LBW_RD_RS_W_ARB_L_SHIFT                             24
#define TPC2_RTR_LBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_LBW_RD_RS_N_ARB                                   0xE80258
/* TPC2_RTR_LBW_RD_RS_N_ARB */
#define TPC2_RTR_LBW_RD_RS_N_ARB_W_SHIFT                             0
#define TPC2_RTR_LBW_RD_RS_N_ARB_W_MASK                              0x7
#define TPC2_RTR_LBW_RD_RS_N_ARB_E_SHIFT                             8
#define TPC2_RTR_LBW_RD_RS_N_ARB_E_MASK                              0x700
#define TPC2_RTR_LBW_RD_RS_N_ARB_S_SHIFT                             16
#define TPC2_RTR_LBW_RD_RS_N_ARB_S_MASK                              0x70000
#define TPC2_RTR_LBW_RD_RS_N_ARB_L_SHIFT                             24
#define TPC2_RTR_LBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_LBW_RD_RS_S_ARB                                   0xE8025C
/* TPC2_RTR_LBW_RD_RS_S_ARB */
#define TPC2_RTR_LBW_RD_RS_S_ARB_W_SHIFT                             0
#define TPC2_RTR_LBW_RD_RS_S_ARB_W_MASK                              0x7
#define TPC2_RTR_LBW_RD_RS_S_ARB_E_SHIFT                             8
#define TPC2_RTR_LBW_RD_RS_S_ARB_E_MASK                              0x700
#define TPC2_RTR_LBW_RD_RS_S_ARB_N_SHIFT                             16
#define TPC2_RTR_LBW_RD_RS_S_ARB_N_MASK                              0x70000
#define TPC2_RTR_LBW_RD_RS_S_ARB_L_SHIFT                             24
#define TPC2_RTR_LBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_LBW_RD_RS_L_ARB                                   0xE80260
/* TPC2_RTR_LBW_RD_RS_L_ARB */
#define TPC2_RTR_LBW_RD_RS_L_ARB_W_SHIFT                             0
#define TPC2_RTR_LBW_RD_RS_L_ARB_W_MASK                              0x7
#define TPC2_RTR_LBW_RD_RS_L_ARB_E_SHIFT                             8
#define TPC2_RTR_LBW_RD_RS_L_ARB_E_MASK                              0x700
#define TPC2_RTR_LBW_RD_RS_L_ARB_S_SHIFT                             16
#define TPC2_RTR_LBW_RD_RS_L_ARB_S_MASK                              0x70000
#define TPC2_RTR_LBW_RD_RS_L_ARB_N_SHIFT                             24
#define TPC2_RTR_LBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC2_RTR_LBW_WR_RQ_E_ARB                                   0xE80270
/* TPC2_RTR_LBW_WR_RQ_E_ARB */
#define TPC2_RTR_LBW_WR_RQ_E_ARB_W_SHIFT                             0
#define TPC2_RTR_LBW_WR_RQ_E_ARB_W_MASK                              0x7
#define TPC2_RTR_LBW_WR_RQ_E_ARB_S_SHIFT                             8
#define TPC2_RTR_LBW_WR_RQ_E_ARB_S_MASK                              0x700
#define TPC2_RTR_LBW_WR_RQ_E_ARB_N_SHIFT                             16
#define TPC2_RTR_LBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define TPC2_RTR_LBW_WR_RQ_E_ARB_L_SHIFT                             24
#define TPC2_RTR_LBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_LBW_WR_RQ_W_ARB                                   0xE80274
/* TPC2_RTR_LBW_WR_RQ_W_ARB */
#define TPC2_RTR_LBW_WR_RQ_W_ARB_E_SHIFT                             0
#define TPC2_RTR_LBW_WR_RQ_W_ARB_E_MASK                              0x7
#define TPC2_RTR_LBW_WR_RQ_W_ARB_S_SHIFT                             8
#define TPC2_RTR_LBW_WR_RQ_W_ARB_S_MASK                              0x700
#define TPC2_RTR_LBW_WR_RQ_W_ARB_N_SHIFT                             16
#define TPC2_RTR_LBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define TPC2_RTR_LBW_WR_RQ_W_ARB_L_SHIFT                             24
#define TPC2_RTR_LBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_LBW_WR_RQ_N_ARB                                   0xE80278
/* TPC2_RTR_LBW_WR_RQ_N_ARB */
#define TPC2_RTR_LBW_WR_RQ_N_ARB_W_SHIFT                             0
#define TPC2_RTR_LBW_WR_RQ_N_ARB_W_MASK                              0x7
#define TPC2_RTR_LBW_WR_RQ_N_ARB_E_SHIFT                             8
#define TPC2_RTR_LBW_WR_RQ_N_ARB_E_MASK                              0x700
#define TPC2_RTR_LBW_WR_RQ_N_ARB_S_SHIFT                             16
#define TPC2_RTR_LBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define TPC2_RTR_LBW_WR_RQ_N_ARB_L_SHIFT                             24
#define TPC2_RTR_LBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_LBW_WR_RQ_S_ARB                                   0xE8027C
/* TPC2_RTR_LBW_WR_RQ_S_ARB */
#define TPC2_RTR_LBW_WR_RQ_S_ARB_W_SHIFT                             0
#define TPC2_RTR_LBW_WR_RQ_S_ARB_W_MASK                              0x7
#define TPC2_RTR_LBW_WR_RQ_S_ARB_E_SHIFT                             8
#define TPC2_RTR_LBW_WR_RQ_S_ARB_E_MASK                              0x700
#define TPC2_RTR_LBW_WR_RQ_S_ARB_N_SHIFT                             16
#define TPC2_RTR_LBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define TPC2_RTR_LBW_WR_RQ_S_ARB_L_SHIFT                             24
#define TPC2_RTR_LBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_LBW_WR_RQ_L_ARB                                   0xE80280
/* TPC2_RTR_LBW_WR_RQ_L_ARB */
#define TPC2_RTR_LBW_WR_RQ_L_ARB_W_SHIFT                             0
#define TPC2_RTR_LBW_WR_RQ_L_ARB_W_MASK                              0x7
#define TPC2_RTR_LBW_WR_RQ_L_ARB_E_SHIFT                             8
#define TPC2_RTR_LBW_WR_RQ_L_ARB_E_MASK                              0x700
#define TPC2_RTR_LBW_WR_RQ_L_ARB_S_SHIFT                             16
#define TPC2_RTR_LBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define TPC2_RTR_LBW_WR_RQ_L_ARB_N_SHIFT                             24
#define TPC2_RTR_LBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC2_RTR_LBW_WR_RS_E_ARB                                   0xE80290
/* TPC2_RTR_LBW_WR_RS_E_ARB */
#define TPC2_RTR_LBW_WR_RS_E_ARB_W_SHIFT                             0
#define TPC2_RTR_LBW_WR_RS_E_ARB_W_MASK                              0x7
#define TPC2_RTR_LBW_WR_RS_E_ARB_S_SHIFT                             8
#define TPC2_RTR_LBW_WR_RS_E_ARB_S_MASK                              0x700
#define TPC2_RTR_LBW_WR_RS_E_ARB_N_SHIFT                             16
#define TPC2_RTR_LBW_WR_RS_E_ARB_N_MASK                              0x70000
#define TPC2_RTR_LBW_WR_RS_E_ARB_L_SHIFT                             24
#define TPC2_RTR_LBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_LBW_WR_RS_W_ARB                                   0xE80294
/* TPC2_RTR_LBW_WR_RS_W_ARB */
#define TPC2_RTR_LBW_WR_RS_W_ARB_E_SHIFT                             0
#define TPC2_RTR_LBW_WR_RS_W_ARB_E_MASK                              0x7
#define TPC2_RTR_LBW_WR_RS_W_ARB_S_SHIFT                             8
#define TPC2_RTR_LBW_WR_RS_W_ARB_S_MASK                              0x700
#define TPC2_RTR_LBW_WR_RS_W_ARB_N_SHIFT                             16
#define TPC2_RTR_LBW_WR_RS_W_ARB_N_MASK                              0x70000
#define TPC2_RTR_LBW_WR_RS_W_ARB_L_SHIFT                             24
#define TPC2_RTR_LBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_LBW_WR_RS_N_ARB                                   0xE80298
/* TPC2_RTR_LBW_WR_RS_N_ARB */
#define TPC2_RTR_LBW_WR_RS_N_ARB_W_SHIFT                             0
#define TPC2_RTR_LBW_WR_RS_N_ARB_W_MASK                              0x7
#define TPC2_RTR_LBW_WR_RS_N_ARB_E_SHIFT                             8
#define TPC2_RTR_LBW_WR_RS_N_ARB_E_MASK                              0x700
#define TPC2_RTR_LBW_WR_RS_N_ARB_S_SHIFT                             16
#define TPC2_RTR_LBW_WR_RS_N_ARB_S_MASK                              0x70000
#define TPC2_RTR_LBW_WR_RS_N_ARB_L_SHIFT                             24
#define TPC2_RTR_LBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_LBW_WR_RS_S_ARB                                   0xE8029C
/* TPC2_RTR_LBW_WR_RS_S_ARB */
#define TPC2_RTR_LBW_WR_RS_S_ARB_W_SHIFT                             0
#define TPC2_RTR_LBW_WR_RS_S_ARB_W_MASK                              0x7
#define TPC2_RTR_LBW_WR_RS_S_ARB_E_SHIFT                             8
#define TPC2_RTR_LBW_WR_RS_S_ARB_E_MASK                              0x700
#define TPC2_RTR_LBW_WR_RS_S_ARB_N_SHIFT                             16
#define TPC2_RTR_LBW_WR_RS_S_ARB_N_MASK                              0x70000
#define TPC2_RTR_LBW_WR_RS_S_ARB_L_SHIFT                             24
#define TPC2_RTR_LBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC2_RTR_LBW_WR_RS_L_ARB                                   0xE802A0
/* TPC2_RTR_LBW_WR_RS_L_ARB */
#define TPC2_RTR_LBW_WR_RS_L_ARB_W_SHIFT                             0
#define TPC2_RTR_LBW_WR_RS_L_ARB_W_MASK                              0x7
#define TPC2_RTR_LBW_WR_RS_L_ARB_E_SHIFT                             8
#define TPC2_RTR_LBW_WR_RS_L_ARB_E_MASK                              0x700
#define TPC2_RTR_LBW_WR_RS_L_ARB_S_SHIFT                             16
#define TPC2_RTR_LBW_WR_RS_L_ARB_S_MASK                              0x70000
#define TPC2_RTR_LBW_WR_RS_L_ARB_N_SHIFT                             24
#define TPC2_RTR_LBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC2_RTR_DBG_E_ARB                                         0xE80300
/* TPC2_RTR_DBG_E_ARB */
#define TPC2_RTR_DBG_E_ARB_W_SHIFT                                   0
#define TPC2_RTR_DBG_E_ARB_W_MASK                                    0x7
#define TPC2_RTR_DBG_E_ARB_S_SHIFT                                   8
#define TPC2_RTR_DBG_E_ARB_S_MASK                                    0x700
#define TPC2_RTR_DBG_E_ARB_N_SHIFT                                   16
#define TPC2_RTR_DBG_E_ARB_N_MASK                                    0x70000
#define TPC2_RTR_DBG_E_ARB_L_SHIFT                                   24
#define TPC2_RTR_DBG_E_ARB_L_MASK                                    0x7000000

#define mmTPC2_RTR_DBG_W_ARB                                         0xE80304
/* TPC2_RTR_DBG_W_ARB */
#define TPC2_RTR_DBG_W_ARB_E_SHIFT                                   0
#define TPC2_RTR_DBG_W_ARB_E_MASK                                    0x7
#define TPC2_RTR_DBG_W_ARB_S_SHIFT                                   8
#define TPC2_RTR_DBG_W_ARB_S_MASK                                    0x700
#define TPC2_RTR_DBG_W_ARB_N_SHIFT                                   16
#define TPC2_RTR_DBG_W_ARB_N_MASK                                    0x70000
#define TPC2_RTR_DBG_W_ARB_L_SHIFT                                   24
#define TPC2_RTR_DBG_W_ARB_L_MASK                                    0x7000000

#define mmTPC2_RTR_DBG_N_ARB                                         0xE80308
/* TPC2_RTR_DBG_N_ARB */
#define TPC2_RTR_DBG_N_ARB_W_SHIFT                                   0
#define TPC2_RTR_DBG_N_ARB_W_MASK                                    0x7
#define TPC2_RTR_DBG_N_ARB_E_SHIFT                                   8
#define TPC2_RTR_DBG_N_ARB_E_MASK                                    0x700
#define TPC2_RTR_DBG_N_ARB_S_SHIFT                                   16
#define TPC2_RTR_DBG_N_ARB_S_MASK                                    0x70000
#define TPC2_RTR_DBG_N_ARB_L_SHIFT                                   24
#define TPC2_RTR_DBG_N_ARB_L_MASK                                    0x7000000

#define mmTPC2_RTR_DBG_S_ARB                                         0xE8030C
/* TPC2_RTR_DBG_S_ARB */
#define TPC2_RTR_DBG_S_ARB_W_SHIFT                                   0
#define TPC2_RTR_DBG_S_ARB_W_MASK                                    0x7
#define TPC2_RTR_DBG_S_ARB_E_SHIFT                                   8
#define TPC2_RTR_DBG_S_ARB_E_MASK                                    0x700
#define TPC2_RTR_DBG_S_ARB_N_SHIFT                                   16
#define TPC2_RTR_DBG_S_ARB_N_MASK                                    0x70000
#define TPC2_RTR_DBG_S_ARB_L_SHIFT                                   24
#define TPC2_RTR_DBG_S_ARB_L_MASK                                    0x7000000

#define mmTPC2_RTR_DBG_L_ARB                                         0xE80310
/* TPC2_RTR_DBG_L_ARB */
#define TPC2_RTR_DBG_L_ARB_W_SHIFT                                   0
#define TPC2_RTR_DBG_L_ARB_W_MASK                                    0x7
#define TPC2_RTR_DBG_L_ARB_E_SHIFT                                   8
#define TPC2_RTR_DBG_L_ARB_E_MASK                                    0x700
#define TPC2_RTR_DBG_L_ARB_S_SHIFT                                   16
#define TPC2_RTR_DBG_L_ARB_S_MASK                                    0x70000
#define TPC2_RTR_DBG_L_ARB_N_SHIFT                                   24
#define TPC2_RTR_DBG_L_ARB_N_MASK                                    0x7000000

#define mmTPC2_RTR_DBG_E_ARB_MAX                                     0xE80320
/* TPC2_RTR_DBG_E_ARB_MAX */
#define TPC2_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC2_RTR_DBG_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC2_RTR_DBG_W_ARB_MAX                                     0xE80324
/* TPC2_RTR_DBG_W_ARB_MAX */
#define TPC2_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC2_RTR_DBG_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC2_RTR_DBG_N_ARB_MAX                                     0xE80328
/* TPC2_RTR_DBG_N_ARB_MAX */
#define TPC2_RTR_DBG_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC2_RTR_DBG_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC2_RTR_DBG_S_ARB_MAX                                     0xE8032C
/* TPC2_RTR_DBG_S_ARB_MAX */
#define TPC2_RTR_DBG_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC2_RTR_DBG_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC2_RTR_DBG_L_ARB_MAX                                     0xE80330
/* TPC2_RTR_DBG_L_ARB_MAX */
#define TPC2_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC2_RTR_DBG_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC2_RTR_SPLIT_COEF_0                                      0xE80400

#define mmTPC2_RTR_SPLIT_COEF_1                                      0xE80404

#define mmTPC2_RTR_SPLIT_COEF_2                                      0xE80408

#define mmTPC2_RTR_SPLIT_COEF_3                                      0xE8040C

#define mmTPC2_RTR_SPLIT_COEF_4                                      0xE80410

#define mmTPC2_RTR_SPLIT_COEF_5                                      0xE80414

#define mmTPC2_RTR_SPLIT_COEF_6                                      0xE80418

#define mmTPC2_RTR_SPLIT_COEF_7                                      0xE8041C

#define mmTPC2_RTR_SPLIT_COEF_8                                      0xE80420

#define mmTPC2_RTR_SPLIT_COEF_9                                      0xE80424
/* TPC2_RTR_SPLIT_COEF */
#define TPC2_RTR_SPLIT_COEF_VAL_SHIFT                                0
#define TPC2_RTR_SPLIT_COEF_VAL_MASK                                 0xFFFF

#define mmTPC2_RTR_SPLIT_CFG                                         0xE80440
/* TPC2_RTR_SPLIT_CFG */
#define TPC2_RTR_SPLIT_CFG_FORCE_WAK_ORDER_SHIFT                     0
#define TPC2_RTR_SPLIT_CFG_FORCE_WAK_ORDER_MASK                      0x1
#define TPC2_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_SHIFT                  1
#define TPC2_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_MASK                   0x2
#define TPC2_RTR_SPLIT_CFG_DEFAULT_MESH_SHIFT                        2
#define TPC2_RTR_SPLIT_CFG_DEFAULT_MESH_MASK                         0xC
#define TPC2_RTR_SPLIT_CFG_WR_RATE_LIM_EN_SHIFT                      4
#define TPC2_RTR_SPLIT_CFG_WR_RATE_LIM_EN_MASK                       0x10
#define TPC2_RTR_SPLIT_CFG_RD_RATE_LIM_EN_SHIFT                      5
#define TPC2_RTR_SPLIT_CFG_RD_RATE_LIM_EN_MASK                       0x20
#define TPC2_RTR_SPLIT_CFG_B2B_OPT_SHIFT                             6
#define TPC2_RTR_SPLIT_CFG_B2B_OPT_MASK                              0x1C0

#define mmTPC2_RTR_SPLIT_RD_SAT                                      0xE80444
/* TPC2_RTR_SPLIT_RD_SAT */
#define TPC2_RTR_SPLIT_RD_SAT_VAL_SHIFT                              0
#define TPC2_RTR_SPLIT_RD_SAT_VAL_MASK                               0xFFFF

#define mmTPC2_RTR_SPLIT_RD_RST_TOKEN                                0xE80448
/* TPC2_RTR_SPLIT_RD_RST_TOKEN */
#define TPC2_RTR_SPLIT_RD_RST_TOKEN_VAL_SHIFT                        0
#define TPC2_RTR_SPLIT_RD_RST_TOKEN_VAL_MASK                         0xFFFF

#define mmTPC2_RTR_SPLIT_RD_TIMEOUT_0                                0xE8044C

#define mmTPC2_RTR_SPLIT_RD_TIMEOUT_1                                0xE80450
/* TPC2_RTR_SPLIT_RD_TIMEOUT */
#define TPC2_RTR_SPLIT_RD_TIMEOUT_VAL_SHIFT                          0
#define TPC2_RTR_SPLIT_RD_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmTPC2_RTR_SPLIT_WR_SAT                                      0xE80454
/* TPC2_RTR_SPLIT_WR_SAT */
#define TPC2_RTR_SPLIT_WR_SAT_VAL_SHIFT                              0
#define TPC2_RTR_SPLIT_WR_SAT_VAL_MASK                               0xFFFF

#define mmTPC2_RTR_WPLIT_WR_TST_TOLEN                                0xE80458
/* TPC2_RTR_WPLIT_WR_TST_TOLEN */
#define TPC2_RTR_WPLIT_WR_TST_TOLEN_VAL_SHIFT                        0
#define TPC2_RTR_WPLIT_WR_TST_TOLEN_VAL_MASK                         0xFFFF

#define mmTPC2_RTR_SPLIT_WR_TIMEOUT_0                                0xE8045C

#define mmTPC2_RTR_SPLIT_WR_TIMEOUT_1                                0xE80460
/* TPC2_RTR_SPLIT_WR_TIMEOUT */
#define TPC2_RTR_SPLIT_WR_TIMEOUT_VAL_SHIFT                          0
#define TPC2_RTR_SPLIT_WR_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmTPC2_RTR_HBW_RANGE_HIT                                     0xE80470
/* TPC2_RTR_HBW_RANGE_HIT */
#define TPC2_RTR_HBW_RANGE_HIT_IND_SHIFT                             0
#define TPC2_RTR_HBW_RANGE_HIT_IND_MASK                              0xFF

#define mmTPC2_RTR_HBW_RANGE_MASK_L_0                                0xE80480

#define mmTPC2_RTR_HBW_RANGE_MASK_L_1                                0xE80484

#define mmTPC2_RTR_HBW_RANGE_MASK_L_2                                0xE80488

#define mmTPC2_RTR_HBW_RANGE_MASK_L_3                                0xE8048C

#define mmTPC2_RTR_HBW_RANGE_MASK_L_4                                0xE80490

#define mmTPC2_RTR_HBW_RANGE_MASK_L_5                                0xE80494

#define mmTPC2_RTR_HBW_RANGE_MASK_L_6                                0xE80498

#define mmTPC2_RTR_HBW_RANGE_MASK_L_7                                0xE8049C
/* TPC2_RTR_HBW_RANGE_MASK_L */
#define TPC2_RTR_HBW_RANGE_MASK_L_VAL_SHIFT                          0
#define TPC2_RTR_HBW_RANGE_MASK_L_VAL_MASK                           0xFFFFFFFF

#define mmTPC2_RTR_HBW_RANGE_MASK_H_0                                0xE804A0

#define mmTPC2_RTR_HBW_RANGE_MASK_H_1                                0xE804A4

#define mmTPC2_RTR_HBW_RANGE_MASK_H_2                                0xE804A8

#define mmTPC2_RTR_HBW_RANGE_MASK_H_3                                0xE804AC

#define mmTPC2_RTR_HBW_RANGE_MASK_H_4                                0xE804B0

#define mmTPC2_RTR_HBW_RANGE_MASK_H_5                                0xE804B4

#define mmTPC2_RTR_HBW_RANGE_MASK_H_6                                0xE804B8

#define mmTPC2_RTR_HBW_RANGE_MASK_H_7                                0xE804BC
/* TPC2_RTR_HBW_RANGE_MASK_H */
#define TPC2_RTR_HBW_RANGE_MASK_H_VAL_SHIFT                          0
#define TPC2_RTR_HBW_RANGE_MASK_H_VAL_MASK                           0x3FFFF

#define mmTPC2_RTR_HBW_RANGE_BASE_L_0                                0xE804C0

#define mmTPC2_RTR_HBW_RANGE_BASE_L_1                                0xE804C4

#define mmTPC2_RTR_HBW_RANGE_BASE_L_2                                0xE804C8

#define mmTPC2_RTR_HBW_RANGE_BASE_L_3                                0xE804CC

#define mmTPC2_RTR_HBW_RANGE_BASE_L_4                                0xE804D0

#define mmTPC2_RTR_HBW_RANGE_BASE_L_5                                0xE804D4

#define mmTPC2_RTR_HBW_RANGE_BASE_L_6                                0xE804D8

#define mmTPC2_RTR_HBW_RANGE_BASE_L_7                                0xE804DC
/* TPC2_RTR_HBW_RANGE_BASE_L */
#define TPC2_RTR_HBW_RANGE_BASE_L_VAL_SHIFT                          0
#define TPC2_RTR_HBW_RANGE_BASE_L_VAL_MASK                           0xFFFFFFFF

#define mmTPC2_RTR_HBW_RANGE_BASE_H_0                                0xE804E0

#define mmTPC2_RTR_HBW_RANGE_BASE_H_1                                0xE804E4

#define mmTPC2_RTR_HBW_RANGE_BASE_H_2                                0xE804E8

#define mmTPC2_RTR_HBW_RANGE_BASE_H_3                                0xE804EC

#define mmTPC2_RTR_HBW_RANGE_BASE_H_4                                0xE804F0

#define mmTPC2_RTR_HBW_RANGE_BASE_H_5                                0xE804F4

#define mmTPC2_RTR_HBW_RANGE_BASE_H_6                                0xE804F8

#define mmTPC2_RTR_HBW_RANGE_BASE_H_7                                0xE804FC
/* TPC2_RTR_HBW_RANGE_BASE_H */
#define TPC2_RTR_HBW_RANGE_BASE_H_VAL_SHIFT                          0
#define TPC2_RTR_HBW_RANGE_BASE_H_VAL_MASK                           0x3FFFF

#define mmTPC2_RTR_LBW_RANGE_HIT                                     0xE80500
/* TPC2_RTR_LBW_RANGE_HIT */
#define TPC2_RTR_LBW_RANGE_HIT_IND_SHIFT                             0
#define TPC2_RTR_LBW_RANGE_HIT_IND_MASK                              0xFFFF

#define mmTPC2_RTR_LBW_RANGE_MASK_0                                  0xE80510

#define mmTPC2_RTR_LBW_RANGE_MASK_1                                  0xE80514

#define mmTPC2_RTR_LBW_RANGE_MASK_2                                  0xE80518

#define mmTPC2_RTR_LBW_RANGE_MASK_3                                  0xE8051C

#define mmTPC2_RTR_LBW_RANGE_MASK_4                                  0xE80520

#define mmTPC2_RTR_LBW_RANGE_MASK_5                                  0xE80524

#define mmTPC2_RTR_LBW_RANGE_MASK_6                                  0xE80528

#define mmTPC2_RTR_LBW_RANGE_MASK_7                                  0xE8052C

#define mmTPC2_RTR_LBW_RANGE_MASK_8                                  0xE80530

#define mmTPC2_RTR_LBW_RANGE_MASK_9                                  0xE80534

#define mmTPC2_RTR_LBW_RANGE_MASK_10                                 0xE80538

#define mmTPC2_RTR_LBW_RANGE_MASK_11                                 0xE8053C

#define mmTPC2_RTR_LBW_RANGE_MASK_12                                 0xE80540

#define mmTPC2_RTR_LBW_RANGE_MASK_13                                 0xE80544

#define mmTPC2_RTR_LBW_RANGE_MASK_14                                 0xE80548

#define mmTPC2_RTR_LBW_RANGE_MASK_15                                 0xE8054C
/* TPC2_RTR_LBW_RANGE_MASK */
#define TPC2_RTR_LBW_RANGE_MASK_VAL_SHIFT                            0
#define TPC2_RTR_LBW_RANGE_MASK_VAL_MASK                             0x3FFFFFF

#define mmTPC2_RTR_LBW_RANGE_BASE_0                                  0xE80550

#define mmTPC2_RTR_LBW_RANGE_BASE_1                                  0xE80554

#define mmTPC2_RTR_LBW_RANGE_BASE_2                                  0xE80558

#define mmTPC2_RTR_LBW_RANGE_BASE_3                                  0xE8055C

#define mmTPC2_RTR_LBW_RANGE_BASE_4                                  0xE80560

#define mmTPC2_RTR_LBW_RANGE_BASE_5                                  0xE80564

#define mmTPC2_RTR_LBW_RANGE_BASE_6                                  0xE80568

#define mmTPC2_RTR_LBW_RANGE_BASE_7                                  0xE8056C

#define mmTPC2_RTR_LBW_RANGE_BASE_8                                  0xE80570

#define mmTPC2_RTR_LBW_RANGE_BASE_9                                  0xE80574

#define mmTPC2_RTR_LBW_RANGE_BASE_10                                 0xE80578

#define mmTPC2_RTR_LBW_RANGE_BASE_11                                 0xE8057C

#define mmTPC2_RTR_LBW_RANGE_BASE_12                                 0xE80580

#define mmTPC2_RTR_LBW_RANGE_BASE_13                                 0xE80584

#define mmTPC2_RTR_LBW_RANGE_BASE_14                                 0xE80588

#define mmTPC2_RTR_LBW_RANGE_BASE_15                                 0xE8058C
/* TPC2_RTR_LBW_RANGE_BASE */
#define TPC2_RTR_LBW_RANGE_BASE_VAL_SHIFT                            0
#define TPC2_RTR_LBW_RANGE_BASE_VAL_MASK                             0x3FFFFFF

#define mmTPC2_RTR_RGLTR                                             0xE80590
/* TPC2_RTR_RGLTR */
#define TPC2_RTR_RGLTR_WR_EN_SHIFT                                   0
#define TPC2_RTR_RGLTR_WR_EN_MASK                                    0x1
#define TPC2_RTR_RGLTR_RD_EN_SHIFT                                   4
#define TPC2_RTR_RGLTR_RD_EN_MASK                                    0x10

#define mmTPC2_RTR_RGLTR_WR_RESULT                                   0xE80594
/* TPC2_RTR_RGLTR_WR_RESULT */
#define TPC2_RTR_RGLTR_WR_RESULT_VAL_SHIFT                           0
#define TPC2_RTR_RGLTR_WR_RESULT_VAL_MASK                            0xFF

#define mmTPC2_RTR_RGLTR_RD_RESULT                                   0xE80598
/* TPC2_RTR_RGLTR_RD_RESULT */
#define TPC2_RTR_RGLTR_RD_RESULT_VAL_SHIFT                           0
#define TPC2_RTR_RGLTR_RD_RESULT_VAL_MASK                            0xFF

#define mmTPC2_RTR_SCRAMB_EN                                         0xE80600
/* TPC2_RTR_SCRAMB_EN */
#define TPC2_RTR_SCRAMB_EN_VAL_SHIFT                                 0
#define TPC2_RTR_SCRAMB_EN_VAL_MASK                                  0x1

#define mmTPC2_RTR_NON_LIN_SCRAMB                                    0xE80604
/* TPC2_RTR_NON_LIN_SCRAMB */
#define TPC2_RTR_NON_LIN_SCRAMB_EN_SHIFT                             0
#define TPC2_RTR_NON_LIN_SCRAMB_EN_MASK                              0x1

#endif /* ASIC_REG_TPC2_RTR_H_ */

