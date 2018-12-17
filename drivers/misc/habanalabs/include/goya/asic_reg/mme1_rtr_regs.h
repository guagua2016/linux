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

#ifndef ASIC_REG_MME1_RTR_H_
#define ASIC_REG_MME1_RTR_H_

/*
 *****************************************
 *   MME1_RTR (Prototype: MME_RTR)
 *****************************************
 */

#define mmMME1_RTR_HBW_RD_RQ_E_ARB                                   0x40100
/* MME1_RTR_HBW_RD_RQ_E_ARB */
#define MME1_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                             0
#define MME1_RTR_HBW_RD_RQ_E_ARB_W_MASK                              0x7
#define MME1_RTR_HBW_RD_RQ_E_ARB_S_SHIFT                             8
#define MME1_RTR_HBW_RD_RQ_E_ARB_S_MASK                              0x700
#define MME1_RTR_HBW_RD_RQ_E_ARB_N_SHIFT                             16
#define MME1_RTR_HBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define MME1_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                             24
#define MME1_RTR_HBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_HBW_RD_RQ_W_ARB                                   0x40104
/* MME1_RTR_HBW_RD_RQ_W_ARB */
#define MME1_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                             0
#define MME1_RTR_HBW_RD_RQ_W_ARB_E_MASK                              0x7
#define MME1_RTR_HBW_RD_RQ_W_ARB_S_SHIFT                             8
#define MME1_RTR_HBW_RD_RQ_W_ARB_S_MASK                              0x700
#define MME1_RTR_HBW_RD_RQ_W_ARB_N_SHIFT                             16
#define MME1_RTR_HBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define MME1_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                             24
#define MME1_RTR_HBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_HBW_RD_RQ_N_ARB                                   0x40108
/* MME1_RTR_HBW_RD_RQ_N_ARB */
#define MME1_RTR_HBW_RD_RQ_N_ARB_W_SHIFT                             0
#define MME1_RTR_HBW_RD_RQ_N_ARB_W_MASK                              0x7
#define MME1_RTR_HBW_RD_RQ_N_ARB_E_SHIFT                             8
#define MME1_RTR_HBW_RD_RQ_N_ARB_E_MASK                              0x700
#define MME1_RTR_HBW_RD_RQ_N_ARB_S_SHIFT                             16
#define MME1_RTR_HBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define MME1_RTR_HBW_RD_RQ_N_ARB_L_SHIFT                             24
#define MME1_RTR_HBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_HBW_RD_RQ_S_ARB                                   0x4010C
/* MME1_RTR_HBW_RD_RQ_S_ARB */
#define MME1_RTR_HBW_RD_RQ_S_ARB_W_SHIFT                             0
#define MME1_RTR_HBW_RD_RQ_S_ARB_W_MASK                              0x7
#define MME1_RTR_HBW_RD_RQ_S_ARB_E_SHIFT                             8
#define MME1_RTR_HBW_RD_RQ_S_ARB_E_MASK                              0x700
#define MME1_RTR_HBW_RD_RQ_S_ARB_N_SHIFT                             16
#define MME1_RTR_HBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define MME1_RTR_HBW_RD_RQ_S_ARB_L_SHIFT                             24
#define MME1_RTR_HBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_HBW_RD_RQ_L_ARB                                   0x40110
/* MME1_RTR_HBW_RD_RQ_L_ARB */
#define MME1_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                             0
#define MME1_RTR_HBW_RD_RQ_L_ARB_W_MASK                              0x7
#define MME1_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                             8
#define MME1_RTR_HBW_RD_RQ_L_ARB_E_MASK                              0x700
#define MME1_RTR_HBW_RD_RQ_L_ARB_S_SHIFT                             16
#define MME1_RTR_HBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define MME1_RTR_HBW_RD_RQ_L_ARB_N_SHIFT                             24
#define MME1_RTR_HBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME1_RTR_HBW_E_ARB_MAX                                     0x40120
/* MME1_RTR_HBW_E_ARB_MAX */
#define MME1_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME1_RTR_HBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME1_RTR_HBW_W_ARB_MAX                                     0x40124
/* MME1_RTR_HBW_W_ARB_MAX */
#define MME1_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME1_RTR_HBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME1_RTR_HBW_N_ARB_MAX                                     0x40128
/* MME1_RTR_HBW_N_ARB_MAX */
#define MME1_RTR_HBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME1_RTR_HBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME1_RTR_HBW_S_ARB_MAX                                     0x4012C
/* MME1_RTR_HBW_S_ARB_MAX */
#define MME1_RTR_HBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME1_RTR_HBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME1_RTR_HBW_L_ARB_MAX                                     0x40130
/* MME1_RTR_HBW_L_ARB_MAX */
#define MME1_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME1_RTR_HBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME1_RTR_HBW_RD_RS_MAX_CREDIT                              0x40140
/* MME1_RTR_HBW_RD_RS_MAX_CREDIT */
#define MME1_RTR_HBW_RD_RS_MAX_CREDIT_A_SHIFT                        0
#define MME1_RTR_HBW_RD_RS_MAX_CREDIT_A_MASK                         0x3F
#define MME1_RTR_HBW_RD_RS_MAX_CREDIT_B_SHIFT                        8
#define MME1_RTR_HBW_RD_RS_MAX_CREDIT_B_MASK                         0x3F00

#define mmMME1_RTR_HBW_WR_RQ_MAX_CREDIT                              0x40144
/* MME1_RTR_HBW_WR_RQ_MAX_CREDIT */
#define MME1_RTR_HBW_WR_RQ_MAX_CREDIT_VAL_SHIFT                      0
#define MME1_RTR_HBW_WR_RQ_MAX_CREDIT_VAL_MASK                       0x3F

#define mmMME1_RTR_HBW_RD_RQ_MAX_CREDIT                              0x40148
/* MME1_RTR_HBW_RD_RQ_MAX_CREDIT */
#define MME1_RTR_HBW_RD_RQ_MAX_CREDIT_A_SHIFT                        0
#define MME1_RTR_HBW_RD_RQ_MAX_CREDIT_A_MASK                         0x3F
#define MME1_RTR_HBW_RD_RQ_MAX_CREDIT_B_SHIFT                        8
#define MME1_RTR_HBW_RD_RQ_MAX_CREDIT_B_MASK                         0x3F00
#define MME1_RTR_HBW_RD_RQ_MAX_CREDIT_IC_SHIFT                       16
#define MME1_RTR_HBW_RD_RQ_MAX_CREDIT_IC_MASK                        0x3F0000

#define mmMME1_RTR_HBW_RD_RS_E_ARB                                   0x40150
/* MME1_RTR_HBW_RD_RS_E_ARB */
#define MME1_RTR_HBW_RD_RS_E_ARB_W_SHIFT                             0
#define MME1_RTR_HBW_RD_RS_E_ARB_W_MASK                              0x7
#define MME1_RTR_HBW_RD_RS_E_ARB_S_SHIFT                             8
#define MME1_RTR_HBW_RD_RS_E_ARB_S_MASK                              0x700
#define MME1_RTR_HBW_RD_RS_E_ARB_N_SHIFT                             16
#define MME1_RTR_HBW_RD_RS_E_ARB_N_MASK                              0x70000
#define MME1_RTR_HBW_RD_RS_E_ARB_L_SHIFT                             24
#define MME1_RTR_HBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_HBW_RD_RS_W_ARB                                   0x40154
/* MME1_RTR_HBW_RD_RS_W_ARB */
#define MME1_RTR_HBW_RD_RS_W_ARB_E_SHIFT                             0
#define MME1_RTR_HBW_RD_RS_W_ARB_E_MASK                              0x7
#define MME1_RTR_HBW_RD_RS_W_ARB_S_SHIFT                             8
#define MME1_RTR_HBW_RD_RS_W_ARB_S_MASK                              0x700
#define MME1_RTR_HBW_RD_RS_W_ARB_N_SHIFT                             16
#define MME1_RTR_HBW_RD_RS_W_ARB_N_MASK                              0x70000
#define MME1_RTR_HBW_RD_RS_W_ARB_L_SHIFT                             24
#define MME1_RTR_HBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_HBW_RD_RS_N_ARB                                   0x40158
/* MME1_RTR_HBW_RD_RS_N_ARB */
#define MME1_RTR_HBW_RD_RS_N_ARB_W_SHIFT                             0
#define MME1_RTR_HBW_RD_RS_N_ARB_W_MASK                              0x7
#define MME1_RTR_HBW_RD_RS_N_ARB_E_SHIFT                             8
#define MME1_RTR_HBW_RD_RS_N_ARB_E_MASK                              0x700
#define MME1_RTR_HBW_RD_RS_N_ARB_S_SHIFT                             16
#define MME1_RTR_HBW_RD_RS_N_ARB_S_MASK                              0x70000
#define MME1_RTR_HBW_RD_RS_N_ARB_L_SHIFT                             24
#define MME1_RTR_HBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_HBW_RD_RS_S_ARB                                   0x4015C
/* MME1_RTR_HBW_RD_RS_S_ARB */
#define MME1_RTR_HBW_RD_RS_S_ARB_W_SHIFT                             0
#define MME1_RTR_HBW_RD_RS_S_ARB_W_MASK                              0x7
#define MME1_RTR_HBW_RD_RS_S_ARB_E_SHIFT                             8
#define MME1_RTR_HBW_RD_RS_S_ARB_E_MASK                              0x700
#define MME1_RTR_HBW_RD_RS_S_ARB_N_SHIFT                             16
#define MME1_RTR_HBW_RD_RS_S_ARB_N_MASK                              0x70000
#define MME1_RTR_HBW_RD_RS_S_ARB_L_SHIFT                             24
#define MME1_RTR_HBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_HBW_RD_RS_L_ARB                                   0x40160
/* MME1_RTR_HBW_RD_RS_L_ARB */
#define MME1_RTR_HBW_RD_RS_L_ARB_W_SHIFT                             0
#define MME1_RTR_HBW_RD_RS_L_ARB_W_MASK                              0x7
#define MME1_RTR_HBW_RD_RS_L_ARB_E_SHIFT                             8
#define MME1_RTR_HBW_RD_RS_L_ARB_E_MASK                              0x700
#define MME1_RTR_HBW_RD_RS_L_ARB_S_SHIFT                             16
#define MME1_RTR_HBW_RD_RS_L_ARB_S_MASK                              0x70000
#define MME1_RTR_HBW_RD_RS_L_ARB_N_SHIFT                             24
#define MME1_RTR_HBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmMME1_RTR_HBW_WR_RQ_E_ARB                                   0x40170
/* MME1_RTR_HBW_WR_RQ_E_ARB */
#define MME1_RTR_HBW_WR_RQ_E_ARB_W_SHIFT                             0
#define MME1_RTR_HBW_WR_RQ_E_ARB_W_MASK                              0x7
#define MME1_RTR_HBW_WR_RQ_E_ARB_S_SHIFT                             8
#define MME1_RTR_HBW_WR_RQ_E_ARB_S_MASK                              0x700
#define MME1_RTR_HBW_WR_RQ_E_ARB_N_SHIFT                             16
#define MME1_RTR_HBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define MME1_RTR_HBW_WR_RQ_E_ARB_L_SHIFT                             24
#define MME1_RTR_HBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_HBW_WR_RQ_W_ARB                                   0x40174
/* MME1_RTR_HBW_WR_RQ_W_ARB */
#define MME1_RTR_HBW_WR_RQ_W_ARB_E_SHIFT                             0
#define MME1_RTR_HBW_WR_RQ_W_ARB_E_MASK                              0x7
#define MME1_RTR_HBW_WR_RQ_W_ARB_S_SHIFT                             8
#define MME1_RTR_HBW_WR_RQ_W_ARB_S_MASK                              0x700
#define MME1_RTR_HBW_WR_RQ_W_ARB_N_SHIFT                             16
#define MME1_RTR_HBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define MME1_RTR_HBW_WR_RQ_W_ARB_L_SHIFT                             24
#define MME1_RTR_HBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_HBW_WR_RQ_N_ARB                                   0x40178
/* MME1_RTR_HBW_WR_RQ_N_ARB */
#define MME1_RTR_HBW_WR_RQ_N_ARB_W_SHIFT                             0
#define MME1_RTR_HBW_WR_RQ_N_ARB_W_MASK                              0x7
#define MME1_RTR_HBW_WR_RQ_N_ARB_E_SHIFT                             8
#define MME1_RTR_HBW_WR_RQ_N_ARB_E_MASK                              0x700
#define MME1_RTR_HBW_WR_RQ_N_ARB_S_SHIFT                             16
#define MME1_RTR_HBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define MME1_RTR_HBW_WR_RQ_N_ARB_L_SHIFT                             24
#define MME1_RTR_HBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_HBW_WR_RQ_S_ARB                                   0x4017C
/* MME1_RTR_HBW_WR_RQ_S_ARB */
#define MME1_RTR_HBW_WR_RQ_S_ARB_W_SHIFT                             0
#define MME1_RTR_HBW_WR_RQ_S_ARB_W_MASK                              0x7
#define MME1_RTR_HBW_WR_RQ_S_ARB_E_SHIFT                             8
#define MME1_RTR_HBW_WR_RQ_S_ARB_E_MASK                              0x700
#define MME1_RTR_HBW_WR_RQ_S_ARB_N_SHIFT                             16
#define MME1_RTR_HBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define MME1_RTR_HBW_WR_RQ_S_ARB_L_SHIFT                             24
#define MME1_RTR_HBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_HBW_WR_RQ_L_ARB                                   0x40180
/* MME1_RTR_HBW_WR_RQ_L_ARB */
#define MME1_RTR_HBW_WR_RQ_L_ARB_W_SHIFT                             0
#define MME1_RTR_HBW_WR_RQ_L_ARB_W_MASK                              0x7
#define MME1_RTR_HBW_WR_RQ_L_ARB_E_SHIFT                             8
#define MME1_RTR_HBW_WR_RQ_L_ARB_E_MASK                              0x700
#define MME1_RTR_HBW_WR_RQ_L_ARB_S_SHIFT                             16
#define MME1_RTR_HBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define MME1_RTR_HBW_WR_RQ_L_ARB_N_SHIFT                             24
#define MME1_RTR_HBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME1_RTR_HBW_WR_RS_E_ARB                                   0x40190
/* MME1_RTR_HBW_WR_RS_E_ARB */
#define MME1_RTR_HBW_WR_RS_E_ARB_W_SHIFT                             0
#define MME1_RTR_HBW_WR_RS_E_ARB_W_MASK                              0x7
#define MME1_RTR_HBW_WR_RS_E_ARB_S_SHIFT                             8
#define MME1_RTR_HBW_WR_RS_E_ARB_S_MASK                              0x700
#define MME1_RTR_HBW_WR_RS_E_ARB_N_SHIFT                             16
#define MME1_RTR_HBW_WR_RS_E_ARB_N_MASK                              0x70000
#define MME1_RTR_HBW_WR_RS_E_ARB_L_SHIFT                             24
#define MME1_RTR_HBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_HBW_WR_RS_W_ARB                                   0x40194
/* MME1_RTR_HBW_WR_RS_W_ARB */
#define MME1_RTR_HBW_WR_RS_W_ARB_E_SHIFT                             0
#define MME1_RTR_HBW_WR_RS_W_ARB_E_MASK                              0x7
#define MME1_RTR_HBW_WR_RS_W_ARB_S_SHIFT                             8
#define MME1_RTR_HBW_WR_RS_W_ARB_S_MASK                              0x700
#define MME1_RTR_HBW_WR_RS_W_ARB_N_SHIFT                             16
#define MME1_RTR_HBW_WR_RS_W_ARB_N_MASK                              0x70000
#define MME1_RTR_HBW_WR_RS_W_ARB_L_SHIFT                             24
#define MME1_RTR_HBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_HBW_WR_RS_N_ARB                                   0x40198
/* MME1_RTR_HBW_WR_RS_N_ARB */
#define MME1_RTR_HBW_WR_RS_N_ARB_W_SHIFT                             0
#define MME1_RTR_HBW_WR_RS_N_ARB_W_MASK                              0x7
#define MME1_RTR_HBW_WR_RS_N_ARB_E_SHIFT                             8
#define MME1_RTR_HBW_WR_RS_N_ARB_E_MASK                              0x700
#define MME1_RTR_HBW_WR_RS_N_ARB_S_SHIFT                             16
#define MME1_RTR_HBW_WR_RS_N_ARB_S_MASK                              0x70000
#define MME1_RTR_HBW_WR_RS_N_ARB_L_SHIFT                             24
#define MME1_RTR_HBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_HBW_WR_RS_S_ARB                                   0x4019C
/* MME1_RTR_HBW_WR_RS_S_ARB */
#define MME1_RTR_HBW_WR_RS_S_ARB_W_SHIFT                             0
#define MME1_RTR_HBW_WR_RS_S_ARB_W_MASK                              0x7
#define MME1_RTR_HBW_WR_RS_S_ARB_E_SHIFT                             8
#define MME1_RTR_HBW_WR_RS_S_ARB_E_MASK                              0x700
#define MME1_RTR_HBW_WR_RS_S_ARB_N_SHIFT                             16
#define MME1_RTR_HBW_WR_RS_S_ARB_N_MASK                              0x70000
#define MME1_RTR_HBW_WR_RS_S_ARB_L_SHIFT                             24
#define MME1_RTR_HBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_HBW_WR_RS_L_ARB                                   0x401A0
/* MME1_RTR_HBW_WR_RS_L_ARB */
#define MME1_RTR_HBW_WR_RS_L_ARB_W_SHIFT                             0
#define MME1_RTR_HBW_WR_RS_L_ARB_W_MASK                              0x7
#define MME1_RTR_HBW_WR_RS_L_ARB_E_SHIFT                             8
#define MME1_RTR_HBW_WR_RS_L_ARB_E_MASK                              0x700
#define MME1_RTR_HBW_WR_RS_L_ARB_S_SHIFT                             16
#define MME1_RTR_HBW_WR_RS_L_ARB_S_MASK                              0x70000
#define MME1_RTR_HBW_WR_RS_L_ARB_N_SHIFT                             24
#define MME1_RTR_HBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmMME1_RTR_LBW_RD_RQ_E_ARB                                   0x40200
/* MME1_RTR_LBW_RD_RQ_E_ARB */
#define MME1_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                             0
#define MME1_RTR_LBW_RD_RQ_E_ARB_W_MASK                              0x7
#define MME1_RTR_LBW_RD_RQ_E_ARB_S_SHIFT                             8
#define MME1_RTR_LBW_RD_RQ_E_ARB_S_MASK                              0x700
#define MME1_RTR_LBW_RD_RQ_E_ARB_N_SHIFT                             16
#define MME1_RTR_LBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define MME1_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                             24
#define MME1_RTR_LBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_LBW_RD_RQ_W_ARB                                   0x40204
/* MME1_RTR_LBW_RD_RQ_W_ARB */
#define MME1_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                             0
#define MME1_RTR_LBW_RD_RQ_W_ARB_E_MASK                              0x7
#define MME1_RTR_LBW_RD_RQ_W_ARB_S_SHIFT                             8
#define MME1_RTR_LBW_RD_RQ_W_ARB_S_MASK                              0x700
#define MME1_RTR_LBW_RD_RQ_W_ARB_N_SHIFT                             16
#define MME1_RTR_LBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define MME1_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                             24
#define MME1_RTR_LBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_LBW_RD_RQ_N_ARB                                   0x40208
/* MME1_RTR_LBW_RD_RQ_N_ARB */
#define MME1_RTR_LBW_RD_RQ_N_ARB_W_SHIFT                             0
#define MME1_RTR_LBW_RD_RQ_N_ARB_W_MASK                              0x7
#define MME1_RTR_LBW_RD_RQ_N_ARB_E_SHIFT                             8
#define MME1_RTR_LBW_RD_RQ_N_ARB_E_MASK                              0x700
#define MME1_RTR_LBW_RD_RQ_N_ARB_S_SHIFT                             16
#define MME1_RTR_LBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define MME1_RTR_LBW_RD_RQ_N_ARB_L_SHIFT                             24
#define MME1_RTR_LBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_LBW_RD_RQ_S_ARB                                   0x4020C
/* MME1_RTR_LBW_RD_RQ_S_ARB */
#define MME1_RTR_LBW_RD_RQ_S_ARB_W_SHIFT                             0
#define MME1_RTR_LBW_RD_RQ_S_ARB_W_MASK                              0x7
#define MME1_RTR_LBW_RD_RQ_S_ARB_E_SHIFT                             8
#define MME1_RTR_LBW_RD_RQ_S_ARB_E_MASK                              0x700
#define MME1_RTR_LBW_RD_RQ_S_ARB_N_SHIFT                             16
#define MME1_RTR_LBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define MME1_RTR_LBW_RD_RQ_S_ARB_L_SHIFT                             24
#define MME1_RTR_LBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_LBW_RD_RQ_L_ARB                                   0x40210
/* MME1_RTR_LBW_RD_RQ_L_ARB */
#define MME1_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                             0
#define MME1_RTR_LBW_RD_RQ_L_ARB_W_MASK                              0x7
#define MME1_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                             8
#define MME1_RTR_LBW_RD_RQ_L_ARB_E_MASK                              0x700
#define MME1_RTR_LBW_RD_RQ_L_ARB_S_SHIFT                             16
#define MME1_RTR_LBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define MME1_RTR_LBW_RD_RQ_L_ARB_N_SHIFT                             24
#define MME1_RTR_LBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME1_RTR_LBW_E_ARB_MAX                                     0x40220
/* MME1_RTR_LBW_E_ARB_MAX */
#define MME1_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME1_RTR_LBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME1_RTR_LBW_W_ARB_MAX                                     0x40224
/* MME1_RTR_LBW_W_ARB_MAX */
#define MME1_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME1_RTR_LBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME1_RTR_LBW_N_ARB_MAX                                     0x40228
/* MME1_RTR_LBW_N_ARB_MAX */
#define MME1_RTR_LBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME1_RTR_LBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME1_RTR_LBW_S_ARB_MAX                                     0x4022C
/* MME1_RTR_LBW_S_ARB_MAX */
#define MME1_RTR_LBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME1_RTR_LBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME1_RTR_LBW_L_ARB_MAX                                     0x40230
/* MME1_RTR_LBW_L_ARB_MAX */
#define MME1_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME1_RTR_LBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME1_RTR_LBW_SRAM_MAX_CREDIT                               0x40240
/* MME1_RTR_LBW_SRAM_MAX_CREDIT */
#define MME1_RTR_LBW_SRAM_MAX_CREDIT_MSTR_SHIFT                      0
#define MME1_RTR_LBW_SRAM_MAX_CREDIT_MSTR_MASK                       0x3F
#define MME1_RTR_LBW_SRAM_MAX_CREDIT_SLV_SHIFT                       8
#define MME1_RTR_LBW_SRAM_MAX_CREDIT_SLV_MASK                        0x3F00

#define mmMME1_RTR_LBW_RD_RS_E_ARB                                   0x40250
/* MME1_RTR_LBW_RD_RS_E_ARB */
#define MME1_RTR_LBW_RD_RS_E_ARB_W_SHIFT                             0
#define MME1_RTR_LBW_RD_RS_E_ARB_W_MASK                              0x7
#define MME1_RTR_LBW_RD_RS_E_ARB_S_SHIFT                             8
#define MME1_RTR_LBW_RD_RS_E_ARB_S_MASK                              0x700
#define MME1_RTR_LBW_RD_RS_E_ARB_N_SHIFT                             16
#define MME1_RTR_LBW_RD_RS_E_ARB_N_MASK                              0x70000
#define MME1_RTR_LBW_RD_RS_E_ARB_L_SHIFT                             24
#define MME1_RTR_LBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_LBW_RD_RS_W_ARB                                   0x40254
/* MME1_RTR_LBW_RD_RS_W_ARB */
#define MME1_RTR_LBW_RD_RS_W_ARB_E_SHIFT                             0
#define MME1_RTR_LBW_RD_RS_W_ARB_E_MASK                              0x7
#define MME1_RTR_LBW_RD_RS_W_ARB_S_SHIFT                             8
#define MME1_RTR_LBW_RD_RS_W_ARB_S_MASK                              0x700
#define MME1_RTR_LBW_RD_RS_W_ARB_N_SHIFT                             16
#define MME1_RTR_LBW_RD_RS_W_ARB_N_MASK                              0x70000
#define MME1_RTR_LBW_RD_RS_W_ARB_L_SHIFT                             24
#define MME1_RTR_LBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_LBW_RD_RS_N_ARB                                   0x40258
/* MME1_RTR_LBW_RD_RS_N_ARB */
#define MME1_RTR_LBW_RD_RS_N_ARB_W_SHIFT                             0
#define MME1_RTR_LBW_RD_RS_N_ARB_W_MASK                              0x7
#define MME1_RTR_LBW_RD_RS_N_ARB_E_SHIFT                             8
#define MME1_RTR_LBW_RD_RS_N_ARB_E_MASK                              0x700
#define MME1_RTR_LBW_RD_RS_N_ARB_S_SHIFT                             16
#define MME1_RTR_LBW_RD_RS_N_ARB_S_MASK                              0x70000
#define MME1_RTR_LBW_RD_RS_N_ARB_L_SHIFT                             24
#define MME1_RTR_LBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_LBW_RD_RS_S_ARB                                   0x4025C
/* MME1_RTR_LBW_RD_RS_S_ARB */
#define MME1_RTR_LBW_RD_RS_S_ARB_W_SHIFT                             0
#define MME1_RTR_LBW_RD_RS_S_ARB_W_MASK                              0x7
#define MME1_RTR_LBW_RD_RS_S_ARB_E_SHIFT                             8
#define MME1_RTR_LBW_RD_RS_S_ARB_E_MASK                              0x700
#define MME1_RTR_LBW_RD_RS_S_ARB_N_SHIFT                             16
#define MME1_RTR_LBW_RD_RS_S_ARB_N_MASK                              0x70000
#define MME1_RTR_LBW_RD_RS_S_ARB_L_SHIFT                             24
#define MME1_RTR_LBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_LBW_RD_RS_L_ARB                                   0x40260
/* MME1_RTR_LBW_RD_RS_L_ARB */
#define MME1_RTR_LBW_RD_RS_L_ARB_W_SHIFT                             0
#define MME1_RTR_LBW_RD_RS_L_ARB_W_MASK                              0x7
#define MME1_RTR_LBW_RD_RS_L_ARB_E_SHIFT                             8
#define MME1_RTR_LBW_RD_RS_L_ARB_E_MASK                              0x700
#define MME1_RTR_LBW_RD_RS_L_ARB_S_SHIFT                             16
#define MME1_RTR_LBW_RD_RS_L_ARB_S_MASK                              0x70000
#define MME1_RTR_LBW_RD_RS_L_ARB_N_SHIFT                             24
#define MME1_RTR_LBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmMME1_RTR_LBW_WR_RQ_E_ARB                                   0x40270
/* MME1_RTR_LBW_WR_RQ_E_ARB */
#define MME1_RTR_LBW_WR_RQ_E_ARB_W_SHIFT                             0
#define MME1_RTR_LBW_WR_RQ_E_ARB_W_MASK                              0x7
#define MME1_RTR_LBW_WR_RQ_E_ARB_S_SHIFT                             8
#define MME1_RTR_LBW_WR_RQ_E_ARB_S_MASK                              0x700
#define MME1_RTR_LBW_WR_RQ_E_ARB_N_SHIFT                             16
#define MME1_RTR_LBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define MME1_RTR_LBW_WR_RQ_E_ARB_L_SHIFT                             24
#define MME1_RTR_LBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_LBW_WR_RQ_W_ARB                                   0x40274
/* MME1_RTR_LBW_WR_RQ_W_ARB */
#define MME1_RTR_LBW_WR_RQ_W_ARB_E_SHIFT                             0
#define MME1_RTR_LBW_WR_RQ_W_ARB_E_MASK                              0x7
#define MME1_RTR_LBW_WR_RQ_W_ARB_S_SHIFT                             8
#define MME1_RTR_LBW_WR_RQ_W_ARB_S_MASK                              0x700
#define MME1_RTR_LBW_WR_RQ_W_ARB_N_SHIFT                             16
#define MME1_RTR_LBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define MME1_RTR_LBW_WR_RQ_W_ARB_L_SHIFT                             24
#define MME1_RTR_LBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_LBW_WR_RQ_N_ARB                                   0x40278
/* MME1_RTR_LBW_WR_RQ_N_ARB */
#define MME1_RTR_LBW_WR_RQ_N_ARB_W_SHIFT                             0
#define MME1_RTR_LBW_WR_RQ_N_ARB_W_MASK                              0x7
#define MME1_RTR_LBW_WR_RQ_N_ARB_E_SHIFT                             8
#define MME1_RTR_LBW_WR_RQ_N_ARB_E_MASK                              0x700
#define MME1_RTR_LBW_WR_RQ_N_ARB_S_SHIFT                             16
#define MME1_RTR_LBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define MME1_RTR_LBW_WR_RQ_N_ARB_L_SHIFT                             24
#define MME1_RTR_LBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_LBW_WR_RQ_S_ARB                                   0x4027C
/* MME1_RTR_LBW_WR_RQ_S_ARB */
#define MME1_RTR_LBW_WR_RQ_S_ARB_W_SHIFT                             0
#define MME1_RTR_LBW_WR_RQ_S_ARB_W_MASK                              0x7
#define MME1_RTR_LBW_WR_RQ_S_ARB_E_SHIFT                             8
#define MME1_RTR_LBW_WR_RQ_S_ARB_E_MASK                              0x700
#define MME1_RTR_LBW_WR_RQ_S_ARB_N_SHIFT                             16
#define MME1_RTR_LBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define MME1_RTR_LBW_WR_RQ_S_ARB_L_SHIFT                             24
#define MME1_RTR_LBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_LBW_WR_RQ_L_ARB                                   0x40280
/* MME1_RTR_LBW_WR_RQ_L_ARB */
#define MME1_RTR_LBW_WR_RQ_L_ARB_W_SHIFT                             0
#define MME1_RTR_LBW_WR_RQ_L_ARB_W_MASK                              0x7
#define MME1_RTR_LBW_WR_RQ_L_ARB_E_SHIFT                             8
#define MME1_RTR_LBW_WR_RQ_L_ARB_E_MASK                              0x700
#define MME1_RTR_LBW_WR_RQ_L_ARB_S_SHIFT                             16
#define MME1_RTR_LBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define MME1_RTR_LBW_WR_RQ_L_ARB_N_SHIFT                             24
#define MME1_RTR_LBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME1_RTR_LBW_WR_RS_E_ARB                                   0x40290
/* MME1_RTR_LBW_WR_RS_E_ARB */
#define MME1_RTR_LBW_WR_RS_E_ARB_W_SHIFT                             0
#define MME1_RTR_LBW_WR_RS_E_ARB_W_MASK                              0x7
#define MME1_RTR_LBW_WR_RS_E_ARB_S_SHIFT                             8
#define MME1_RTR_LBW_WR_RS_E_ARB_S_MASK                              0x700
#define MME1_RTR_LBW_WR_RS_E_ARB_N_SHIFT                             16
#define MME1_RTR_LBW_WR_RS_E_ARB_N_MASK                              0x70000
#define MME1_RTR_LBW_WR_RS_E_ARB_L_SHIFT                             24
#define MME1_RTR_LBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_LBW_WR_RS_W_ARB                                   0x40294
/* MME1_RTR_LBW_WR_RS_W_ARB */
#define MME1_RTR_LBW_WR_RS_W_ARB_E_SHIFT                             0
#define MME1_RTR_LBW_WR_RS_W_ARB_E_MASK                              0x7
#define MME1_RTR_LBW_WR_RS_W_ARB_S_SHIFT                             8
#define MME1_RTR_LBW_WR_RS_W_ARB_S_MASK                              0x700
#define MME1_RTR_LBW_WR_RS_W_ARB_N_SHIFT                             16
#define MME1_RTR_LBW_WR_RS_W_ARB_N_MASK                              0x70000
#define MME1_RTR_LBW_WR_RS_W_ARB_L_SHIFT                             24
#define MME1_RTR_LBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_LBW_WR_RS_N_ARB                                   0x40298
/* MME1_RTR_LBW_WR_RS_N_ARB */
#define MME1_RTR_LBW_WR_RS_N_ARB_W_SHIFT                             0
#define MME1_RTR_LBW_WR_RS_N_ARB_W_MASK                              0x7
#define MME1_RTR_LBW_WR_RS_N_ARB_E_SHIFT                             8
#define MME1_RTR_LBW_WR_RS_N_ARB_E_MASK                              0x700
#define MME1_RTR_LBW_WR_RS_N_ARB_S_SHIFT                             16
#define MME1_RTR_LBW_WR_RS_N_ARB_S_MASK                              0x70000
#define MME1_RTR_LBW_WR_RS_N_ARB_L_SHIFT                             24
#define MME1_RTR_LBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_LBW_WR_RS_S_ARB                                   0x4029C
/* MME1_RTR_LBW_WR_RS_S_ARB */
#define MME1_RTR_LBW_WR_RS_S_ARB_W_SHIFT                             0
#define MME1_RTR_LBW_WR_RS_S_ARB_W_MASK                              0x7
#define MME1_RTR_LBW_WR_RS_S_ARB_E_SHIFT                             8
#define MME1_RTR_LBW_WR_RS_S_ARB_E_MASK                              0x700
#define MME1_RTR_LBW_WR_RS_S_ARB_N_SHIFT                             16
#define MME1_RTR_LBW_WR_RS_S_ARB_N_MASK                              0x70000
#define MME1_RTR_LBW_WR_RS_S_ARB_L_SHIFT                             24
#define MME1_RTR_LBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmMME1_RTR_LBW_WR_RS_L_ARB                                   0x402A0
/* MME1_RTR_LBW_WR_RS_L_ARB */
#define MME1_RTR_LBW_WR_RS_L_ARB_W_SHIFT                             0
#define MME1_RTR_LBW_WR_RS_L_ARB_W_MASK                              0x7
#define MME1_RTR_LBW_WR_RS_L_ARB_E_SHIFT                             8
#define MME1_RTR_LBW_WR_RS_L_ARB_E_MASK                              0x700
#define MME1_RTR_LBW_WR_RS_L_ARB_S_SHIFT                             16
#define MME1_RTR_LBW_WR_RS_L_ARB_S_MASK                              0x70000
#define MME1_RTR_LBW_WR_RS_L_ARB_N_SHIFT                             24
#define MME1_RTR_LBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmMME1_RTR_DBG_E_ARB                                         0x40300
/* MME1_RTR_DBG_E_ARB */
#define MME1_RTR_DBG_E_ARB_W_SHIFT                                   0
#define MME1_RTR_DBG_E_ARB_W_MASK                                    0x7
#define MME1_RTR_DBG_E_ARB_S_SHIFT                                   8
#define MME1_RTR_DBG_E_ARB_S_MASK                                    0x700
#define MME1_RTR_DBG_E_ARB_N_SHIFT                                   16
#define MME1_RTR_DBG_E_ARB_N_MASK                                    0x70000
#define MME1_RTR_DBG_E_ARB_L_SHIFT                                   24
#define MME1_RTR_DBG_E_ARB_L_MASK                                    0x7000000

#define mmMME1_RTR_DBG_W_ARB                                         0x40304
/* MME1_RTR_DBG_W_ARB */
#define MME1_RTR_DBG_W_ARB_E_SHIFT                                   0
#define MME1_RTR_DBG_W_ARB_E_MASK                                    0x7
#define MME1_RTR_DBG_W_ARB_S_SHIFT                                   8
#define MME1_RTR_DBG_W_ARB_S_MASK                                    0x700
#define MME1_RTR_DBG_W_ARB_N_SHIFT                                   16
#define MME1_RTR_DBG_W_ARB_N_MASK                                    0x70000
#define MME1_RTR_DBG_W_ARB_L_SHIFT                                   24
#define MME1_RTR_DBG_W_ARB_L_MASK                                    0x7000000

#define mmMME1_RTR_DBG_N_ARB                                         0x40308
/* MME1_RTR_DBG_N_ARB */
#define MME1_RTR_DBG_N_ARB_W_SHIFT                                   0
#define MME1_RTR_DBG_N_ARB_W_MASK                                    0x7
#define MME1_RTR_DBG_N_ARB_E_SHIFT                                   8
#define MME1_RTR_DBG_N_ARB_E_MASK                                    0x700
#define MME1_RTR_DBG_N_ARB_S_SHIFT                                   16
#define MME1_RTR_DBG_N_ARB_S_MASK                                    0x70000
#define MME1_RTR_DBG_N_ARB_L_SHIFT                                   24
#define MME1_RTR_DBG_N_ARB_L_MASK                                    0x7000000

#define mmMME1_RTR_DBG_S_ARB                                         0x4030C
/* MME1_RTR_DBG_S_ARB */
#define MME1_RTR_DBG_S_ARB_W_SHIFT                                   0
#define MME1_RTR_DBG_S_ARB_W_MASK                                    0x7
#define MME1_RTR_DBG_S_ARB_E_SHIFT                                   8
#define MME1_RTR_DBG_S_ARB_E_MASK                                    0x700
#define MME1_RTR_DBG_S_ARB_N_SHIFT                                   16
#define MME1_RTR_DBG_S_ARB_N_MASK                                    0x70000
#define MME1_RTR_DBG_S_ARB_L_SHIFT                                   24
#define MME1_RTR_DBG_S_ARB_L_MASK                                    0x7000000

#define mmMME1_RTR_DBG_L_ARB                                         0x40310
/* MME1_RTR_DBG_L_ARB */
#define MME1_RTR_DBG_L_ARB_W_SHIFT                                   0
#define MME1_RTR_DBG_L_ARB_W_MASK                                    0x7
#define MME1_RTR_DBG_L_ARB_E_SHIFT                                   8
#define MME1_RTR_DBG_L_ARB_E_MASK                                    0x700
#define MME1_RTR_DBG_L_ARB_S_SHIFT                                   16
#define MME1_RTR_DBG_L_ARB_S_MASK                                    0x70000
#define MME1_RTR_DBG_L_ARB_N_SHIFT                                   24
#define MME1_RTR_DBG_L_ARB_N_MASK                                    0x7000000

#define mmMME1_RTR_DBG_E_ARB_MAX                                     0x40320
/* MME1_RTR_DBG_E_ARB_MAX */
#define MME1_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME1_RTR_DBG_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME1_RTR_DBG_W_ARB_MAX                                     0x40324
/* MME1_RTR_DBG_W_ARB_MAX */
#define MME1_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME1_RTR_DBG_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME1_RTR_DBG_N_ARB_MAX                                     0x40328
/* MME1_RTR_DBG_N_ARB_MAX */
#define MME1_RTR_DBG_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME1_RTR_DBG_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME1_RTR_DBG_S_ARB_MAX                                     0x4032C
/* MME1_RTR_DBG_S_ARB_MAX */
#define MME1_RTR_DBG_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME1_RTR_DBG_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME1_RTR_DBG_L_ARB_MAX                                     0x40330
/* MME1_RTR_DBG_L_ARB_MAX */
#define MME1_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME1_RTR_DBG_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME1_RTR_SPLIT_COEF_0                                      0x40400

#define mmMME1_RTR_SPLIT_COEF_1                                      0x40404

#define mmMME1_RTR_SPLIT_COEF_2                                      0x40408

#define mmMME1_RTR_SPLIT_COEF_3                                      0x4040C

#define mmMME1_RTR_SPLIT_COEF_4                                      0x40410

#define mmMME1_RTR_SPLIT_COEF_5                                      0x40414

#define mmMME1_RTR_SPLIT_COEF_6                                      0x40418

#define mmMME1_RTR_SPLIT_COEF_7                                      0x4041C

#define mmMME1_RTR_SPLIT_COEF_8                                      0x40420

#define mmMME1_RTR_SPLIT_COEF_9                                      0x40424
/* MME1_RTR_SPLIT_COEF */
#define MME1_RTR_SPLIT_COEF_VAL_SHIFT                                0
#define MME1_RTR_SPLIT_COEF_VAL_MASK                                 0xFFFF

#define mmMME1_RTR_SPLIT_CFG                                         0x40440
/* MME1_RTR_SPLIT_CFG */
#define MME1_RTR_SPLIT_CFG_FORCE_WAK_ORDER_SHIFT                     0
#define MME1_RTR_SPLIT_CFG_FORCE_WAK_ORDER_MASK                      0x1
#define MME1_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_SHIFT                  1
#define MME1_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_MASK                   0x2
#define MME1_RTR_SPLIT_CFG_DEFAULT_MESH_SHIFT                        2
#define MME1_RTR_SPLIT_CFG_DEFAULT_MESH_MASK                         0xC
#define MME1_RTR_SPLIT_CFG_WR_RATE_LIM_EN_SHIFT                      4
#define MME1_RTR_SPLIT_CFG_WR_RATE_LIM_EN_MASK                       0x10
#define MME1_RTR_SPLIT_CFG_RD_RATE_LIM_EN_SHIFT                      5
#define MME1_RTR_SPLIT_CFG_RD_RATE_LIM_EN_MASK                       0x20
#define MME1_RTR_SPLIT_CFG_B2B_OPT_SHIFT                             6
#define MME1_RTR_SPLIT_CFG_B2B_OPT_MASK                              0x1C0

#define mmMME1_RTR_SPLIT_RD_SAT                                      0x40444
/* MME1_RTR_SPLIT_RD_SAT */
#define MME1_RTR_SPLIT_RD_SAT_VAL_SHIFT                              0
#define MME1_RTR_SPLIT_RD_SAT_VAL_MASK                               0xFFFF

#define mmMME1_RTR_SPLIT_RD_RST_TOKEN                                0x40448
/* MME1_RTR_SPLIT_RD_RST_TOKEN */
#define MME1_RTR_SPLIT_RD_RST_TOKEN_VAL_SHIFT                        0
#define MME1_RTR_SPLIT_RD_RST_TOKEN_VAL_MASK                         0xFFFF

#define mmMME1_RTR_SPLIT_RD_TIMEOUT_0                                0x4044C

#define mmMME1_RTR_SPLIT_RD_TIMEOUT_1                                0x40450
/* MME1_RTR_SPLIT_RD_TIMEOUT */
#define MME1_RTR_SPLIT_RD_TIMEOUT_VAL_SHIFT                          0
#define MME1_RTR_SPLIT_RD_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmMME1_RTR_SPLIT_WR_SAT                                      0x40454
/* MME1_RTR_SPLIT_WR_SAT */
#define MME1_RTR_SPLIT_WR_SAT_VAL_SHIFT                              0
#define MME1_RTR_SPLIT_WR_SAT_VAL_MASK                               0xFFFF

#define mmMME1_RTR_WPLIT_WR_TST_TOLEN                                0x40458
/* MME1_RTR_WPLIT_WR_TST_TOLEN */
#define MME1_RTR_WPLIT_WR_TST_TOLEN_VAL_SHIFT                        0
#define MME1_RTR_WPLIT_WR_TST_TOLEN_VAL_MASK                         0xFFFF

#define mmMME1_RTR_SPLIT_WR_TIMEOUT_0                                0x4045C

#define mmMME1_RTR_SPLIT_WR_TIMEOUT_1                                0x40460
/* MME1_RTR_SPLIT_WR_TIMEOUT */
#define MME1_RTR_SPLIT_WR_TIMEOUT_VAL_SHIFT                          0
#define MME1_RTR_SPLIT_WR_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmMME1_RTR_HBW_RANGE_HIT                                     0x40470
/* MME1_RTR_HBW_RANGE_HIT */
#define MME1_RTR_HBW_RANGE_HIT_IND_SHIFT                             0
#define MME1_RTR_HBW_RANGE_HIT_IND_MASK                              0xFF

#define mmMME1_RTR_HBW_RANGE_MASK_L_0                                0x40480

#define mmMME1_RTR_HBW_RANGE_MASK_L_1                                0x40484

#define mmMME1_RTR_HBW_RANGE_MASK_L_2                                0x40488

#define mmMME1_RTR_HBW_RANGE_MASK_L_3                                0x4048C

#define mmMME1_RTR_HBW_RANGE_MASK_L_4                                0x40490

#define mmMME1_RTR_HBW_RANGE_MASK_L_5                                0x40494

#define mmMME1_RTR_HBW_RANGE_MASK_L_6                                0x40498

#define mmMME1_RTR_HBW_RANGE_MASK_L_7                                0x4049C
/* MME1_RTR_HBW_RANGE_MASK_L */
#define MME1_RTR_HBW_RANGE_MASK_L_VAL_SHIFT                          0
#define MME1_RTR_HBW_RANGE_MASK_L_VAL_MASK                           0xFFFFFFFF

#define mmMME1_RTR_HBW_RANGE_MASK_H_0                                0x404A0

#define mmMME1_RTR_HBW_RANGE_MASK_H_1                                0x404A4

#define mmMME1_RTR_HBW_RANGE_MASK_H_2                                0x404A8

#define mmMME1_RTR_HBW_RANGE_MASK_H_3                                0x404AC

#define mmMME1_RTR_HBW_RANGE_MASK_H_4                                0x404B0

#define mmMME1_RTR_HBW_RANGE_MASK_H_5                                0x404B4

#define mmMME1_RTR_HBW_RANGE_MASK_H_6                                0x404B8

#define mmMME1_RTR_HBW_RANGE_MASK_H_7                                0x404BC
/* MME1_RTR_HBW_RANGE_MASK_H */
#define MME1_RTR_HBW_RANGE_MASK_H_VAL_SHIFT                          0
#define MME1_RTR_HBW_RANGE_MASK_H_VAL_MASK                           0x3FFFF

#define mmMME1_RTR_HBW_RANGE_BASE_L_0                                0x404C0

#define mmMME1_RTR_HBW_RANGE_BASE_L_1                                0x404C4

#define mmMME1_RTR_HBW_RANGE_BASE_L_2                                0x404C8

#define mmMME1_RTR_HBW_RANGE_BASE_L_3                                0x404CC

#define mmMME1_RTR_HBW_RANGE_BASE_L_4                                0x404D0

#define mmMME1_RTR_HBW_RANGE_BASE_L_5                                0x404D4

#define mmMME1_RTR_HBW_RANGE_BASE_L_6                                0x404D8

#define mmMME1_RTR_HBW_RANGE_BASE_L_7                                0x404DC
/* MME1_RTR_HBW_RANGE_BASE_L */
#define MME1_RTR_HBW_RANGE_BASE_L_VAL_SHIFT                          0
#define MME1_RTR_HBW_RANGE_BASE_L_VAL_MASK                           0xFFFFFFFF

#define mmMME1_RTR_HBW_RANGE_BASE_H_0                                0x404E0

#define mmMME1_RTR_HBW_RANGE_BASE_H_1                                0x404E4

#define mmMME1_RTR_HBW_RANGE_BASE_H_2                                0x404E8

#define mmMME1_RTR_HBW_RANGE_BASE_H_3                                0x404EC

#define mmMME1_RTR_HBW_RANGE_BASE_H_4                                0x404F0

#define mmMME1_RTR_HBW_RANGE_BASE_H_5                                0x404F4

#define mmMME1_RTR_HBW_RANGE_BASE_H_6                                0x404F8

#define mmMME1_RTR_HBW_RANGE_BASE_H_7                                0x404FC
/* MME1_RTR_HBW_RANGE_BASE_H */
#define MME1_RTR_HBW_RANGE_BASE_H_VAL_SHIFT                          0
#define MME1_RTR_HBW_RANGE_BASE_H_VAL_MASK                           0x3FFFF

#define mmMME1_RTR_LBW_RANGE_HIT                                     0x40500
/* MME1_RTR_LBW_RANGE_HIT */
#define MME1_RTR_LBW_RANGE_HIT_IND_SHIFT                             0
#define MME1_RTR_LBW_RANGE_HIT_IND_MASK                              0xFFFF

#define mmMME1_RTR_LBW_RANGE_MASK_0                                  0x40510

#define mmMME1_RTR_LBW_RANGE_MASK_1                                  0x40514

#define mmMME1_RTR_LBW_RANGE_MASK_2                                  0x40518

#define mmMME1_RTR_LBW_RANGE_MASK_3                                  0x4051C

#define mmMME1_RTR_LBW_RANGE_MASK_4                                  0x40520

#define mmMME1_RTR_LBW_RANGE_MASK_5                                  0x40524

#define mmMME1_RTR_LBW_RANGE_MASK_6                                  0x40528

#define mmMME1_RTR_LBW_RANGE_MASK_7                                  0x4052C

#define mmMME1_RTR_LBW_RANGE_MASK_8                                  0x40530

#define mmMME1_RTR_LBW_RANGE_MASK_9                                  0x40534

#define mmMME1_RTR_LBW_RANGE_MASK_10                                 0x40538

#define mmMME1_RTR_LBW_RANGE_MASK_11                                 0x4053C

#define mmMME1_RTR_LBW_RANGE_MASK_12                                 0x40540

#define mmMME1_RTR_LBW_RANGE_MASK_13                                 0x40544

#define mmMME1_RTR_LBW_RANGE_MASK_14                                 0x40548

#define mmMME1_RTR_LBW_RANGE_MASK_15                                 0x4054C
/* MME1_RTR_LBW_RANGE_MASK */
#define MME1_RTR_LBW_RANGE_MASK_VAL_SHIFT                            0
#define MME1_RTR_LBW_RANGE_MASK_VAL_MASK                             0x3FFFFFF

#define mmMME1_RTR_LBW_RANGE_BASE_0                                  0x40550

#define mmMME1_RTR_LBW_RANGE_BASE_1                                  0x40554

#define mmMME1_RTR_LBW_RANGE_BASE_2                                  0x40558

#define mmMME1_RTR_LBW_RANGE_BASE_3                                  0x4055C

#define mmMME1_RTR_LBW_RANGE_BASE_4                                  0x40560

#define mmMME1_RTR_LBW_RANGE_BASE_5                                  0x40564

#define mmMME1_RTR_LBW_RANGE_BASE_6                                  0x40568

#define mmMME1_RTR_LBW_RANGE_BASE_7                                  0x4056C

#define mmMME1_RTR_LBW_RANGE_BASE_8                                  0x40570

#define mmMME1_RTR_LBW_RANGE_BASE_9                                  0x40574

#define mmMME1_RTR_LBW_RANGE_BASE_10                                 0x40578

#define mmMME1_RTR_LBW_RANGE_BASE_11                                 0x4057C

#define mmMME1_RTR_LBW_RANGE_BASE_12                                 0x40580

#define mmMME1_RTR_LBW_RANGE_BASE_13                                 0x40584

#define mmMME1_RTR_LBW_RANGE_BASE_14                                 0x40588

#define mmMME1_RTR_LBW_RANGE_BASE_15                                 0x4058C
/* MME1_RTR_LBW_RANGE_BASE */
#define MME1_RTR_LBW_RANGE_BASE_VAL_SHIFT                            0
#define MME1_RTR_LBW_RANGE_BASE_VAL_MASK                             0x3FFFFFF

#define mmMME1_RTR_RGLTR                                             0x40590
/* MME1_RTR_RGLTR */
#define MME1_RTR_RGLTR_WR_EN_SHIFT                                   0
#define MME1_RTR_RGLTR_WR_EN_MASK                                    0x1
#define MME1_RTR_RGLTR_RD_EN_SHIFT                                   4
#define MME1_RTR_RGLTR_RD_EN_MASK                                    0x10

#define mmMME1_RTR_RGLTR_WR_RESULT                                   0x40594
/* MME1_RTR_RGLTR_WR_RESULT */
#define MME1_RTR_RGLTR_WR_RESULT_VAL_SHIFT                           0
#define MME1_RTR_RGLTR_WR_RESULT_VAL_MASK                            0xFF

#define mmMME1_RTR_RGLTR_RD_RESULT                                   0x40598
/* MME1_RTR_RGLTR_RD_RESULT */
#define MME1_RTR_RGLTR_RD_RESULT_VAL_SHIFT                           0
#define MME1_RTR_RGLTR_RD_RESULT_VAL_MASK                            0xFF

#define mmMME1_RTR_SCRAMB_EN                                         0x40600
/* MME1_RTR_SCRAMB_EN */
#define MME1_RTR_SCRAMB_EN_VAL_SHIFT                                 0
#define MME1_RTR_SCRAMB_EN_VAL_MASK                                  0x1

#define mmMME1_RTR_NON_LIN_SCRAMB                                    0x40604
/* MME1_RTR_NON_LIN_SCRAMB */
#define MME1_RTR_NON_LIN_SCRAMB_EN_SHIFT                             0
#define MME1_RTR_NON_LIN_SCRAMB_EN_MASK                              0x1

#endif /* ASIC_REG_MME1_RTR_H_ */

