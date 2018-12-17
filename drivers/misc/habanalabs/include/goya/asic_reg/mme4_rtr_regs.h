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

#ifndef ASIC_REG_MME4_RTR_H_
#define ASIC_REG_MME4_RTR_H_

/*
 *****************************************
 *   MME4_RTR (Prototype: MME_RTR)
 *****************************************
 */

#define mmMME4_RTR_HBW_RD_RQ_E_ARB                                   0x100100
/* MME4_RTR_HBW_RD_RQ_E_ARB */
#define MME4_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                             0
#define MME4_RTR_HBW_RD_RQ_E_ARB_W_MASK                              0x7
#define MME4_RTR_HBW_RD_RQ_E_ARB_S_SHIFT                             8
#define MME4_RTR_HBW_RD_RQ_E_ARB_S_MASK                              0x700
#define MME4_RTR_HBW_RD_RQ_E_ARB_N_SHIFT                             16
#define MME4_RTR_HBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define MME4_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                             24
#define MME4_RTR_HBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_HBW_RD_RQ_W_ARB                                   0x100104
/* MME4_RTR_HBW_RD_RQ_W_ARB */
#define MME4_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                             0
#define MME4_RTR_HBW_RD_RQ_W_ARB_E_MASK                              0x7
#define MME4_RTR_HBW_RD_RQ_W_ARB_S_SHIFT                             8
#define MME4_RTR_HBW_RD_RQ_W_ARB_S_MASK                              0x700
#define MME4_RTR_HBW_RD_RQ_W_ARB_N_SHIFT                             16
#define MME4_RTR_HBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define MME4_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                             24
#define MME4_RTR_HBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_HBW_RD_RQ_N_ARB                                   0x100108
/* MME4_RTR_HBW_RD_RQ_N_ARB */
#define MME4_RTR_HBW_RD_RQ_N_ARB_W_SHIFT                             0
#define MME4_RTR_HBW_RD_RQ_N_ARB_W_MASK                              0x7
#define MME4_RTR_HBW_RD_RQ_N_ARB_E_SHIFT                             8
#define MME4_RTR_HBW_RD_RQ_N_ARB_E_MASK                              0x700
#define MME4_RTR_HBW_RD_RQ_N_ARB_S_SHIFT                             16
#define MME4_RTR_HBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define MME4_RTR_HBW_RD_RQ_N_ARB_L_SHIFT                             24
#define MME4_RTR_HBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_HBW_RD_RQ_S_ARB                                   0x10010C
/* MME4_RTR_HBW_RD_RQ_S_ARB */
#define MME4_RTR_HBW_RD_RQ_S_ARB_W_SHIFT                             0
#define MME4_RTR_HBW_RD_RQ_S_ARB_W_MASK                              0x7
#define MME4_RTR_HBW_RD_RQ_S_ARB_E_SHIFT                             8
#define MME4_RTR_HBW_RD_RQ_S_ARB_E_MASK                              0x700
#define MME4_RTR_HBW_RD_RQ_S_ARB_N_SHIFT                             16
#define MME4_RTR_HBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define MME4_RTR_HBW_RD_RQ_S_ARB_L_SHIFT                             24
#define MME4_RTR_HBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_HBW_RD_RQ_L_ARB                                   0x100110
/* MME4_RTR_HBW_RD_RQ_L_ARB */
#define MME4_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                             0
#define MME4_RTR_HBW_RD_RQ_L_ARB_W_MASK                              0x7
#define MME4_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                             8
#define MME4_RTR_HBW_RD_RQ_L_ARB_E_MASK                              0x700
#define MME4_RTR_HBW_RD_RQ_L_ARB_S_SHIFT                             16
#define MME4_RTR_HBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define MME4_RTR_HBW_RD_RQ_L_ARB_N_SHIFT                             24
#define MME4_RTR_HBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME4_RTR_HBW_E_ARB_MAX                                     0x100120
/* MME4_RTR_HBW_E_ARB_MAX */
#define MME4_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME4_RTR_HBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME4_RTR_HBW_W_ARB_MAX                                     0x100124
/* MME4_RTR_HBW_W_ARB_MAX */
#define MME4_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME4_RTR_HBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME4_RTR_HBW_N_ARB_MAX                                     0x100128
/* MME4_RTR_HBW_N_ARB_MAX */
#define MME4_RTR_HBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME4_RTR_HBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME4_RTR_HBW_S_ARB_MAX                                     0x10012C
/* MME4_RTR_HBW_S_ARB_MAX */
#define MME4_RTR_HBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME4_RTR_HBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME4_RTR_HBW_L_ARB_MAX                                     0x100130
/* MME4_RTR_HBW_L_ARB_MAX */
#define MME4_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME4_RTR_HBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME4_RTR_HBW_RD_RS_MAX_CREDIT                              0x100140
/* MME4_RTR_HBW_RD_RS_MAX_CREDIT */
#define MME4_RTR_HBW_RD_RS_MAX_CREDIT_A_SHIFT                        0
#define MME4_RTR_HBW_RD_RS_MAX_CREDIT_A_MASK                         0x3F
#define MME4_RTR_HBW_RD_RS_MAX_CREDIT_B_SHIFT                        8
#define MME4_RTR_HBW_RD_RS_MAX_CREDIT_B_MASK                         0x3F00

#define mmMME4_RTR_HBW_WR_RQ_MAX_CREDIT                              0x100144
/* MME4_RTR_HBW_WR_RQ_MAX_CREDIT */
#define MME4_RTR_HBW_WR_RQ_MAX_CREDIT_VAL_SHIFT                      0
#define MME4_RTR_HBW_WR_RQ_MAX_CREDIT_VAL_MASK                       0x3F

#define mmMME4_RTR_HBW_RD_RQ_MAX_CREDIT                              0x100148
/* MME4_RTR_HBW_RD_RQ_MAX_CREDIT */
#define MME4_RTR_HBW_RD_RQ_MAX_CREDIT_A_SHIFT                        0
#define MME4_RTR_HBW_RD_RQ_MAX_CREDIT_A_MASK                         0x3F
#define MME4_RTR_HBW_RD_RQ_MAX_CREDIT_B_SHIFT                        8
#define MME4_RTR_HBW_RD_RQ_MAX_CREDIT_B_MASK                         0x3F00
#define MME4_RTR_HBW_RD_RQ_MAX_CREDIT_IC_SHIFT                       16
#define MME4_RTR_HBW_RD_RQ_MAX_CREDIT_IC_MASK                        0x3F0000

#define mmMME4_RTR_HBW_RD_RS_E_ARB                                   0x100150
/* MME4_RTR_HBW_RD_RS_E_ARB */
#define MME4_RTR_HBW_RD_RS_E_ARB_W_SHIFT                             0
#define MME4_RTR_HBW_RD_RS_E_ARB_W_MASK                              0x7
#define MME4_RTR_HBW_RD_RS_E_ARB_S_SHIFT                             8
#define MME4_RTR_HBW_RD_RS_E_ARB_S_MASK                              0x700
#define MME4_RTR_HBW_RD_RS_E_ARB_N_SHIFT                             16
#define MME4_RTR_HBW_RD_RS_E_ARB_N_MASK                              0x70000
#define MME4_RTR_HBW_RD_RS_E_ARB_L_SHIFT                             24
#define MME4_RTR_HBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_HBW_RD_RS_W_ARB                                   0x100154
/* MME4_RTR_HBW_RD_RS_W_ARB */
#define MME4_RTR_HBW_RD_RS_W_ARB_E_SHIFT                             0
#define MME4_RTR_HBW_RD_RS_W_ARB_E_MASK                              0x7
#define MME4_RTR_HBW_RD_RS_W_ARB_S_SHIFT                             8
#define MME4_RTR_HBW_RD_RS_W_ARB_S_MASK                              0x700
#define MME4_RTR_HBW_RD_RS_W_ARB_N_SHIFT                             16
#define MME4_RTR_HBW_RD_RS_W_ARB_N_MASK                              0x70000
#define MME4_RTR_HBW_RD_RS_W_ARB_L_SHIFT                             24
#define MME4_RTR_HBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_HBW_RD_RS_N_ARB                                   0x100158
/* MME4_RTR_HBW_RD_RS_N_ARB */
#define MME4_RTR_HBW_RD_RS_N_ARB_W_SHIFT                             0
#define MME4_RTR_HBW_RD_RS_N_ARB_W_MASK                              0x7
#define MME4_RTR_HBW_RD_RS_N_ARB_E_SHIFT                             8
#define MME4_RTR_HBW_RD_RS_N_ARB_E_MASK                              0x700
#define MME4_RTR_HBW_RD_RS_N_ARB_S_SHIFT                             16
#define MME4_RTR_HBW_RD_RS_N_ARB_S_MASK                              0x70000
#define MME4_RTR_HBW_RD_RS_N_ARB_L_SHIFT                             24
#define MME4_RTR_HBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_HBW_RD_RS_S_ARB                                   0x10015C
/* MME4_RTR_HBW_RD_RS_S_ARB */
#define MME4_RTR_HBW_RD_RS_S_ARB_W_SHIFT                             0
#define MME4_RTR_HBW_RD_RS_S_ARB_W_MASK                              0x7
#define MME4_RTR_HBW_RD_RS_S_ARB_E_SHIFT                             8
#define MME4_RTR_HBW_RD_RS_S_ARB_E_MASK                              0x700
#define MME4_RTR_HBW_RD_RS_S_ARB_N_SHIFT                             16
#define MME4_RTR_HBW_RD_RS_S_ARB_N_MASK                              0x70000
#define MME4_RTR_HBW_RD_RS_S_ARB_L_SHIFT                             24
#define MME4_RTR_HBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_HBW_RD_RS_L_ARB                                   0x100160
/* MME4_RTR_HBW_RD_RS_L_ARB */
#define MME4_RTR_HBW_RD_RS_L_ARB_W_SHIFT                             0
#define MME4_RTR_HBW_RD_RS_L_ARB_W_MASK                              0x7
#define MME4_RTR_HBW_RD_RS_L_ARB_E_SHIFT                             8
#define MME4_RTR_HBW_RD_RS_L_ARB_E_MASK                              0x700
#define MME4_RTR_HBW_RD_RS_L_ARB_S_SHIFT                             16
#define MME4_RTR_HBW_RD_RS_L_ARB_S_MASK                              0x70000
#define MME4_RTR_HBW_RD_RS_L_ARB_N_SHIFT                             24
#define MME4_RTR_HBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmMME4_RTR_HBW_WR_RQ_E_ARB                                   0x100170
/* MME4_RTR_HBW_WR_RQ_E_ARB */
#define MME4_RTR_HBW_WR_RQ_E_ARB_W_SHIFT                             0
#define MME4_RTR_HBW_WR_RQ_E_ARB_W_MASK                              0x7
#define MME4_RTR_HBW_WR_RQ_E_ARB_S_SHIFT                             8
#define MME4_RTR_HBW_WR_RQ_E_ARB_S_MASK                              0x700
#define MME4_RTR_HBW_WR_RQ_E_ARB_N_SHIFT                             16
#define MME4_RTR_HBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define MME4_RTR_HBW_WR_RQ_E_ARB_L_SHIFT                             24
#define MME4_RTR_HBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_HBW_WR_RQ_W_ARB                                   0x100174
/* MME4_RTR_HBW_WR_RQ_W_ARB */
#define MME4_RTR_HBW_WR_RQ_W_ARB_E_SHIFT                             0
#define MME4_RTR_HBW_WR_RQ_W_ARB_E_MASK                              0x7
#define MME4_RTR_HBW_WR_RQ_W_ARB_S_SHIFT                             8
#define MME4_RTR_HBW_WR_RQ_W_ARB_S_MASK                              0x700
#define MME4_RTR_HBW_WR_RQ_W_ARB_N_SHIFT                             16
#define MME4_RTR_HBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define MME4_RTR_HBW_WR_RQ_W_ARB_L_SHIFT                             24
#define MME4_RTR_HBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_HBW_WR_RQ_N_ARB                                   0x100178
/* MME4_RTR_HBW_WR_RQ_N_ARB */
#define MME4_RTR_HBW_WR_RQ_N_ARB_W_SHIFT                             0
#define MME4_RTR_HBW_WR_RQ_N_ARB_W_MASK                              0x7
#define MME4_RTR_HBW_WR_RQ_N_ARB_E_SHIFT                             8
#define MME4_RTR_HBW_WR_RQ_N_ARB_E_MASK                              0x700
#define MME4_RTR_HBW_WR_RQ_N_ARB_S_SHIFT                             16
#define MME4_RTR_HBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define MME4_RTR_HBW_WR_RQ_N_ARB_L_SHIFT                             24
#define MME4_RTR_HBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_HBW_WR_RQ_S_ARB                                   0x10017C
/* MME4_RTR_HBW_WR_RQ_S_ARB */
#define MME4_RTR_HBW_WR_RQ_S_ARB_W_SHIFT                             0
#define MME4_RTR_HBW_WR_RQ_S_ARB_W_MASK                              0x7
#define MME4_RTR_HBW_WR_RQ_S_ARB_E_SHIFT                             8
#define MME4_RTR_HBW_WR_RQ_S_ARB_E_MASK                              0x700
#define MME4_RTR_HBW_WR_RQ_S_ARB_N_SHIFT                             16
#define MME4_RTR_HBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define MME4_RTR_HBW_WR_RQ_S_ARB_L_SHIFT                             24
#define MME4_RTR_HBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_HBW_WR_RQ_L_ARB                                   0x100180
/* MME4_RTR_HBW_WR_RQ_L_ARB */
#define MME4_RTR_HBW_WR_RQ_L_ARB_W_SHIFT                             0
#define MME4_RTR_HBW_WR_RQ_L_ARB_W_MASK                              0x7
#define MME4_RTR_HBW_WR_RQ_L_ARB_E_SHIFT                             8
#define MME4_RTR_HBW_WR_RQ_L_ARB_E_MASK                              0x700
#define MME4_RTR_HBW_WR_RQ_L_ARB_S_SHIFT                             16
#define MME4_RTR_HBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define MME4_RTR_HBW_WR_RQ_L_ARB_N_SHIFT                             24
#define MME4_RTR_HBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME4_RTR_HBW_WR_RS_E_ARB                                   0x100190
/* MME4_RTR_HBW_WR_RS_E_ARB */
#define MME4_RTR_HBW_WR_RS_E_ARB_W_SHIFT                             0
#define MME4_RTR_HBW_WR_RS_E_ARB_W_MASK                              0x7
#define MME4_RTR_HBW_WR_RS_E_ARB_S_SHIFT                             8
#define MME4_RTR_HBW_WR_RS_E_ARB_S_MASK                              0x700
#define MME4_RTR_HBW_WR_RS_E_ARB_N_SHIFT                             16
#define MME4_RTR_HBW_WR_RS_E_ARB_N_MASK                              0x70000
#define MME4_RTR_HBW_WR_RS_E_ARB_L_SHIFT                             24
#define MME4_RTR_HBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_HBW_WR_RS_W_ARB                                   0x100194
/* MME4_RTR_HBW_WR_RS_W_ARB */
#define MME4_RTR_HBW_WR_RS_W_ARB_E_SHIFT                             0
#define MME4_RTR_HBW_WR_RS_W_ARB_E_MASK                              0x7
#define MME4_RTR_HBW_WR_RS_W_ARB_S_SHIFT                             8
#define MME4_RTR_HBW_WR_RS_W_ARB_S_MASK                              0x700
#define MME4_RTR_HBW_WR_RS_W_ARB_N_SHIFT                             16
#define MME4_RTR_HBW_WR_RS_W_ARB_N_MASK                              0x70000
#define MME4_RTR_HBW_WR_RS_W_ARB_L_SHIFT                             24
#define MME4_RTR_HBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_HBW_WR_RS_N_ARB                                   0x100198
/* MME4_RTR_HBW_WR_RS_N_ARB */
#define MME4_RTR_HBW_WR_RS_N_ARB_W_SHIFT                             0
#define MME4_RTR_HBW_WR_RS_N_ARB_W_MASK                              0x7
#define MME4_RTR_HBW_WR_RS_N_ARB_E_SHIFT                             8
#define MME4_RTR_HBW_WR_RS_N_ARB_E_MASK                              0x700
#define MME4_RTR_HBW_WR_RS_N_ARB_S_SHIFT                             16
#define MME4_RTR_HBW_WR_RS_N_ARB_S_MASK                              0x70000
#define MME4_RTR_HBW_WR_RS_N_ARB_L_SHIFT                             24
#define MME4_RTR_HBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_HBW_WR_RS_S_ARB                                   0x10019C
/* MME4_RTR_HBW_WR_RS_S_ARB */
#define MME4_RTR_HBW_WR_RS_S_ARB_W_SHIFT                             0
#define MME4_RTR_HBW_WR_RS_S_ARB_W_MASK                              0x7
#define MME4_RTR_HBW_WR_RS_S_ARB_E_SHIFT                             8
#define MME4_RTR_HBW_WR_RS_S_ARB_E_MASK                              0x700
#define MME4_RTR_HBW_WR_RS_S_ARB_N_SHIFT                             16
#define MME4_RTR_HBW_WR_RS_S_ARB_N_MASK                              0x70000
#define MME4_RTR_HBW_WR_RS_S_ARB_L_SHIFT                             24
#define MME4_RTR_HBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_HBW_WR_RS_L_ARB                                   0x1001A0
/* MME4_RTR_HBW_WR_RS_L_ARB */
#define MME4_RTR_HBW_WR_RS_L_ARB_W_SHIFT                             0
#define MME4_RTR_HBW_WR_RS_L_ARB_W_MASK                              0x7
#define MME4_RTR_HBW_WR_RS_L_ARB_E_SHIFT                             8
#define MME4_RTR_HBW_WR_RS_L_ARB_E_MASK                              0x700
#define MME4_RTR_HBW_WR_RS_L_ARB_S_SHIFT                             16
#define MME4_RTR_HBW_WR_RS_L_ARB_S_MASK                              0x70000
#define MME4_RTR_HBW_WR_RS_L_ARB_N_SHIFT                             24
#define MME4_RTR_HBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmMME4_RTR_LBW_RD_RQ_E_ARB                                   0x100200
/* MME4_RTR_LBW_RD_RQ_E_ARB */
#define MME4_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                             0
#define MME4_RTR_LBW_RD_RQ_E_ARB_W_MASK                              0x7
#define MME4_RTR_LBW_RD_RQ_E_ARB_S_SHIFT                             8
#define MME4_RTR_LBW_RD_RQ_E_ARB_S_MASK                              0x700
#define MME4_RTR_LBW_RD_RQ_E_ARB_N_SHIFT                             16
#define MME4_RTR_LBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define MME4_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                             24
#define MME4_RTR_LBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_LBW_RD_RQ_W_ARB                                   0x100204
/* MME4_RTR_LBW_RD_RQ_W_ARB */
#define MME4_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                             0
#define MME4_RTR_LBW_RD_RQ_W_ARB_E_MASK                              0x7
#define MME4_RTR_LBW_RD_RQ_W_ARB_S_SHIFT                             8
#define MME4_RTR_LBW_RD_RQ_W_ARB_S_MASK                              0x700
#define MME4_RTR_LBW_RD_RQ_W_ARB_N_SHIFT                             16
#define MME4_RTR_LBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define MME4_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                             24
#define MME4_RTR_LBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_LBW_RD_RQ_N_ARB                                   0x100208
/* MME4_RTR_LBW_RD_RQ_N_ARB */
#define MME4_RTR_LBW_RD_RQ_N_ARB_W_SHIFT                             0
#define MME4_RTR_LBW_RD_RQ_N_ARB_W_MASK                              0x7
#define MME4_RTR_LBW_RD_RQ_N_ARB_E_SHIFT                             8
#define MME4_RTR_LBW_RD_RQ_N_ARB_E_MASK                              0x700
#define MME4_RTR_LBW_RD_RQ_N_ARB_S_SHIFT                             16
#define MME4_RTR_LBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define MME4_RTR_LBW_RD_RQ_N_ARB_L_SHIFT                             24
#define MME4_RTR_LBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_LBW_RD_RQ_S_ARB                                   0x10020C
/* MME4_RTR_LBW_RD_RQ_S_ARB */
#define MME4_RTR_LBW_RD_RQ_S_ARB_W_SHIFT                             0
#define MME4_RTR_LBW_RD_RQ_S_ARB_W_MASK                              0x7
#define MME4_RTR_LBW_RD_RQ_S_ARB_E_SHIFT                             8
#define MME4_RTR_LBW_RD_RQ_S_ARB_E_MASK                              0x700
#define MME4_RTR_LBW_RD_RQ_S_ARB_N_SHIFT                             16
#define MME4_RTR_LBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define MME4_RTR_LBW_RD_RQ_S_ARB_L_SHIFT                             24
#define MME4_RTR_LBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_LBW_RD_RQ_L_ARB                                   0x100210
/* MME4_RTR_LBW_RD_RQ_L_ARB */
#define MME4_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                             0
#define MME4_RTR_LBW_RD_RQ_L_ARB_W_MASK                              0x7
#define MME4_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                             8
#define MME4_RTR_LBW_RD_RQ_L_ARB_E_MASK                              0x700
#define MME4_RTR_LBW_RD_RQ_L_ARB_S_SHIFT                             16
#define MME4_RTR_LBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define MME4_RTR_LBW_RD_RQ_L_ARB_N_SHIFT                             24
#define MME4_RTR_LBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME4_RTR_LBW_E_ARB_MAX                                     0x100220
/* MME4_RTR_LBW_E_ARB_MAX */
#define MME4_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME4_RTR_LBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME4_RTR_LBW_W_ARB_MAX                                     0x100224
/* MME4_RTR_LBW_W_ARB_MAX */
#define MME4_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME4_RTR_LBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME4_RTR_LBW_N_ARB_MAX                                     0x100228
/* MME4_RTR_LBW_N_ARB_MAX */
#define MME4_RTR_LBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME4_RTR_LBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME4_RTR_LBW_S_ARB_MAX                                     0x10022C
/* MME4_RTR_LBW_S_ARB_MAX */
#define MME4_RTR_LBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME4_RTR_LBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME4_RTR_LBW_L_ARB_MAX                                     0x100230
/* MME4_RTR_LBW_L_ARB_MAX */
#define MME4_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME4_RTR_LBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME4_RTR_LBW_SRAM_MAX_CREDIT                               0x100240
/* MME4_RTR_LBW_SRAM_MAX_CREDIT */
#define MME4_RTR_LBW_SRAM_MAX_CREDIT_MSTR_SHIFT                      0
#define MME4_RTR_LBW_SRAM_MAX_CREDIT_MSTR_MASK                       0x3F
#define MME4_RTR_LBW_SRAM_MAX_CREDIT_SLV_SHIFT                       8
#define MME4_RTR_LBW_SRAM_MAX_CREDIT_SLV_MASK                        0x3F00

#define mmMME4_RTR_LBW_RD_RS_E_ARB                                   0x100250
/* MME4_RTR_LBW_RD_RS_E_ARB */
#define MME4_RTR_LBW_RD_RS_E_ARB_W_SHIFT                             0
#define MME4_RTR_LBW_RD_RS_E_ARB_W_MASK                              0x7
#define MME4_RTR_LBW_RD_RS_E_ARB_S_SHIFT                             8
#define MME4_RTR_LBW_RD_RS_E_ARB_S_MASK                              0x700
#define MME4_RTR_LBW_RD_RS_E_ARB_N_SHIFT                             16
#define MME4_RTR_LBW_RD_RS_E_ARB_N_MASK                              0x70000
#define MME4_RTR_LBW_RD_RS_E_ARB_L_SHIFT                             24
#define MME4_RTR_LBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_LBW_RD_RS_W_ARB                                   0x100254
/* MME4_RTR_LBW_RD_RS_W_ARB */
#define MME4_RTR_LBW_RD_RS_W_ARB_E_SHIFT                             0
#define MME4_RTR_LBW_RD_RS_W_ARB_E_MASK                              0x7
#define MME4_RTR_LBW_RD_RS_W_ARB_S_SHIFT                             8
#define MME4_RTR_LBW_RD_RS_W_ARB_S_MASK                              0x700
#define MME4_RTR_LBW_RD_RS_W_ARB_N_SHIFT                             16
#define MME4_RTR_LBW_RD_RS_W_ARB_N_MASK                              0x70000
#define MME4_RTR_LBW_RD_RS_W_ARB_L_SHIFT                             24
#define MME4_RTR_LBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_LBW_RD_RS_N_ARB                                   0x100258
/* MME4_RTR_LBW_RD_RS_N_ARB */
#define MME4_RTR_LBW_RD_RS_N_ARB_W_SHIFT                             0
#define MME4_RTR_LBW_RD_RS_N_ARB_W_MASK                              0x7
#define MME4_RTR_LBW_RD_RS_N_ARB_E_SHIFT                             8
#define MME4_RTR_LBW_RD_RS_N_ARB_E_MASK                              0x700
#define MME4_RTR_LBW_RD_RS_N_ARB_S_SHIFT                             16
#define MME4_RTR_LBW_RD_RS_N_ARB_S_MASK                              0x70000
#define MME4_RTR_LBW_RD_RS_N_ARB_L_SHIFT                             24
#define MME4_RTR_LBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_LBW_RD_RS_S_ARB                                   0x10025C
/* MME4_RTR_LBW_RD_RS_S_ARB */
#define MME4_RTR_LBW_RD_RS_S_ARB_W_SHIFT                             0
#define MME4_RTR_LBW_RD_RS_S_ARB_W_MASK                              0x7
#define MME4_RTR_LBW_RD_RS_S_ARB_E_SHIFT                             8
#define MME4_RTR_LBW_RD_RS_S_ARB_E_MASK                              0x700
#define MME4_RTR_LBW_RD_RS_S_ARB_N_SHIFT                             16
#define MME4_RTR_LBW_RD_RS_S_ARB_N_MASK                              0x70000
#define MME4_RTR_LBW_RD_RS_S_ARB_L_SHIFT                             24
#define MME4_RTR_LBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_LBW_RD_RS_L_ARB                                   0x100260
/* MME4_RTR_LBW_RD_RS_L_ARB */
#define MME4_RTR_LBW_RD_RS_L_ARB_W_SHIFT                             0
#define MME4_RTR_LBW_RD_RS_L_ARB_W_MASK                              0x7
#define MME4_RTR_LBW_RD_RS_L_ARB_E_SHIFT                             8
#define MME4_RTR_LBW_RD_RS_L_ARB_E_MASK                              0x700
#define MME4_RTR_LBW_RD_RS_L_ARB_S_SHIFT                             16
#define MME4_RTR_LBW_RD_RS_L_ARB_S_MASK                              0x70000
#define MME4_RTR_LBW_RD_RS_L_ARB_N_SHIFT                             24
#define MME4_RTR_LBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmMME4_RTR_LBW_WR_RQ_E_ARB                                   0x100270
/* MME4_RTR_LBW_WR_RQ_E_ARB */
#define MME4_RTR_LBW_WR_RQ_E_ARB_W_SHIFT                             0
#define MME4_RTR_LBW_WR_RQ_E_ARB_W_MASK                              0x7
#define MME4_RTR_LBW_WR_RQ_E_ARB_S_SHIFT                             8
#define MME4_RTR_LBW_WR_RQ_E_ARB_S_MASK                              0x700
#define MME4_RTR_LBW_WR_RQ_E_ARB_N_SHIFT                             16
#define MME4_RTR_LBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define MME4_RTR_LBW_WR_RQ_E_ARB_L_SHIFT                             24
#define MME4_RTR_LBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_LBW_WR_RQ_W_ARB                                   0x100274
/* MME4_RTR_LBW_WR_RQ_W_ARB */
#define MME4_RTR_LBW_WR_RQ_W_ARB_E_SHIFT                             0
#define MME4_RTR_LBW_WR_RQ_W_ARB_E_MASK                              0x7
#define MME4_RTR_LBW_WR_RQ_W_ARB_S_SHIFT                             8
#define MME4_RTR_LBW_WR_RQ_W_ARB_S_MASK                              0x700
#define MME4_RTR_LBW_WR_RQ_W_ARB_N_SHIFT                             16
#define MME4_RTR_LBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define MME4_RTR_LBW_WR_RQ_W_ARB_L_SHIFT                             24
#define MME4_RTR_LBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_LBW_WR_RQ_N_ARB                                   0x100278
/* MME4_RTR_LBW_WR_RQ_N_ARB */
#define MME4_RTR_LBW_WR_RQ_N_ARB_W_SHIFT                             0
#define MME4_RTR_LBW_WR_RQ_N_ARB_W_MASK                              0x7
#define MME4_RTR_LBW_WR_RQ_N_ARB_E_SHIFT                             8
#define MME4_RTR_LBW_WR_RQ_N_ARB_E_MASK                              0x700
#define MME4_RTR_LBW_WR_RQ_N_ARB_S_SHIFT                             16
#define MME4_RTR_LBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define MME4_RTR_LBW_WR_RQ_N_ARB_L_SHIFT                             24
#define MME4_RTR_LBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_LBW_WR_RQ_S_ARB                                   0x10027C
/* MME4_RTR_LBW_WR_RQ_S_ARB */
#define MME4_RTR_LBW_WR_RQ_S_ARB_W_SHIFT                             0
#define MME4_RTR_LBW_WR_RQ_S_ARB_W_MASK                              0x7
#define MME4_RTR_LBW_WR_RQ_S_ARB_E_SHIFT                             8
#define MME4_RTR_LBW_WR_RQ_S_ARB_E_MASK                              0x700
#define MME4_RTR_LBW_WR_RQ_S_ARB_N_SHIFT                             16
#define MME4_RTR_LBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define MME4_RTR_LBW_WR_RQ_S_ARB_L_SHIFT                             24
#define MME4_RTR_LBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_LBW_WR_RQ_L_ARB                                   0x100280
/* MME4_RTR_LBW_WR_RQ_L_ARB */
#define MME4_RTR_LBW_WR_RQ_L_ARB_W_SHIFT                             0
#define MME4_RTR_LBW_WR_RQ_L_ARB_W_MASK                              0x7
#define MME4_RTR_LBW_WR_RQ_L_ARB_E_SHIFT                             8
#define MME4_RTR_LBW_WR_RQ_L_ARB_E_MASK                              0x700
#define MME4_RTR_LBW_WR_RQ_L_ARB_S_SHIFT                             16
#define MME4_RTR_LBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define MME4_RTR_LBW_WR_RQ_L_ARB_N_SHIFT                             24
#define MME4_RTR_LBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME4_RTR_LBW_WR_RS_E_ARB                                   0x100290
/* MME4_RTR_LBW_WR_RS_E_ARB */
#define MME4_RTR_LBW_WR_RS_E_ARB_W_SHIFT                             0
#define MME4_RTR_LBW_WR_RS_E_ARB_W_MASK                              0x7
#define MME4_RTR_LBW_WR_RS_E_ARB_S_SHIFT                             8
#define MME4_RTR_LBW_WR_RS_E_ARB_S_MASK                              0x700
#define MME4_RTR_LBW_WR_RS_E_ARB_N_SHIFT                             16
#define MME4_RTR_LBW_WR_RS_E_ARB_N_MASK                              0x70000
#define MME4_RTR_LBW_WR_RS_E_ARB_L_SHIFT                             24
#define MME4_RTR_LBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_LBW_WR_RS_W_ARB                                   0x100294
/* MME4_RTR_LBW_WR_RS_W_ARB */
#define MME4_RTR_LBW_WR_RS_W_ARB_E_SHIFT                             0
#define MME4_RTR_LBW_WR_RS_W_ARB_E_MASK                              0x7
#define MME4_RTR_LBW_WR_RS_W_ARB_S_SHIFT                             8
#define MME4_RTR_LBW_WR_RS_W_ARB_S_MASK                              0x700
#define MME4_RTR_LBW_WR_RS_W_ARB_N_SHIFT                             16
#define MME4_RTR_LBW_WR_RS_W_ARB_N_MASK                              0x70000
#define MME4_RTR_LBW_WR_RS_W_ARB_L_SHIFT                             24
#define MME4_RTR_LBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_LBW_WR_RS_N_ARB                                   0x100298
/* MME4_RTR_LBW_WR_RS_N_ARB */
#define MME4_RTR_LBW_WR_RS_N_ARB_W_SHIFT                             0
#define MME4_RTR_LBW_WR_RS_N_ARB_W_MASK                              0x7
#define MME4_RTR_LBW_WR_RS_N_ARB_E_SHIFT                             8
#define MME4_RTR_LBW_WR_RS_N_ARB_E_MASK                              0x700
#define MME4_RTR_LBW_WR_RS_N_ARB_S_SHIFT                             16
#define MME4_RTR_LBW_WR_RS_N_ARB_S_MASK                              0x70000
#define MME4_RTR_LBW_WR_RS_N_ARB_L_SHIFT                             24
#define MME4_RTR_LBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_LBW_WR_RS_S_ARB                                   0x10029C
/* MME4_RTR_LBW_WR_RS_S_ARB */
#define MME4_RTR_LBW_WR_RS_S_ARB_W_SHIFT                             0
#define MME4_RTR_LBW_WR_RS_S_ARB_W_MASK                              0x7
#define MME4_RTR_LBW_WR_RS_S_ARB_E_SHIFT                             8
#define MME4_RTR_LBW_WR_RS_S_ARB_E_MASK                              0x700
#define MME4_RTR_LBW_WR_RS_S_ARB_N_SHIFT                             16
#define MME4_RTR_LBW_WR_RS_S_ARB_N_MASK                              0x70000
#define MME4_RTR_LBW_WR_RS_S_ARB_L_SHIFT                             24
#define MME4_RTR_LBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmMME4_RTR_LBW_WR_RS_L_ARB                                   0x1002A0
/* MME4_RTR_LBW_WR_RS_L_ARB */
#define MME4_RTR_LBW_WR_RS_L_ARB_W_SHIFT                             0
#define MME4_RTR_LBW_WR_RS_L_ARB_W_MASK                              0x7
#define MME4_RTR_LBW_WR_RS_L_ARB_E_SHIFT                             8
#define MME4_RTR_LBW_WR_RS_L_ARB_E_MASK                              0x700
#define MME4_RTR_LBW_WR_RS_L_ARB_S_SHIFT                             16
#define MME4_RTR_LBW_WR_RS_L_ARB_S_MASK                              0x70000
#define MME4_RTR_LBW_WR_RS_L_ARB_N_SHIFT                             24
#define MME4_RTR_LBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmMME4_RTR_DBG_E_ARB                                         0x100300
/* MME4_RTR_DBG_E_ARB */
#define MME4_RTR_DBG_E_ARB_W_SHIFT                                   0
#define MME4_RTR_DBG_E_ARB_W_MASK                                    0x7
#define MME4_RTR_DBG_E_ARB_S_SHIFT                                   8
#define MME4_RTR_DBG_E_ARB_S_MASK                                    0x700
#define MME4_RTR_DBG_E_ARB_N_SHIFT                                   16
#define MME4_RTR_DBG_E_ARB_N_MASK                                    0x70000
#define MME4_RTR_DBG_E_ARB_L_SHIFT                                   24
#define MME4_RTR_DBG_E_ARB_L_MASK                                    0x7000000

#define mmMME4_RTR_DBG_W_ARB                                         0x100304
/* MME4_RTR_DBG_W_ARB */
#define MME4_RTR_DBG_W_ARB_E_SHIFT                                   0
#define MME4_RTR_DBG_W_ARB_E_MASK                                    0x7
#define MME4_RTR_DBG_W_ARB_S_SHIFT                                   8
#define MME4_RTR_DBG_W_ARB_S_MASK                                    0x700
#define MME4_RTR_DBG_W_ARB_N_SHIFT                                   16
#define MME4_RTR_DBG_W_ARB_N_MASK                                    0x70000
#define MME4_RTR_DBG_W_ARB_L_SHIFT                                   24
#define MME4_RTR_DBG_W_ARB_L_MASK                                    0x7000000

#define mmMME4_RTR_DBG_N_ARB                                         0x100308
/* MME4_RTR_DBG_N_ARB */
#define MME4_RTR_DBG_N_ARB_W_SHIFT                                   0
#define MME4_RTR_DBG_N_ARB_W_MASK                                    0x7
#define MME4_RTR_DBG_N_ARB_E_SHIFT                                   8
#define MME4_RTR_DBG_N_ARB_E_MASK                                    0x700
#define MME4_RTR_DBG_N_ARB_S_SHIFT                                   16
#define MME4_RTR_DBG_N_ARB_S_MASK                                    0x70000
#define MME4_RTR_DBG_N_ARB_L_SHIFT                                   24
#define MME4_RTR_DBG_N_ARB_L_MASK                                    0x7000000

#define mmMME4_RTR_DBG_S_ARB                                         0x10030C
/* MME4_RTR_DBG_S_ARB */
#define MME4_RTR_DBG_S_ARB_W_SHIFT                                   0
#define MME4_RTR_DBG_S_ARB_W_MASK                                    0x7
#define MME4_RTR_DBG_S_ARB_E_SHIFT                                   8
#define MME4_RTR_DBG_S_ARB_E_MASK                                    0x700
#define MME4_RTR_DBG_S_ARB_N_SHIFT                                   16
#define MME4_RTR_DBG_S_ARB_N_MASK                                    0x70000
#define MME4_RTR_DBG_S_ARB_L_SHIFT                                   24
#define MME4_RTR_DBG_S_ARB_L_MASK                                    0x7000000

#define mmMME4_RTR_DBG_L_ARB                                         0x100310
/* MME4_RTR_DBG_L_ARB */
#define MME4_RTR_DBG_L_ARB_W_SHIFT                                   0
#define MME4_RTR_DBG_L_ARB_W_MASK                                    0x7
#define MME4_RTR_DBG_L_ARB_E_SHIFT                                   8
#define MME4_RTR_DBG_L_ARB_E_MASK                                    0x700
#define MME4_RTR_DBG_L_ARB_S_SHIFT                                   16
#define MME4_RTR_DBG_L_ARB_S_MASK                                    0x70000
#define MME4_RTR_DBG_L_ARB_N_SHIFT                                   24
#define MME4_RTR_DBG_L_ARB_N_MASK                                    0x7000000

#define mmMME4_RTR_DBG_E_ARB_MAX                                     0x100320
/* MME4_RTR_DBG_E_ARB_MAX */
#define MME4_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME4_RTR_DBG_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME4_RTR_DBG_W_ARB_MAX                                     0x100324
/* MME4_RTR_DBG_W_ARB_MAX */
#define MME4_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME4_RTR_DBG_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME4_RTR_DBG_N_ARB_MAX                                     0x100328
/* MME4_RTR_DBG_N_ARB_MAX */
#define MME4_RTR_DBG_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME4_RTR_DBG_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME4_RTR_DBG_S_ARB_MAX                                     0x10032C
/* MME4_RTR_DBG_S_ARB_MAX */
#define MME4_RTR_DBG_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME4_RTR_DBG_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME4_RTR_DBG_L_ARB_MAX                                     0x100330
/* MME4_RTR_DBG_L_ARB_MAX */
#define MME4_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME4_RTR_DBG_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME4_RTR_SPLIT_COEF_0                                      0x100400

#define mmMME4_RTR_SPLIT_COEF_1                                      0x100404

#define mmMME4_RTR_SPLIT_COEF_2                                      0x100408

#define mmMME4_RTR_SPLIT_COEF_3                                      0x10040C

#define mmMME4_RTR_SPLIT_COEF_4                                      0x100410

#define mmMME4_RTR_SPLIT_COEF_5                                      0x100414

#define mmMME4_RTR_SPLIT_COEF_6                                      0x100418

#define mmMME4_RTR_SPLIT_COEF_7                                      0x10041C

#define mmMME4_RTR_SPLIT_COEF_8                                      0x100420

#define mmMME4_RTR_SPLIT_COEF_9                                      0x100424
/* MME4_RTR_SPLIT_COEF */
#define MME4_RTR_SPLIT_COEF_VAL_SHIFT                                0
#define MME4_RTR_SPLIT_COEF_VAL_MASK                                 0xFFFF

#define mmMME4_RTR_SPLIT_CFG                                         0x100440
/* MME4_RTR_SPLIT_CFG */
#define MME4_RTR_SPLIT_CFG_FORCE_WAK_ORDER_SHIFT                     0
#define MME4_RTR_SPLIT_CFG_FORCE_WAK_ORDER_MASK                      0x1
#define MME4_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_SHIFT                  1
#define MME4_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_MASK                   0x2
#define MME4_RTR_SPLIT_CFG_DEFAULT_MESH_SHIFT                        2
#define MME4_RTR_SPLIT_CFG_DEFAULT_MESH_MASK                         0xC
#define MME4_RTR_SPLIT_CFG_WR_RATE_LIM_EN_SHIFT                      4
#define MME4_RTR_SPLIT_CFG_WR_RATE_LIM_EN_MASK                       0x10
#define MME4_RTR_SPLIT_CFG_RD_RATE_LIM_EN_SHIFT                      5
#define MME4_RTR_SPLIT_CFG_RD_RATE_LIM_EN_MASK                       0x20
#define MME4_RTR_SPLIT_CFG_B2B_OPT_SHIFT                             6
#define MME4_RTR_SPLIT_CFG_B2B_OPT_MASK                              0x1C0

#define mmMME4_RTR_SPLIT_RD_SAT                                      0x100444
/* MME4_RTR_SPLIT_RD_SAT */
#define MME4_RTR_SPLIT_RD_SAT_VAL_SHIFT                              0
#define MME4_RTR_SPLIT_RD_SAT_VAL_MASK                               0xFFFF

#define mmMME4_RTR_SPLIT_RD_RST_TOKEN                                0x100448
/* MME4_RTR_SPLIT_RD_RST_TOKEN */
#define MME4_RTR_SPLIT_RD_RST_TOKEN_VAL_SHIFT                        0
#define MME4_RTR_SPLIT_RD_RST_TOKEN_VAL_MASK                         0xFFFF

#define mmMME4_RTR_SPLIT_RD_TIMEOUT_0                                0x10044C

#define mmMME4_RTR_SPLIT_RD_TIMEOUT_1                                0x100450
/* MME4_RTR_SPLIT_RD_TIMEOUT */
#define MME4_RTR_SPLIT_RD_TIMEOUT_VAL_SHIFT                          0
#define MME4_RTR_SPLIT_RD_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmMME4_RTR_SPLIT_WR_SAT                                      0x100454
/* MME4_RTR_SPLIT_WR_SAT */
#define MME4_RTR_SPLIT_WR_SAT_VAL_SHIFT                              0
#define MME4_RTR_SPLIT_WR_SAT_VAL_MASK                               0xFFFF

#define mmMME4_RTR_WPLIT_WR_TST_TOLEN                                0x100458
/* MME4_RTR_WPLIT_WR_TST_TOLEN */
#define MME4_RTR_WPLIT_WR_TST_TOLEN_VAL_SHIFT                        0
#define MME4_RTR_WPLIT_WR_TST_TOLEN_VAL_MASK                         0xFFFF

#define mmMME4_RTR_SPLIT_WR_TIMEOUT_0                                0x10045C

#define mmMME4_RTR_SPLIT_WR_TIMEOUT_1                                0x100460
/* MME4_RTR_SPLIT_WR_TIMEOUT */
#define MME4_RTR_SPLIT_WR_TIMEOUT_VAL_SHIFT                          0
#define MME4_RTR_SPLIT_WR_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmMME4_RTR_HBW_RANGE_HIT                                     0x100470
/* MME4_RTR_HBW_RANGE_HIT */
#define MME4_RTR_HBW_RANGE_HIT_IND_SHIFT                             0
#define MME4_RTR_HBW_RANGE_HIT_IND_MASK                              0xFF

#define mmMME4_RTR_HBW_RANGE_MASK_L_0                                0x100480

#define mmMME4_RTR_HBW_RANGE_MASK_L_1                                0x100484

#define mmMME4_RTR_HBW_RANGE_MASK_L_2                                0x100488

#define mmMME4_RTR_HBW_RANGE_MASK_L_3                                0x10048C

#define mmMME4_RTR_HBW_RANGE_MASK_L_4                                0x100490

#define mmMME4_RTR_HBW_RANGE_MASK_L_5                                0x100494

#define mmMME4_RTR_HBW_RANGE_MASK_L_6                                0x100498

#define mmMME4_RTR_HBW_RANGE_MASK_L_7                                0x10049C
/* MME4_RTR_HBW_RANGE_MASK_L */
#define MME4_RTR_HBW_RANGE_MASK_L_VAL_SHIFT                          0
#define MME4_RTR_HBW_RANGE_MASK_L_VAL_MASK                           0xFFFFFFFF

#define mmMME4_RTR_HBW_RANGE_MASK_H_0                                0x1004A0

#define mmMME4_RTR_HBW_RANGE_MASK_H_1                                0x1004A4

#define mmMME4_RTR_HBW_RANGE_MASK_H_2                                0x1004A8

#define mmMME4_RTR_HBW_RANGE_MASK_H_3                                0x1004AC

#define mmMME4_RTR_HBW_RANGE_MASK_H_4                                0x1004B0

#define mmMME4_RTR_HBW_RANGE_MASK_H_5                                0x1004B4

#define mmMME4_RTR_HBW_RANGE_MASK_H_6                                0x1004B8

#define mmMME4_RTR_HBW_RANGE_MASK_H_7                                0x1004BC
/* MME4_RTR_HBW_RANGE_MASK_H */
#define MME4_RTR_HBW_RANGE_MASK_H_VAL_SHIFT                          0
#define MME4_RTR_HBW_RANGE_MASK_H_VAL_MASK                           0x3FFFF

#define mmMME4_RTR_HBW_RANGE_BASE_L_0                                0x1004C0

#define mmMME4_RTR_HBW_RANGE_BASE_L_1                                0x1004C4

#define mmMME4_RTR_HBW_RANGE_BASE_L_2                                0x1004C8

#define mmMME4_RTR_HBW_RANGE_BASE_L_3                                0x1004CC

#define mmMME4_RTR_HBW_RANGE_BASE_L_4                                0x1004D0

#define mmMME4_RTR_HBW_RANGE_BASE_L_5                                0x1004D4

#define mmMME4_RTR_HBW_RANGE_BASE_L_6                                0x1004D8

#define mmMME4_RTR_HBW_RANGE_BASE_L_7                                0x1004DC
/* MME4_RTR_HBW_RANGE_BASE_L */
#define MME4_RTR_HBW_RANGE_BASE_L_VAL_SHIFT                          0
#define MME4_RTR_HBW_RANGE_BASE_L_VAL_MASK                           0xFFFFFFFF

#define mmMME4_RTR_HBW_RANGE_BASE_H_0                                0x1004E0

#define mmMME4_RTR_HBW_RANGE_BASE_H_1                                0x1004E4

#define mmMME4_RTR_HBW_RANGE_BASE_H_2                                0x1004E8

#define mmMME4_RTR_HBW_RANGE_BASE_H_3                                0x1004EC

#define mmMME4_RTR_HBW_RANGE_BASE_H_4                                0x1004F0

#define mmMME4_RTR_HBW_RANGE_BASE_H_5                                0x1004F4

#define mmMME4_RTR_HBW_RANGE_BASE_H_6                                0x1004F8

#define mmMME4_RTR_HBW_RANGE_BASE_H_7                                0x1004FC
/* MME4_RTR_HBW_RANGE_BASE_H */
#define MME4_RTR_HBW_RANGE_BASE_H_VAL_SHIFT                          0
#define MME4_RTR_HBW_RANGE_BASE_H_VAL_MASK                           0x3FFFF

#define mmMME4_RTR_LBW_RANGE_HIT                                     0x100500
/* MME4_RTR_LBW_RANGE_HIT */
#define MME4_RTR_LBW_RANGE_HIT_IND_SHIFT                             0
#define MME4_RTR_LBW_RANGE_HIT_IND_MASK                              0xFFFF

#define mmMME4_RTR_LBW_RANGE_MASK_0                                  0x100510

#define mmMME4_RTR_LBW_RANGE_MASK_1                                  0x100514

#define mmMME4_RTR_LBW_RANGE_MASK_2                                  0x100518

#define mmMME4_RTR_LBW_RANGE_MASK_3                                  0x10051C

#define mmMME4_RTR_LBW_RANGE_MASK_4                                  0x100520

#define mmMME4_RTR_LBW_RANGE_MASK_5                                  0x100524

#define mmMME4_RTR_LBW_RANGE_MASK_6                                  0x100528

#define mmMME4_RTR_LBW_RANGE_MASK_7                                  0x10052C

#define mmMME4_RTR_LBW_RANGE_MASK_8                                  0x100530

#define mmMME4_RTR_LBW_RANGE_MASK_9                                  0x100534

#define mmMME4_RTR_LBW_RANGE_MASK_10                                 0x100538

#define mmMME4_RTR_LBW_RANGE_MASK_11                                 0x10053C

#define mmMME4_RTR_LBW_RANGE_MASK_12                                 0x100540

#define mmMME4_RTR_LBW_RANGE_MASK_13                                 0x100544

#define mmMME4_RTR_LBW_RANGE_MASK_14                                 0x100548

#define mmMME4_RTR_LBW_RANGE_MASK_15                                 0x10054C
/* MME4_RTR_LBW_RANGE_MASK */
#define MME4_RTR_LBW_RANGE_MASK_VAL_SHIFT                            0
#define MME4_RTR_LBW_RANGE_MASK_VAL_MASK                             0x3FFFFFF

#define mmMME4_RTR_LBW_RANGE_BASE_0                                  0x100550

#define mmMME4_RTR_LBW_RANGE_BASE_1                                  0x100554

#define mmMME4_RTR_LBW_RANGE_BASE_2                                  0x100558

#define mmMME4_RTR_LBW_RANGE_BASE_3                                  0x10055C

#define mmMME4_RTR_LBW_RANGE_BASE_4                                  0x100560

#define mmMME4_RTR_LBW_RANGE_BASE_5                                  0x100564

#define mmMME4_RTR_LBW_RANGE_BASE_6                                  0x100568

#define mmMME4_RTR_LBW_RANGE_BASE_7                                  0x10056C

#define mmMME4_RTR_LBW_RANGE_BASE_8                                  0x100570

#define mmMME4_RTR_LBW_RANGE_BASE_9                                  0x100574

#define mmMME4_RTR_LBW_RANGE_BASE_10                                 0x100578

#define mmMME4_RTR_LBW_RANGE_BASE_11                                 0x10057C

#define mmMME4_RTR_LBW_RANGE_BASE_12                                 0x100580

#define mmMME4_RTR_LBW_RANGE_BASE_13                                 0x100584

#define mmMME4_RTR_LBW_RANGE_BASE_14                                 0x100588

#define mmMME4_RTR_LBW_RANGE_BASE_15                                 0x10058C
/* MME4_RTR_LBW_RANGE_BASE */
#define MME4_RTR_LBW_RANGE_BASE_VAL_SHIFT                            0
#define MME4_RTR_LBW_RANGE_BASE_VAL_MASK                             0x3FFFFFF

#define mmMME4_RTR_RGLTR                                             0x100590
/* MME4_RTR_RGLTR */
#define MME4_RTR_RGLTR_WR_EN_SHIFT                                   0
#define MME4_RTR_RGLTR_WR_EN_MASK                                    0x1
#define MME4_RTR_RGLTR_RD_EN_SHIFT                                   4
#define MME4_RTR_RGLTR_RD_EN_MASK                                    0x10

#define mmMME4_RTR_RGLTR_WR_RESULT                                   0x100594
/* MME4_RTR_RGLTR_WR_RESULT */
#define MME4_RTR_RGLTR_WR_RESULT_VAL_SHIFT                           0
#define MME4_RTR_RGLTR_WR_RESULT_VAL_MASK                            0xFF

#define mmMME4_RTR_RGLTR_RD_RESULT                                   0x100598
/* MME4_RTR_RGLTR_RD_RESULT */
#define MME4_RTR_RGLTR_RD_RESULT_VAL_SHIFT                           0
#define MME4_RTR_RGLTR_RD_RESULT_VAL_MASK                            0xFF

#define mmMME4_RTR_SCRAMB_EN                                         0x100600
/* MME4_RTR_SCRAMB_EN */
#define MME4_RTR_SCRAMB_EN_VAL_SHIFT                                 0
#define MME4_RTR_SCRAMB_EN_VAL_MASK                                  0x1

#define mmMME4_RTR_NON_LIN_SCRAMB                                    0x100604
/* MME4_RTR_NON_LIN_SCRAMB */
#define MME4_RTR_NON_LIN_SCRAMB_EN_SHIFT                             0
#define MME4_RTR_NON_LIN_SCRAMB_EN_MASK                              0x1

#endif /* ASIC_REG_MME4_RTR_H_ */

