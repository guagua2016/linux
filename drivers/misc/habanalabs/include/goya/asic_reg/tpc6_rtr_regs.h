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

#ifndef ASIC_REG_TPC6_RTR_H_
#define ASIC_REG_TPC6_RTR_H_

/*
 *****************************************
 *   TPC6_RTR (Prototype: TPC_RTR)
 *****************************************
 */

#define mmTPC6_RTR_HBW_RD_RQ_E_ARB                                   0xF80100
/* TPC6_RTR_HBW_RD_RQ_E_ARB */
#define TPC6_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                             0
#define TPC6_RTR_HBW_RD_RQ_E_ARB_W_MASK                              0x7
#define TPC6_RTR_HBW_RD_RQ_E_ARB_S_SHIFT                             8
#define TPC6_RTR_HBW_RD_RQ_E_ARB_S_MASK                              0x700
#define TPC6_RTR_HBW_RD_RQ_E_ARB_N_SHIFT                             16
#define TPC6_RTR_HBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define TPC6_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                             24
#define TPC6_RTR_HBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_HBW_RD_RQ_W_ARB                                   0xF80104
/* TPC6_RTR_HBW_RD_RQ_W_ARB */
#define TPC6_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                             0
#define TPC6_RTR_HBW_RD_RQ_W_ARB_E_MASK                              0x7
#define TPC6_RTR_HBW_RD_RQ_W_ARB_S_SHIFT                             8
#define TPC6_RTR_HBW_RD_RQ_W_ARB_S_MASK                              0x700
#define TPC6_RTR_HBW_RD_RQ_W_ARB_N_SHIFT                             16
#define TPC6_RTR_HBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define TPC6_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                             24
#define TPC6_RTR_HBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_HBW_RD_RQ_N_ARB                                   0xF80108
/* TPC6_RTR_HBW_RD_RQ_N_ARB */
#define TPC6_RTR_HBW_RD_RQ_N_ARB_W_SHIFT                             0
#define TPC6_RTR_HBW_RD_RQ_N_ARB_W_MASK                              0x7
#define TPC6_RTR_HBW_RD_RQ_N_ARB_E_SHIFT                             8
#define TPC6_RTR_HBW_RD_RQ_N_ARB_E_MASK                              0x700
#define TPC6_RTR_HBW_RD_RQ_N_ARB_S_SHIFT                             16
#define TPC6_RTR_HBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define TPC6_RTR_HBW_RD_RQ_N_ARB_L_SHIFT                             24
#define TPC6_RTR_HBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_HBW_RD_RQ_S_ARB                                   0xF8010C
/* TPC6_RTR_HBW_RD_RQ_S_ARB */
#define TPC6_RTR_HBW_RD_RQ_S_ARB_W_SHIFT                             0
#define TPC6_RTR_HBW_RD_RQ_S_ARB_W_MASK                              0x7
#define TPC6_RTR_HBW_RD_RQ_S_ARB_E_SHIFT                             8
#define TPC6_RTR_HBW_RD_RQ_S_ARB_E_MASK                              0x700
#define TPC6_RTR_HBW_RD_RQ_S_ARB_N_SHIFT                             16
#define TPC6_RTR_HBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define TPC6_RTR_HBW_RD_RQ_S_ARB_L_SHIFT                             24
#define TPC6_RTR_HBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_HBW_RD_RQ_L_ARB                                   0xF80110
/* TPC6_RTR_HBW_RD_RQ_L_ARB */
#define TPC6_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                             0
#define TPC6_RTR_HBW_RD_RQ_L_ARB_W_MASK                              0x7
#define TPC6_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                             8
#define TPC6_RTR_HBW_RD_RQ_L_ARB_E_MASK                              0x700
#define TPC6_RTR_HBW_RD_RQ_L_ARB_S_SHIFT                             16
#define TPC6_RTR_HBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define TPC6_RTR_HBW_RD_RQ_L_ARB_N_SHIFT                             24
#define TPC6_RTR_HBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC6_RTR_HBW_E_ARB_MAX                                     0xF80120
/* TPC6_RTR_HBW_E_ARB_MAX */
#define TPC6_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC6_RTR_HBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC6_RTR_HBW_W_ARB_MAX                                     0xF80124
/* TPC6_RTR_HBW_W_ARB_MAX */
#define TPC6_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC6_RTR_HBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC6_RTR_HBW_N_ARB_MAX                                     0xF80128
/* TPC6_RTR_HBW_N_ARB_MAX */
#define TPC6_RTR_HBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC6_RTR_HBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC6_RTR_HBW_S_ARB_MAX                                     0xF8012C
/* TPC6_RTR_HBW_S_ARB_MAX */
#define TPC6_RTR_HBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC6_RTR_HBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC6_RTR_HBW_L_ARB_MAX                                     0xF80130
/* TPC6_RTR_HBW_L_ARB_MAX */
#define TPC6_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC6_RTR_HBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC6_RTR_HBW_RD_RS_E_ARB                                   0xF80140
/* TPC6_RTR_HBW_RD_RS_E_ARB */
#define TPC6_RTR_HBW_RD_RS_E_ARB_W_SHIFT                             0
#define TPC6_RTR_HBW_RD_RS_E_ARB_W_MASK                              0x7
#define TPC6_RTR_HBW_RD_RS_E_ARB_S_SHIFT                             8
#define TPC6_RTR_HBW_RD_RS_E_ARB_S_MASK                              0x700
#define TPC6_RTR_HBW_RD_RS_E_ARB_N_SHIFT                             16
#define TPC6_RTR_HBW_RD_RS_E_ARB_N_MASK                              0x70000
#define TPC6_RTR_HBW_RD_RS_E_ARB_L_SHIFT                             24
#define TPC6_RTR_HBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_HBW_RD_RS_W_ARB                                   0xF80144
/* TPC6_RTR_HBW_RD_RS_W_ARB */
#define TPC6_RTR_HBW_RD_RS_W_ARB_E_SHIFT                             0
#define TPC6_RTR_HBW_RD_RS_W_ARB_E_MASK                              0x7
#define TPC6_RTR_HBW_RD_RS_W_ARB_S_SHIFT                             8
#define TPC6_RTR_HBW_RD_RS_W_ARB_S_MASK                              0x700
#define TPC6_RTR_HBW_RD_RS_W_ARB_N_SHIFT                             16
#define TPC6_RTR_HBW_RD_RS_W_ARB_N_MASK                              0x70000
#define TPC6_RTR_HBW_RD_RS_W_ARB_L_SHIFT                             24
#define TPC6_RTR_HBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_HBW_RD_RS_N_ARB                                   0xF80148
/* TPC6_RTR_HBW_RD_RS_N_ARB */
#define TPC6_RTR_HBW_RD_RS_N_ARB_W_SHIFT                             0
#define TPC6_RTR_HBW_RD_RS_N_ARB_W_MASK                              0x7
#define TPC6_RTR_HBW_RD_RS_N_ARB_E_SHIFT                             8
#define TPC6_RTR_HBW_RD_RS_N_ARB_E_MASK                              0x700
#define TPC6_RTR_HBW_RD_RS_N_ARB_S_SHIFT                             16
#define TPC6_RTR_HBW_RD_RS_N_ARB_S_MASK                              0x70000
#define TPC6_RTR_HBW_RD_RS_N_ARB_L_SHIFT                             24
#define TPC6_RTR_HBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_HBW_RD_RS_S_ARB                                   0xF8014C
/* TPC6_RTR_HBW_RD_RS_S_ARB */
#define TPC6_RTR_HBW_RD_RS_S_ARB_W_SHIFT                             0
#define TPC6_RTR_HBW_RD_RS_S_ARB_W_MASK                              0x7
#define TPC6_RTR_HBW_RD_RS_S_ARB_E_SHIFT                             8
#define TPC6_RTR_HBW_RD_RS_S_ARB_E_MASK                              0x700
#define TPC6_RTR_HBW_RD_RS_S_ARB_N_SHIFT                             16
#define TPC6_RTR_HBW_RD_RS_S_ARB_N_MASK                              0x70000
#define TPC6_RTR_HBW_RD_RS_S_ARB_L_SHIFT                             24
#define TPC6_RTR_HBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_HBW_RD_RS_L_ARB                                   0xF80150
/* TPC6_RTR_HBW_RD_RS_L_ARB */
#define TPC6_RTR_HBW_RD_RS_L_ARB_W_SHIFT                             0
#define TPC6_RTR_HBW_RD_RS_L_ARB_W_MASK                              0x7
#define TPC6_RTR_HBW_RD_RS_L_ARB_E_SHIFT                             8
#define TPC6_RTR_HBW_RD_RS_L_ARB_E_MASK                              0x700
#define TPC6_RTR_HBW_RD_RS_L_ARB_S_SHIFT                             16
#define TPC6_RTR_HBW_RD_RS_L_ARB_S_MASK                              0x70000
#define TPC6_RTR_HBW_RD_RS_L_ARB_N_SHIFT                             24
#define TPC6_RTR_HBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC6_RTR_HBW_WR_RQ_E_ARB                                   0xF80170
/* TPC6_RTR_HBW_WR_RQ_E_ARB */
#define TPC6_RTR_HBW_WR_RQ_E_ARB_W_SHIFT                             0
#define TPC6_RTR_HBW_WR_RQ_E_ARB_W_MASK                              0x7
#define TPC6_RTR_HBW_WR_RQ_E_ARB_S_SHIFT                             8
#define TPC6_RTR_HBW_WR_RQ_E_ARB_S_MASK                              0x700
#define TPC6_RTR_HBW_WR_RQ_E_ARB_N_SHIFT                             16
#define TPC6_RTR_HBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define TPC6_RTR_HBW_WR_RQ_E_ARB_L_SHIFT                             24
#define TPC6_RTR_HBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_HBW_WR_RQ_W_ARB                                   0xF80174
/* TPC6_RTR_HBW_WR_RQ_W_ARB */
#define TPC6_RTR_HBW_WR_RQ_W_ARB_E_SHIFT                             0
#define TPC6_RTR_HBW_WR_RQ_W_ARB_E_MASK                              0x7
#define TPC6_RTR_HBW_WR_RQ_W_ARB_S_SHIFT                             8
#define TPC6_RTR_HBW_WR_RQ_W_ARB_S_MASK                              0x700
#define TPC6_RTR_HBW_WR_RQ_W_ARB_N_SHIFT                             16
#define TPC6_RTR_HBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define TPC6_RTR_HBW_WR_RQ_W_ARB_L_SHIFT                             24
#define TPC6_RTR_HBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_HBW_WR_RQ_N_ARB                                   0xF80178
/* TPC6_RTR_HBW_WR_RQ_N_ARB */
#define TPC6_RTR_HBW_WR_RQ_N_ARB_W_SHIFT                             0
#define TPC6_RTR_HBW_WR_RQ_N_ARB_W_MASK                              0x7
#define TPC6_RTR_HBW_WR_RQ_N_ARB_E_SHIFT                             8
#define TPC6_RTR_HBW_WR_RQ_N_ARB_E_MASK                              0x700
#define TPC6_RTR_HBW_WR_RQ_N_ARB_S_SHIFT                             16
#define TPC6_RTR_HBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define TPC6_RTR_HBW_WR_RQ_N_ARB_L_SHIFT                             24
#define TPC6_RTR_HBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_HBW_WR_RQ_S_ARB                                   0xF8017C
/* TPC6_RTR_HBW_WR_RQ_S_ARB */
#define TPC6_RTR_HBW_WR_RQ_S_ARB_W_SHIFT                             0
#define TPC6_RTR_HBW_WR_RQ_S_ARB_W_MASK                              0x7
#define TPC6_RTR_HBW_WR_RQ_S_ARB_E_SHIFT                             8
#define TPC6_RTR_HBW_WR_RQ_S_ARB_E_MASK                              0x700
#define TPC6_RTR_HBW_WR_RQ_S_ARB_N_SHIFT                             16
#define TPC6_RTR_HBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define TPC6_RTR_HBW_WR_RQ_S_ARB_L_SHIFT                             24
#define TPC6_RTR_HBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_HBW_WR_RQ_L_ARB                                   0xF80180
/* TPC6_RTR_HBW_WR_RQ_L_ARB */
#define TPC6_RTR_HBW_WR_RQ_L_ARB_W_SHIFT                             0
#define TPC6_RTR_HBW_WR_RQ_L_ARB_W_MASK                              0x7
#define TPC6_RTR_HBW_WR_RQ_L_ARB_E_SHIFT                             8
#define TPC6_RTR_HBW_WR_RQ_L_ARB_E_MASK                              0x700
#define TPC6_RTR_HBW_WR_RQ_L_ARB_S_SHIFT                             16
#define TPC6_RTR_HBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define TPC6_RTR_HBW_WR_RQ_L_ARB_N_SHIFT                             24
#define TPC6_RTR_HBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC6_RTR_HBW_WR_RS_E_ARB                                   0xF80190
/* TPC6_RTR_HBW_WR_RS_E_ARB */
#define TPC6_RTR_HBW_WR_RS_E_ARB_W_SHIFT                             0
#define TPC6_RTR_HBW_WR_RS_E_ARB_W_MASK                              0x7
#define TPC6_RTR_HBW_WR_RS_E_ARB_S_SHIFT                             8
#define TPC6_RTR_HBW_WR_RS_E_ARB_S_MASK                              0x700
#define TPC6_RTR_HBW_WR_RS_E_ARB_N_SHIFT                             16
#define TPC6_RTR_HBW_WR_RS_E_ARB_N_MASK                              0x70000
#define TPC6_RTR_HBW_WR_RS_E_ARB_L_SHIFT                             24
#define TPC6_RTR_HBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_HBW_WR_RS_W_ARB                                   0xF80194
/* TPC6_RTR_HBW_WR_RS_W_ARB */
#define TPC6_RTR_HBW_WR_RS_W_ARB_E_SHIFT                             0
#define TPC6_RTR_HBW_WR_RS_W_ARB_E_MASK                              0x7
#define TPC6_RTR_HBW_WR_RS_W_ARB_S_SHIFT                             8
#define TPC6_RTR_HBW_WR_RS_W_ARB_S_MASK                              0x700
#define TPC6_RTR_HBW_WR_RS_W_ARB_N_SHIFT                             16
#define TPC6_RTR_HBW_WR_RS_W_ARB_N_MASK                              0x70000
#define TPC6_RTR_HBW_WR_RS_W_ARB_L_SHIFT                             24
#define TPC6_RTR_HBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_HBW_WR_RS_N_ARB                                   0xF80198
/* TPC6_RTR_HBW_WR_RS_N_ARB */
#define TPC6_RTR_HBW_WR_RS_N_ARB_W_SHIFT                             0
#define TPC6_RTR_HBW_WR_RS_N_ARB_W_MASK                              0x7
#define TPC6_RTR_HBW_WR_RS_N_ARB_E_SHIFT                             8
#define TPC6_RTR_HBW_WR_RS_N_ARB_E_MASK                              0x700
#define TPC6_RTR_HBW_WR_RS_N_ARB_S_SHIFT                             16
#define TPC6_RTR_HBW_WR_RS_N_ARB_S_MASK                              0x70000
#define TPC6_RTR_HBW_WR_RS_N_ARB_L_SHIFT                             24
#define TPC6_RTR_HBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_HBW_WR_RS_S_ARB                                   0xF8019C
/* TPC6_RTR_HBW_WR_RS_S_ARB */
#define TPC6_RTR_HBW_WR_RS_S_ARB_W_SHIFT                             0
#define TPC6_RTR_HBW_WR_RS_S_ARB_W_MASK                              0x7
#define TPC6_RTR_HBW_WR_RS_S_ARB_E_SHIFT                             8
#define TPC6_RTR_HBW_WR_RS_S_ARB_E_MASK                              0x700
#define TPC6_RTR_HBW_WR_RS_S_ARB_N_SHIFT                             16
#define TPC6_RTR_HBW_WR_RS_S_ARB_N_MASK                              0x70000
#define TPC6_RTR_HBW_WR_RS_S_ARB_L_SHIFT                             24
#define TPC6_RTR_HBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_HBW_WR_RS_L_ARB                                   0xF801A0
/* TPC6_RTR_HBW_WR_RS_L_ARB */
#define TPC6_RTR_HBW_WR_RS_L_ARB_W_SHIFT                             0
#define TPC6_RTR_HBW_WR_RS_L_ARB_W_MASK                              0x7
#define TPC6_RTR_HBW_WR_RS_L_ARB_E_SHIFT                             8
#define TPC6_RTR_HBW_WR_RS_L_ARB_E_MASK                              0x700
#define TPC6_RTR_HBW_WR_RS_L_ARB_S_SHIFT                             16
#define TPC6_RTR_HBW_WR_RS_L_ARB_S_MASK                              0x70000
#define TPC6_RTR_HBW_WR_RS_L_ARB_N_SHIFT                             24
#define TPC6_RTR_HBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC6_RTR_LBW_RD_RQ_E_ARB                                   0xF80200
/* TPC6_RTR_LBW_RD_RQ_E_ARB */
#define TPC6_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                             0
#define TPC6_RTR_LBW_RD_RQ_E_ARB_W_MASK                              0x7
#define TPC6_RTR_LBW_RD_RQ_E_ARB_S_SHIFT                             8
#define TPC6_RTR_LBW_RD_RQ_E_ARB_S_MASK                              0x700
#define TPC6_RTR_LBW_RD_RQ_E_ARB_N_SHIFT                             16
#define TPC6_RTR_LBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define TPC6_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                             24
#define TPC6_RTR_LBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_LBW_RD_RQ_W_ARB                                   0xF80204
/* TPC6_RTR_LBW_RD_RQ_W_ARB */
#define TPC6_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                             0
#define TPC6_RTR_LBW_RD_RQ_W_ARB_E_MASK                              0x7
#define TPC6_RTR_LBW_RD_RQ_W_ARB_S_SHIFT                             8
#define TPC6_RTR_LBW_RD_RQ_W_ARB_S_MASK                              0x700
#define TPC6_RTR_LBW_RD_RQ_W_ARB_N_SHIFT                             16
#define TPC6_RTR_LBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define TPC6_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                             24
#define TPC6_RTR_LBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_LBW_RD_RQ_N_ARB                                   0xF80208
/* TPC6_RTR_LBW_RD_RQ_N_ARB */
#define TPC6_RTR_LBW_RD_RQ_N_ARB_W_SHIFT                             0
#define TPC6_RTR_LBW_RD_RQ_N_ARB_W_MASK                              0x7
#define TPC6_RTR_LBW_RD_RQ_N_ARB_E_SHIFT                             8
#define TPC6_RTR_LBW_RD_RQ_N_ARB_E_MASK                              0x700
#define TPC6_RTR_LBW_RD_RQ_N_ARB_S_SHIFT                             16
#define TPC6_RTR_LBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define TPC6_RTR_LBW_RD_RQ_N_ARB_L_SHIFT                             24
#define TPC6_RTR_LBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_LBW_RD_RQ_S_ARB                                   0xF8020C
/* TPC6_RTR_LBW_RD_RQ_S_ARB */
#define TPC6_RTR_LBW_RD_RQ_S_ARB_W_SHIFT                             0
#define TPC6_RTR_LBW_RD_RQ_S_ARB_W_MASK                              0x7
#define TPC6_RTR_LBW_RD_RQ_S_ARB_E_SHIFT                             8
#define TPC6_RTR_LBW_RD_RQ_S_ARB_E_MASK                              0x700
#define TPC6_RTR_LBW_RD_RQ_S_ARB_N_SHIFT                             16
#define TPC6_RTR_LBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define TPC6_RTR_LBW_RD_RQ_S_ARB_L_SHIFT                             24
#define TPC6_RTR_LBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_LBW_RD_RQ_L_ARB                                   0xF80210
/* TPC6_RTR_LBW_RD_RQ_L_ARB */
#define TPC6_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                             0
#define TPC6_RTR_LBW_RD_RQ_L_ARB_W_MASK                              0x7
#define TPC6_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                             8
#define TPC6_RTR_LBW_RD_RQ_L_ARB_E_MASK                              0x700
#define TPC6_RTR_LBW_RD_RQ_L_ARB_S_SHIFT                             16
#define TPC6_RTR_LBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define TPC6_RTR_LBW_RD_RQ_L_ARB_N_SHIFT                             24
#define TPC6_RTR_LBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC6_RTR_LBW_E_ARB_MAX                                     0xF80220
/* TPC6_RTR_LBW_E_ARB_MAX */
#define TPC6_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC6_RTR_LBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC6_RTR_LBW_W_ARB_MAX                                     0xF80224
/* TPC6_RTR_LBW_W_ARB_MAX */
#define TPC6_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC6_RTR_LBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC6_RTR_LBW_N_ARB_MAX                                     0xF80228
/* TPC6_RTR_LBW_N_ARB_MAX */
#define TPC6_RTR_LBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC6_RTR_LBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC6_RTR_LBW_S_ARB_MAX                                     0xF8022C
/* TPC6_RTR_LBW_S_ARB_MAX */
#define TPC6_RTR_LBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC6_RTR_LBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC6_RTR_LBW_L_ARB_MAX                                     0xF80230
/* TPC6_RTR_LBW_L_ARB_MAX */
#define TPC6_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC6_RTR_LBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC6_RTR_LBW_RD_RS_E_ARB                                   0xF80250
/* TPC6_RTR_LBW_RD_RS_E_ARB */
#define TPC6_RTR_LBW_RD_RS_E_ARB_W_SHIFT                             0
#define TPC6_RTR_LBW_RD_RS_E_ARB_W_MASK                              0x7
#define TPC6_RTR_LBW_RD_RS_E_ARB_S_SHIFT                             8
#define TPC6_RTR_LBW_RD_RS_E_ARB_S_MASK                              0x700
#define TPC6_RTR_LBW_RD_RS_E_ARB_N_SHIFT                             16
#define TPC6_RTR_LBW_RD_RS_E_ARB_N_MASK                              0x70000
#define TPC6_RTR_LBW_RD_RS_E_ARB_L_SHIFT                             24
#define TPC6_RTR_LBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_LBW_RD_RS_W_ARB                                   0xF80254
/* TPC6_RTR_LBW_RD_RS_W_ARB */
#define TPC6_RTR_LBW_RD_RS_W_ARB_E_SHIFT                             0
#define TPC6_RTR_LBW_RD_RS_W_ARB_E_MASK                              0x7
#define TPC6_RTR_LBW_RD_RS_W_ARB_S_SHIFT                             8
#define TPC6_RTR_LBW_RD_RS_W_ARB_S_MASK                              0x700
#define TPC6_RTR_LBW_RD_RS_W_ARB_N_SHIFT                             16
#define TPC6_RTR_LBW_RD_RS_W_ARB_N_MASK                              0x70000
#define TPC6_RTR_LBW_RD_RS_W_ARB_L_SHIFT                             24
#define TPC6_RTR_LBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_LBW_RD_RS_N_ARB                                   0xF80258
/* TPC6_RTR_LBW_RD_RS_N_ARB */
#define TPC6_RTR_LBW_RD_RS_N_ARB_W_SHIFT                             0
#define TPC6_RTR_LBW_RD_RS_N_ARB_W_MASK                              0x7
#define TPC6_RTR_LBW_RD_RS_N_ARB_E_SHIFT                             8
#define TPC6_RTR_LBW_RD_RS_N_ARB_E_MASK                              0x700
#define TPC6_RTR_LBW_RD_RS_N_ARB_S_SHIFT                             16
#define TPC6_RTR_LBW_RD_RS_N_ARB_S_MASK                              0x70000
#define TPC6_RTR_LBW_RD_RS_N_ARB_L_SHIFT                             24
#define TPC6_RTR_LBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_LBW_RD_RS_S_ARB                                   0xF8025C
/* TPC6_RTR_LBW_RD_RS_S_ARB */
#define TPC6_RTR_LBW_RD_RS_S_ARB_W_SHIFT                             0
#define TPC6_RTR_LBW_RD_RS_S_ARB_W_MASK                              0x7
#define TPC6_RTR_LBW_RD_RS_S_ARB_E_SHIFT                             8
#define TPC6_RTR_LBW_RD_RS_S_ARB_E_MASK                              0x700
#define TPC6_RTR_LBW_RD_RS_S_ARB_N_SHIFT                             16
#define TPC6_RTR_LBW_RD_RS_S_ARB_N_MASK                              0x70000
#define TPC6_RTR_LBW_RD_RS_S_ARB_L_SHIFT                             24
#define TPC6_RTR_LBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_LBW_RD_RS_L_ARB                                   0xF80260
/* TPC6_RTR_LBW_RD_RS_L_ARB */
#define TPC6_RTR_LBW_RD_RS_L_ARB_W_SHIFT                             0
#define TPC6_RTR_LBW_RD_RS_L_ARB_W_MASK                              0x7
#define TPC6_RTR_LBW_RD_RS_L_ARB_E_SHIFT                             8
#define TPC6_RTR_LBW_RD_RS_L_ARB_E_MASK                              0x700
#define TPC6_RTR_LBW_RD_RS_L_ARB_S_SHIFT                             16
#define TPC6_RTR_LBW_RD_RS_L_ARB_S_MASK                              0x70000
#define TPC6_RTR_LBW_RD_RS_L_ARB_N_SHIFT                             24
#define TPC6_RTR_LBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC6_RTR_LBW_WR_RQ_E_ARB                                   0xF80270
/* TPC6_RTR_LBW_WR_RQ_E_ARB */
#define TPC6_RTR_LBW_WR_RQ_E_ARB_W_SHIFT                             0
#define TPC6_RTR_LBW_WR_RQ_E_ARB_W_MASK                              0x7
#define TPC6_RTR_LBW_WR_RQ_E_ARB_S_SHIFT                             8
#define TPC6_RTR_LBW_WR_RQ_E_ARB_S_MASK                              0x700
#define TPC6_RTR_LBW_WR_RQ_E_ARB_N_SHIFT                             16
#define TPC6_RTR_LBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define TPC6_RTR_LBW_WR_RQ_E_ARB_L_SHIFT                             24
#define TPC6_RTR_LBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_LBW_WR_RQ_W_ARB                                   0xF80274
/* TPC6_RTR_LBW_WR_RQ_W_ARB */
#define TPC6_RTR_LBW_WR_RQ_W_ARB_E_SHIFT                             0
#define TPC6_RTR_LBW_WR_RQ_W_ARB_E_MASK                              0x7
#define TPC6_RTR_LBW_WR_RQ_W_ARB_S_SHIFT                             8
#define TPC6_RTR_LBW_WR_RQ_W_ARB_S_MASK                              0x700
#define TPC6_RTR_LBW_WR_RQ_W_ARB_N_SHIFT                             16
#define TPC6_RTR_LBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define TPC6_RTR_LBW_WR_RQ_W_ARB_L_SHIFT                             24
#define TPC6_RTR_LBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_LBW_WR_RQ_N_ARB                                   0xF80278
/* TPC6_RTR_LBW_WR_RQ_N_ARB */
#define TPC6_RTR_LBW_WR_RQ_N_ARB_W_SHIFT                             0
#define TPC6_RTR_LBW_WR_RQ_N_ARB_W_MASK                              0x7
#define TPC6_RTR_LBW_WR_RQ_N_ARB_E_SHIFT                             8
#define TPC6_RTR_LBW_WR_RQ_N_ARB_E_MASK                              0x700
#define TPC6_RTR_LBW_WR_RQ_N_ARB_S_SHIFT                             16
#define TPC6_RTR_LBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define TPC6_RTR_LBW_WR_RQ_N_ARB_L_SHIFT                             24
#define TPC6_RTR_LBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_LBW_WR_RQ_S_ARB                                   0xF8027C
/* TPC6_RTR_LBW_WR_RQ_S_ARB */
#define TPC6_RTR_LBW_WR_RQ_S_ARB_W_SHIFT                             0
#define TPC6_RTR_LBW_WR_RQ_S_ARB_W_MASK                              0x7
#define TPC6_RTR_LBW_WR_RQ_S_ARB_E_SHIFT                             8
#define TPC6_RTR_LBW_WR_RQ_S_ARB_E_MASK                              0x700
#define TPC6_RTR_LBW_WR_RQ_S_ARB_N_SHIFT                             16
#define TPC6_RTR_LBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define TPC6_RTR_LBW_WR_RQ_S_ARB_L_SHIFT                             24
#define TPC6_RTR_LBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_LBW_WR_RQ_L_ARB                                   0xF80280
/* TPC6_RTR_LBW_WR_RQ_L_ARB */
#define TPC6_RTR_LBW_WR_RQ_L_ARB_W_SHIFT                             0
#define TPC6_RTR_LBW_WR_RQ_L_ARB_W_MASK                              0x7
#define TPC6_RTR_LBW_WR_RQ_L_ARB_E_SHIFT                             8
#define TPC6_RTR_LBW_WR_RQ_L_ARB_E_MASK                              0x700
#define TPC6_RTR_LBW_WR_RQ_L_ARB_S_SHIFT                             16
#define TPC6_RTR_LBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define TPC6_RTR_LBW_WR_RQ_L_ARB_N_SHIFT                             24
#define TPC6_RTR_LBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmTPC6_RTR_LBW_WR_RS_E_ARB                                   0xF80290
/* TPC6_RTR_LBW_WR_RS_E_ARB */
#define TPC6_RTR_LBW_WR_RS_E_ARB_W_SHIFT                             0
#define TPC6_RTR_LBW_WR_RS_E_ARB_W_MASK                              0x7
#define TPC6_RTR_LBW_WR_RS_E_ARB_S_SHIFT                             8
#define TPC6_RTR_LBW_WR_RS_E_ARB_S_MASK                              0x700
#define TPC6_RTR_LBW_WR_RS_E_ARB_N_SHIFT                             16
#define TPC6_RTR_LBW_WR_RS_E_ARB_N_MASK                              0x70000
#define TPC6_RTR_LBW_WR_RS_E_ARB_L_SHIFT                             24
#define TPC6_RTR_LBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_LBW_WR_RS_W_ARB                                   0xF80294
/* TPC6_RTR_LBW_WR_RS_W_ARB */
#define TPC6_RTR_LBW_WR_RS_W_ARB_E_SHIFT                             0
#define TPC6_RTR_LBW_WR_RS_W_ARB_E_MASK                              0x7
#define TPC6_RTR_LBW_WR_RS_W_ARB_S_SHIFT                             8
#define TPC6_RTR_LBW_WR_RS_W_ARB_S_MASK                              0x700
#define TPC6_RTR_LBW_WR_RS_W_ARB_N_SHIFT                             16
#define TPC6_RTR_LBW_WR_RS_W_ARB_N_MASK                              0x70000
#define TPC6_RTR_LBW_WR_RS_W_ARB_L_SHIFT                             24
#define TPC6_RTR_LBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_LBW_WR_RS_N_ARB                                   0xF80298
/* TPC6_RTR_LBW_WR_RS_N_ARB */
#define TPC6_RTR_LBW_WR_RS_N_ARB_W_SHIFT                             0
#define TPC6_RTR_LBW_WR_RS_N_ARB_W_MASK                              0x7
#define TPC6_RTR_LBW_WR_RS_N_ARB_E_SHIFT                             8
#define TPC6_RTR_LBW_WR_RS_N_ARB_E_MASK                              0x700
#define TPC6_RTR_LBW_WR_RS_N_ARB_S_SHIFT                             16
#define TPC6_RTR_LBW_WR_RS_N_ARB_S_MASK                              0x70000
#define TPC6_RTR_LBW_WR_RS_N_ARB_L_SHIFT                             24
#define TPC6_RTR_LBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_LBW_WR_RS_S_ARB                                   0xF8029C
/* TPC6_RTR_LBW_WR_RS_S_ARB */
#define TPC6_RTR_LBW_WR_RS_S_ARB_W_SHIFT                             0
#define TPC6_RTR_LBW_WR_RS_S_ARB_W_MASK                              0x7
#define TPC6_RTR_LBW_WR_RS_S_ARB_E_SHIFT                             8
#define TPC6_RTR_LBW_WR_RS_S_ARB_E_MASK                              0x700
#define TPC6_RTR_LBW_WR_RS_S_ARB_N_SHIFT                             16
#define TPC6_RTR_LBW_WR_RS_S_ARB_N_MASK                              0x70000
#define TPC6_RTR_LBW_WR_RS_S_ARB_L_SHIFT                             24
#define TPC6_RTR_LBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmTPC6_RTR_LBW_WR_RS_L_ARB                                   0xF802A0
/* TPC6_RTR_LBW_WR_RS_L_ARB */
#define TPC6_RTR_LBW_WR_RS_L_ARB_W_SHIFT                             0
#define TPC6_RTR_LBW_WR_RS_L_ARB_W_MASK                              0x7
#define TPC6_RTR_LBW_WR_RS_L_ARB_E_SHIFT                             8
#define TPC6_RTR_LBW_WR_RS_L_ARB_E_MASK                              0x700
#define TPC6_RTR_LBW_WR_RS_L_ARB_S_SHIFT                             16
#define TPC6_RTR_LBW_WR_RS_L_ARB_S_MASK                              0x70000
#define TPC6_RTR_LBW_WR_RS_L_ARB_N_SHIFT                             24
#define TPC6_RTR_LBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmTPC6_RTR_DBG_E_ARB                                         0xF80300
/* TPC6_RTR_DBG_E_ARB */
#define TPC6_RTR_DBG_E_ARB_W_SHIFT                                   0
#define TPC6_RTR_DBG_E_ARB_W_MASK                                    0x7
#define TPC6_RTR_DBG_E_ARB_S_SHIFT                                   8
#define TPC6_RTR_DBG_E_ARB_S_MASK                                    0x700
#define TPC6_RTR_DBG_E_ARB_N_SHIFT                                   16
#define TPC6_RTR_DBG_E_ARB_N_MASK                                    0x70000
#define TPC6_RTR_DBG_E_ARB_L_SHIFT                                   24
#define TPC6_RTR_DBG_E_ARB_L_MASK                                    0x7000000

#define mmTPC6_RTR_DBG_W_ARB                                         0xF80304
/* TPC6_RTR_DBG_W_ARB */
#define TPC6_RTR_DBG_W_ARB_E_SHIFT                                   0
#define TPC6_RTR_DBG_W_ARB_E_MASK                                    0x7
#define TPC6_RTR_DBG_W_ARB_S_SHIFT                                   8
#define TPC6_RTR_DBG_W_ARB_S_MASK                                    0x700
#define TPC6_RTR_DBG_W_ARB_N_SHIFT                                   16
#define TPC6_RTR_DBG_W_ARB_N_MASK                                    0x70000
#define TPC6_RTR_DBG_W_ARB_L_SHIFT                                   24
#define TPC6_RTR_DBG_W_ARB_L_MASK                                    0x7000000

#define mmTPC6_RTR_DBG_N_ARB                                         0xF80308
/* TPC6_RTR_DBG_N_ARB */
#define TPC6_RTR_DBG_N_ARB_W_SHIFT                                   0
#define TPC6_RTR_DBG_N_ARB_W_MASK                                    0x7
#define TPC6_RTR_DBG_N_ARB_E_SHIFT                                   8
#define TPC6_RTR_DBG_N_ARB_E_MASK                                    0x700
#define TPC6_RTR_DBG_N_ARB_S_SHIFT                                   16
#define TPC6_RTR_DBG_N_ARB_S_MASK                                    0x70000
#define TPC6_RTR_DBG_N_ARB_L_SHIFT                                   24
#define TPC6_RTR_DBG_N_ARB_L_MASK                                    0x7000000

#define mmTPC6_RTR_DBG_S_ARB                                         0xF8030C
/* TPC6_RTR_DBG_S_ARB */
#define TPC6_RTR_DBG_S_ARB_W_SHIFT                                   0
#define TPC6_RTR_DBG_S_ARB_W_MASK                                    0x7
#define TPC6_RTR_DBG_S_ARB_E_SHIFT                                   8
#define TPC6_RTR_DBG_S_ARB_E_MASK                                    0x700
#define TPC6_RTR_DBG_S_ARB_N_SHIFT                                   16
#define TPC6_RTR_DBG_S_ARB_N_MASK                                    0x70000
#define TPC6_RTR_DBG_S_ARB_L_SHIFT                                   24
#define TPC6_RTR_DBG_S_ARB_L_MASK                                    0x7000000

#define mmTPC6_RTR_DBG_L_ARB                                         0xF80310
/* TPC6_RTR_DBG_L_ARB */
#define TPC6_RTR_DBG_L_ARB_W_SHIFT                                   0
#define TPC6_RTR_DBG_L_ARB_W_MASK                                    0x7
#define TPC6_RTR_DBG_L_ARB_E_SHIFT                                   8
#define TPC6_RTR_DBG_L_ARB_E_MASK                                    0x700
#define TPC6_RTR_DBG_L_ARB_S_SHIFT                                   16
#define TPC6_RTR_DBG_L_ARB_S_MASK                                    0x70000
#define TPC6_RTR_DBG_L_ARB_N_SHIFT                                   24
#define TPC6_RTR_DBG_L_ARB_N_MASK                                    0x7000000

#define mmTPC6_RTR_DBG_E_ARB_MAX                                     0xF80320
/* TPC6_RTR_DBG_E_ARB_MAX */
#define TPC6_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                          0
#define TPC6_RTR_DBG_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC6_RTR_DBG_W_ARB_MAX                                     0xF80324
/* TPC6_RTR_DBG_W_ARB_MAX */
#define TPC6_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                          0
#define TPC6_RTR_DBG_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC6_RTR_DBG_N_ARB_MAX                                     0xF80328
/* TPC6_RTR_DBG_N_ARB_MAX */
#define TPC6_RTR_DBG_N_ARB_MAX_CREDIT_SHIFT                          0
#define TPC6_RTR_DBG_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC6_RTR_DBG_S_ARB_MAX                                     0xF8032C
/* TPC6_RTR_DBG_S_ARB_MAX */
#define TPC6_RTR_DBG_S_ARB_MAX_CREDIT_SHIFT                          0
#define TPC6_RTR_DBG_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC6_RTR_DBG_L_ARB_MAX                                     0xF80330
/* TPC6_RTR_DBG_L_ARB_MAX */
#define TPC6_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                          0
#define TPC6_RTR_DBG_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmTPC6_RTR_SPLIT_COEF_0                                      0xF80400

#define mmTPC6_RTR_SPLIT_COEF_1                                      0xF80404

#define mmTPC6_RTR_SPLIT_COEF_2                                      0xF80408

#define mmTPC6_RTR_SPLIT_COEF_3                                      0xF8040C

#define mmTPC6_RTR_SPLIT_COEF_4                                      0xF80410

#define mmTPC6_RTR_SPLIT_COEF_5                                      0xF80414

#define mmTPC6_RTR_SPLIT_COEF_6                                      0xF80418

#define mmTPC6_RTR_SPLIT_COEF_7                                      0xF8041C

#define mmTPC6_RTR_SPLIT_COEF_8                                      0xF80420

#define mmTPC6_RTR_SPLIT_COEF_9                                      0xF80424
/* TPC6_RTR_SPLIT_COEF */
#define TPC6_RTR_SPLIT_COEF_VAL_SHIFT                                0
#define TPC6_RTR_SPLIT_COEF_VAL_MASK                                 0xFFFF

#define mmTPC6_RTR_SPLIT_CFG                                         0xF80440
/* TPC6_RTR_SPLIT_CFG */
#define TPC6_RTR_SPLIT_CFG_FORCE_WAK_ORDER_SHIFT                     0
#define TPC6_RTR_SPLIT_CFG_FORCE_WAK_ORDER_MASK                      0x1
#define TPC6_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_SHIFT                  1
#define TPC6_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_MASK                   0x2
#define TPC6_RTR_SPLIT_CFG_DEFAULT_MESH_SHIFT                        2
#define TPC6_RTR_SPLIT_CFG_DEFAULT_MESH_MASK                         0xC
#define TPC6_RTR_SPLIT_CFG_WR_RATE_LIM_EN_SHIFT                      4
#define TPC6_RTR_SPLIT_CFG_WR_RATE_LIM_EN_MASK                       0x10
#define TPC6_RTR_SPLIT_CFG_RD_RATE_LIM_EN_SHIFT                      5
#define TPC6_RTR_SPLIT_CFG_RD_RATE_LIM_EN_MASK                       0x20
#define TPC6_RTR_SPLIT_CFG_B2B_OPT_SHIFT                             6
#define TPC6_RTR_SPLIT_CFG_B2B_OPT_MASK                              0x1C0

#define mmTPC6_RTR_SPLIT_RD_SAT                                      0xF80444
/* TPC6_RTR_SPLIT_RD_SAT */
#define TPC6_RTR_SPLIT_RD_SAT_VAL_SHIFT                              0
#define TPC6_RTR_SPLIT_RD_SAT_VAL_MASK                               0xFFFF

#define mmTPC6_RTR_SPLIT_RD_RST_TOKEN                                0xF80448
/* TPC6_RTR_SPLIT_RD_RST_TOKEN */
#define TPC6_RTR_SPLIT_RD_RST_TOKEN_VAL_SHIFT                        0
#define TPC6_RTR_SPLIT_RD_RST_TOKEN_VAL_MASK                         0xFFFF

#define mmTPC6_RTR_SPLIT_RD_TIMEOUT_0                                0xF8044C

#define mmTPC6_RTR_SPLIT_RD_TIMEOUT_1                                0xF80450
/* TPC6_RTR_SPLIT_RD_TIMEOUT */
#define TPC6_RTR_SPLIT_RD_TIMEOUT_VAL_SHIFT                          0
#define TPC6_RTR_SPLIT_RD_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmTPC6_RTR_SPLIT_WR_SAT                                      0xF80454
/* TPC6_RTR_SPLIT_WR_SAT */
#define TPC6_RTR_SPLIT_WR_SAT_VAL_SHIFT                              0
#define TPC6_RTR_SPLIT_WR_SAT_VAL_MASK                               0xFFFF

#define mmTPC6_RTR_WPLIT_WR_TST_TOLEN                                0xF80458
/* TPC6_RTR_WPLIT_WR_TST_TOLEN */
#define TPC6_RTR_WPLIT_WR_TST_TOLEN_VAL_SHIFT                        0
#define TPC6_RTR_WPLIT_WR_TST_TOLEN_VAL_MASK                         0xFFFF

#define mmTPC6_RTR_SPLIT_WR_TIMEOUT_0                                0xF8045C

#define mmTPC6_RTR_SPLIT_WR_TIMEOUT_1                                0xF80460
/* TPC6_RTR_SPLIT_WR_TIMEOUT */
#define TPC6_RTR_SPLIT_WR_TIMEOUT_VAL_SHIFT                          0
#define TPC6_RTR_SPLIT_WR_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmTPC6_RTR_HBW_RANGE_HIT                                     0xF80470
/* TPC6_RTR_HBW_RANGE_HIT */
#define TPC6_RTR_HBW_RANGE_HIT_IND_SHIFT                             0
#define TPC6_RTR_HBW_RANGE_HIT_IND_MASK                              0xFF

#define mmTPC6_RTR_HBW_RANGE_MASK_L_0                                0xF80480

#define mmTPC6_RTR_HBW_RANGE_MASK_L_1                                0xF80484

#define mmTPC6_RTR_HBW_RANGE_MASK_L_2                                0xF80488

#define mmTPC6_RTR_HBW_RANGE_MASK_L_3                                0xF8048C

#define mmTPC6_RTR_HBW_RANGE_MASK_L_4                                0xF80490

#define mmTPC6_RTR_HBW_RANGE_MASK_L_5                                0xF80494

#define mmTPC6_RTR_HBW_RANGE_MASK_L_6                                0xF80498

#define mmTPC6_RTR_HBW_RANGE_MASK_L_7                                0xF8049C
/* TPC6_RTR_HBW_RANGE_MASK_L */
#define TPC6_RTR_HBW_RANGE_MASK_L_VAL_SHIFT                          0
#define TPC6_RTR_HBW_RANGE_MASK_L_VAL_MASK                           0xFFFFFFFF

#define mmTPC6_RTR_HBW_RANGE_MASK_H_0                                0xF804A0

#define mmTPC6_RTR_HBW_RANGE_MASK_H_1                                0xF804A4

#define mmTPC6_RTR_HBW_RANGE_MASK_H_2                                0xF804A8

#define mmTPC6_RTR_HBW_RANGE_MASK_H_3                                0xF804AC

#define mmTPC6_RTR_HBW_RANGE_MASK_H_4                                0xF804B0

#define mmTPC6_RTR_HBW_RANGE_MASK_H_5                                0xF804B4

#define mmTPC6_RTR_HBW_RANGE_MASK_H_6                                0xF804B8

#define mmTPC6_RTR_HBW_RANGE_MASK_H_7                                0xF804BC
/* TPC6_RTR_HBW_RANGE_MASK_H */
#define TPC6_RTR_HBW_RANGE_MASK_H_VAL_SHIFT                          0
#define TPC6_RTR_HBW_RANGE_MASK_H_VAL_MASK                           0x3FFFF

#define mmTPC6_RTR_HBW_RANGE_BASE_L_0                                0xF804C0

#define mmTPC6_RTR_HBW_RANGE_BASE_L_1                                0xF804C4

#define mmTPC6_RTR_HBW_RANGE_BASE_L_2                                0xF804C8

#define mmTPC6_RTR_HBW_RANGE_BASE_L_3                                0xF804CC

#define mmTPC6_RTR_HBW_RANGE_BASE_L_4                                0xF804D0

#define mmTPC6_RTR_HBW_RANGE_BASE_L_5                                0xF804D4

#define mmTPC6_RTR_HBW_RANGE_BASE_L_6                                0xF804D8

#define mmTPC6_RTR_HBW_RANGE_BASE_L_7                                0xF804DC
/* TPC6_RTR_HBW_RANGE_BASE_L */
#define TPC6_RTR_HBW_RANGE_BASE_L_VAL_SHIFT                          0
#define TPC6_RTR_HBW_RANGE_BASE_L_VAL_MASK                           0xFFFFFFFF

#define mmTPC6_RTR_HBW_RANGE_BASE_H_0                                0xF804E0

#define mmTPC6_RTR_HBW_RANGE_BASE_H_1                                0xF804E4

#define mmTPC6_RTR_HBW_RANGE_BASE_H_2                                0xF804E8

#define mmTPC6_RTR_HBW_RANGE_BASE_H_3                                0xF804EC

#define mmTPC6_RTR_HBW_RANGE_BASE_H_4                                0xF804F0

#define mmTPC6_RTR_HBW_RANGE_BASE_H_5                                0xF804F4

#define mmTPC6_RTR_HBW_RANGE_BASE_H_6                                0xF804F8

#define mmTPC6_RTR_HBW_RANGE_BASE_H_7                                0xF804FC
/* TPC6_RTR_HBW_RANGE_BASE_H */
#define TPC6_RTR_HBW_RANGE_BASE_H_VAL_SHIFT                          0
#define TPC6_RTR_HBW_RANGE_BASE_H_VAL_MASK                           0x3FFFF

#define mmTPC6_RTR_LBW_RANGE_HIT                                     0xF80500
/* TPC6_RTR_LBW_RANGE_HIT */
#define TPC6_RTR_LBW_RANGE_HIT_IND_SHIFT                             0
#define TPC6_RTR_LBW_RANGE_HIT_IND_MASK                              0xFFFF

#define mmTPC6_RTR_LBW_RANGE_MASK_0                                  0xF80510

#define mmTPC6_RTR_LBW_RANGE_MASK_1                                  0xF80514

#define mmTPC6_RTR_LBW_RANGE_MASK_2                                  0xF80518

#define mmTPC6_RTR_LBW_RANGE_MASK_3                                  0xF8051C

#define mmTPC6_RTR_LBW_RANGE_MASK_4                                  0xF80520

#define mmTPC6_RTR_LBW_RANGE_MASK_5                                  0xF80524

#define mmTPC6_RTR_LBW_RANGE_MASK_6                                  0xF80528

#define mmTPC6_RTR_LBW_RANGE_MASK_7                                  0xF8052C

#define mmTPC6_RTR_LBW_RANGE_MASK_8                                  0xF80530

#define mmTPC6_RTR_LBW_RANGE_MASK_9                                  0xF80534

#define mmTPC6_RTR_LBW_RANGE_MASK_10                                 0xF80538

#define mmTPC6_RTR_LBW_RANGE_MASK_11                                 0xF8053C

#define mmTPC6_RTR_LBW_RANGE_MASK_12                                 0xF80540

#define mmTPC6_RTR_LBW_RANGE_MASK_13                                 0xF80544

#define mmTPC6_RTR_LBW_RANGE_MASK_14                                 0xF80548

#define mmTPC6_RTR_LBW_RANGE_MASK_15                                 0xF8054C
/* TPC6_RTR_LBW_RANGE_MASK */
#define TPC6_RTR_LBW_RANGE_MASK_VAL_SHIFT                            0
#define TPC6_RTR_LBW_RANGE_MASK_VAL_MASK                             0x3FFFFFF

#define mmTPC6_RTR_LBW_RANGE_BASE_0                                  0xF80550

#define mmTPC6_RTR_LBW_RANGE_BASE_1                                  0xF80554

#define mmTPC6_RTR_LBW_RANGE_BASE_2                                  0xF80558

#define mmTPC6_RTR_LBW_RANGE_BASE_3                                  0xF8055C

#define mmTPC6_RTR_LBW_RANGE_BASE_4                                  0xF80560

#define mmTPC6_RTR_LBW_RANGE_BASE_5                                  0xF80564

#define mmTPC6_RTR_LBW_RANGE_BASE_6                                  0xF80568

#define mmTPC6_RTR_LBW_RANGE_BASE_7                                  0xF8056C

#define mmTPC6_RTR_LBW_RANGE_BASE_8                                  0xF80570

#define mmTPC6_RTR_LBW_RANGE_BASE_9                                  0xF80574

#define mmTPC6_RTR_LBW_RANGE_BASE_10                                 0xF80578

#define mmTPC6_RTR_LBW_RANGE_BASE_11                                 0xF8057C

#define mmTPC6_RTR_LBW_RANGE_BASE_12                                 0xF80580

#define mmTPC6_RTR_LBW_RANGE_BASE_13                                 0xF80584

#define mmTPC6_RTR_LBW_RANGE_BASE_14                                 0xF80588

#define mmTPC6_RTR_LBW_RANGE_BASE_15                                 0xF8058C
/* TPC6_RTR_LBW_RANGE_BASE */
#define TPC6_RTR_LBW_RANGE_BASE_VAL_SHIFT                            0
#define TPC6_RTR_LBW_RANGE_BASE_VAL_MASK                             0x3FFFFFF

#define mmTPC6_RTR_RGLTR                                             0xF80590
/* TPC6_RTR_RGLTR */
#define TPC6_RTR_RGLTR_WR_EN_SHIFT                                   0
#define TPC6_RTR_RGLTR_WR_EN_MASK                                    0x1
#define TPC6_RTR_RGLTR_RD_EN_SHIFT                                   4
#define TPC6_RTR_RGLTR_RD_EN_MASK                                    0x10

#define mmTPC6_RTR_RGLTR_WR_RESULT                                   0xF80594
/* TPC6_RTR_RGLTR_WR_RESULT */
#define TPC6_RTR_RGLTR_WR_RESULT_VAL_SHIFT                           0
#define TPC6_RTR_RGLTR_WR_RESULT_VAL_MASK                            0xFF

#define mmTPC6_RTR_RGLTR_RD_RESULT                                   0xF80598
/* TPC6_RTR_RGLTR_RD_RESULT */
#define TPC6_RTR_RGLTR_RD_RESULT_VAL_SHIFT                           0
#define TPC6_RTR_RGLTR_RD_RESULT_VAL_MASK                            0xFF

#define mmTPC6_RTR_SCRAMB_EN                                         0xF80600
/* TPC6_RTR_SCRAMB_EN */
#define TPC6_RTR_SCRAMB_EN_VAL_SHIFT                                 0
#define TPC6_RTR_SCRAMB_EN_VAL_MASK                                  0x1

#define mmTPC6_RTR_NON_LIN_SCRAMB                                    0xF80604
/* TPC6_RTR_NON_LIN_SCRAMB */
#define TPC6_RTR_NON_LIN_SCRAMB_EN_SHIFT                             0
#define TPC6_RTR_NON_LIN_SCRAMB_EN_MASK                              0x1

#endif /* ASIC_REG_TPC6_RTR_H_ */

