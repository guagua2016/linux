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

#ifndef ASIC_REG_MME6_RTR_H_
#define ASIC_REG_MME6_RTR_H_

/*
 *****************************************
 *   MME6_RTR (Prototype: MME_RTR)
 *****************************************
 */

#define mmMME6_RTR_HBW_RD_RQ_E_ARB                                   0x180100
/* MME6_RTR_HBW_RD_RQ_E_ARB */
#define MME6_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                             0
#define MME6_RTR_HBW_RD_RQ_E_ARB_W_MASK                              0x7
#define MME6_RTR_HBW_RD_RQ_E_ARB_S_SHIFT                             8
#define MME6_RTR_HBW_RD_RQ_E_ARB_S_MASK                              0x700
#define MME6_RTR_HBW_RD_RQ_E_ARB_N_SHIFT                             16
#define MME6_RTR_HBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define MME6_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                             24
#define MME6_RTR_HBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_HBW_RD_RQ_W_ARB                                   0x180104
/* MME6_RTR_HBW_RD_RQ_W_ARB */
#define MME6_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                             0
#define MME6_RTR_HBW_RD_RQ_W_ARB_E_MASK                              0x7
#define MME6_RTR_HBW_RD_RQ_W_ARB_S_SHIFT                             8
#define MME6_RTR_HBW_RD_RQ_W_ARB_S_MASK                              0x700
#define MME6_RTR_HBW_RD_RQ_W_ARB_N_SHIFT                             16
#define MME6_RTR_HBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define MME6_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                             24
#define MME6_RTR_HBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_HBW_RD_RQ_N_ARB                                   0x180108
/* MME6_RTR_HBW_RD_RQ_N_ARB */
#define MME6_RTR_HBW_RD_RQ_N_ARB_W_SHIFT                             0
#define MME6_RTR_HBW_RD_RQ_N_ARB_W_MASK                              0x7
#define MME6_RTR_HBW_RD_RQ_N_ARB_E_SHIFT                             8
#define MME6_RTR_HBW_RD_RQ_N_ARB_E_MASK                              0x700
#define MME6_RTR_HBW_RD_RQ_N_ARB_S_SHIFT                             16
#define MME6_RTR_HBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define MME6_RTR_HBW_RD_RQ_N_ARB_L_SHIFT                             24
#define MME6_RTR_HBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_HBW_RD_RQ_S_ARB                                   0x18010C
/* MME6_RTR_HBW_RD_RQ_S_ARB */
#define MME6_RTR_HBW_RD_RQ_S_ARB_W_SHIFT                             0
#define MME6_RTR_HBW_RD_RQ_S_ARB_W_MASK                              0x7
#define MME6_RTR_HBW_RD_RQ_S_ARB_E_SHIFT                             8
#define MME6_RTR_HBW_RD_RQ_S_ARB_E_MASK                              0x700
#define MME6_RTR_HBW_RD_RQ_S_ARB_N_SHIFT                             16
#define MME6_RTR_HBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define MME6_RTR_HBW_RD_RQ_S_ARB_L_SHIFT                             24
#define MME6_RTR_HBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_HBW_RD_RQ_L_ARB                                   0x180110
/* MME6_RTR_HBW_RD_RQ_L_ARB */
#define MME6_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                             0
#define MME6_RTR_HBW_RD_RQ_L_ARB_W_MASK                              0x7
#define MME6_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                             8
#define MME6_RTR_HBW_RD_RQ_L_ARB_E_MASK                              0x700
#define MME6_RTR_HBW_RD_RQ_L_ARB_S_SHIFT                             16
#define MME6_RTR_HBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define MME6_RTR_HBW_RD_RQ_L_ARB_N_SHIFT                             24
#define MME6_RTR_HBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME6_RTR_HBW_E_ARB_MAX                                     0x180120
/* MME6_RTR_HBW_E_ARB_MAX */
#define MME6_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME6_RTR_HBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME6_RTR_HBW_W_ARB_MAX                                     0x180124
/* MME6_RTR_HBW_W_ARB_MAX */
#define MME6_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME6_RTR_HBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME6_RTR_HBW_N_ARB_MAX                                     0x180128
/* MME6_RTR_HBW_N_ARB_MAX */
#define MME6_RTR_HBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME6_RTR_HBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME6_RTR_HBW_S_ARB_MAX                                     0x18012C
/* MME6_RTR_HBW_S_ARB_MAX */
#define MME6_RTR_HBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME6_RTR_HBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME6_RTR_HBW_L_ARB_MAX                                     0x180130
/* MME6_RTR_HBW_L_ARB_MAX */
#define MME6_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME6_RTR_HBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME6_RTR_HBW_RD_RS_MAX_CREDIT                              0x180140
/* MME6_RTR_HBW_RD_RS_MAX_CREDIT */
#define MME6_RTR_HBW_RD_RS_MAX_CREDIT_A_SHIFT                        0
#define MME6_RTR_HBW_RD_RS_MAX_CREDIT_A_MASK                         0x3F
#define MME6_RTR_HBW_RD_RS_MAX_CREDIT_B_SHIFT                        8
#define MME6_RTR_HBW_RD_RS_MAX_CREDIT_B_MASK                         0x3F00

#define mmMME6_RTR_HBW_WR_RQ_MAX_CREDIT                              0x180144
/* MME6_RTR_HBW_WR_RQ_MAX_CREDIT */
#define MME6_RTR_HBW_WR_RQ_MAX_CREDIT_VAL_SHIFT                      0
#define MME6_RTR_HBW_WR_RQ_MAX_CREDIT_VAL_MASK                       0x3F

#define mmMME6_RTR_HBW_RD_RQ_MAX_CREDIT                              0x180148
/* MME6_RTR_HBW_RD_RQ_MAX_CREDIT */
#define MME6_RTR_HBW_RD_RQ_MAX_CREDIT_A_SHIFT                        0
#define MME6_RTR_HBW_RD_RQ_MAX_CREDIT_A_MASK                         0x3F
#define MME6_RTR_HBW_RD_RQ_MAX_CREDIT_B_SHIFT                        8
#define MME6_RTR_HBW_RD_RQ_MAX_CREDIT_B_MASK                         0x3F00
#define MME6_RTR_HBW_RD_RQ_MAX_CREDIT_IC_SHIFT                       16
#define MME6_RTR_HBW_RD_RQ_MAX_CREDIT_IC_MASK                        0x3F0000

#define mmMME6_RTR_HBW_RD_RS_E_ARB                                   0x180150
/* MME6_RTR_HBW_RD_RS_E_ARB */
#define MME6_RTR_HBW_RD_RS_E_ARB_W_SHIFT                             0
#define MME6_RTR_HBW_RD_RS_E_ARB_W_MASK                              0x7
#define MME6_RTR_HBW_RD_RS_E_ARB_S_SHIFT                             8
#define MME6_RTR_HBW_RD_RS_E_ARB_S_MASK                              0x700
#define MME6_RTR_HBW_RD_RS_E_ARB_N_SHIFT                             16
#define MME6_RTR_HBW_RD_RS_E_ARB_N_MASK                              0x70000
#define MME6_RTR_HBW_RD_RS_E_ARB_L_SHIFT                             24
#define MME6_RTR_HBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_HBW_RD_RS_W_ARB                                   0x180154
/* MME6_RTR_HBW_RD_RS_W_ARB */
#define MME6_RTR_HBW_RD_RS_W_ARB_E_SHIFT                             0
#define MME6_RTR_HBW_RD_RS_W_ARB_E_MASK                              0x7
#define MME6_RTR_HBW_RD_RS_W_ARB_S_SHIFT                             8
#define MME6_RTR_HBW_RD_RS_W_ARB_S_MASK                              0x700
#define MME6_RTR_HBW_RD_RS_W_ARB_N_SHIFT                             16
#define MME6_RTR_HBW_RD_RS_W_ARB_N_MASK                              0x70000
#define MME6_RTR_HBW_RD_RS_W_ARB_L_SHIFT                             24
#define MME6_RTR_HBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_HBW_RD_RS_N_ARB                                   0x180158
/* MME6_RTR_HBW_RD_RS_N_ARB */
#define MME6_RTR_HBW_RD_RS_N_ARB_W_SHIFT                             0
#define MME6_RTR_HBW_RD_RS_N_ARB_W_MASK                              0x7
#define MME6_RTR_HBW_RD_RS_N_ARB_E_SHIFT                             8
#define MME6_RTR_HBW_RD_RS_N_ARB_E_MASK                              0x700
#define MME6_RTR_HBW_RD_RS_N_ARB_S_SHIFT                             16
#define MME6_RTR_HBW_RD_RS_N_ARB_S_MASK                              0x70000
#define MME6_RTR_HBW_RD_RS_N_ARB_L_SHIFT                             24
#define MME6_RTR_HBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_HBW_RD_RS_S_ARB                                   0x18015C
/* MME6_RTR_HBW_RD_RS_S_ARB */
#define MME6_RTR_HBW_RD_RS_S_ARB_W_SHIFT                             0
#define MME6_RTR_HBW_RD_RS_S_ARB_W_MASK                              0x7
#define MME6_RTR_HBW_RD_RS_S_ARB_E_SHIFT                             8
#define MME6_RTR_HBW_RD_RS_S_ARB_E_MASK                              0x700
#define MME6_RTR_HBW_RD_RS_S_ARB_N_SHIFT                             16
#define MME6_RTR_HBW_RD_RS_S_ARB_N_MASK                              0x70000
#define MME6_RTR_HBW_RD_RS_S_ARB_L_SHIFT                             24
#define MME6_RTR_HBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_HBW_RD_RS_L_ARB                                   0x180160
/* MME6_RTR_HBW_RD_RS_L_ARB */
#define MME6_RTR_HBW_RD_RS_L_ARB_W_SHIFT                             0
#define MME6_RTR_HBW_RD_RS_L_ARB_W_MASK                              0x7
#define MME6_RTR_HBW_RD_RS_L_ARB_E_SHIFT                             8
#define MME6_RTR_HBW_RD_RS_L_ARB_E_MASK                              0x700
#define MME6_RTR_HBW_RD_RS_L_ARB_S_SHIFT                             16
#define MME6_RTR_HBW_RD_RS_L_ARB_S_MASK                              0x70000
#define MME6_RTR_HBW_RD_RS_L_ARB_N_SHIFT                             24
#define MME6_RTR_HBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmMME6_RTR_HBW_WR_RQ_E_ARB                                   0x180170
/* MME6_RTR_HBW_WR_RQ_E_ARB */
#define MME6_RTR_HBW_WR_RQ_E_ARB_W_SHIFT                             0
#define MME6_RTR_HBW_WR_RQ_E_ARB_W_MASK                              0x7
#define MME6_RTR_HBW_WR_RQ_E_ARB_S_SHIFT                             8
#define MME6_RTR_HBW_WR_RQ_E_ARB_S_MASK                              0x700
#define MME6_RTR_HBW_WR_RQ_E_ARB_N_SHIFT                             16
#define MME6_RTR_HBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define MME6_RTR_HBW_WR_RQ_E_ARB_L_SHIFT                             24
#define MME6_RTR_HBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_HBW_WR_RQ_W_ARB                                   0x180174
/* MME6_RTR_HBW_WR_RQ_W_ARB */
#define MME6_RTR_HBW_WR_RQ_W_ARB_E_SHIFT                             0
#define MME6_RTR_HBW_WR_RQ_W_ARB_E_MASK                              0x7
#define MME6_RTR_HBW_WR_RQ_W_ARB_S_SHIFT                             8
#define MME6_RTR_HBW_WR_RQ_W_ARB_S_MASK                              0x700
#define MME6_RTR_HBW_WR_RQ_W_ARB_N_SHIFT                             16
#define MME6_RTR_HBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define MME6_RTR_HBW_WR_RQ_W_ARB_L_SHIFT                             24
#define MME6_RTR_HBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_HBW_WR_RQ_N_ARB                                   0x180178
/* MME6_RTR_HBW_WR_RQ_N_ARB */
#define MME6_RTR_HBW_WR_RQ_N_ARB_W_SHIFT                             0
#define MME6_RTR_HBW_WR_RQ_N_ARB_W_MASK                              0x7
#define MME6_RTR_HBW_WR_RQ_N_ARB_E_SHIFT                             8
#define MME6_RTR_HBW_WR_RQ_N_ARB_E_MASK                              0x700
#define MME6_RTR_HBW_WR_RQ_N_ARB_S_SHIFT                             16
#define MME6_RTR_HBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define MME6_RTR_HBW_WR_RQ_N_ARB_L_SHIFT                             24
#define MME6_RTR_HBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_HBW_WR_RQ_S_ARB                                   0x18017C
/* MME6_RTR_HBW_WR_RQ_S_ARB */
#define MME6_RTR_HBW_WR_RQ_S_ARB_W_SHIFT                             0
#define MME6_RTR_HBW_WR_RQ_S_ARB_W_MASK                              0x7
#define MME6_RTR_HBW_WR_RQ_S_ARB_E_SHIFT                             8
#define MME6_RTR_HBW_WR_RQ_S_ARB_E_MASK                              0x700
#define MME6_RTR_HBW_WR_RQ_S_ARB_N_SHIFT                             16
#define MME6_RTR_HBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define MME6_RTR_HBW_WR_RQ_S_ARB_L_SHIFT                             24
#define MME6_RTR_HBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_HBW_WR_RQ_L_ARB                                   0x180180
/* MME6_RTR_HBW_WR_RQ_L_ARB */
#define MME6_RTR_HBW_WR_RQ_L_ARB_W_SHIFT                             0
#define MME6_RTR_HBW_WR_RQ_L_ARB_W_MASK                              0x7
#define MME6_RTR_HBW_WR_RQ_L_ARB_E_SHIFT                             8
#define MME6_RTR_HBW_WR_RQ_L_ARB_E_MASK                              0x700
#define MME6_RTR_HBW_WR_RQ_L_ARB_S_SHIFT                             16
#define MME6_RTR_HBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define MME6_RTR_HBW_WR_RQ_L_ARB_N_SHIFT                             24
#define MME6_RTR_HBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME6_RTR_HBW_WR_RS_E_ARB                                   0x180190
/* MME6_RTR_HBW_WR_RS_E_ARB */
#define MME6_RTR_HBW_WR_RS_E_ARB_W_SHIFT                             0
#define MME6_RTR_HBW_WR_RS_E_ARB_W_MASK                              0x7
#define MME6_RTR_HBW_WR_RS_E_ARB_S_SHIFT                             8
#define MME6_RTR_HBW_WR_RS_E_ARB_S_MASK                              0x700
#define MME6_RTR_HBW_WR_RS_E_ARB_N_SHIFT                             16
#define MME6_RTR_HBW_WR_RS_E_ARB_N_MASK                              0x70000
#define MME6_RTR_HBW_WR_RS_E_ARB_L_SHIFT                             24
#define MME6_RTR_HBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_HBW_WR_RS_W_ARB                                   0x180194
/* MME6_RTR_HBW_WR_RS_W_ARB */
#define MME6_RTR_HBW_WR_RS_W_ARB_E_SHIFT                             0
#define MME6_RTR_HBW_WR_RS_W_ARB_E_MASK                              0x7
#define MME6_RTR_HBW_WR_RS_W_ARB_S_SHIFT                             8
#define MME6_RTR_HBW_WR_RS_W_ARB_S_MASK                              0x700
#define MME6_RTR_HBW_WR_RS_W_ARB_N_SHIFT                             16
#define MME6_RTR_HBW_WR_RS_W_ARB_N_MASK                              0x70000
#define MME6_RTR_HBW_WR_RS_W_ARB_L_SHIFT                             24
#define MME6_RTR_HBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_HBW_WR_RS_N_ARB                                   0x180198
/* MME6_RTR_HBW_WR_RS_N_ARB */
#define MME6_RTR_HBW_WR_RS_N_ARB_W_SHIFT                             0
#define MME6_RTR_HBW_WR_RS_N_ARB_W_MASK                              0x7
#define MME6_RTR_HBW_WR_RS_N_ARB_E_SHIFT                             8
#define MME6_RTR_HBW_WR_RS_N_ARB_E_MASK                              0x700
#define MME6_RTR_HBW_WR_RS_N_ARB_S_SHIFT                             16
#define MME6_RTR_HBW_WR_RS_N_ARB_S_MASK                              0x70000
#define MME6_RTR_HBW_WR_RS_N_ARB_L_SHIFT                             24
#define MME6_RTR_HBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_HBW_WR_RS_S_ARB                                   0x18019C
/* MME6_RTR_HBW_WR_RS_S_ARB */
#define MME6_RTR_HBW_WR_RS_S_ARB_W_SHIFT                             0
#define MME6_RTR_HBW_WR_RS_S_ARB_W_MASK                              0x7
#define MME6_RTR_HBW_WR_RS_S_ARB_E_SHIFT                             8
#define MME6_RTR_HBW_WR_RS_S_ARB_E_MASK                              0x700
#define MME6_RTR_HBW_WR_RS_S_ARB_N_SHIFT                             16
#define MME6_RTR_HBW_WR_RS_S_ARB_N_MASK                              0x70000
#define MME6_RTR_HBW_WR_RS_S_ARB_L_SHIFT                             24
#define MME6_RTR_HBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_HBW_WR_RS_L_ARB                                   0x1801A0
/* MME6_RTR_HBW_WR_RS_L_ARB */
#define MME6_RTR_HBW_WR_RS_L_ARB_W_SHIFT                             0
#define MME6_RTR_HBW_WR_RS_L_ARB_W_MASK                              0x7
#define MME6_RTR_HBW_WR_RS_L_ARB_E_SHIFT                             8
#define MME6_RTR_HBW_WR_RS_L_ARB_E_MASK                              0x700
#define MME6_RTR_HBW_WR_RS_L_ARB_S_SHIFT                             16
#define MME6_RTR_HBW_WR_RS_L_ARB_S_MASK                              0x70000
#define MME6_RTR_HBW_WR_RS_L_ARB_N_SHIFT                             24
#define MME6_RTR_HBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmMME6_RTR_LBW_RD_RQ_E_ARB                                   0x180200
/* MME6_RTR_LBW_RD_RQ_E_ARB */
#define MME6_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                             0
#define MME6_RTR_LBW_RD_RQ_E_ARB_W_MASK                              0x7
#define MME6_RTR_LBW_RD_RQ_E_ARB_S_SHIFT                             8
#define MME6_RTR_LBW_RD_RQ_E_ARB_S_MASK                              0x700
#define MME6_RTR_LBW_RD_RQ_E_ARB_N_SHIFT                             16
#define MME6_RTR_LBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define MME6_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                             24
#define MME6_RTR_LBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_LBW_RD_RQ_W_ARB                                   0x180204
/* MME6_RTR_LBW_RD_RQ_W_ARB */
#define MME6_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                             0
#define MME6_RTR_LBW_RD_RQ_W_ARB_E_MASK                              0x7
#define MME6_RTR_LBW_RD_RQ_W_ARB_S_SHIFT                             8
#define MME6_RTR_LBW_RD_RQ_W_ARB_S_MASK                              0x700
#define MME6_RTR_LBW_RD_RQ_W_ARB_N_SHIFT                             16
#define MME6_RTR_LBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define MME6_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                             24
#define MME6_RTR_LBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_LBW_RD_RQ_N_ARB                                   0x180208
/* MME6_RTR_LBW_RD_RQ_N_ARB */
#define MME6_RTR_LBW_RD_RQ_N_ARB_W_SHIFT                             0
#define MME6_RTR_LBW_RD_RQ_N_ARB_W_MASK                              0x7
#define MME6_RTR_LBW_RD_RQ_N_ARB_E_SHIFT                             8
#define MME6_RTR_LBW_RD_RQ_N_ARB_E_MASK                              0x700
#define MME6_RTR_LBW_RD_RQ_N_ARB_S_SHIFT                             16
#define MME6_RTR_LBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define MME6_RTR_LBW_RD_RQ_N_ARB_L_SHIFT                             24
#define MME6_RTR_LBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_LBW_RD_RQ_S_ARB                                   0x18020C
/* MME6_RTR_LBW_RD_RQ_S_ARB */
#define MME6_RTR_LBW_RD_RQ_S_ARB_W_SHIFT                             0
#define MME6_RTR_LBW_RD_RQ_S_ARB_W_MASK                              0x7
#define MME6_RTR_LBW_RD_RQ_S_ARB_E_SHIFT                             8
#define MME6_RTR_LBW_RD_RQ_S_ARB_E_MASK                              0x700
#define MME6_RTR_LBW_RD_RQ_S_ARB_N_SHIFT                             16
#define MME6_RTR_LBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define MME6_RTR_LBW_RD_RQ_S_ARB_L_SHIFT                             24
#define MME6_RTR_LBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_LBW_RD_RQ_L_ARB                                   0x180210
/* MME6_RTR_LBW_RD_RQ_L_ARB */
#define MME6_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                             0
#define MME6_RTR_LBW_RD_RQ_L_ARB_W_MASK                              0x7
#define MME6_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                             8
#define MME6_RTR_LBW_RD_RQ_L_ARB_E_MASK                              0x700
#define MME6_RTR_LBW_RD_RQ_L_ARB_S_SHIFT                             16
#define MME6_RTR_LBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define MME6_RTR_LBW_RD_RQ_L_ARB_N_SHIFT                             24
#define MME6_RTR_LBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME6_RTR_LBW_E_ARB_MAX                                     0x180220
/* MME6_RTR_LBW_E_ARB_MAX */
#define MME6_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME6_RTR_LBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME6_RTR_LBW_W_ARB_MAX                                     0x180224
/* MME6_RTR_LBW_W_ARB_MAX */
#define MME6_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME6_RTR_LBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME6_RTR_LBW_N_ARB_MAX                                     0x180228
/* MME6_RTR_LBW_N_ARB_MAX */
#define MME6_RTR_LBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME6_RTR_LBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME6_RTR_LBW_S_ARB_MAX                                     0x18022C
/* MME6_RTR_LBW_S_ARB_MAX */
#define MME6_RTR_LBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME6_RTR_LBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME6_RTR_LBW_L_ARB_MAX                                     0x180230
/* MME6_RTR_LBW_L_ARB_MAX */
#define MME6_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME6_RTR_LBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME6_RTR_LBW_SRAM_MAX_CREDIT                               0x180240
/* MME6_RTR_LBW_SRAM_MAX_CREDIT */
#define MME6_RTR_LBW_SRAM_MAX_CREDIT_MSTR_SHIFT                      0
#define MME6_RTR_LBW_SRAM_MAX_CREDIT_MSTR_MASK                       0x3F
#define MME6_RTR_LBW_SRAM_MAX_CREDIT_SLV_SHIFT                       8
#define MME6_RTR_LBW_SRAM_MAX_CREDIT_SLV_MASK                        0x3F00

#define mmMME6_RTR_LBW_RD_RS_E_ARB                                   0x180250
/* MME6_RTR_LBW_RD_RS_E_ARB */
#define MME6_RTR_LBW_RD_RS_E_ARB_W_SHIFT                             0
#define MME6_RTR_LBW_RD_RS_E_ARB_W_MASK                              0x7
#define MME6_RTR_LBW_RD_RS_E_ARB_S_SHIFT                             8
#define MME6_RTR_LBW_RD_RS_E_ARB_S_MASK                              0x700
#define MME6_RTR_LBW_RD_RS_E_ARB_N_SHIFT                             16
#define MME6_RTR_LBW_RD_RS_E_ARB_N_MASK                              0x70000
#define MME6_RTR_LBW_RD_RS_E_ARB_L_SHIFT                             24
#define MME6_RTR_LBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_LBW_RD_RS_W_ARB                                   0x180254
/* MME6_RTR_LBW_RD_RS_W_ARB */
#define MME6_RTR_LBW_RD_RS_W_ARB_E_SHIFT                             0
#define MME6_RTR_LBW_RD_RS_W_ARB_E_MASK                              0x7
#define MME6_RTR_LBW_RD_RS_W_ARB_S_SHIFT                             8
#define MME6_RTR_LBW_RD_RS_W_ARB_S_MASK                              0x700
#define MME6_RTR_LBW_RD_RS_W_ARB_N_SHIFT                             16
#define MME6_RTR_LBW_RD_RS_W_ARB_N_MASK                              0x70000
#define MME6_RTR_LBW_RD_RS_W_ARB_L_SHIFT                             24
#define MME6_RTR_LBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_LBW_RD_RS_N_ARB                                   0x180258
/* MME6_RTR_LBW_RD_RS_N_ARB */
#define MME6_RTR_LBW_RD_RS_N_ARB_W_SHIFT                             0
#define MME6_RTR_LBW_RD_RS_N_ARB_W_MASK                              0x7
#define MME6_RTR_LBW_RD_RS_N_ARB_E_SHIFT                             8
#define MME6_RTR_LBW_RD_RS_N_ARB_E_MASK                              0x700
#define MME6_RTR_LBW_RD_RS_N_ARB_S_SHIFT                             16
#define MME6_RTR_LBW_RD_RS_N_ARB_S_MASK                              0x70000
#define MME6_RTR_LBW_RD_RS_N_ARB_L_SHIFT                             24
#define MME6_RTR_LBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_LBW_RD_RS_S_ARB                                   0x18025C
/* MME6_RTR_LBW_RD_RS_S_ARB */
#define MME6_RTR_LBW_RD_RS_S_ARB_W_SHIFT                             0
#define MME6_RTR_LBW_RD_RS_S_ARB_W_MASK                              0x7
#define MME6_RTR_LBW_RD_RS_S_ARB_E_SHIFT                             8
#define MME6_RTR_LBW_RD_RS_S_ARB_E_MASK                              0x700
#define MME6_RTR_LBW_RD_RS_S_ARB_N_SHIFT                             16
#define MME6_RTR_LBW_RD_RS_S_ARB_N_MASK                              0x70000
#define MME6_RTR_LBW_RD_RS_S_ARB_L_SHIFT                             24
#define MME6_RTR_LBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_LBW_RD_RS_L_ARB                                   0x180260
/* MME6_RTR_LBW_RD_RS_L_ARB */
#define MME6_RTR_LBW_RD_RS_L_ARB_W_SHIFT                             0
#define MME6_RTR_LBW_RD_RS_L_ARB_W_MASK                              0x7
#define MME6_RTR_LBW_RD_RS_L_ARB_E_SHIFT                             8
#define MME6_RTR_LBW_RD_RS_L_ARB_E_MASK                              0x700
#define MME6_RTR_LBW_RD_RS_L_ARB_S_SHIFT                             16
#define MME6_RTR_LBW_RD_RS_L_ARB_S_MASK                              0x70000
#define MME6_RTR_LBW_RD_RS_L_ARB_N_SHIFT                             24
#define MME6_RTR_LBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmMME6_RTR_LBW_WR_RQ_E_ARB                                   0x180270
/* MME6_RTR_LBW_WR_RQ_E_ARB */
#define MME6_RTR_LBW_WR_RQ_E_ARB_W_SHIFT                             0
#define MME6_RTR_LBW_WR_RQ_E_ARB_W_MASK                              0x7
#define MME6_RTR_LBW_WR_RQ_E_ARB_S_SHIFT                             8
#define MME6_RTR_LBW_WR_RQ_E_ARB_S_MASK                              0x700
#define MME6_RTR_LBW_WR_RQ_E_ARB_N_SHIFT                             16
#define MME6_RTR_LBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define MME6_RTR_LBW_WR_RQ_E_ARB_L_SHIFT                             24
#define MME6_RTR_LBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_LBW_WR_RQ_W_ARB                                   0x180274
/* MME6_RTR_LBW_WR_RQ_W_ARB */
#define MME6_RTR_LBW_WR_RQ_W_ARB_E_SHIFT                             0
#define MME6_RTR_LBW_WR_RQ_W_ARB_E_MASK                              0x7
#define MME6_RTR_LBW_WR_RQ_W_ARB_S_SHIFT                             8
#define MME6_RTR_LBW_WR_RQ_W_ARB_S_MASK                              0x700
#define MME6_RTR_LBW_WR_RQ_W_ARB_N_SHIFT                             16
#define MME6_RTR_LBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define MME6_RTR_LBW_WR_RQ_W_ARB_L_SHIFT                             24
#define MME6_RTR_LBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_LBW_WR_RQ_N_ARB                                   0x180278
/* MME6_RTR_LBW_WR_RQ_N_ARB */
#define MME6_RTR_LBW_WR_RQ_N_ARB_W_SHIFT                             0
#define MME6_RTR_LBW_WR_RQ_N_ARB_W_MASK                              0x7
#define MME6_RTR_LBW_WR_RQ_N_ARB_E_SHIFT                             8
#define MME6_RTR_LBW_WR_RQ_N_ARB_E_MASK                              0x700
#define MME6_RTR_LBW_WR_RQ_N_ARB_S_SHIFT                             16
#define MME6_RTR_LBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define MME6_RTR_LBW_WR_RQ_N_ARB_L_SHIFT                             24
#define MME6_RTR_LBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_LBW_WR_RQ_S_ARB                                   0x18027C
/* MME6_RTR_LBW_WR_RQ_S_ARB */
#define MME6_RTR_LBW_WR_RQ_S_ARB_W_SHIFT                             0
#define MME6_RTR_LBW_WR_RQ_S_ARB_W_MASK                              0x7
#define MME6_RTR_LBW_WR_RQ_S_ARB_E_SHIFT                             8
#define MME6_RTR_LBW_WR_RQ_S_ARB_E_MASK                              0x700
#define MME6_RTR_LBW_WR_RQ_S_ARB_N_SHIFT                             16
#define MME6_RTR_LBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define MME6_RTR_LBW_WR_RQ_S_ARB_L_SHIFT                             24
#define MME6_RTR_LBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_LBW_WR_RQ_L_ARB                                   0x180280
/* MME6_RTR_LBW_WR_RQ_L_ARB */
#define MME6_RTR_LBW_WR_RQ_L_ARB_W_SHIFT                             0
#define MME6_RTR_LBW_WR_RQ_L_ARB_W_MASK                              0x7
#define MME6_RTR_LBW_WR_RQ_L_ARB_E_SHIFT                             8
#define MME6_RTR_LBW_WR_RQ_L_ARB_E_MASK                              0x700
#define MME6_RTR_LBW_WR_RQ_L_ARB_S_SHIFT                             16
#define MME6_RTR_LBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define MME6_RTR_LBW_WR_RQ_L_ARB_N_SHIFT                             24
#define MME6_RTR_LBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME6_RTR_LBW_WR_RS_E_ARB                                   0x180290
/* MME6_RTR_LBW_WR_RS_E_ARB */
#define MME6_RTR_LBW_WR_RS_E_ARB_W_SHIFT                             0
#define MME6_RTR_LBW_WR_RS_E_ARB_W_MASK                              0x7
#define MME6_RTR_LBW_WR_RS_E_ARB_S_SHIFT                             8
#define MME6_RTR_LBW_WR_RS_E_ARB_S_MASK                              0x700
#define MME6_RTR_LBW_WR_RS_E_ARB_N_SHIFT                             16
#define MME6_RTR_LBW_WR_RS_E_ARB_N_MASK                              0x70000
#define MME6_RTR_LBW_WR_RS_E_ARB_L_SHIFT                             24
#define MME6_RTR_LBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_LBW_WR_RS_W_ARB                                   0x180294
/* MME6_RTR_LBW_WR_RS_W_ARB */
#define MME6_RTR_LBW_WR_RS_W_ARB_E_SHIFT                             0
#define MME6_RTR_LBW_WR_RS_W_ARB_E_MASK                              0x7
#define MME6_RTR_LBW_WR_RS_W_ARB_S_SHIFT                             8
#define MME6_RTR_LBW_WR_RS_W_ARB_S_MASK                              0x700
#define MME6_RTR_LBW_WR_RS_W_ARB_N_SHIFT                             16
#define MME6_RTR_LBW_WR_RS_W_ARB_N_MASK                              0x70000
#define MME6_RTR_LBW_WR_RS_W_ARB_L_SHIFT                             24
#define MME6_RTR_LBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_LBW_WR_RS_N_ARB                                   0x180298
/* MME6_RTR_LBW_WR_RS_N_ARB */
#define MME6_RTR_LBW_WR_RS_N_ARB_W_SHIFT                             0
#define MME6_RTR_LBW_WR_RS_N_ARB_W_MASK                              0x7
#define MME6_RTR_LBW_WR_RS_N_ARB_E_SHIFT                             8
#define MME6_RTR_LBW_WR_RS_N_ARB_E_MASK                              0x700
#define MME6_RTR_LBW_WR_RS_N_ARB_S_SHIFT                             16
#define MME6_RTR_LBW_WR_RS_N_ARB_S_MASK                              0x70000
#define MME6_RTR_LBW_WR_RS_N_ARB_L_SHIFT                             24
#define MME6_RTR_LBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_LBW_WR_RS_S_ARB                                   0x18029C
/* MME6_RTR_LBW_WR_RS_S_ARB */
#define MME6_RTR_LBW_WR_RS_S_ARB_W_SHIFT                             0
#define MME6_RTR_LBW_WR_RS_S_ARB_W_MASK                              0x7
#define MME6_RTR_LBW_WR_RS_S_ARB_E_SHIFT                             8
#define MME6_RTR_LBW_WR_RS_S_ARB_E_MASK                              0x700
#define MME6_RTR_LBW_WR_RS_S_ARB_N_SHIFT                             16
#define MME6_RTR_LBW_WR_RS_S_ARB_N_MASK                              0x70000
#define MME6_RTR_LBW_WR_RS_S_ARB_L_SHIFT                             24
#define MME6_RTR_LBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmMME6_RTR_LBW_WR_RS_L_ARB                                   0x1802A0
/* MME6_RTR_LBW_WR_RS_L_ARB */
#define MME6_RTR_LBW_WR_RS_L_ARB_W_SHIFT                             0
#define MME6_RTR_LBW_WR_RS_L_ARB_W_MASK                              0x7
#define MME6_RTR_LBW_WR_RS_L_ARB_E_SHIFT                             8
#define MME6_RTR_LBW_WR_RS_L_ARB_E_MASK                              0x700
#define MME6_RTR_LBW_WR_RS_L_ARB_S_SHIFT                             16
#define MME6_RTR_LBW_WR_RS_L_ARB_S_MASK                              0x70000
#define MME6_RTR_LBW_WR_RS_L_ARB_N_SHIFT                             24
#define MME6_RTR_LBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmMME6_RTR_DBG_E_ARB                                         0x180300
/* MME6_RTR_DBG_E_ARB */
#define MME6_RTR_DBG_E_ARB_W_SHIFT                                   0
#define MME6_RTR_DBG_E_ARB_W_MASK                                    0x7
#define MME6_RTR_DBG_E_ARB_S_SHIFT                                   8
#define MME6_RTR_DBG_E_ARB_S_MASK                                    0x700
#define MME6_RTR_DBG_E_ARB_N_SHIFT                                   16
#define MME6_RTR_DBG_E_ARB_N_MASK                                    0x70000
#define MME6_RTR_DBG_E_ARB_L_SHIFT                                   24
#define MME6_RTR_DBG_E_ARB_L_MASK                                    0x7000000

#define mmMME6_RTR_DBG_W_ARB                                         0x180304
/* MME6_RTR_DBG_W_ARB */
#define MME6_RTR_DBG_W_ARB_E_SHIFT                                   0
#define MME6_RTR_DBG_W_ARB_E_MASK                                    0x7
#define MME6_RTR_DBG_W_ARB_S_SHIFT                                   8
#define MME6_RTR_DBG_W_ARB_S_MASK                                    0x700
#define MME6_RTR_DBG_W_ARB_N_SHIFT                                   16
#define MME6_RTR_DBG_W_ARB_N_MASK                                    0x70000
#define MME6_RTR_DBG_W_ARB_L_SHIFT                                   24
#define MME6_RTR_DBG_W_ARB_L_MASK                                    0x7000000

#define mmMME6_RTR_DBG_N_ARB                                         0x180308
/* MME6_RTR_DBG_N_ARB */
#define MME6_RTR_DBG_N_ARB_W_SHIFT                                   0
#define MME6_RTR_DBG_N_ARB_W_MASK                                    0x7
#define MME6_RTR_DBG_N_ARB_E_SHIFT                                   8
#define MME6_RTR_DBG_N_ARB_E_MASK                                    0x700
#define MME6_RTR_DBG_N_ARB_S_SHIFT                                   16
#define MME6_RTR_DBG_N_ARB_S_MASK                                    0x70000
#define MME6_RTR_DBG_N_ARB_L_SHIFT                                   24
#define MME6_RTR_DBG_N_ARB_L_MASK                                    0x7000000

#define mmMME6_RTR_DBG_S_ARB                                         0x18030C
/* MME6_RTR_DBG_S_ARB */
#define MME6_RTR_DBG_S_ARB_W_SHIFT                                   0
#define MME6_RTR_DBG_S_ARB_W_MASK                                    0x7
#define MME6_RTR_DBG_S_ARB_E_SHIFT                                   8
#define MME6_RTR_DBG_S_ARB_E_MASK                                    0x700
#define MME6_RTR_DBG_S_ARB_N_SHIFT                                   16
#define MME6_RTR_DBG_S_ARB_N_MASK                                    0x70000
#define MME6_RTR_DBG_S_ARB_L_SHIFT                                   24
#define MME6_RTR_DBG_S_ARB_L_MASK                                    0x7000000

#define mmMME6_RTR_DBG_L_ARB                                         0x180310
/* MME6_RTR_DBG_L_ARB */
#define MME6_RTR_DBG_L_ARB_W_SHIFT                                   0
#define MME6_RTR_DBG_L_ARB_W_MASK                                    0x7
#define MME6_RTR_DBG_L_ARB_E_SHIFT                                   8
#define MME6_RTR_DBG_L_ARB_E_MASK                                    0x700
#define MME6_RTR_DBG_L_ARB_S_SHIFT                                   16
#define MME6_RTR_DBG_L_ARB_S_MASK                                    0x70000
#define MME6_RTR_DBG_L_ARB_N_SHIFT                                   24
#define MME6_RTR_DBG_L_ARB_N_MASK                                    0x7000000

#define mmMME6_RTR_DBG_E_ARB_MAX                                     0x180320
/* MME6_RTR_DBG_E_ARB_MAX */
#define MME6_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME6_RTR_DBG_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME6_RTR_DBG_W_ARB_MAX                                     0x180324
/* MME6_RTR_DBG_W_ARB_MAX */
#define MME6_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME6_RTR_DBG_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME6_RTR_DBG_N_ARB_MAX                                     0x180328
/* MME6_RTR_DBG_N_ARB_MAX */
#define MME6_RTR_DBG_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME6_RTR_DBG_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME6_RTR_DBG_S_ARB_MAX                                     0x18032C
/* MME6_RTR_DBG_S_ARB_MAX */
#define MME6_RTR_DBG_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME6_RTR_DBG_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME6_RTR_DBG_L_ARB_MAX                                     0x180330
/* MME6_RTR_DBG_L_ARB_MAX */
#define MME6_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME6_RTR_DBG_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME6_RTR_SPLIT_COEF_0                                      0x180400

#define mmMME6_RTR_SPLIT_COEF_1                                      0x180404

#define mmMME6_RTR_SPLIT_COEF_2                                      0x180408

#define mmMME6_RTR_SPLIT_COEF_3                                      0x18040C

#define mmMME6_RTR_SPLIT_COEF_4                                      0x180410

#define mmMME6_RTR_SPLIT_COEF_5                                      0x180414

#define mmMME6_RTR_SPLIT_COEF_6                                      0x180418

#define mmMME6_RTR_SPLIT_COEF_7                                      0x18041C

#define mmMME6_RTR_SPLIT_COEF_8                                      0x180420

#define mmMME6_RTR_SPLIT_COEF_9                                      0x180424
/* MME6_RTR_SPLIT_COEF */
#define MME6_RTR_SPLIT_COEF_VAL_SHIFT                                0
#define MME6_RTR_SPLIT_COEF_VAL_MASK                                 0xFFFF

#define mmMME6_RTR_SPLIT_CFG                                         0x180440
/* MME6_RTR_SPLIT_CFG */
#define MME6_RTR_SPLIT_CFG_FORCE_WAK_ORDER_SHIFT                     0
#define MME6_RTR_SPLIT_CFG_FORCE_WAK_ORDER_MASK                      0x1
#define MME6_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_SHIFT                  1
#define MME6_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_MASK                   0x2
#define MME6_RTR_SPLIT_CFG_DEFAULT_MESH_SHIFT                        2
#define MME6_RTR_SPLIT_CFG_DEFAULT_MESH_MASK                         0xC
#define MME6_RTR_SPLIT_CFG_WR_RATE_LIM_EN_SHIFT                      4
#define MME6_RTR_SPLIT_CFG_WR_RATE_LIM_EN_MASK                       0x10
#define MME6_RTR_SPLIT_CFG_RD_RATE_LIM_EN_SHIFT                      5
#define MME6_RTR_SPLIT_CFG_RD_RATE_LIM_EN_MASK                       0x20
#define MME6_RTR_SPLIT_CFG_B2B_OPT_SHIFT                             6
#define MME6_RTR_SPLIT_CFG_B2B_OPT_MASK                              0x1C0

#define mmMME6_RTR_SPLIT_RD_SAT                                      0x180444
/* MME6_RTR_SPLIT_RD_SAT */
#define MME6_RTR_SPLIT_RD_SAT_VAL_SHIFT                              0
#define MME6_RTR_SPLIT_RD_SAT_VAL_MASK                               0xFFFF

#define mmMME6_RTR_SPLIT_RD_RST_TOKEN                                0x180448
/* MME6_RTR_SPLIT_RD_RST_TOKEN */
#define MME6_RTR_SPLIT_RD_RST_TOKEN_VAL_SHIFT                        0
#define MME6_RTR_SPLIT_RD_RST_TOKEN_VAL_MASK                         0xFFFF

#define mmMME6_RTR_SPLIT_RD_TIMEOUT_0                                0x18044C

#define mmMME6_RTR_SPLIT_RD_TIMEOUT_1                                0x180450
/* MME6_RTR_SPLIT_RD_TIMEOUT */
#define MME6_RTR_SPLIT_RD_TIMEOUT_VAL_SHIFT                          0
#define MME6_RTR_SPLIT_RD_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmMME6_RTR_SPLIT_WR_SAT                                      0x180454
/* MME6_RTR_SPLIT_WR_SAT */
#define MME6_RTR_SPLIT_WR_SAT_VAL_SHIFT                              0
#define MME6_RTR_SPLIT_WR_SAT_VAL_MASK                               0xFFFF

#define mmMME6_RTR_WPLIT_WR_TST_TOLEN                                0x180458
/* MME6_RTR_WPLIT_WR_TST_TOLEN */
#define MME6_RTR_WPLIT_WR_TST_TOLEN_VAL_SHIFT                        0
#define MME6_RTR_WPLIT_WR_TST_TOLEN_VAL_MASK                         0xFFFF

#define mmMME6_RTR_SPLIT_WR_TIMEOUT_0                                0x18045C

#define mmMME6_RTR_SPLIT_WR_TIMEOUT_1                                0x180460
/* MME6_RTR_SPLIT_WR_TIMEOUT */
#define MME6_RTR_SPLIT_WR_TIMEOUT_VAL_SHIFT                          0
#define MME6_RTR_SPLIT_WR_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmMME6_RTR_HBW_RANGE_HIT                                     0x180470
/* MME6_RTR_HBW_RANGE_HIT */
#define MME6_RTR_HBW_RANGE_HIT_IND_SHIFT                             0
#define MME6_RTR_HBW_RANGE_HIT_IND_MASK                              0xFF

#define mmMME6_RTR_HBW_RANGE_MASK_L_0                                0x180480

#define mmMME6_RTR_HBW_RANGE_MASK_L_1                                0x180484

#define mmMME6_RTR_HBW_RANGE_MASK_L_2                                0x180488

#define mmMME6_RTR_HBW_RANGE_MASK_L_3                                0x18048C

#define mmMME6_RTR_HBW_RANGE_MASK_L_4                                0x180490

#define mmMME6_RTR_HBW_RANGE_MASK_L_5                                0x180494

#define mmMME6_RTR_HBW_RANGE_MASK_L_6                                0x180498

#define mmMME6_RTR_HBW_RANGE_MASK_L_7                                0x18049C
/* MME6_RTR_HBW_RANGE_MASK_L */
#define MME6_RTR_HBW_RANGE_MASK_L_VAL_SHIFT                          0
#define MME6_RTR_HBW_RANGE_MASK_L_VAL_MASK                           0xFFFFFFFF

#define mmMME6_RTR_HBW_RANGE_MASK_H_0                                0x1804A0

#define mmMME6_RTR_HBW_RANGE_MASK_H_1                                0x1804A4

#define mmMME6_RTR_HBW_RANGE_MASK_H_2                                0x1804A8

#define mmMME6_RTR_HBW_RANGE_MASK_H_3                                0x1804AC

#define mmMME6_RTR_HBW_RANGE_MASK_H_4                                0x1804B0

#define mmMME6_RTR_HBW_RANGE_MASK_H_5                                0x1804B4

#define mmMME6_RTR_HBW_RANGE_MASK_H_6                                0x1804B8

#define mmMME6_RTR_HBW_RANGE_MASK_H_7                                0x1804BC
/* MME6_RTR_HBW_RANGE_MASK_H */
#define MME6_RTR_HBW_RANGE_MASK_H_VAL_SHIFT                          0
#define MME6_RTR_HBW_RANGE_MASK_H_VAL_MASK                           0x3FFFF

#define mmMME6_RTR_HBW_RANGE_BASE_L_0                                0x1804C0

#define mmMME6_RTR_HBW_RANGE_BASE_L_1                                0x1804C4

#define mmMME6_RTR_HBW_RANGE_BASE_L_2                                0x1804C8

#define mmMME6_RTR_HBW_RANGE_BASE_L_3                                0x1804CC

#define mmMME6_RTR_HBW_RANGE_BASE_L_4                                0x1804D0

#define mmMME6_RTR_HBW_RANGE_BASE_L_5                                0x1804D4

#define mmMME6_RTR_HBW_RANGE_BASE_L_6                                0x1804D8

#define mmMME6_RTR_HBW_RANGE_BASE_L_7                                0x1804DC
/* MME6_RTR_HBW_RANGE_BASE_L */
#define MME6_RTR_HBW_RANGE_BASE_L_VAL_SHIFT                          0
#define MME6_RTR_HBW_RANGE_BASE_L_VAL_MASK                           0xFFFFFFFF

#define mmMME6_RTR_HBW_RANGE_BASE_H_0                                0x1804E0

#define mmMME6_RTR_HBW_RANGE_BASE_H_1                                0x1804E4

#define mmMME6_RTR_HBW_RANGE_BASE_H_2                                0x1804E8

#define mmMME6_RTR_HBW_RANGE_BASE_H_3                                0x1804EC

#define mmMME6_RTR_HBW_RANGE_BASE_H_4                                0x1804F0

#define mmMME6_RTR_HBW_RANGE_BASE_H_5                                0x1804F4

#define mmMME6_RTR_HBW_RANGE_BASE_H_6                                0x1804F8

#define mmMME6_RTR_HBW_RANGE_BASE_H_7                                0x1804FC
/* MME6_RTR_HBW_RANGE_BASE_H */
#define MME6_RTR_HBW_RANGE_BASE_H_VAL_SHIFT                          0
#define MME6_RTR_HBW_RANGE_BASE_H_VAL_MASK                           0x3FFFF

#define mmMME6_RTR_LBW_RANGE_HIT                                     0x180500
/* MME6_RTR_LBW_RANGE_HIT */
#define MME6_RTR_LBW_RANGE_HIT_IND_SHIFT                             0
#define MME6_RTR_LBW_RANGE_HIT_IND_MASK                              0xFFFF

#define mmMME6_RTR_LBW_RANGE_MASK_0                                  0x180510

#define mmMME6_RTR_LBW_RANGE_MASK_1                                  0x180514

#define mmMME6_RTR_LBW_RANGE_MASK_2                                  0x180518

#define mmMME6_RTR_LBW_RANGE_MASK_3                                  0x18051C

#define mmMME6_RTR_LBW_RANGE_MASK_4                                  0x180520

#define mmMME6_RTR_LBW_RANGE_MASK_5                                  0x180524

#define mmMME6_RTR_LBW_RANGE_MASK_6                                  0x180528

#define mmMME6_RTR_LBW_RANGE_MASK_7                                  0x18052C

#define mmMME6_RTR_LBW_RANGE_MASK_8                                  0x180530

#define mmMME6_RTR_LBW_RANGE_MASK_9                                  0x180534

#define mmMME6_RTR_LBW_RANGE_MASK_10                                 0x180538

#define mmMME6_RTR_LBW_RANGE_MASK_11                                 0x18053C

#define mmMME6_RTR_LBW_RANGE_MASK_12                                 0x180540

#define mmMME6_RTR_LBW_RANGE_MASK_13                                 0x180544

#define mmMME6_RTR_LBW_RANGE_MASK_14                                 0x180548

#define mmMME6_RTR_LBW_RANGE_MASK_15                                 0x18054C
/* MME6_RTR_LBW_RANGE_MASK */
#define MME6_RTR_LBW_RANGE_MASK_VAL_SHIFT                            0
#define MME6_RTR_LBW_RANGE_MASK_VAL_MASK                             0x3FFFFFF

#define mmMME6_RTR_LBW_RANGE_BASE_0                                  0x180550

#define mmMME6_RTR_LBW_RANGE_BASE_1                                  0x180554

#define mmMME6_RTR_LBW_RANGE_BASE_2                                  0x180558

#define mmMME6_RTR_LBW_RANGE_BASE_3                                  0x18055C

#define mmMME6_RTR_LBW_RANGE_BASE_4                                  0x180560

#define mmMME6_RTR_LBW_RANGE_BASE_5                                  0x180564

#define mmMME6_RTR_LBW_RANGE_BASE_6                                  0x180568

#define mmMME6_RTR_LBW_RANGE_BASE_7                                  0x18056C

#define mmMME6_RTR_LBW_RANGE_BASE_8                                  0x180570

#define mmMME6_RTR_LBW_RANGE_BASE_9                                  0x180574

#define mmMME6_RTR_LBW_RANGE_BASE_10                                 0x180578

#define mmMME6_RTR_LBW_RANGE_BASE_11                                 0x18057C

#define mmMME6_RTR_LBW_RANGE_BASE_12                                 0x180580

#define mmMME6_RTR_LBW_RANGE_BASE_13                                 0x180584

#define mmMME6_RTR_LBW_RANGE_BASE_14                                 0x180588

#define mmMME6_RTR_LBW_RANGE_BASE_15                                 0x18058C
/* MME6_RTR_LBW_RANGE_BASE */
#define MME6_RTR_LBW_RANGE_BASE_VAL_SHIFT                            0
#define MME6_RTR_LBW_RANGE_BASE_VAL_MASK                             0x3FFFFFF

#define mmMME6_RTR_RGLTR                                             0x180590
/* MME6_RTR_RGLTR */
#define MME6_RTR_RGLTR_WR_EN_SHIFT                                   0
#define MME6_RTR_RGLTR_WR_EN_MASK                                    0x1
#define MME6_RTR_RGLTR_RD_EN_SHIFT                                   4
#define MME6_RTR_RGLTR_RD_EN_MASK                                    0x10

#define mmMME6_RTR_RGLTR_WR_RESULT                                   0x180594
/* MME6_RTR_RGLTR_WR_RESULT */
#define MME6_RTR_RGLTR_WR_RESULT_VAL_SHIFT                           0
#define MME6_RTR_RGLTR_WR_RESULT_VAL_MASK                            0xFF

#define mmMME6_RTR_RGLTR_RD_RESULT                                   0x180598
/* MME6_RTR_RGLTR_RD_RESULT */
#define MME6_RTR_RGLTR_RD_RESULT_VAL_SHIFT                           0
#define MME6_RTR_RGLTR_RD_RESULT_VAL_MASK                            0xFF

#define mmMME6_RTR_SCRAMB_EN                                         0x180600
/* MME6_RTR_SCRAMB_EN */
#define MME6_RTR_SCRAMB_EN_VAL_SHIFT                                 0
#define MME6_RTR_SCRAMB_EN_VAL_MASK                                  0x1

#define mmMME6_RTR_NON_LIN_SCRAMB                                    0x180604
/* MME6_RTR_NON_LIN_SCRAMB */
#define MME6_RTR_NON_LIN_SCRAMB_EN_SHIFT                             0
#define MME6_RTR_NON_LIN_SCRAMB_EN_MASK                              0x1

#endif /* ASIC_REG_MME6_RTR_H_ */

