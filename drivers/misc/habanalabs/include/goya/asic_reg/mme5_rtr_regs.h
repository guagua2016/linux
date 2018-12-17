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

#ifndef ASIC_REG_MME5_RTR_H_
#define ASIC_REG_MME5_RTR_H_

/*
 *****************************************
 *   MME5_RTR (Prototype: MME_RTR)
 *****************************************
 */

#define mmMME5_RTR_HBW_RD_RQ_E_ARB                                   0x140100
/* MME5_RTR_HBW_RD_RQ_E_ARB */
#define MME5_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                             0
#define MME5_RTR_HBW_RD_RQ_E_ARB_W_MASK                              0x7
#define MME5_RTR_HBW_RD_RQ_E_ARB_S_SHIFT                             8
#define MME5_RTR_HBW_RD_RQ_E_ARB_S_MASK                              0x700
#define MME5_RTR_HBW_RD_RQ_E_ARB_N_SHIFT                             16
#define MME5_RTR_HBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define MME5_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                             24
#define MME5_RTR_HBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_HBW_RD_RQ_W_ARB                                   0x140104
/* MME5_RTR_HBW_RD_RQ_W_ARB */
#define MME5_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                             0
#define MME5_RTR_HBW_RD_RQ_W_ARB_E_MASK                              0x7
#define MME5_RTR_HBW_RD_RQ_W_ARB_S_SHIFT                             8
#define MME5_RTR_HBW_RD_RQ_W_ARB_S_MASK                              0x700
#define MME5_RTR_HBW_RD_RQ_W_ARB_N_SHIFT                             16
#define MME5_RTR_HBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define MME5_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                             24
#define MME5_RTR_HBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_HBW_RD_RQ_N_ARB                                   0x140108
/* MME5_RTR_HBW_RD_RQ_N_ARB */
#define MME5_RTR_HBW_RD_RQ_N_ARB_W_SHIFT                             0
#define MME5_RTR_HBW_RD_RQ_N_ARB_W_MASK                              0x7
#define MME5_RTR_HBW_RD_RQ_N_ARB_E_SHIFT                             8
#define MME5_RTR_HBW_RD_RQ_N_ARB_E_MASK                              0x700
#define MME5_RTR_HBW_RD_RQ_N_ARB_S_SHIFT                             16
#define MME5_RTR_HBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define MME5_RTR_HBW_RD_RQ_N_ARB_L_SHIFT                             24
#define MME5_RTR_HBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_HBW_RD_RQ_S_ARB                                   0x14010C
/* MME5_RTR_HBW_RD_RQ_S_ARB */
#define MME5_RTR_HBW_RD_RQ_S_ARB_W_SHIFT                             0
#define MME5_RTR_HBW_RD_RQ_S_ARB_W_MASK                              0x7
#define MME5_RTR_HBW_RD_RQ_S_ARB_E_SHIFT                             8
#define MME5_RTR_HBW_RD_RQ_S_ARB_E_MASK                              0x700
#define MME5_RTR_HBW_RD_RQ_S_ARB_N_SHIFT                             16
#define MME5_RTR_HBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define MME5_RTR_HBW_RD_RQ_S_ARB_L_SHIFT                             24
#define MME5_RTR_HBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_HBW_RD_RQ_L_ARB                                   0x140110
/* MME5_RTR_HBW_RD_RQ_L_ARB */
#define MME5_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                             0
#define MME5_RTR_HBW_RD_RQ_L_ARB_W_MASK                              0x7
#define MME5_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                             8
#define MME5_RTR_HBW_RD_RQ_L_ARB_E_MASK                              0x700
#define MME5_RTR_HBW_RD_RQ_L_ARB_S_SHIFT                             16
#define MME5_RTR_HBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define MME5_RTR_HBW_RD_RQ_L_ARB_N_SHIFT                             24
#define MME5_RTR_HBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME5_RTR_HBW_E_ARB_MAX                                     0x140120
/* MME5_RTR_HBW_E_ARB_MAX */
#define MME5_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME5_RTR_HBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME5_RTR_HBW_W_ARB_MAX                                     0x140124
/* MME5_RTR_HBW_W_ARB_MAX */
#define MME5_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME5_RTR_HBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME5_RTR_HBW_N_ARB_MAX                                     0x140128
/* MME5_RTR_HBW_N_ARB_MAX */
#define MME5_RTR_HBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME5_RTR_HBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME5_RTR_HBW_S_ARB_MAX                                     0x14012C
/* MME5_RTR_HBW_S_ARB_MAX */
#define MME5_RTR_HBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME5_RTR_HBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME5_RTR_HBW_L_ARB_MAX                                     0x140130
/* MME5_RTR_HBW_L_ARB_MAX */
#define MME5_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME5_RTR_HBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME5_RTR_HBW_RD_RS_MAX_CREDIT                              0x140140
/* MME5_RTR_HBW_RD_RS_MAX_CREDIT */
#define MME5_RTR_HBW_RD_RS_MAX_CREDIT_A_SHIFT                        0
#define MME5_RTR_HBW_RD_RS_MAX_CREDIT_A_MASK                         0x3F
#define MME5_RTR_HBW_RD_RS_MAX_CREDIT_B_SHIFT                        8
#define MME5_RTR_HBW_RD_RS_MAX_CREDIT_B_MASK                         0x3F00

#define mmMME5_RTR_HBW_WR_RQ_MAX_CREDIT                              0x140144
/* MME5_RTR_HBW_WR_RQ_MAX_CREDIT */
#define MME5_RTR_HBW_WR_RQ_MAX_CREDIT_VAL_SHIFT                      0
#define MME5_RTR_HBW_WR_RQ_MAX_CREDIT_VAL_MASK                       0x3F

#define mmMME5_RTR_HBW_RD_RQ_MAX_CREDIT                              0x140148
/* MME5_RTR_HBW_RD_RQ_MAX_CREDIT */
#define MME5_RTR_HBW_RD_RQ_MAX_CREDIT_A_SHIFT                        0
#define MME5_RTR_HBW_RD_RQ_MAX_CREDIT_A_MASK                         0x3F
#define MME5_RTR_HBW_RD_RQ_MAX_CREDIT_B_SHIFT                        8
#define MME5_RTR_HBW_RD_RQ_MAX_CREDIT_B_MASK                         0x3F00
#define MME5_RTR_HBW_RD_RQ_MAX_CREDIT_IC_SHIFT                       16
#define MME5_RTR_HBW_RD_RQ_MAX_CREDIT_IC_MASK                        0x3F0000

#define mmMME5_RTR_HBW_RD_RS_E_ARB                                   0x140150
/* MME5_RTR_HBW_RD_RS_E_ARB */
#define MME5_RTR_HBW_RD_RS_E_ARB_W_SHIFT                             0
#define MME5_RTR_HBW_RD_RS_E_ARB_W_MASK                              0x7
#define MME5_RTR_HBW_RD_RS_E_ARB_S_SHIFT                             8
#define MME5_RTR_HBW_RD_RS_E_ARB_S_MASK                              0x700
#define MME5_RTR_HBW_RD_RS_E_ARB_N_SHIFT                             16
#define MME5_RTR_HBW_RD_RS_E_ARB_N_MASK                              0x70000
#define MME5_RTR_HBW_RD_RS_E_ARB_L_SHIFT                             24
#define MME5_RTR_HBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_HBW_RD_RS_W_ARB                                   0x140154
/* MME5_RTR_HBW_RD_RS_W_ARB */
#define MME5_RTR_HBW_RD_RS_W_ARB_E_SHIFT                             0
#define MME5_RTR_HBW_RD_RS_W_ARB_E_MASK                              0x7
#define MME5_RTR_HBW_RD_RS_W_ARB_S_SHIFT                             8
#define MME5_RTR_HBW_RD_RS_W_ARB_S_MASK                              0x700
#define MME5_RTR_HBW_RD_RS_W_ARB_N_SHIFT                             16
#define MME5_RTR_HBW_RD_RS_W_ARB_N_MASK                              0x70000
#define MME5_RTR_HBW_RD_RS_W_ARB_L_SHIFT                             24
#define MME5_RTR_HBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_HBW_RD_RS_N_ARB                                   0x140158
/* MME5_RTR_HBW_RD_RS_N_ARB */
#define MME5_RTR_HBW_RD_RS_N_ARB_W_SHIFT                             0
#define MME5_RTR_HBW_RD_RS_N_ARB_W_MASK                              0x7
#define MME5_RTR_HBW_RD_RS_N_ARB_E_SHIFT                             8
#define MME5_RTR_HBW_RD_RS_N_ARB_E_MASK                              0x700
#define MME5_RTR_HBW_RD_RS_N_ARB_S_SHIFT                             16
#define MME5_RTR_HBW_RD_RS_N_ARB_S_MASK                              0x70000
#define MME5_RTR_HBW_RD_RS_N_ARB_L_SHIFT                             24
#define MME5_RTR_HBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_HBW_RD_RS_S_ARB                                   0x14015C
/* MME5_RTR_HBW_RD_RS_S_ARB */
#define MME5_RTR_HBW_RD_RS_S_ARB_W_SHIFT                             0
#define MME5_RTR_HBW_RD_RS_S_ARB_W_MASK                              0x7
#define MME5_RTR_HBW_RD_RS_S_ARB_E_SHIFT                             8
#define MME5_RTR_HBW_RD_RS_S_ARB_E_MASK                              0x700
#define MME5_RTR_HBW_RD_RS_S_ARB_N_SHIFT                             16
#define MME5_RTR_HBW_RD_RS_S_ARB_N_MASK                              0x70000
#define MME5_RTR_HBW_RD_RS_S_ARB_L_SHIFT                             24
#define MME5_RTR_HBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_HBW_RD_RS_L_ARB                                   0x140160
/* MME5_RTR_HBW_RD_RS_L_ARB */
#define MME5_RTR_HBW_RD_RS_L_ARB_W_SHIFT                             0
#define MME5_RTR_HBW_RD_RS_L_ARB_W_MASK                              0x7
#define MME5_RTR_HBW_RD_RS_L_ARB_E_SHIFT                             8
#define MME5_RTR_HBW_RD_RS_L_ARB_E_MASK                              0x700
#define MME5_RTR_HBW_RD_RS_L_ARB_S_SHIFT                             16
#define MME5_RTR_HBW_RD_RS_L_ARB_S_MASK                              0x70000
#define MME5_RTR_HBW_RD_RS_L_ARB_N_SHIFT                             24
#define MME5_RTR_HBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmMME5_RTR_HBW_WR_RQ_E_ARB                                   0x140170
/* MME5_RTR_HBW_WR_RQ_E_ARB */
#define MME5_RTR_HBW_WR_RQ_E_ARB_W_SHIFT                             0
#define MME5_RTR_HBW_WR_RQ_E_ARB_W_MASK                              0x7
#define MME5_RTR_HBW_WR_RQ_E_ARB_S_SHIFT                             8
#define MME5_RTR_HBW_WR_RQ_E_ARB_S_MASK                              0x700
#define MME5_RTR_HBW_WR_RQ_E_ARB_N_SHIFT                             16
#define MME5_RTR_HBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define MME5_RTR_HBW_WR_RQ_E_ARB_L_SHIFT                             24
#define MME5_RTR_HBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_HBW_WR_RQ_W_ARB                                   0x140174
/* MME5_RTR_HBW_WR_RQ_W_ARB */
#define MME5_RTR_HBW_WR_RQ_W_ARB_E_SHIFT                             0
#define MME5_RTR_HBW_WR_RQ_W_ARB_E_MASK                              0x7
#define MME5_RTR_HBW_WR_RQ_W_ARB_S_SHIFT                             8
#define MME5_RTR_HBW_WR_RQ_W_ARB_S_MASK                              0x700
#define MME5_RTR_HBW_WR_RQ_W_ARB_N_SHIFT                             16
#define MME5_RTR_HBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define MME5_RTR_HBW_WR_RQ_W_ARB_L_SHIFT                             24
#define MME5_RTR_HBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_HBW_WR_RQ_N_ARB                                   0x140178
/* MME5_RTR_HBW_WR_RQ_N_ARB */
#define MME5_RTR_HBW_WR_RQ_N_ARB_W_SHIFT                             0
#define MME5_RTR_HBW_WR_RQ_N_ARB_W_MASK                              0x7
#define MME5_RTR_HBW_WR_RQ_N_ARB_E_SHIFT                             8
#define MME5_RTR_HBW_WR_RQ_N_ARB_E_MASK                              0x700
#define MME5_RTR_HBW_WR_RQ_N_ARB_S_SHIFT                             16
#define MME5_RTR_HBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define MME5_RTR_HBW_WR_RQ_N_ARB_L_SHIFT                             24
#define MME5_RTR_HBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_HBW_WR_RQ_S_ARB                                   0x14017C
/* MME5_RTR_HBW_WR_RQ_S_ARB */
#define MME5_RTR_HBW_WR_RQ_S_ARB_W_SHIFT                             0
#define MME5_RTR_HBW_WR_RQ_S_ARB_W_MASK                              0x7
#define MME5_RTR_HBW_WR_RQ_S_ARB_E_SHIFT                             8
#define MME5_RTR_HBW_WR_RQ_S_ARB_E_MASK                              0x700
#define MME5_RTR_HBW_WR_RQ_S_ARB_N_SHIFT                             16
#define MME5_RTR_HBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define MME5_RTR_HBW_WR_RQ_S_ARB_L_SHIFT                             24
#define MME5_RTR_HBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_HBW_WR_RQ_L_ARB                                   0x140180
/* MME5_RTR_HBW_WR_RQ_L_ARB */
#define MME5_RTR_HBW_WR_RQ_L_ARB_W_SHIFT                             0
#define MME5_RTR_HBW_WR_RQ_L_ARB_W_MASK                              0x7
#define MME5_RTR_HBW_WR_RQ_L_ARB_E_SHIFT                             8
#define MME5_RTR_HBW_WR_RQ_L_ARB_E_MASK                              0x700
#define MME5_RTR_HBW_WR_RQ_L_ARB_S_SHIFT                             16
#define MME5_RTR_HBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define MME5_RTR_HBW_WR_RQ_L_ARB_N_SHIFT                             24
#define MME5_RTR_HBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME5_RTR_HBW_WR_RS_E_ARB                                   0x140190
/* MME5_RTR_HBW_WR_RS_E_ARB */
#define MME5_RTR_HBW_WR_RS_E_ARB_W_SHIFT                             0
#define MME5_RTR_HBW_WR_RS_E_ARB_W_MASK                              0x7
#define MME5_RTR_HBW_WR_RS_E_ARB_S_SHIFT                             8
#define MME5_RTR_HBW_WR_RS_E_ARB_S_MASK                              0x700
#define MME5_RTR_HBW_WR_RS_E_ARB_N_SHIFT                             16
#define MME5_RTR_HBW_WR_RS_E_ARB_N_MASK                              0x70000
#define MME5_RTR_HBW_WR_RS_E_ARB_L_SHIFT                             24
#define MME5_RTR_HBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_HBW_WR_RS_W_ARB                                   0x140194
/* MME5_RTR_HBW_WR_RS_W_ARB */
#define MME5_RTR_HBW_WR_RS_W_ARB_E_SHIFT                             0
#define MME5_RTR_HBW_WR_RS_W_ARB_E_MASK                              0x7
#define MME5_RTR_HBW_WR_RS_W_ARB_S_SHIFT                             8
#define MME5_RTR_HBW_WR_RS_W_ARB_S_MASK                              0x700
#define MME5_RTR_HBW_WR_RS_W_ARB_N_SHIFT                             16
#define MME5_RTR_HBW_WR_RS_W_ARB_N_MASK                              0x70000
#define MME5_RTR_HBW_WR_RS_W_ARB_L_SHIFT                             24
#define MME5_RTR_HBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_HBW_WR_RS_N_ARB                                   0x140198
/* MME5_RTR_HBW_WR_RS_N_ARB */
#define MME5_RTR_HBW_WR_RS_N_ARB_W_SHIFT                             0
#define MME5_RTR_HBW_WR_RS_N_ARB_W_MASK                              0x7
#define MME5_RTR_HBW_WR_RS_N_ARB_E_SHIFT                             8
#define MME5_RTR_HBW_WR_RS_N_ARB_E_MASK                              0x700
#define MME5_RTR_HBW_WR_RS_N_ARB_S_SHIFT                             16
#define MME5_RTR_HBW_WR_RS_N_ARB_S_MASK                              0x70000
#define MME5_RTR_HBW_WR_RS_N_ARB_L_SHIFT                             24
#define MME5_RTR_HBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_HBW_WR_RS_S_ARB                                   0x14019C
/* MME5_RTR_HBW_WR_RS_S_ARB */
#define MME5_RTR_HBW_WR_RS_S_ARB_W_SHIFT                             0
#define MME5_RTR_HBW_WR_RS_S_ARB_W_MASK                              0x7
#define MME5_RTR_HBW_WR_RS_S_ARB_E_SHIFT                             8
#define MME5_RTR_HBW_WR_RS_S_ARB_E_MASK                              0x700
#define MME5_RTR_HBW_WR_RS_S_ARB_N_SHIFT                             16
#define MME5_RTR_HBW_WR_RS_S_ARB_N_MASK                              0x70000
#define MME5_RTR_HBW_WR_RS_S_ARB_L_SHIFT                             24
#define MME5_RTR_HBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_HBW_WR_RS_L_ARB                                   0x1401A0
/* MME5_RTR_HBW_WR_RS_L_ARB */
#define MME5_RTR_HBW_WR_RS_L_ARB_W_SHIFT                             0
#define MME5_RTR_HBW_WR_RS_L_ARB_W_MASK                              0x7
#define MME5_RTR_HBW_WR_RS_L_ARB_E_SHIFT                             8
#define MME5_RTR_HBW_WR_RS_L_ARB_E_MASK                              0x700
#define MME5_RTR_HBW_WR_RS_L_ARB_S_SHIFT                             16
#define MME5_RTR_HBW_WR_RS_L_ARB_S_MASK                              0x70000
#define MME5_RTR_HBW_WR_RS_L_ARB_N_SHIFT                             24
#define MME5_RTR_HBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmMME5_RTR_LBW_RD_RQ_E_ARB                                   0x140200
/* MME5_RTR_LBW_RD_RQ_E_ARB */
#define MME5_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                             0
#define MME5_RTR_LBW_RD_RQ_E_ARB_W_MASK                              0x7
#define MME5_RTR_LBW_RD_RQ_E_ARB_S_SHIFT                             8
#define MME5_RTR_LBW_RD_RQ_E_ARB_S_MASK                              0x700
#define MME5_RTR_LBW_RD_RQ_E_ARB_N_SHIFT                             16
#define MME5_RTR_LBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define MME5_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                             24
#define MME5_RTR_LBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_LBW_RD_RQ_W_ARB                                   0x140204
/* MME5_RTR_LBW_RD_RQ_W_ARB */
#define MME5_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                             0
#define MME5_RTR_LBW_RD_RQ_W_ARB_E_MASK                              0x7
#define MME5_RTR_LBW_RD_RQ_W_ARB_S_SHIFT                             8
#define MME5_RTR_LBW_RD_RQ_W_ARB_S_MASK                              0x700
#define MME5_RTR_LBW_RD_RQ_W_ARB_N_SHIFT                             16
#define MME5_RTR_LBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define MME5_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                             24
#define MME5_RTR_LBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_LBW_RD_RQ_N_ARB                                   0x140208
/* MME5_RTR_LBW_RD_RQ_N_ARB */
#define MME5_RTR_LBW_RD_RQ_N_ARB_W_SHIFT                             0
#define MME5_RTR_LBW_RD_RQ_N_ARB_W_MASK                              0x7
#define MME5_RTR_LBW_RD_RQ_N_ARB_E_SHIFT                             8
#define MME5_RTR_LBW_RD_RQ_N_ARB_E_MASK                              0x700
#define MME5_RTR_LBW_RD_RQ_N_ARB_S_SHIFT                             16
#define MME5_RTR_LBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define MME5_RTR_LBW_RD_RQ_N_ARB_L_SHIFT                             24
#define MME5_RTR_LBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_LBW_RD_RQ_S_ARB                                   0x14020C
/* MME5_RTR_LBW_RD_RQ_S_ARB */
#define MME5_RTR_LBW_RD_RQ_S_ARB_W_SHIFT                             0
#define MME5_RTR_LBW_RD_RQ_S_ARB_W_MASK                              0x7
#define MME5_RTR_LBW_RD_RQ_S_ARB_E_SHIFT                             8
#define MME5_RTR_LBW_RD_RQ_S_ARB_E_MASK                              0x700
#define MME5_RTR_LBW_RD_RQ_S_ARB_N_SHIFT                             16
#define MME5_RTR_LBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define MME5_RTR_LBW_RD_RQ_S_ARB_L_SHIFT                             24
#define MME5_RTR_LBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_LBW_RD_RQ_L_ARB                                   0x140210
/* MME5_RTR_LBW_RD_RQ_L_ARB */
#define MME5_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                             0
#define MME5_RTR_LBW_RD_RQ_L_ARB_W_MASK                              0x7
#define MME5_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                             8
#define MME5_RTR_LBW_RD_RQ_L_ARB_E_MASK                              0x700
#define MME5_RTR_LBW_RD_RQ_L_ARB_S_SHIFT                             16
#define MME5_RTR_LBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define MME5_RTR_LBW_RD_RQ_L_ARB_N_SHIFT                             24
#define MME5_RTR_LBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME5_RTR_LBW_E_ARB_MAX                                     0x140220
/* MME5_RTR_LBW_E_ARB_MAX */
#define MME5_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME5_RTR_LBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME5_RTR_LBW_W_ARB_MAX                                     0x140224
/* MME5_RTR_LBW_W_ARB_MAX */
#define MME5_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME5_RTR_LBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME5_RTR_LBW_N_ARB_MAX                                     0x140228
/* MME5_RTR_LBW_N_ARB_MAX */
#define MME5_RTR_LBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME5_RTR_LBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME5_RTR_LBW_S_ARB_MAX                                     0x14022C
/* MME5_RTR_LBW_S_ARB_MAX */
#define MME5_RTR_LBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME5_RTR_LBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME5_RTR_LBW_L_ARB_MAX                                     0x140230
/* MME5_RTR_LBW_L_ARB_MAX */
#define MME5_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME5_RTR_LBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME5_RTR_LBW_SRAM_MAX_CREDIT                               0x140240
/* MME5_RTR_LBW_SRAM_MAX_CREDIT */
#define MME5_RTR_LBW_SRAM_MAX_CREDIT_MSTR_SHIFT                      0
#define MME5_RTR_LBW_SRAM_MAX_CREDIT_MSTR_MASK                       0x3F
#define MME5_RTR_LBW_SRAM_MAX_CREDIT_SLV_SHIFT                       8
#define MME5_RTR_LBW_SRAM_MAX_CREDIT_SLV_MASK                        0x3F00

#define mmMME5_RTR_LBW_RD_RS_E_ARB                                   0x140250
/* MME5_RTR_LBW_RD_RS_E_ARB */
#define MME5_RTR_LBW_RD_RS_E_ARB_W_SHIFT                             0
#define MME5_RTR_LBW_RD_RS_E_ARB_W_MASK                              0x7
#define MME5_RTR_LBW_RD_RS_E_ARB_S_SHIFT                             8
#define MME5_RTR_LBW_RD_RS_E_ARB_S_MASK                              0x700
#define MME5_RTR_LBW_RD_RS_E_ARB_N_SHIFT                             16
#define MME5_RTR_LBW_RD_RS_E_ARB_N_MASK                              0x70000
#define MME5_RTR_LBW_RD_RS_E_ARB_L_SHIFT                             24
#define MME5_RTR_LBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_LBW_RD_RS_W_ARB                                   0x140254
/* MME5_RTR_LBW_RD_RS_W_ARB */
#define MME5_RTR_LBW_RD_RS_W_ARB_E_SHIFT                             0
#define MME5_RTR_LBW_RD_RS_W_ARB_E_MASK                              0x7
#define MME5_RTR_LBW_RD_RS_W_ARB_S_SHIFT                             8
#define MME5_RTR_LBW_RD_RS_W_ARB_S_MASK                              0x700
#define MME5_RTR_LBW_RD_RS_W_ARB_N_SHIFT                             16
#define MME5_RTR_LBW_RD_RS_W_ARB_N_MASK                              0x70000
#define MME5_RTR_LBW_RD_RS_W_ARB_L_SHIFT                             24
#define MME5_RTR_LBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_LBW_RD_RS_N_ARB                                   0x140258
/* MME5_RTR_LBW_RD_RS_N_ARB */
#define MME5_RTR_LBW_RD_RS_N_ARB_W_SHIFT                             0
#define MME5_RTR_LBW_RD_RS_N_ARB_W_MASK                              0x7
#define MME5_RTR_LBW_RD_RS_N_ARB_E_SHIFT                             8
#define MME5_RTR_LBW_RD_RS_N_ARB_E_MASK                              0x700
#define MME5_RTR_LBW_RD_RS_N_ARB_S_SHIFT                             16
#define MME5_RTR_LBW_RD_RS_N_ARB_S_MASK                              0x70000
#define MME5_RTR_LBW_RD_RS_N_ARB_L_SHIFT                             24
#define MME5_RTR_LBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_LBW_RD_RS_S_ARB                                   0x14025C
/* MME5_RTR_LBW_RD_RS_S_ARB */
#define MME5_RTR_LBW_RD_RS_S_ARB_W_SHIFT                             0
#define MME5_RTR_LBW_RD_RS_S_ARB_W_MASK                              0x7
#define MME5_RTR_LBW_RD_RS_S_ARB_E_SHIFT                             8
#define MME5_RTR_LBW_RD_RS_S_ARB_E_MASK                              0x700
#define MME5_RTR_LBW_RD_RS_S_ARB_N_SHIFT                             16
#define MME5_RTR_LBW_RD_RS_S_ARB_N_MASK                              0x70000
#define MME5_RTR_LBW_RD_RS_S_ARB_L_SHIFT                             24
#define MME5_RTR_LBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_LBW_RD_RS_L_ARB                                   0x140260
/* MME5_RTR_LBW_RD_RS_L_ARB */
#define MME5_RTR_LBW_RD_RS_L_ARB_W_SHIFT                             0
#define MME5_RTR_LBW_RD_RS_L_ARB_W_MASK                              0x7
#define MME5_RTR_LBW_RD_RS_L_ARB_E_SHIFT                             8
#define MME5_RTR_LBW_RD_RS_L_ARB_E_MASK                              0x700
#define MME5_RTR_LBW_RD_RS_L_ARB_S_SHIFT                             16
#define MME5_RTR_LBW_RD_RS_L_ARB_S_MASK                              0x70000
#define MME5_RTR_LBW_RD_RS_L_ARB_N_SHIFT                             24
#define MME5_RTR_LBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmMME5_RTR_LBW_WR_RQ_E_ARB                                   0x140270
/* MME5_RTR_LBW_WR_RQ_E_ARB */
#define MME5_RTR_LBW_WR_RQ_E_ARB_W_SHIFT                             0
#define MME5_RTR_LBW_WR_RQ_E_ARB_W_MASK                              0x7
#define MME5_RTR_LBW_WR_RQ_E_ARB_S_SHIFT                             8
#define MME5_RTR_LBW_WR_RQ_E_ARB_S_MASK                              0x700
#define MME5_RTR_LBW_WR_RQ_E_ARB_N_SHIFT                             16
#define MME5_RTR_LBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define MME5_RTR_LBW_WR_RQ_E_ARB_L_SHIFT                             24
#define MME5_RTR_LBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_LBW_WR_RQ_W_ARB                                   0x140274
/* MME5_RTR_LBW_WR_RQ_W_ARB */
#define MME5_RTR_LBW_WR_RQ_W_ARB_E_SHIFT                             0
#define MME5_RTR_LBW_WR_RQ_W_ARB_E_MASK                              0x7
#define MME5_RTR_LBW_WR_RQ_W_ARB_S_SHIFT                             8
#define MME5_RTR_LBW_WR_RQ_W_ARB_S_MASK                              0x700
#define MME5_RTR_LBW_WR_RQ_W_ARB_N_SHIFT                             16
#define MME5_RTR_LBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define MME5_RTR_LBW_WR_RQ_W_ARB_L_SHIFT                             24
#define MME5_RTR_LBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_LBW_WR_RQ_N_ARB                                   0x140278
/* MME5_RTR_LBW_WR_RQ_N_ARB */
#define MME5_RTR_LBW_WR_RQ_N_ARB_W_SHIFT                             0
#define MME5_RTR_LBW_WR_RQ_N_ARB_W_MASK                              0x7
#define MME5_RTR_LBW_WR_RQ_N_ARB_E_SHIFT                             8
#define MME5_RTR_LBW_WR_RQ_N_ARB_E_MASK                              0x700
#define MME5_RTR_LBW_WR_RQ_N_ARB_S_SHIFT                             16
#define MME5_RTR_LBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define MME5_RTR_LBW_WR_RQ_N_ARB_L_SHIFT                             24
#define MME5_RTR_LBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_LBW_WR_RQ_S_ARB                                   0x14027C
/* MME5_RTR_LBW_WR_RQ_S_ARB */
#define MME5_RTR_LBW_WR_RQ_S_ARB_W_SHIFT                             0
#define MME5_RTR_LBW_WR_RQ_S_ARB_W_MASK                              0x7
#define MME5_RTR_LBW_WR_RQ_S_ARB_E_SHIFT                             8
#define MME5_RTR_LBW_WR_RQ_S_ARB_E_MASK                              0x700
#define MME5_RTR_LBW_WR_RQ_S_ARB_N_SHIFT                             16
#define MME5_RTR_LBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define MME5_RTR_LBW_WR_RQ_S_ARB_L_SHIFT                             24
#define MME5_RTR_LBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_LBW_WR_RQ_L_ARB                                   0x140280
/* MME5_RTR_LBW_WR_RQ_L_ARB */
#define MME5_RTR_LBW_WR_RQ_L_ARB_W_SHIFT                             0
#define MME5_RTR_LBW_WR_RQ_L_ARB_W_MASK                              0x7
#define MME5_RTR_LBW_WR_RQ_L_ARB_E_SHIFT                             8
#define MME5_RTR_LBW_WR_RQ_L_ARB_E_MASK                              0x700
#define MME5_RTR_LBW_WR_RQ_L_ARB_S_SHIFT                             16
#define MME5_RTR_LBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define MME5_RTR_LBW_WR_RQ_L_ARB_N_SHIFT                             24
#define MME5_RTR_LBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME5_RTR_LBW_WR_RS_E_ARB                                   0x140290
/* MME5_RTR_LBW_WR_RS_E_ARB */
#define MME5_RTR_LBW_WR_RS_E_ARB_W_SHIFT                             0
#define MME5_RTR_LBW_WR_RS_E_ARB_W_MASK                              0x7
#define MME5_RTR_LBW_WR_RS_E_ARB_S_SHIFT                             8
#define MME5_RTR_LBW_WR_RS_E_ARB_S_MASK                              0x700
#define MME5_RTR_LBW_WR_RS_E_ARB_N_SHIFT                             16
#define MME5_RTR_LBW_WR_RS_E_ARB_N_MASK                              0x70000
#define MME5_RTR_LBW_WR_RS_E_ARB_L_SHIFT                             24
#define MME5_RTR_LBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_LBW_WR_RS_W_ARB                                   0x140294
/* MME5_RTR_LBW_WR_RS_W_ARB */
#define MME5_RTR_LBW_WR_RS_W_ARB_E_SHIFT                             0
#define MME5_RTR_LBW_WR_RS_W_ARB_E_MASK                              0x7
#define MME5_RTR_LBW_WR_RS_W_ARB_S_SHIFT                             8
#define MME5_RTR_LBW_WR_RS_W_ARB_S_MASK                              0x700
#define MME5_RTR_LBW_WR_RS_W_ARB_N_SHIFT                             16
#define MME5_RTR_LBW_WR_RS_W_ARB_N_MASK                              0x70000
#define MME5_RTR_LBW_WR_RS_W_ARB_L_SHIFT                             24
#define MME5_RTR_LBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_LBW_WR_RS_N_ARB                                   0x140298
/* MME5_RTR_LBW_WR_RS_N_ARB */
#define MME5_RTR_LBW_WR_RS_N_ARB_W_SHIFT                             0
#define MME5_RTR_LBW_WR_RS_N_ARB_W_MASK                              0x7
#define MME5_RTR_LBW_WR_RS_N_ARB_E_SHIFT                             8
#define MME5_RTR_LBW_WR_RS_N_ARB_E_MASK                              0x700
#define MME5_RTR_LBW_WR_RS_N_ARB_S_SHIFT                             16
#define MME5_RTR_LBW_WR_RS_N_ARB_S_MASK                              0x70000
#define MME5_RTR_LBW_WR_RS_N_ARB_L_SHIFT                             24
#define MME5_RTR_LBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_LBW_WR_RS_S_ARB                                   0x14029C
/* MME5_RTR_LBW_WR_RS_S_ARB */
#define MME5_RTR_LBW_WR_RS_S_ARB_W_SHIFT                             0
#define MME5_RTR_LBW_WR_RS_S_ARB_W_MASK                              0x7
#define MME5_RTR_LBW_WR_RS_S_ARB_E_SHIFT                             8
#define MME5_RTR_LBW_WR_RS_S_ARB_E_MASK                              0x700
#define MME5_RTR_LBW_WR_RS_S_ARB_N_SHIFT                             16
#define MME5_RTR_LBW_WR_RS_S_ARB_N_MASK                              0x70000
#define MME5_RTR_LBW_WR_RS_S_ARB_L_SHIFT                             24
#define MME5_RTR_LBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmMME5_RTR_LBW_WR_RS_L_ARB                                   0x1402A0
/* MME5_RTR_LBW_WR_RS_L_ARB */
#define MME5_RTR_LBW_WR_RS_L_ARB_W_SHIFT                             0
#define MME5_RTR_LBW_WR_RS_L_ARB_W_MASK                              0x7
#define MME5_RTR_LBW_WR_RS_L_ARB_E_SHIFT                             8
#define MME5_RTR_LBW_WR_RS_L_ARB_E_MASK                              0x700
#define MME5_RTR_LBW_WR_RS_L_ARB_S_SHIFT                             16
#define MME5_RTR_LBW_WR_RS_L_ARB_S_MASK                              0x70000
#define MME5_RTR_LBW_WR_RS_L_ARB_N_SHIFT                             24
#define MME5_RTR_LBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmMME5_RTR_DBG_E_ARB                                         0x140300
/* MME5_RTR_DBG_E_ARB */
#define MME5_RTR_DBG_E_ARB_W_SHIFT                                   0
#define MME5_RTR_DBG_E_ARB_W_MASK                                    0x7
#define MME5_RTR_DBG_E_ARB_S_SHIFT                                   8
#define MME5_RTR_DBG_E_ARB_S_MASK                                    0x700
#define MME5_RTR_DBG_E_ARB_N_SHIFT                                   16
#define MME5_RTR_DBG_E_ARB_N_MASK                                    0x70000
#define MME5_RTR_DBG_E_ARB_L_SHIFT                                   24
#define MME5_RTR_DBG_E_ARB_L_MASK                                    0x7000000

#define mmMME5_RTR_DBG_W_ARB                                         0x140304
/* MME5_RTR_DBG_W_ARB */
#define MME5_RTR_DBG_W_ARB_E_SHIFT                                   0
#define MME5_RTR_DBG_W_ARB_E_MASK                                    0x7
#define MME5_RTR_DBG_W_ARB_S_SHIFT                                   8
#define MME5_RTR_DBG_W_ARB_S_MASK                                    0x700
#define MME5_RTR_DBG_W_ARB_N_SHIFT                                   16
#define MME5_RTR_DBG_W_ARB_N_MASK                                    0x70000
#define MME5_RTR_DBG_W_ARB_L_SHIFT                                   24
#define MME5_RTR_DBG_W_ARB_L_MASK                                    0x7000000

#define mmMME5_RTR_DBG_N_ARB                                         0x140308
/* MME5_RTR_DBG_N_ARB */
#define MME5_RTR_DBG_N_ARB_W_SHIFT                                   0
#define MME5_RTR_DBG_N_ARB_W_MASK                                    0x7
#define MME5_RTR_DBG_N_ARB_E_SHIFT                                   8
#define MME5_RTR_DBG_N_ARB_E_MASK                                    0x700
#define MME5_RTR_DBG_N_ARB_S_SHIFT                                   16
#define MME5_RTR_DBG_N_ARB_S_MASK                                    0x70000
#define MME5_RTR_DBG_N_ARB_L_SHIFT                                   24
#define MME5_RTR_DBG_N_ARB_L_MASK                                    0x7000000

#define mmMME5_RTR_DBG_S_ARB                                         0x14030C
/* MME5_RTR_DBG_S_ARB */
#define MME5_RTR_DBG_S_ARB_W_SHIFT                                   0
#define MME5_RTR_DBG_S_ARB_W_MASK                                    0x7
#define MME5_RTR_DBG_S_ARB_E_SHIFT                                   8
#define MME5_RTR_DBG_S_ARB_E_MASK                                    0x700
#define MME5_RTR_DBG_S_ARB_N_SHIFT                                   16
#define MME5_RTR_DBG_S_ARB_N_MASK                                    0x70000
#define MME5_RTR_DBG_S_ARB_L_SHIFT                                   24
#define MME5_RTR_DBG_S_ARB_L_MASK                                    0x7000000

#define mmMME5_RTR_DBG_L_ARB                                         0x140310
/* MME5_RTR_DBG_L_ARB */
#define MME5_RTR_DBG_L_ARB_W_SHIFT                                   0
#define MME5_RTR_DBG_L_ARB_W_MASK                                    0x7
#define MME5_RTR_DBG_L_ARB_E_SHIFT                                   8
#define MME5_RTR_DBG_L_ARB_E_MASK                                    0x700
#define MME5_RTR_DBG_L_ARB_S_SHIFT                                   16
#define MME5_RTR_DBG_L_ARB_S_MASK                                    0x70000
#define MME5_RTR_DBG_L_ARB_N_SHIFT                                   24
#define MME5_RTR_DBG_L_ARB_N_MASK                                    0x7000000

#define mmMME5_RTR_DBG_E_ARB_MAX                                     0x140320
/* MME5_RTR_DBG_E_ARB_MAX */
#define MME5_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME5_RTR_DBG_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME5_RTR_DBG_W_ARB_MAX                                     0x140324
/* MME5_RTR_DBG_W_ARB_MAX */
#define MME5_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME5_RTR_DBG_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME5_RTR_DBG_N_ARB_MAX                                     0x140328
/* MME5_RTR_DBG_N_ARB_MAX */
#define MME5_RTR_DBG_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME5_RTR_DBG_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME5_RTR_DBG_S_ARB_MAX                                     0x14032C
/* MME5_RTR_DBG_S_ARB_MAX */
#define MME5_RTR_DBG_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME5_RTR_DBG_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME5_RTR_DBG_L_ARB_MAX                                     0x140330
/* MME5_RTR_DBG_L_ARB_MAX */
#define MME5_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME5_RTR_DBG_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME5_RTR_SPLIT_COEF_0                                      0x140400

#define mmMME5_RTR_SPLIT_COEF_1                                      0x140404

#define mmMME5_RTR_SPLIT_COEF_2                                      0x140408

#define mmMME5_RTR_SPLIT_COEF_3                                      0x14040C

#define mmMME5_RTR_SPLIT_COEF_4                                      0x140410

#define mmMME5_RTR_SPLIT_COEF_5                                      0x140414

#define mmMME5_RTR_SPLIT_COEF_6                                      0x140418

#define mmMME5_RTR_SPLIT_COEF_7                                      0x14041C

#define mmMME5_RTR_SPLIT_COEF_8                                      0x140420

#define mmMME5_RTR_SPLIT_COEF_9                                      0x140424
/* MME5_RTR_SPLIT_COEF */
#define MME5_RTR_SPLIT_COEF_VAL_SHIFT                                0
#define MME5_RTR_SPLIT_COEF_VAL_MASK                                 0xFFFF

#define mmMME5_RTR_SPLIT_CFG                                         0x140440
/* MME5_RTR_SPLIT_CFG */
#define MME5_RTR_SPLIT_CFG_FORCE_WAK_ORDER_SHIFT                     0
#define MME5_RTR_SPLIT_CFG_FORCE_WAK_ORDER_MASK                      0x1
#define MME5_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_SHIFT                  1
#define MME5_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_MASK                   0x2
#define MME5_RTR_SPLIT_CFG_DEFAULT_MESH_SHIFT                        2
#define MME5_RTR_SPLIT_CFG_DEFAULT_MESH_MASK                         0xC
#define MME5_RTR_SPLIT_CFG_WR_RATE_LIM_EN_SHIFT                      4
#define MME5_RTR_SPLIT_CFG_WR_RATE_LIM_EN_MASK                       0x10
#define MME5_RTR_SPLIT_CFG_RD_RATE_LIM_EN_SHIFT                      5
#define MME5_RTR_SPLIT_CFG_RD_RATE_LIM_EN_MASK                       0x20
#define MME5_RTR_SPLIT_CFG_B2B_OPT_SHIFT                             6
#define MME5_RTR_SPLIT_CFG_B2B_OPT_MASK                              0x1C0

#define mmMME5_RTR_SPLIT_RD_SAT                                      0x140444
/* MME5_RTR_SPLIT_RD_SAT */
#define MME5_RTR_SPLIT_RD_SAT_VAL_SHIFT                              0
#define MME5_RTR_SPLIT_RD_SAT_VAL_MASK                               0xFFFF

#define mmMME5_RTR_SPLIT_RD_RST_TOKEN                                0x140448
/* MME5_RTR_SPLIT_RD_RST_TOKEN */
#define MME5_RTR_SPLIT_RD_RST_TOKEN_VAL_SHIFT                        0
#define MME5_RTR_SPLIT_RD_RST_TOKEN_VAL_MASK                         0xFFFF

#define mmMME5_RTR_SPLIT_RD_TIMEOUT_0                                0x14044C

#define mmMME5_RTR_SPLIT_RD_TIMEOUT_1                                0x140450
/* MME5_RTR_SPLIT_RD_TIMEOUT */
#define MME5_RTR_SPLIT_RD_TIMEOUT_VAL_SHIFT                          0
#define MME5_RTR_SPLIT_RD_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmMME5_RTR_SPLIT_WR_SAT                                      0x140454
/* MME5_RTR_SPLIT_WR_SAT */
#define MME5_RTR_SPLIT_WR_SAT_VAL_SHIFT                              0
#define MME5_RTR_SPLIT_WR_SAT_VAL_MASK                               0xFFFF

#define mmMME5_RTR_WPLIT_WR_TST_TOLEN                                0x140458
/* MME5_RTR_WPLIT_WR_TST_TOLEN */
#define MME5_RTR_WPLIT_WR_TST_TOLEN_VAL_SHIFT                        0
#define MME5_RTR_WPLIT_WR_TST_TOLEN_VAL_MASK                         0xFFFF

#define mmMME5_RTR_SPLIT_WR_TIMEOUT_0                                0x14045C

#define mmMME5_RTR_SPLIT_WR_TIMEOUT_1                                0x140460
/* MME5_RTR_SPLIT_WR_TIMEOUT */
#define MME5_RTR_SPLIT_WR_TIMEOUT_VAL_SHIFT                          0
#define MME5_RTR_SPLIT_WR_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmMME5_RTR_HBW_RANGE_HIT                                     0x140470
/* MME5_RTR_HBW_RANGE_HIT */
#define MME5_RTR_HBW_RANGE_HIT_IND_SHIFT                             0
#define MME5_RTR_HBW_RANGE_HIT_IND_MASK                              0xFF

#define mmMME5_RTR_HBW_RANGE_MASK_L_0                                0x140480

#define mmMME5_RTR_HBW_RANGE_MASK_L_1                                0x140484

#define mmMME5_RTR_HBW_RANGE_MASK_L_2                                0x140488

#define mmMME5_RTR_HBW_RANGE_MASK_L_3                                0x14048C

#define mmMME5_RTR_HBW_RANGE_MASK_L_4                                0x140490

#define mmMME5_RTR_HBW_RANGE_MASK_L_5                                0x140494

#define mmMME5_RTR_HBW_RANGE_MASK_L_6                                0x140498

#define mmMME5_RTR_HBW_RANGE_MASK_L_7                                0x14049C
/* MME5_RTR_HBW_RANGE_MASK_L */
#define MME5_RTR_HBW_RANGE_MASK_L_VAL_SHIFT                          0
#define MME5_RTR_HBW_RANGE_MASK_L_VAL_MASK                           0xFFFFFFFF

#define mmMME5_RTR_HBW_RANGE_MASK_H_0                                0x1404A0

#define mmMME5_RTR_HBW_RANGE_MASK_H_1                                0x1404A4

#define mmMME5_RTR_HBW_RANGE_MASK_H_2                                0x1404A8

#define mmMME5_RTR_HBW_RANGE_MASK_H_3                                0x1404AC

#define mmMME5_RTR_HBW_RANGE_MASK_H_4                                0x1404B0

#define mmMME5_RTR_HBW_RANGE_MASK_H_5                                0x1404B4

#define mmMME5_RTR_HBW_RANGE_MASK_H_6                                0x1404B8

#define mmMME5_RTR_HBW_RANGE_MASK_H_7                                0x1404BC
/* MME5_RTR_HBW_RANGE_MASK_H */
#define MME5_RTR_HBW_RANGE_MASK_H_VAL_SHIFT                          0
#define MME5_RTR_HBW_RANGE_MASK_H_VAL_MASK                           0x3FFFF

#define mmMME5_RTR_HBW_RANGE_BASE_L_0                                0x1404C0

#define mmMME5_RTR_HBW_RANGE_BASE_L_1                                0x1404C4

#define mmMME5_RTR_HBW_RANGE_BASE_L_2                                0x1404C8

#define mmMME5_RTR_HBW_RANGE_BASE_L_3                                0x1404CC

#define mmMME5_RTR_HBW_RANGE_BASE_L_4                                0x1404D0

#define mmMME5_RTR_HBW_RANGE_BASE_L_5                                0x1404D4

#define mmMME5_RTR_HBW_RANGE_BASE_L_6                                0x1404D8

#define mmMME5_RTR_HBW_RANGE_BASE_L_7                                0x1404DC
/* MME5_RTR_HBW_RANGE_BASE_L */
#define MME5_RTR_HBW_RANGE_BASE_L_VAL_SHIFT                          0
#define MME5_RTR_HBW_RANGE_BASE_L_VAL_MASK                           0xFFFFFFFF

#define mmMME5_RTR_HBW_RANGE_BASE_H_0                                0x1404E0

#define mmMME5_RTR_HBW_RANGE_BASE_H_1                                0x1404E4

#define mmMME5_RTR_HBW_RANGE_BASE_H_2                                0x1404E8

#define mmMME5_RTR_HBW_RANGE_BASE_H_3                                0x1404EC

#define mmMME5_RTR_HBW_RANGE_BASE_H_4                                0x1404F0

#define mmMME5_RTR_HBW_RANGE_BASE_H_5                                0x1404F4

#define mmMME5_RTR_HBW_RANGE_BASE_H_6                                0x1404F8

#define mmMME5_RTR_HBW_RANGE_BASE_H_7                                0x1404FC
/* MME5_RTR_HBW_RANGE_BASE_H */
#define MME5_RTR_HBW_RANGE_BASE_H_VAL_SHIFT                          0
#define MME5_RTR_HBW_RANGE_BASE_H_VAL_MASK                           0x3FFFF

#define mmMME5_RTR_LBW_RANGE_HIT                                     0x140500
/* MME5_RTR_LBW_RANGE_HIT */
#define MME5_RTR_LBW_RANGE_HIT_IND_SHIFT                             0
#define MME5_RTR_LBW_RANGE_HIT_IND_MASK                              0xFFFF

#define mmMME5_RTR_LBW_RANGE_MASK_0                                  0x140510

#define mmMME5_RTR_LBW_RANGE_MASK_1                                  0x140514

#define mmMME5_RTR_LBW_RANGE_MASK_2                                  0x140518

#define mmMME5_RTR_LBW_RANGE_MASK_3                                  0x14051C

#define mmMME5_RTR_LBW_RANGE_MASK_4                                  0x140520

#define mmMME5_RTR_LBW_RANGE_MASK_5                                  0x140524

#define mmMME5_RTR_LBW_RANGE_MASK_6                                  0x140528

#define mmMME5_RTR_LBW_RANGE_MASK_7                                  0x14052C

#define mmMME5_RTR_LBW_RANGE_MASK_8                                  0x140530

#define mmMME5_RTR_LBW_RANGE_MASK_9                                  0x140534

#define mmMME5_RTR_LBW_RANGE_MASK_10                                 0x140538

#define mmMME5_RTR_LBW_RANGE_MASK_11                                 0x14053C

#define mmMME5_RTR_LBW_RANGE_MASK_12                                 0x140540

#define mmMME5_RTR_LBW_RANGE_MASK_13                                 0x140544

#define mmMME5_RTR_LBW_RANGE_MASK_14                                 0x140548

#define mmMME5_RTR_LBW_RANGE_MASK_15                                 0x14054C
/* MME5_RTR_LBW_RANGE_MASK */
#define MME5_RTR_LBW_RANGE_MASK_VAL_SHIFT                            0
#define MME5_RTR_LBW_RANGE_MASK_VAL_MASK                             0x3FFFFFF

#define mmMME5_RTR_LBW_RANGE_BASE_0                                  0x140550

#define mmMME5_RTR_LBW_RANGE_BASE_1                                  0x140554

#define mmMME5_RTR_LBW_RANGE_BASE_2                                  0x140558

#define mmMME5_RTR_LBW_RANGE_BASE_3                                  0x14055C

#define mmMME5_RTR_LBW_RANGE_BASE_4                                  0x140560

#define mmMME5_RTR_LBW_RANGE_BASE_5                                  0x140564

#define mmMME5_RTR_LBW_RANGE_BASE_6                                  0x140568

#define mmMME5_RTR_LBW_RANGE_BASE_7                                  0x14056C

#define mmMME5_RTR_LBW_RANGE_BASE_8                                  0x140570

#define mmMME5_RTR_LBW_RANGE_BASE_9                                  0x140574

#define mmMME5_RTR_LBW_RANGE_BASE_10                                 0x140578

#define mmMME5_RTR_LBW_RANGE_BASE_11                                 0x14057C

#define mmMME5_RTR_LBW_RANGE_BASE_12                                 0x140580

#define mmMME5_RTR_LBW_RANGE_BASE_13                                 0x140584

#define mmMME5_RTR_LBW_RANGE_BASE_14                                 0x140588

#define mmMME5_RTR_LBW_RANGE_BASE_15                                 0x14058C
/* MME5_RTR_LBW_RANGE_BASE */
#define MME5_RTR_LBW_RANGE_BASE_VAL_SHIFT                            0
#define MME5_RTR_LBW_RANGE_BASE_VAL_MASK                             0x3FFFFFF

#define mmMME5_RTR_RGLTR                                             0x140590
/* MME5_RTR_RGLTR */
#define MME5_RTR_RGLTR_WR_EN_SHIFT                                   0
#define MME5_RTR_RGLTR_WR_EN_MASK                                    0x1
#define MME5_RTR_RGLTR_RD_EN_SHIFT                                   4
#define MME5_RTR_RGLTR_RD_EN_MASK                                    0x10

#define mmMME5_RTR_RGLTR_WR_RESULT                                   0x140594
/* MME5_RTR_RGLTR_WR_RESULT */
#define MME5_RTR_RGLTR_WR_RESULT_VAL_SHIFT                           0
#define MME5_RTR_RGLTR_WR_RESULT_VAL_MASK                            0xFF

#define mmMME5_RTR_RGLTR_RD_RESULT                                   0x140598
/* MME5_RTR_RGLTR_RD_RESULT */
#define MME5_RTR_RGLTR_RD_RESULT_VAL_SHIFT                           0
#define MME5_RTR_RGLTR_RD_RESULT_VAL_MASK                            0xFF

#define mmMME5_RTR_SCRAMB_EN                                         0x140600
/* MME5_RTR_SCRAMB_EN */
#define MME5_RTR_SCRAMB_EN_VAL_SHIFT                                 0
#define MME5_RTR_SCRAMB_EN_VAL_MASK                                  0x1

#define mmMME5_RTR_NON_LIN_SCRAMB                                    0x140604
/* MME5_RTR_NON_LIN_SCRAMB */
#define MME5_RTR_NON_LIN_SCRAMB_EN_SHIFT                             0
#define MME5_RTR_NON_LIN_SCRAMB_EN_MASK                              0x1

#endif /* ASIC_REG_MME5_RTR_H_ */

