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

#ifndef ASIC_REG_MME2_RTR_H_
#define ASIC_REG_MME2_RTR_H_

/*
 *****************************************
 *   MME2_RTR (Prototype: MME_RTR)
 *****************************************
 */

#define mmMME2_RTR_HBW_RD_RQ_E_ARB                                   0x80100
/* MME2_RTR_HBW_RD_RQ_E_ARB */
#define MME2_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                             0
#define MME2_RTR_HBW_RD_RQ_E_ARB_W_MASK                              0x7
#define MME2_RTR_HBW_RD_RQ_E_ARB_S_SHIFT                             8
#define MME2_RTR_HBW_RD_RQ_E_ARB_S_MASK                              0x700
#define MME2_RTR_HBW_RD_RQ_E_ARB_N_SHIFT                             16
#define MME2_RTR_HBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define MME2_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                             24
#define MME2_RTR_HBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_HBW_RD_RQ_W_ARB                                   0x80104
/* MME2_RTR_HBW_RD_RQ_W_ARB */
#define MME2_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                             0
#define MME2_RTR_HBW_RD_RQ_W_ARB_E_MASK                              0x7
#define MME2_RTR_HBW_RD_RQ_W_ARB_S_SHIFT                             8
#define MME2_RTR_HBW_RD_RQ_W_ARB_S_MASK                              0x700
#define MME2_RTR_HBW_RD_RQ_W_ARB_N_SHIFT                             16
#define MME2_RTR_HBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define MME2_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                             24
#define MME2_RTR_HBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_HBW_RD_RQ_N_ARB                                   0x80108
/* MME2_RTR_HBW_RD_RQ_N_ARB */
#define MME2_RTR_HBW_RD_RQ_N_ARB_W_SHIFT                             0
#define MME2_RTR_HBW_RD_RQ_N_ARB_W_MASK                              0x7
#define MME2_RTR_HBW_RD_RQ_N_ARB_E_SHIFT                             8
#define MME2_RTR_HBW_RD_RQ_N_ARB_E_MASK                              0x700
#define MME2_RTR_HBW_RD_RQ_N_ARB_S_SHIFT                             16
#define MME2_RTR_HBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define MME2_RTR_HBW_RD_RQ_N_ARB_L_SHIFT                             24
#define MME2_RTR_HBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_HBW_RD_RQ_S_ARB                                   0x8010C
/* MME2_RTR_HBW_RD_RQ_S_ARB */
#define MME2_RTR_HBW_RD_RQ_S_ARB_W_SHIFT                             0
#define MME2_RTR_HBW_RD_RQ_S_ARB_W_MASK                              0x7
#define MME2_RTR_HBW_RD_RQ_S_ARB_E_SHIFT                             8
#define MME2_RTR_HBW_RD_RQ_S_ARB_E_MASK                              0x700
#define MME2_RTR_HBW_RD_RQ_S_ARB_N_SHIFT                             16
#define MME2_RTR_HBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define MME2_RTR_HBW_RD_RQ_S_ARB_L_SHIFT                             24
#define MME2_RTR_HBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_HBW_RD_RQ_L_ARB                                   0x80110
/* MME2_RTR_HBW_RD_RQ_L_ARB */
#define MME2_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                             0
#define MME2_RTR_HBW_RD_RQ_L_ARB_W_MASK                              0x7
#define MME2_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                             8
#define MME2_RTR_HBW_RD_RQ_L_ARB_E_MASK                              0x700
#define MME2_RTR_HBW_RD_RQ_L_ARB_S_SHIFT                             16
#define MME2_RTR_HBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define MME2_RTR_HBW_RD_RQ_L_ARB_N_SHIFT                             24
#define MME2_RTR_HBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME2_RTR_HBW_E_ARB_MAX                                     0x80120
/* MME2_RTR_HBW_E_ARB_MAX */
#define MME2_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME2_RTR_HBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME2_RTR_HBW_W_ARB_MAX                                     0x80124
/* MME2_RTR_HBW_W_ARB_MAX */
#define MME2_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME2_RTR_HBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME2_RTR_HBW_N_ARB_MAX                                     0x80128
/* MME2_RTR_HBW_N_ARB_MAX */
#define MME2_RTR_HBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME2_RTR_HBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME2_RTR_HBW_S_ARB_MAX                                     0x8012C
/* MME2_RTR_HBW_S_ARB_MAX */
#define MME2_RTR_HBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME2_RTR_HBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME2_RTR_HBW_L_ARB_MAX                                     0x80130
/* MME2_RTR_HBW_L_ARB_MAX */
#define MME2_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME2_RTR_HBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME2_RTR_HBW_RD_RS_MAX_CREDIT                              0x80140
/* MME2_RTR_HBW_RD_RS_MAX_CREDIT */
#define MME2_RTR_HBW_RD_RS_MAX_CREDIT_A_SHIFT                        0
#define MME2_RTR_HBW_RD_RS_MAX_CREDIT_A_MASK                         0x3F
#define MME2_RTR_HBW_RD_RS_MAX_CREDIT_B_SHIFT                        8
#define MME2_RTR_HBW_RD_RS_MAX_CREDIT_B_MASK                         0x3F00

#define mmMME2_RTR_HBW_WR_RQ_MAX_CREDIT                              0x80144
/* MME2_RTR_HBW_WR_RQ_MAX_CREDIT */
#define MME2_RTR_HBW_WR_RQ_MAX_CREDIT_VAL_SHIFT                      0
#define MME2_RTR_HBW_WR_RQ_MAX_CREDIT_VAL_MASK                       0x3F

#define mmMME2_RTR_HBW_RD_RQ_MAX_CREDIT                              0x80148
/* MME2_RTR_HBW_RD_RQ_MAX_CREDIT */
#define MME2_RTR_HBW_RD_RQ_MAX_CREDIT_A_SHIFT                        0
#define MME2_RTR_HBW_RD_RQ_MAX_CREDIT_A_MASK                         0x3F
#define MME2_RTR_HBW_RD_RQ_MAX_CREDIT_B_SHIFT                        8
#define MME2_RTR_HBW_RD_RQ_MAX_CREDIT_B_MASK                         0x3F00
#define MME2_RTR_HBW_RD_RQ_MAX_CREDIT_IC_SHIFT                       16
#define MME2_RTR_HBW_RD_RQ_MAX_CREDIT_IC_MASK                        0x3F0000

#define mmMME2_RTR_HBW_RD_RS_E_ARB                                   0x80150
/* MME2_RTR_HBW_RD_RS_E_ARB */
#define MME2_RTR_HBW_RD_RS_E_ARB_W_SHIFT                             0
#define MME2_RTR_HBW_RD_RS_E_ARB_W_MASK                              0x7
#define MME2_RTR_HBW_RD_RS_E_ARB_S_SHIFT                             8
#define MME2_RTR_HBW_RD_RS_E_ARB_S_MASK                              0x700
#define MME2_RTR_HBW_RD_RS_E_ARB_N_SHIFT                             16
#define MME2_RTR_HBW_RD_RS_E_ARB_N_MASK                              0x70000
#define MME2_RTR_HBW_RD_RS_E_ARB_L_SHIFT                             24
#define MME2_RTR_HBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_HBW_RD_RS_W_ARB                                   0x80154
/* MME2_RTR_HBW_RD_RS_W_ARB */
#define MME2_RTR_HBW_RD_RS_W_ARB_E_SHIFT                             0
#define MME2_RTR_HBW_RD_RS_W_ARB_E_MASK                              0x7
#define MME2_RTR_HBW_RD_RS_W_ARB_S_SHIFT                             8
#define MME2_RTR_HBW_RD_RS_W_ARB_S_MASK                              0x700
#define MME2_RTR_HBW_RD_RS_W_ARB_N_SHIFT                             16
#define MME2_RTR_HBW_RD_RS_W_ARB_N_MASK                              0x70000
#define MME2_RTR_HBW_RD_RS_W_ARB_L_SHIFT                             24
#define MME2_RTR_HBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_HBW_RD_RS_N_ARB                                   0x80158
/* MME2_RTR_HBW_RD_RS_N_ARB */
#define MME2_RTR_HBW_RD_RS_N_ARB_W_SHIFT                             0
#define MME2_RTR_HBW_RD_RS_N_ARB_W_MASK                              0x7
#define MME2_RTR_HBW_RD_RS_N_ARB_E_SHIFT                             8
#define MME2_RTR_HBW_RD_RS_N_ARB_E_MASK                              0x700
#define MME2_RTR_HBW_RD_RS_N_ARB_S_SHIFT                             16
#define MME2_RTR_HBW_RD_RS_N_ARB_S_MASK                              0x70000
#define MME2_RTR_HBW_RD_RS_N_ARB_L_SHIFT                             24
#define MME2_RTR_HBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_HBW_RD_RS_S_ARB                                   0x8015C
/* MME2_RTR_HBW_RD_RS_S_ARB */
#define MME2_RTR_HBW_RD_RS_S_ARB_W_SHIFT                             0
#define MME2_RTR_HBW_RD_RS_S_ARB_W_MASK                              0x7
#define MME2_RTR_HBW_RD_RS_S_ARB_E_SHIFT                             8
#define MME2_RTR_HBW_RD_RS_S_ARB_E_MASK                              0x700
#define MME2_RTR_HBW_RD_RS_S_ARB_N_SHIFT                             16
#define MME2_RTR_HBW_RD_RS_S_ARB_N_MASK                              0x70000
#define MME2_RTR_HBW_RD_RS_S_ARB_L_SHIFT                             24
#define MME2_RTR_HBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_HBW_RD_RS_L_ARB                                   0x80160
/* MME2_RTR_HBW_RD_RS_L_ARB */
#define MME2_RTR_HBW_RD_RS_L_ARB_W_SHIFT                             0
#define MME2_RTR_HBW_RD_RS_L_ARB_W_MASK                              0x7
#define MME2_RTR_HBW_RD_RS_L_ARB_E_SHIFT                             8
#define MME2_RTR_HBW_RD_RS_L_ARB_E_MASK                              0x700
#define MME2_RTR_HBW_RD_RS_L_ARB_S_SHIFT                             16
#define MME2_RTR_HBW_RD_RS_L_ARB_S_MASK                              0x70000
#define MME2_RTR_HBW_RD_RS_L_ARB_N_SHIFT                             24
#define MME2_RTR_HBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmMME2_RTR_HBW_WR_RQ_E_ARB                                   0x80170
/* MME2_RTR_HBW_WR_RQ_E_ARB */
#define MME2_RTR_HBW_WR_RQ_E_ARB_W_SHIFT                             0
#define MME2_RTR_HBW_WR_RQ_E_ARB_W_MASK                              0x7
#define MME2_RTR_HBW_WR_RQ_E_ARB_S_SHIFT                             8
#define MME2_RTR_HBW_WR_RQ_E_ARB_S_MASK                              0x700
#define MME2_RTR_HBW_WR_RQ_E_ARB_N_SHIFT                             16
#define MME2_RTR_HBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define MME2_RTR_HBW_WR_RQ_E_ARB_L_SHIFT                             24
#define MME2_RTR_HBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_HBW_WR_RQ_W_ARB                                   0x80174
/* MME2_RTR_HBW_WR_RQ_W_ARB */
#define MME2_RTR_HBW_WR_RQ_W_ARB_E_SHIFT                             0
#define MME2_RTR_HBW_WR_RQ_W_ARB_E_MASK                              0x7
#define MME2_RTR_HBW_WR_RQ_W_ARB_S_SHIFT                             8
#define MME2_RTR_HBW_WR_RQ_W_ARB_S_MASK                              0x700
#define MME2_RTR_HBW_WR_RQ_W_ARB_N_SHIFT                             16
#define MME2_RTR_HBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define MME2_RTR_HBW_WR_RQ_W_ARB_L_SHIFT                             24
#define MME2_RTR_HBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_HBW_WR_RQ_N_ARB                                   0x80178
/* MME2_RTR_HBW_WR_RQ_N_ARB */
#define MME2_RTR_HBW_WR_RQ_N_ARB_W_SHIFT                             0
#define MME2_RTR_HBW_WR_RQ_N_ARB_W_MASK                              0x7
#define MME2_RTR_HBW_WR_RQ_N_ARB_E_SHIFT                             8
#define MME2_RTR_HBW_WR_RQ_N_ARB_E_MASK                              0x700
#define MME2_RTR_HBW_WR_RQ_N_ARB_S_SHIFT                             16
#define MME2_RTR_HBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define MME2_RTR_HBW_WR_RQ_N_ARB_L_SHIFT                             24
#define MME2_RTR_HBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_HBW_WR_RQ_S_ARB                                   0x8017C
/* MME2_RTR_HBW_WR_RQ_S_ARB */
#define MME2_RTR_HBW_WR_RQ_S_ARB_W_SHIFT                             0
#define MME2_RTR_HBW_WR_RQ_S_ARB_W_MASK                              0x7
#define MME2_RTR_HBW_WR_RQ_S_ARB_E_SHIFT                             8
#define MME2_RTR_HBW_WR_RQ_S_ARB_E_MASK                              0x700
#define MME2_RTR_HBW_WR_RQ_S_ARB_N_SHIFT                             16
#define MME2_RTR_HBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define MME2_RTR_HBW_WR_RQ_S_ARB_L_SHIFT                             24
#define MME2_RTR_HBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_HBW_WR_RQ_L_ARB                                   0x80180
/* MME2_RTR_HBW_WR_RQ_L_ARB */
#define MME2_RTR_HBW_WR_RQ_L_ARB_W_SHIFT                             0
#define MME2_RTR_HBW_WR_RQ_L_ARB_W_MASK                              0x7
#define MME2_RTR_HBW_WR_RQ_L_ARB_E_SHIFT                             8
#define MME2_RTR_HBW_WR_RQ_L_ARB_E_MASK                              0x700
#define MME2_RTR_HBW_WR_RQ_L_ARB_S_SHIFT                             16
#define MME2_RTR_HBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define MME2_RTR_HBW_WR_RQ_L_ARB_N_SHIFT                             24
#define MME2_RTR_HBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME2_RTR_HBW_WR_RS_E_ARB                                   0x80190
/* MME2_RTR_HBW_WR_RS_E_ARB */
#define MME2_RTR_HBW_WR_RS_E_ARB_W_SHIFT                             0
#define MME2_RTR_HBW_WR_RS_E_ARB_W_MASK                              0x7
#define MME2_RTR_HBW_WR_RS_E_ARB_S_SHIFT                             8
#define MME2_RTR_HBW_WR_RS_E_ARB_S_MASK                              0x700
#define MME2_RTR_HBW_WR_RS_E_ARB_N_SHIFT                             16
#define MME2_RTR_HBW_WR_RS_E_ARB_N_MASK                              0x70000
#define MME2_RTR_HBW_WR_RS_E_ARB_L_SHIFT                             24
#define MME2_RTR_HBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_HBW_WR_RS_W_ARB                                   0x80194
/* MME2_RTR_HBW_WR_RS_W_ARB */
#define MME2_RTR_HBW_WR_RS_W_ARB_E_SHIFT                             0
#define MME2_RTR_HBW_WR_RS_W_ARB_E_MASK                              0x7
#define MME2_RTR_HBW_WR_RS_W_ARB_S_SHIFT                             8
#define MME2_RTR_HBW_WR_RS_W_ARB_S_MASK                              0x700
#define MME2_RTR_HBW_WR_RS_W_ARB_N_SHIFT                             16
#define MME2_RTR_HBW_WR_RS_W_ARB_N_MASK                              0x70000
#define MME2_RTR_HBW_WR_RS_W_ARB_L_SHIFT                             24
#define MME2_RTR_HBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_HBW_WR_RS_N_ARB                                   0x80198
/* MME2_RTR_HBW_WR_RS_N_ARB */
#define MME2_RTR_HBW_WR_RS_N_ARB_W_SHIFT                             0
#define MME2_RTR_HBW_WR_RS_N_ARB_W_MASK                              0x7
#define MME2_RTR_HBW_WR_RS_N_ARB_E_SHIFT                             8
#define MME2_RTR_HBW_WR_RS_N_ARB_E_MASK                              0x700
#define MME2_RTR_HBW_WR_RS_N_ARB_S_SHIFT                             16
#define MME2_RTR_HBW_WR_RS_N_ARB_S_MASK                              0x70000
#define MME2_RTR_HBW_WR_RS_N_ARB_L_SHIFT                             24
#define MME2_RTR_HBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_HBW_WR_RS_S_ARB                                   0x8019C
/* MME2_RTR_HBW_WR_RS_S_ARB */
#define MME2_RTR_HBW_WR_RS_S_ARB_W_SHIFT                             0
#define MME2_RTR_HBW_WR_RS_S_ARB_W_MASK                              0x7
#define MME2_RTR_HBW_WR_RS_S_ARB_E_SHIFT                             8
#define MME2_RTR_HBW_WR_RS_S_ARB_E_MASK                              0x700
#define MME2_RTR_HBW_WR_RS_S_ARB_N_SHIFT                             16
#define MME2_RTR_HBW_WR_RS_S_ARB_N_MASK                              0x70000
#define MME2_RTR_HBW_WR_RS_S_ARB_L_SHIFT                             24
#define MME2_RTR_HBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_HBW_WR_RS_L_ARB                                   0x801A0
/* MME2_RTR_HBW_WR_RS_L_ARB */
#define MME2_RTR_HBW_WR_RS_L_ARB_W_SHIFT                             0
#define MME2_RTR_HBW_WR_RS_L_ARB_W_MASK                              0x7
#define MME2_RTR_HBW_WR_RS_L_ARB_E_SHIFT                             8
#define MME2_RTR_HBW_WR_RS_L_ARB_E_MASK                              0x700
#define MME2_RTR_HBW_WR_RS_L_ARB_S_SHIFT                             16
#define MME2_RTR_HBW_WR_RS_L_ARB_S_MASK                              0x70000
#define MME2_RTR_HBW_WR_RS_L_ARB_N_SHIFT                             24
#define MME2_RTR_HBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmMME2_RTR_LBW_RD_RQ_E_ARB                                   0x80200
/* MME2_RTR_LBW_RD_RQ_E_ARB */
#define MME2_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                             0
#define MME2_RTR_LBW_RD_RQ_E_ARB_W_MASK                              0x7
#define MME2_RTR_LBW_RD_RQ_E_ARB_S_SHIFT                             8
#define MME2_RTR_LBW_RD_RQ_E_ARB_S_MASK                              0x700
#define MME2_RTR_LBW_RD_RQ_E_ARB_N_SHIFT                             16
#define MME2_RTR_LBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define MME2_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                             24
#define MME2_RTR_LBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_LBW_RD_RQ_W_ARB                                   0x80204
/* MME2_RTR_LBW_RD_RQ_W_ARB */
#define MME2_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                             0
#define MME2_RTR_LBW_RD_RQ_W_ARB_E_MASK                              0x7
#define MME2_RTR_LBW_RD_RQ_W_ARB_S_SHIFT                             8
#define MME2_RTR_LBW_RD_RQ_W_ARB_S_MASK                              0x700
#define MME2_RTR_LBW_RD_RQ_W_ARB_N_SHIFT                             16
#define MME2_RTR_LBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define MME2_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                             24
#define MME2_RTR_LBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_LBW_RD_RQ_N_ARB                                   0x80208
/* MME2_RTR_LBW_RD_RQ_N_ARB */
#define MME2_RTR_LBW_RD_RQ_N_ARB_W_SHIFT                             0
#define MME2_RTR_LBW_RD_RQ_N_ARB_W_MASK                              0x7
#define MME2_RTR_LBW_RD_RQ_N_ARB_E_SHIFT                             8
#define MME2_RTR_LBW_RD_RQ_N_ARB_E_MASK                              0x700
#define MME2_RTR_LBW_RD_RQ_N_ARB_S_SHIFT                             16
#define MME2_RTR_LBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define MME2_RTR_LBW_RD_RQ_N_ARB_L_SHIFT                             24
#define MME2_RTR_LBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_LBW_RD_RQ_S_ARB                                   0x8020C
/* MME2_RTR_LBW_RD_RQ_S_ARB */
#define MME2_RTR_LBW_RD_RQ_S_ARB_W_SHIFT                             0
#define MME2_RTR_LBW_RD_RQ_S_ARB_W_MASK                              0x7
#define MME2_RTR_LBW_RD_RQ_S_ARB_E_SHIFT                             8
#define MME2_RTR_LBW_RD_RQ_S_ARB_E_MASK                              0x700
#define MME2_RTR_LBW_RD_RQ_S_ARB_N_SHIFT                             16
#define MME2_RTR_LBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define MME2_RTR_LBW_RD_RQ_S_ARB_L_SHIFT                             24
#define MME2_RTR_LBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_LBW_RD_RQ_L_ARB                                   0x80210
/* MME2_RTR_LBW_RD_RQ_L_ARB */
#define MME2_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                             0
#define MME2_RTR_LBW_RD_RQ_L_ARB_W_MASK                              0x7
#define MME2_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                             8
#define MME2_RTR_LBW_RD_RQ_L_ARB_E_MASK                              0x700
#define MME2_RTR_LBW_RD_RQ_L_ARB_S_SHIFT                             16
#define MME2_RTR_LBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define MME2_RTR_LBW_RD_RQ_L_ARB_N_SHIFT                             24
#define MME2_RTR_LBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME2_RTR_LBW_E_ARB_MAX                                     0x80220
/* MME2_RTR_LBW_E_ARB_MAX */
#define MME2_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME2_RTR_LBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME2_RTR_LBW_W_ARB_MAX                                     0x80224
/* MME2_RTR_LBW_W_ARB_MAX */
#define MME2_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME2_RTR_LBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME2_RTR_LBW_N_ARB_MAX                                     0x80228
/* MME2_RTR_LBW_N_ARB_MAX */
#define MME2_RTR_LBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME2_RTR_LBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME2_RTR_LBW_S_ARB_MAX                                     0x8022C
/* MME2_RTR_LBW_S_ARB_MAX */
#define MME2_RTR_LBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME2_RTR_LBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME2_RTR_LBW_L_ARB_MAX                                     0x80230
/* MME2_RTR_LBW_L_ARB_MAX */
#define MME2_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME2_RTR_LBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME2_RTR_LBW_SRAM_MAX_CREDIT                               0x80240
/* MME2_RTR_LBW_SRAM_MAX_CREDIT */
#define MME2_RTR_LBW_SRAM_MAX_CREDIT_MSTR_SHIFT                      0
#define MME2_RTR_LBW_SRAM_MAX_CREDIT_MSTR_MASK                       0x3F
#define MME2_RTR_LBW_SRAM_MAX_CREDIT_SLV_SHIFT                       8
#define MME2_RTR_LBW_SRAM_MAX_CREDIT_SLV_MASK                        0x3F00

#define mmMME2_RTR_LBW_RD_RS_E_ARB                                   0x80250
/* MME2_RTR_LBW_RD_RS_E_ARB */
#define MME2_RTR_LBW_RD_RS_E_ARB_W_SHIFT                             0
#define MME2_RTR_LBW_RD_RS_E_ARB_W_MASK                              0x7
#define MME2_RTR_LBW_RD_RS_E_ARB_S_SHIFT                             8
#define MME2_RTR_LBW_RD_RS_E_ARB_S_MASK                              0x700
#define MME2_RTR_LBW_RD_RS_E_ARB_N_SHIFT                             16
#define MME2_RTR_LBW_RD_RS_E_ARB_N_MASK                              0x70000
#define MME2_RTR_LBW_RD_RS_E_ARB_L_SHIFT                             24
#define MME2_RTR_LBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_LBW_RD_RS_W_ARB                                   0x80254
/* MME2_RTR_LBW_RD_RS_W_ARB */
#define MME2_RTR_LBW_RD_RS_W_ARB_E_SHIFT                             0
#define MME2_RTR_LBW_RD_RS_W_ARB_E_MASK                              0x7
#define MME2_RTR_LBW_RD_RS_W_ARB_S_SHIFT                             8
#define MME2_RTR_LBW_RD_RS_W_ARB_S_MASK                              0x700
#define MME2_RTR_LBW_RD_RS_W_ARB_N_SHIFT                             16
#define MME2_RTR_LBW_RD_RS_W_ARB_N_MASK                              0x70000
#define MME2_RTR_LBW_RD_RS_W_ARB_L_SHIFT                             24
#define MME2_RTR_LBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_LBW_RD_RS_N_ARB                                   0x80258
/* MME2_RTR_LBW_RD_RS_N_ARB */
#define MME2_RTR_LBW_RD_RS_N_ARB_W_SHIFT                             0
#define MME2_RTR_LBW_RD_RS_N_ARB_W_MASK                              0x7
#define MME2_RTR_LBW_RD_RS_N_ARB_E_SHIFT                             8
#define MME2_RTR_LBW_RD_RS_N_ARB_E_MASK                              0x700
#define MME2_RTR_LBW_RD_RS_N_ARB_S_SHIFT                             16
#define MME2_RTR_LBW_RD_RS_N_ARB_S_MASK                              0x70000
#define MME2_RTR_LBW_RD_RS_N_ARB_L_SHIFT                             24
#define MME2_RTR_LBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_LBW_RD_RS_S_ARB                                   0x8025C
/* MME2_RTR_LBW_RD_RS_S_ARB */
#define MME2_RTR_LBW_RD_RS_S_ARB_W_SHIFT                             0
#define MME2_RTR_LBW_RD_RS_S_ARB_W_MASK                              0x7
#define MME2_RTR_LBW_RD_RS_S_ARB_E_SHIFT                             8
#define MME2_RTR_LBW_RD_RS_S_ARB_E_MASK                              0x700
#define MME2_RTR_LBW_RD_RS_S_ARB_N_SHIFT                             16
#define MME2_RTR_LBW_RD_RS_S_ARB_N_MASK                              0x70000
#define MME2_RTR_LBW_RD_RS_S_ARB_L_SHIFT                             24
#define MME2_RTR_LBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_LBW_RD_RS_L_ARB                                   0x80260
/* MME2_RTR_LBW_RD_RS_L_ARB */
#define MME2_RTR_LBW_RD_RS_L_ARB_W_SHIFT                             0
#define MME2_RTR_LBW_RD_RS_L_ARB_W_MASK                              0x7
#define MME2_RTR_LBW_RD_RS_L_ARB_E_SHIFT                             8
#define MME2_RTR_LBW_RD_RS_L_ARB_E_MASK                              0x700
#define MME2_RTR_LBW_RD_RS_L_ARB_S_SHIFT                             16
#define MME2_RTR_LBW_RD_RS_L_ARB_S_MASK                              0x70000
#define MME2_RTR_LBW_RD_RS_L_ARB_N_SHIFT                             24
#define MME2_RTR_LBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmMME2_RTR_LBW_WR_RQ_E_ARB                                   0x80270
/* MME2_RTR_LBW_WR_RQ_E_ARB */
#define MME2_RTR_LBW_WR_RQ_E_ARB_W_SHIFT                             0
#define MME2_RTR_LBW_WR_RQ_E_ARB_W_MASK                              0x7
#define MME2_RTR_LBW_WR_RQ_E_ARB_S_SHIFT                             8
#define MME2_RTR_LBW_WR_RQ_E_ARB_S_MASK                              0x700
#define MME2_RTR_LBW_WR_RQ_E_ARB_N_SHIFT                             16
#define MME2_RTR_LBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define MME2_RTR_LBW_WR_RQ_E_ARB_L_SHIFT                             24
#define MME2_RTR_LBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_LBW_WR_RQ_W_ARB                                   0x80274
/* MME2_RTR_LBW_WR_RQ_W_ARB */
#define MME2_RTR_LBW_WR_RQ_W_ARB_E_SHIFT                             0
#define MME2_RTR_LBW_WR_RQ_W_ARB_E_MASK                              0x7
#define MME2_RTR_LBW_WR_RQ_W_ARB_S_SHIFT                             8
#define MME2_RTR_LBW_WR_RQ_W_ARB_S_MASK                              0x700
#define MME2_RTR_LBW_WR_RQ_W_ARB_N_SHIFT                             16
#define MME2_RTR_LBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define MME2_RTR_LBW_WR_RQ_W_ARB_L_SHIFT                             24
#define MME2_RTR_LBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_LBW_WR_RQ_N_ARB                                   0x80278
/* MME2_RTR_LBW_WR_RQ_N_ARB */
#define MME2_RTR_LBW_WR_RQ_N_ARB_W_SHIFT                             0
#define MME2_RTR_LBW_WR_RQ_N_ARB_W_MASK                              0x7
#define MME2_RTR_LBW_WR_RQ_N_ARB_E_SHIFT                             8
#define MME2_RTR_LBW_WR_RQ_N_ARB_E_MASK                              0x700
#define MME2_RTR_LBW_WR_RQ_N_ARB_S_SHIFT                             16
#define MME2_RTR_LBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define MME2_RTR_LBW_WR_RQ_N_ARB_L_SHIFT                             24
#define MME2_RTR_LBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_LBW_WR_RQ_S_ARB                                   0x8027C
/* MME2_RTR_LBW_WR_RQ_S_ARB */
#define MME2_RTR_LBW_WR_RQ_S_ARB_W_SHIFT                             0
#define MME2_RTR_LBW_WR_RQ_S_ARB_W_MASK                              0x7
#define MME2_RTR_LBW_WR_RQ_S_ARB_E_SHIFT                             8
#define MME2_RTR_LBW_WR_RQ_S_ARB_E_MASK                              0x700
#define MME2_RTR_LBW_WR_RQ_S_ARB_N_SHIFT                             16
#define MME2_RTR_LBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define MME2_RTR_LBW_WR_RQ_S_ARB_L_SHIFT                             24
#define MME2_RTR_LBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_LBW_WR_RQ_L_ARB                                   0x80280
/* MME2_RTR_LBW_WR_RQ_L_ARB */
#define MME2_RTR_LBW_WR_RQ_L_ARB_W_SHIFT                             0
#define MME2_RTR_LBW_WR_RQ_L_ARB_W_MASK                              0x7
#define MME2_RTR_LBW_WR_RQ_L_ARB_E_SHIFT                             8
#define MME2_RTR_LBW_WR_RQ_L_ARB_E_MASK                              0x700
#define MME2_RTR_LBW_WR_RQ_L_ARB_S_SHIFT                             16
#define MME2_RTR_LBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define MME2_RTR_LBW_WR_RQ_L_ARB_N_SHIFT                             24
#define MME2_RTR_LBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME2_RTR_LBW_WR_RS_E_ARB                                   0x80290
/* MME2_RTR_LBW_WR_RS_E_ARB */
#define MME2_RTR_LBW_WR_RS_E_ARB_W_SHIFT                             0
#define MME2_RTR_LBW_WR_RS_E_ARB_W_MASK                              0x7
#define MME2_RTR_LBW_WR_RS_E_ARB_S_SHIFT                             8
#define MME2_RTR_LBW_WR_RS_E_ARB_S_MASK                              0x700
#define MME2_RTR_LBW_WR_RS_E_ARB_N_SHIFT                             16
#define MME2_RTR_LBW_WR_RS_E_ARB_N_MASK                              0x70000
#define MME2_RTR_LBW_WR_RS_E_ARB_L_SHIFT                             24
#define MME2_RTR_LBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_LBW_WR_RS_W_ARB                                   0x80294
/* MME2_RTR_LBW_WR_RS_W_ARB */
#define MME2_RTR_LBW_WR_RS_W_ARB_E_SHIFT                             0
#define MME2_RTR_LBW_WR_RS_W_ARB_E_MASK                              0x7
#define MME2_RTR_LBW_WR_RS_W_ARB_S_SHIFT                             8
#define MME2_RTR_LBW_WR_RS_W_ARB_S_MASK                              0x700
#define MME2_RTR_LBW_WR_RS_W_ARB_N_SHIFT                             16
#define MME2_RTR_LBW_WR_RS_W_ARB_N_MASK                              0x70000
#define MME2_RTR_LBW_WR_RS_W_ARB_L_SHIFT                             24
#define MME2_RTR_LBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_LBW_WR_RS_N_ARB                                   0x80298
/* MME2_RTR_LBW_WR_RS_N_ARB */
#define MME2_RTR_LBW_WR_RS_N_ARB_W_SHIFT                             0
#define MME2_RTR_LBW_WR_RS_N_ARB_W_MASK                              0x7
#define MME2_RTR_LBW_WR_RS_N_ARB_E_SHIFT                             8
#define MME2_RTR_LBW_WR_RS_N_ARB_E_MASK                              0x700
#define MME2_RTR_LBW_WR_RS_N_ARB_S_SHIFT                             16
#define MME2_RTR_LBW_WR_RS_N_ARB_S_MASK                              0x70000
#define MME2_RTR_LBW_WR_RS_N_ARB_L_SHIFT                             24
#define MME2_RTR_LBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_LBW_WR_RS_S_ARB                                   0x8029C
/* MME2_RTR_LBW_WR_RS_S_ARB */
#define MME2_RTR_LBW_WR_RS_S_ARB_W_SHIFT                             0
#define MME2_RTR_LBW_WR_RS_S_ARB_W_MASK                              0x7
#define MME2_RTR_LBW_WR_RS_S_ARB_E_SHIFT                             8
#define MME2_RTR_LBW_WR_RS_S_ARB_E_MASK                              0x700
#define MME2_RTR_LBW_WR_RS_S_ARB_N_SHIFT                             16
#define MME2_RTR_LBW_WR_RS_S_ARB_N_MASK                              0x70000
#define MME2_RTR_LBW_WR_RS_S_ARB_L_SHIFT                             24
#define MME2_RTR_LBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmMME2_RTR_LBW_WR_RS_L_ARB                                   0x802A0
/* MME2_RTR_LBW_WR_RS_L_ARB */
#define MME2_RTR_LBW_WR_RS_L_ARB_W_SHIFT                             0
#define MME2_RTR_LBW_WR_RS_L_ARB_W_MASK                              0x7
#define MME2_RTR_LBW_WR_RS_L_ARB_E_SHIFT                             8
#define MME2_RTR_LBW_WR_RS_L_ARB_E_MASK                              0x700
#define MME2_RTR_LBW_WR_RS_L_ARB_S_SHIFT                             16
#define MME2_RTR_LBW_WR_RS_L_ARB_S_MASK                              0x70000
#define MME2_RTR_LBW_WR_RS_L_ARB_N_SHIFT                             24
#define MME2_RTR_LBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmMME2_RTR_DBG_E_ARB                                         0x80300
/* MME2_RTR_DBG_E_ARB */
#define MME2_RTR_DBG_E_ARB_W_SHIFT                                   0
#define MME2_RTR_DBG_E_ARB_W_MASK                                    0x7
#define MME2_RTR_DBG_E_ARB_S_SHIFT                                   8
#define MME2_RTR_DBG_E_ARB_S_MASK                                    0x700
#define MME2_RTR_DBG_E_ARB_N_SHIFT                                   16
#define MME2_RTR_DBG_E_ARB_N_MASK                                    0x70000
#define MME2_RTR_DBG_E_ARB_L_SHIFT                                   24
#define MME2_RTR_DBG_E_ARB_L_MASK                                    0x7000000

#define mmMME2_RTR_DBG_W_ARB                                         0x80304
/* MME2_RTR_DBG_W_ARB */
#define MME2_RTR_DBG_W_ARB_E_SHIFT                                   0
#define MME2_RTR_DBG_W_ARB_E_MASK                                    0x7
#define MME2_RTR_DBG_W_ARB_S_SHIFT                                   8
#define MME2_RTR_DBG_W_ARB_S_MASK                                    0x700
#define MME2_RTR_DBG_W_ARB_N_SHIFT                                   16
#define MME2_RTR_DBG_W_ARB_N_MASK                                    0x70000
#define MME2_RTR_DBG_W_ARB_L_SHIFT                                   24
#define MME2_RTR_DBG_W_ARB_L_MASK                                    0x7000000

#define mmMME2_RTR_DBG_N_ARB                                         0x80308
/* MME2_RTR_DBG_N_ARB */
#define MME2_RTR_DBG_N_ARB_W_SHIFT                                   0
#define MME2_RTR_DBG_N_ARB_W_MASK                                    0x7
#define MME2_RTR_DBG_N_ARB_E_SHIFT                                   8
#define MME2_RTR_DBG_N_ARB_E_MASK                                    0x700
#define MME2_RTR_DBG_N_ARB_S_SHIFT                                   16
#define MME2_RTR_DBG_N_ARB_S_MASK                                    0x70000
#define MME2_RTR_DBG_N_ARB_L_SHIFT                                   24
#define MME2_RTR_DBG_N_ARB_L_MASK                                    0x7000000

#define mmMME2_RTR_DBG_S_ARB                                         0x8030C
/* MME2_RTR_DBG_S_ARB */
#define MME2_RTR_DBG_S_ARB_W_SHIFT                                   0
#define MME2_RTR_DBG_S_ARB_W_MASK                                    0x7
#define MME2_RTR_DBG_S_ARB_E_SHIFT                                   8
#define MME2_RTR_DBG_S_ARB_E_MASK                                    0x700
#define MME2_RTR_DBG_S_ARB_N_SHIFT                                   16
#define MME2_RTR_DBG_S_ARB_N_MASK                                    0x70000
#define MME2_RTR_DBG_S_ARB_L_SHIFT                                   24
#define MME2_RTR_DBG_S_ARB_L_MASK                                    0x7000000

#define mmMME2_RTR_DBG_L_ARB                                         0x80310
/* MME2_RTR_DBG_L_ARB */
#define MME2_RTR_DBG_L_ARB_W_SHIFT                                   0
#define MME2_RTR_DBG_L_ARB_W_MASK                                    0x7
#define MME2_RTR_DBG_L_ARB_E_SHIFT                                   8
#define MME2_RTR_DBG_L_ARB_E_MASK                                    0x700
#define MME2_RTR_DBG_L_ARB_S_SHIFT                                   16
#define MME2_RTR_DBG_L_ARB_S_MASK                                    0x70000
#define MME2_RTR_DBG_L_ARB_N_SHIFT                                   24
#define MME2_RTR_DBG_L_ARB_N_MASK                                    0x7000000

#define mmMME2_RTR_DBG_E_ARB_MAX                                     0x80320
/* MME2_RTR_DBG_E_ARB_MAX */
#define MME2_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME2_RTR_DBG_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME2_RTR_DBG_W_ARB_MAX                                     0x80324
/* MME2_RTR_DBG_W_ARB_MAX */
#define MME2_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME2_RTR_DBG_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME2_RTR_DBG_N_ARB_MAX                                     0x80328
/* MME2_RTR_DBG_N_ARB_MAX */
#define MME2_RTR_DBG_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME2_RTR_DBG_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME2_RTR_DBG_S_ARB_MAX                                     0x8032C
/* MME2_RTR_DBG_S_ARB_MAX */
#define MME2_RTR_DBG_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME2_RTR_DBG_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME2_RTR_DBG_L_ARB_MAX                                     0x80330
/* MME2_RTR_DBG_L_ARB_MAX */
#define MME2_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME2_RTR_DBG_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME2_RTR_SPLIT_COEF_0                                      0x80400

#define mmMME2_RTR_SPLIT_COEF_1                                      0x80404

#define mmMME2_RTR_SPLIT_COEF_2                                      0x80408

#define mmMME2_RTR_SPLIT_COEF_3                                      0x8040C

#define mmMME2_RTR_SPLIT_COEF_4                                      0x80410

#define mmMME2_RTR_SPLIT_COEF_5                                      0x80414

#define mmMME2_RTR_SPLIT_COEF_6                                      0x80418

#define mmMME2_RTR_SPLIT_COEF_7                                      0x8041C

#define mmMME2_RTR_SPLIT_COEF_8                                      0x80420

#define mmMME2_RTR_SPLIT_COEF_9                                      0x80424
/* MME2_RTR_SPLIT_COEF */
#define MME2_RTR_SPLIT_COEF_VAL_SHIFT                                0
#define MME2_RTR_SPLIT_COEF_VAL_MASK                                 0xFFFF

#define mmMME2_RTR_SPLIT_CFG                                         0x80440
/* MME2_RTR_SPLIT_CFG */
#define MME2_RTR_SPLIT_CFG_FORCE_WAK_ORDER_SHIFT                     0
#define MME2_RTR_SPLIT_CFG_FORCE_WAK_ORDER_MASK                      0x1
#define MME2_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_SHIFT                  1
#define MME2_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_MASK                   0x2
#define MME2_RTR_SPLIT_CFG_DEFAULT_MESH_SHIFT                        2
#define MME2_RTR_SPLIT_CFG_DEFAULT_MESH_MASK                         0xC
#define MME2_RTR_SPLIT_CFG_WR_RATE_LIM_EN_SHIFT                      4
#define MME2_RTR_SPLIT_CFG_WR_RATE_LIM_EN_MASK                       0x10
#define MME2_RTR_SPLIT_CFG_RD_RATE_LIM_EN_SHIFT                      5
#define MME2_RTR_SPLIT_CFG_RD_RATE_LIM_EN_MASK                       0x20
#define MME2_RTR_SPLIT_CFG_B2B_OPT_SHIFT                             6
#define MME2_RTR_SPLIT_CFG_B2B_OPT_MASK                              0x1C0

#define mmMME2_RTR_SPLIT_RD_SAT                                      0x80444
/* MME2_RTR_SPLIT_RD_SAT */
#define MME2_RTR_SPLIT_RD_SAT_VAL_SHIFT                              0
#define MME2_RTR_SPLIT_RD_SAT_VAL_MASK                               0xFFFF

#define mmMME2_RTR_SPLIT_RD_RST_TOKEN                                0x80448
/* MME2_RTR_SPLIT_RD_RST_TOKEN */
#define MME2_RTR_SPLIT_RD_RST_TOKEN_VAL_SHIFT                        0
#define MME2_RTR_SPLIT_RD_RST_TOKEN_VAL_MASK                         0xFFFF

#define mmMME2_RTR_SPLIT_RD_TIMEOUT_0                                0x8044C

#define mmMME2_RTR_SPLIT_RD_TIMEOUT_1                                0x80450
/* MME2_RTR_SPLIT_RD_TIMEOUT */
#define MME2_RTR_SPLIT_RD_TIMEOUT_VAL_SHIFT                          0
#define MME2_RTR_SPLIT_RD_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmMME2_RTR_SPLIT_WR_SAT                                      0x80454
/* MME2_RTR_SPLIT_WR_SAT */
#define MME2_RTR_SPLIT_WR_SAT_VAL_SHIFT                              0
#define MME2_RTR_SPLIT_WR_SAT_VAL_MASK                               0xFFFF

#define mmMME2_RTR_WPLIT_WR_TST_TOLEN                                0x80458
/* MME2_RTR_WPLIT_WR_TST_TOLEN */
#define MME2_RTR_WPLIT_WR_TST_TOLEN_VAL_SHIFT                        0
#define MME2_RTR_WPLIT_WR_TST_TOLEN_VAL_MASK                         0xFFFF

#define mmMME2_RTR_SPLIT_WR_TIMEOUT_0                                0x8045C

#define mmMME2_RTR_SPLIT_WR_TIMEOUT_1                                0x80460
/* MME2_RTR_SPLIT_WR_TIMEOUT */
#define MME2_RTR_SPLIT_WR_TIMEOUT_VAL_SHIFT                          0
#define MME2_RTR_SPLIT_WR_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmMME2_RTR_HBW_RANGE_HIT                                     0x80470
/* MME2_RTR_HBW_RANGE_HIT */
#define MME2_RTR_HBW_RANGE_HIT_IND_SHIFT                             0
#define MME2_RTR_HBW_RANGE_HIT_IND_MASK                              0xFF

#define mmMME2_RTR_HBW_RANGE_MASK_L_0                                0x80480

#define mmMME2_RTR_HBW_RANGE_MASK_L_1                                0x80484

#define mmMME2_RTR_HBW_RANGE_MASK_L_2                                0x80488

#define mmMME2_RTR_HBW_RANGE_MASK_L_3                                0x8048C

#define mmMME2_RTR_HBW_RANGE_MASK_L_4                                0x80490

#define mmMME2_RTR_HBW_RANGE_MASK_L_5                                0x80494

#define mmMME2_RTR_HBW_RANGE_MASK_L_6                                0x80498

#define mmMME2_RTR_HBW_RANGE_MASK_L_7                                0x8049C
/* MME2_RTR_HBW_RANGE_MASK_L */
#define MME2_RTR_HBW_RANGE_MASK_L_VAL_SHIFT                          0
#define MME2_RTR_HBW_RANGE_MASK_L_VAL_MASK                           0xFFFFFFFF

#define mmMME2_RTR_HBW_RANGE_MASK_H_0                                0x804A0

#define mmMME2_RTR_HBW_RANGE_MASK_H_1                                0x804A4

#define mmMME2_RTR_HBW_RANGE_MASK_H_2                                0x804A8

#define mmMME2_RTR_HBW_RANGE_MASK_H_3                                0x804AC

#define mmMME2_RTR_HBW_RANGE_MASK_H_4                                0x804B0

#define mmMME2_RTR_HBW_RANGE_MASK_H_5                                0x804B4

#define mmMME2_RTR_HBW_RANGE_MASK_H_6                                0x804B8

#define mmMME2_RTR_HBW_RANGE_MASK_H_7                                0x804BC
/* MME2_RTR_HBW_RANGE_MASK_H */
#define MME2_RTR_HBW_RANGE_MASK_H_VAL_SHIFT                          0
#define MME2_RTR_HBW_RANGE_MASK_H_VAL_MASK                           0x3FFFF

#define mmMME2_RTR_HBW_RANGE_BASE_L_0                                0x804C0

#define mmMME2_RTR_HBW_RANGE_BASE_L_1                                0x804C4

#define mmMME2_RTR_HBW_RANGE_BASE_L_2                                0x804C8

#define mmMME2_RTR_HBW_RANGE_BASE_L_3                                0x804CC

#define mmMME2_RTR_HBW_RANGE_BASE_L_4                                0x804D0

#define mmMME2_RTR_HBW_RANGE_BASE_L_5                                0x804D4

#define mmMME2_RTR_HBW_RANGE_BASE_L_6                                0x804D8

#define mmMME2_RTR_HBW_RANGE_BASE_L_7                                0x804DC
/* MME2_RTR_HBW_RANGE_BASE_L */
#define MME2_RTR_HBW_RANGE_BASE_L_VAL_SHIFT                          0
#define MME2_RTR_HBW_RANGE_BASE_L_VAL_MASK                           0xFFFFFFFF

#define mmMME2_RTR_HBW_RANGE_BASE_H_0                                0x804E0

#define mmMME2_RTR_HBW_RANGE_BASE_H_1                                0x804E4

#define mmMME2_RTR_HBW_RANGE_BASE_H_2                                0x804E8

#define mmMME2_RTR_HBW_RANGE_BASE_H_3                                0x804EC

#define mmMME2_RTR_HBW_RANGE_BASE_H_4                                0x804F0

#define mmMME2_RTR_HBW_RANGE_BASE_H_5                                0x804F4

#define mmMME2_RTR_HBW_RANGE_BASE_H_6                                0x804F8

#define mmMME2_RTR_HBW_RANGE_BASE_H_7                                0x804FC
/* MME2_RTR_HBW_RANGE_BASE_H */
#define MME2_RTR_HBW_RANGE_BASE_H_VAL_SHIFT                          0
#define MME2_RTR_HBW_RANGE_BASE_H_VAL_MASK                           0x3FFFF

#define mmMME2_RTR_LBW_RANGE_HIT                                     0x80500
/* MME2_RTR_LBW_RANGE_HIT */
#define MME2_RTR_LBW_RANGE_HIT_IND_SHIFT                             0
#define MME2_RTR_LBW_RANGE_HIT_IND_MASK                              0xFFFF

#define mmMME2_RTR_LBW_RANGE_MASK_0                                  0x80510

#define mmMME2_RTR_LBW_RANGE_MASK_1                                  0x80514

#define mmMME2_RTR_LBW_RANGE_MASK_2                                  0x80518

#define mmMME2_RTR_LBW_RANGE_MASK_3                                  0x8051C

#define mmMME2_RTR_LBW_RANGE_MASK_4                                  0x80520

#define mmMME2_RTR_LBW_RANGE_MASK_5                                  0x80524

#define mmMME2_RTR_LBW_RANGE_MASK_6                                  0x80528

#define mmMME2_RTR_LBW_RANGE_MASK_7                                  0x8052C

#define mmMME2_RTR_LBW_RANGE_MASK_8                                  0x80530

#define mmMME2_RTR_LBW_RANGE_MASK_9                                  0x80534

#define mmMME2_RTR_LBW_RANGE_MASK_10                                 0x80538

#define mmMME2_RTR_LBW_RANGE_MASK_11                                 0x8053C

#define mmMME2_RTR_LBW_RANGE_MASK_12                                 0x80540

#define mmMME2_RTR_LBW_RANGE_MASK_13                                 0x80544

#define mmMME2_RTR_LBW_RANGE_MASK_14                                 0x80548

#define mmMME2_RTR_LBW_RANGE_MASK_15                                 0x8054C
/* MME2_RTR_LBW_RANGE_MASK */
#define MME2_RTR_LBW_RANGE_MASK_VAL_SHIFT                            0
#define MME2_RTR_LBW_RANGE_MASK_VAL_MASK                             0x3FFFFFF

#define mmMME2_RTR_LBW_RANGE_BASE_0                                  0x80550

#define mmMME2_RTR_LBW_RANGE_BASE_1                                  0x80554

#define mmMME2_RTR_LBW_RANGE_BASE_2                                  0x80558

#define mmMME2_RTR_LBW_RANGE_BASE_3                                  0x8055C

#define mmMME2_RTR_LBW_RANGE_BASE_4                                  0x80560

#define mmMME2_RTR_LBW_RANGE_BASE_5                                  0x80564

#define mmMME2_RTR_LBW_RANGE_BASE_6                                  0x80568

#define mmMME2_RTR_LBW_RANGE_BASE_7                                  0x8056C

#define mmMME2_RTR_LBW_RANGE_BASE_8                                  0x80570

#define mmMME2_RTR_LBW_RANGE_BASE_9                                  0x80574

#define mmMME2_RTR_LBW_RANGE_BASE_10                                 0x80578

#define mmMME2_RTR_LBW_RANGE_BASE_11                                 0x8057C

#define mmMME2_RTR_LBW_RANGE_BASE_12                                 0x80580

#define mmMME2_RTR_LBW_RANGE_BASE_13                                 0x80584

#define mmMME2_RTR_LBW_RANGE_BASE_14                                 0x80588

#define mmMME2_RTR_LBW_RANGE_BASE_15                                 0x8058C
/* MME2_RTR_LBW_RANGE_BASE */
#define MME2_RTR_LBW_RANGE_BASE_VAL_SHIFT                            0
#define MME2_RTR_LBW_RANGE_BASE_VAL_MASK                             0x3FFFFFF

#define mmMME2_RTR_RGLTR                                             0x80590
/* MME2_RTR_RGLTR */
#define MME2_RTR_RGLTR_WR_EN_SHIFT                                   0
#define MME2_RTR_RGLTR_WR_EN_MASK                                    0x1
#define MME2_RTR_RGLTR_RD_EN_SHIFT                                   4
#define MME2_RTR_RGLTR_RD_EN_MASK                                    0x10

#define mmMME2_RTR_RGLTR_WR_RESULT                                   0x80594
/* MME2_RTR_RGLTR_WR_RESULT */
#define MME2_RTR_RGLTR_WR_RESULT_VAL_SHIFT                           0
#define MME2_RTR_RGLTR_WR_RESULT_VAL_MASK                            0xFF

#define mmMME2_RTR_RGLTR_RD_RESULT                                   0x80598
/* MME2_RTR_RGLTR_RD_RESULT */
#define MME2_RTR_RGLTR_RD_RESULT_VAL_SHIFT                           0
#define MME2_RTR_RGLTR_RD_RESULT_VAL_MASK                            0xFF

#define mmMME2_RTR_SCRAMB_EN                                         0x80600
/* MME2_RTR_SCRAMB_EN */
#define MME2_RTR_SCRAMB_EN_VAL_SHIFT                                 0
#define MME2_RTR_SCRAMB_EN_VAL_MASK                                  0x1

#define mmMME2_RTR_NON_LIN_SCRAMB                                    0x80604
/* MME2_RTR_NON_LIN_SCRAMB */
#define MME2_RTR_NON_LIN_SCRAMB_EN_SHIFT                             0
#define MME2_RTR_NON_LIN_SCRAMB_EN_MASK                              0x1

#endif /* ASIC_REG_MME2_RTR_H_ */

