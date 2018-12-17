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

#ifndef ASIC_REG_MME3_RTR_H_
#define ASIC_REG_MME3_RTR_H_

/*
 *****************************************
 *   MME3_RTR (Prototype: MME_RTR)
 *****************************************
 */

#define mmMME3_RTR_HBW_RD_RQ_E_ARB                                   0xC0100
/* MME3_RTR_HBW_RD_RQ_E_ARB */
#define MME3_RTR_HBW_RD_RQ_E_ARB_W_SHIFT                             0
#define MME3_RTR_HBW_RD_RQ_E_ARB_W_MASK                              0x7
#define MME3_RTR_HBW_RD_RQ_E_ARB_S_SHIFT                             8
#define MME3_RTR_HBW_RD_RQ_E_ARB_S_MASK                              0x700
#define MME3_RTR_HBW_RD_RQ_E_ARB_N_SHIFT                             16
#define MME3_RTR_HBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define MME3_RTR_HBW_RD_RQ_E_ARB_L_SHIFT                             24
#define MME3_RTR_HBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_HBW_RD_RQ_W_ARB                                   0xC0104
/* MME3_RTR_HBW_RD_RQ_W_ARB */
#define MME3_RTR_HBW_RD_RQ_W_ARB_E_SHIFT                             0
#define MME3_RTR_HBW_RD_RQ_W_ARB_E_MASK                              0x7
#define MME3_RTR_HBW_RD_RQ_W_ARB_S_SHIFT                             8
#define MME3_RTR_HBW_RD_RQ_W_ARB_S_MASK                              0x700
#define MME3_RTR_HBW_RD_RQ_W_ARB_N_SHIFT                             16
#define MME3_RTR_HBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define MME3_RTR_HBW_RD_RQ_W_ARB_L_SHIFT                             24
#define MME3_RTR_HBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_HBW_RD_RQ_N_ARB                                   0xC0108
/* MME3_RTR_HBW_RD_RQ_N_ARB */
#define MME3_RTR_HBW_RD_RQ_N_ARB_W_SHIFT                             0
#define MME3_RTR_HBW_RD_RQ_N_ARB_W_MASK                              0x7
#define MME3_RTR_HBW_RD_RQ_N_ARB_E_SHIFT                             8
#define MME3_RTR_HBW_RD_RQ_N_ARB_E_MASK                              0x700
#define MME3_RTR_HBW_RD_RQ_N_ARB_S_SHIFT                             16
#define MME3_RTR_HBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define MME3_RTR_HBW_RD_RQ_N_ARB_L_SHIFT                             24
#define MME3_RTR_HBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_HBW_RD_RQ_S_ARB                                   0xC010C
/* MME3_RTR_HBW_RD_RQ_S_ARB */
#define MME3_RTR_HBW_RD_RQ_S_ARB_W_SHIFT                             0
#define MME3_RTR_HBW_RD_RQ_S_ARB_W_MASK                              0x7
#define MME3_RTR_HBW_RD_RQ_S_ARB_E_SHIFT                             8
#define MME3_RTR_HBW_RD_RQ_S_ARB_E_MASK                              0x700
#define MME3_RTR_HBW_RD_RQ_S_ARB_N_SHIFT                             16
#define MME3_RTR_HBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define MME3_RTR_HBW_RD_RQ_S_ARB_L_SHIFT                             24
#define MME3_RTR_HBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_HBW_RD_RQ_L_ARB                                   0xC0110
/* MME3_RTR_HBW_RD_RQ_L_ARB */
#define MME3_RTR_HBW_RD_RQ_L_ARB_W_SHIFT                             0
#define MME3_RTR_HBW_RD_RQ_L_ARB_W_MASK                              0x7
#define MME3_RTR_HBW_RD_RQ_L_ARB_E_SHIFT                             8
#define MME3_RTR_HBW_RD_RQ_L_ARB_E_MASK                              0x700
#define MME3_RTR_HBW_RD_RQ_L_ARB_S_SHIFT                             16
#define MME3_RTR_HBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define MME3_RTR_HBW_RD_RQ_L_ARB_N_SHIFT                             24
#define MME3_RTR_HBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME3_RTR_HBW_E_ARB_MAX                                     0xC0120
/* MME3_RTR_HBW_E_ARB_MAX */
#define MME3_RTR_HBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME3_RTR_HBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME3_RTR_HBW_W_ARB_MAX                                     0xC0124
/* MME3_RTR_HBW_W_ARB_MAX */
#define MME3_RTR_HBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME3_RTR_HBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME3_RTR_HBW_N_ARB_MAX                                     0xC0128
/* MME3_RTR_HBW_N_ARB_MAX */
#define MME3_RTR_HBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME3_RTR_HBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME3_RTR_HBW_S_ARB_MAX                                     0xC012C
/* MME3_RTR_HBW_S_ARB_MAX */
#define MME3_RTR_HBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME3_RTR_HBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME3_RTR_HBW_L_ARB_MAX                                     0xC0130
/* MME3_RTR_HBW_L_ARB_MAX */
#define MME3_RTR_HBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME3_RTR_HBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME3_RTR_HBW_RD_RS_MAX_CREDIT                              0xC0140
/* MME3_RTR_HBW_RD_RS_MAX_CREDIT */
#define MME3_RTR_HBW_RD_RS_MAX_CREDIT_A_SHIFT                        0
#define MME3_RTR_HBW_RD_RS_MAX_CREDIT_A_MASK                         0x3F
#define MME3_RTR_HBW_RD_RS_MAX_CREDIT_B_SHIFT                        8
#define MME3_RTR_HBW_RD_RS_MAX_CREDIT_B_MASK                         0x3F00

#define mmMME3_RTR_HBW_WR_RQ_MAX_CREDIT                              0xC0144
/* MME3_RTR_HBW_WR_RQ_MAX_CREDIT */
#define MME3_RTR_HBW_WR_RQ_MAX_CREDIT_VAL_SHIFT                      0
#define MME3_RTR_HBW_WR_RQ_MAX_CREDIT_VAL_MASK                       0x3F

#define mmMME3_RTR_HBW_RD_RQ_MAX_CREDIT                              0xC0148
/* MME3_RTR_HBW_RD_RQ_MAX_CREDIT */
#define MME3_RTR_HBW_RD_RQ_MAX_CREDIT_A_SHIFT                        0
#define MME3_RTR_HBW_RD_RQ_MAX_CREDIT_A_MASK                         0x3F
#define MME3_RTR_HBW_RD_RQ_MAX_CREDIT_B_SHIFT                        8
#define MME3_RTR_HBW_RD_RQ_MAX_CREDIT_B_MASK                         0x3F00
#define MME3_RTR_HBW_RD_RQ_MAX_CREDIT_IC_SHIFT                       16
#define MME3_RTR_HBW_RD_RQ_MAX_CREDIT_IC_MASK                        0x3F0000

#define mmMME3_RTR_HBW_RD_RS_E_ARB                                   0xC0150
/* MME3_RTR_HBW_RD_RS_E_ARB */
#define MME3_RTR_HBW_RD_RS_E_ARB_W_SHIFT                             0
#define MME3_RTR_HBW_RD_RS_E_ARB_W_MASK                              0x7
#define MME3_RTR_HBW_RD_RS_E_ARB_S_SHIFT                             8
#define MME3_RTR_HBW_RD_RS_E_ARB_S_MASK                              0x700
#define MME3_RTR_HBW_RD_RS_E_ARB_N_SHIFT                             16
#define MME3_RTR_HBW_RD_RS_E_ARB_N_MASK                              0x70000
#define MME3_RTR_HBW_RD_RS_E_ARB_L_SHIFT                             24
#define MME3_RTR_HBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_HBW_RD_RS_W_ARB                                   0xC0154
/* MME3_RTR_HBW_RD_RS_W_ARB */
#define MME3_RTR_HBW_RD_RS_W_ARB_E_SHIFT                             0
#define MME3_RTR_HBW_RD_RS_W_ARB_E_MASK                              0x7
#define MME3_RTR_HBW_RD_RS_W_ARB_S_SHIFT                             8
#define MME3_RTR_HBW_RD_RS_W_ARB_S_MASK                              0x700
#define MME3_RTR_HBW_RD_RS_W_ARB_N_SHIFT                             16
#define MME3_RTR_HBW_RD_RS_W_ARB_N_MASK                              0x70000
#define MME3_RTR_HBW_RD_RS_W_ARB_L_SHIFT                             24
#define MME3_RTR_HBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_HBW_RD_RS_N_ARB                                   0xC0158
/* MME3_RTR_HBW_RD_RS_N_ARB */
#define MME3_RTR_HBW_RD_RS_N_ARB_W_SHIFT                             0
#define MME3_RTR_HBW_RD_RS_N_ARB_W_MASK                              0x7
#define MME3_RTR_HBW_RD_RS_N_ARB_E_SHIFT                             8
#define MME3_RTR_HBW_RD_RS_N_ARB_E_MASK                              0x700
#define MME3_RTR_HBW_RD_RS_N_ARB_S_SHIFT                             16
#define MME3_RTR_HBW_RD_RS_N_ARB_S_MASK                              0x70000
#define MME3_RTR_HBW_RD_RS_N_ARB_L_SHIFT                             24
#define MME3_RTR_HBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_HBW_RD_RS_S_ARB                                   0xC015C
/* MME3_RTR_HBW_RD_RS_S_ARB */
#define MME3_RTR_HBW_RD_RS_S_ARB_W_SHIFT                             0
#define MME3_RTR_HBW_RD_RS_S_ARB_W_MASK                              0x7
#define MME3_RTR_HBW_RD_RS_S_ARB_E_SHIFT                             8
#define MME3_RTR_HBW_RD_RS_S_ARB_E_MASK                              0x700
#define MME3_RTR_HBW_RD_RS_S_ARB_N_SHIFT                             16
#define MME3_RTR_HBW_RD_RS_S_ARB_N_MASK                              0x70000
#define MME3_RTR_HBW_RD_RS_S_ARB_L_SHIFT                             24
#define MME3_RTR_HBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_HBW_RD_RS_L_ARB                                   0xC0160
/* MME3_RTR_HBW_RD_RS_L_ARB */
#define MME3_RTR_HBW_RD_RS_L_ARB_W_SHIFT                             0
#define MME3_RTR_HBW_RD_RS_L_ARB_W_MASK                              0x7
#define MME3_RTR_HBW_RD_RS_L_ARB_E_SHIFT                             8
#define MME3_RTR_HBW_RD_RS_L_ARB_E_MASK                              0x700
#define MME3_RTR_HBW_RD_RS_L_ARB_S_SHIFT                             16
#define MME3_RTR_HBW_RD_RS_L_ARB_S_MASK                              0x70000
#define MME3_RTR_HBW_RD_RS_L_ARB_N_SHIFT                             24
#define MME3_RTR_HBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmMME3_RTR_HBW_WR_RQ_E_ARB                                   0xC0170
/* MME3_RTR_HBW_WR_RQ_E_ARB */
#define MME3_RTR_HBW_WR_RQ_E_ARB_W_SHIFT                             0
#define MME3_RTR_HBW_WR_RQ_E_ARB_W_MASK                              0x7
#define MME3_RTR_HBW_WR_RQ_E_ARB_S_SHIFT                             8
#define MME3_RTR_HBW_WR_RQ_E_ARB_S_MASK                              0x700
#define MME3_RTR_HBW_WR_RQ_E_ARB_N_SHIFT                             16
#define MME3_RTR_HBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define MME3_RTR_HBW_WR_RQ_E_ARB_L_SHIFT                             24
#define MME3_RTR_HBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_HBW_WR_RQ_W_ARB                                   0xC0174
/* MME3_RTR_HBW_WR_RQ_W_ARB */
#define MME3_RTR_HBW_WR_RQ_W_ARB_E_SHIFT                             0
#define MME3_RTR_HBW_WR_RQ_W_ARB_E_MASK                              0x7
#define MME3_RTR_HBW_WR_RQ_W_ARB_S_SHIFT                             8
#define MME3_RTR_HBW_WR_RQ_W_ARB_S_MASK                              0x700
#define MME3_RTR_HBW_WR_RQ_W_ARB_N_SHIFT                             16
#define MME3_RTR_HBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define MME3_RTR_HBW_WR_RQ_W_ARB_L_SHIFT                             24
#define MME3_RTR_HBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_HBW_WR_RQ_N_ARB                                   0xC0178
/* MME3_RTR_HBW_WR_RQ_N_ARB */
#define MME3_RTR_HBW_WR_RQ_N_ARB_W_SHIFT                             0
#define MME3_RTR_HBW_WR_RQ_N_ARB_W_MASK                              0x7
#define MME3_RTR_HBW_WR_RQ_N_ARB_E_SHIFT                             8
#define MME3_RTR_HBW_WR_RQ_N_ARB_E_MASK                              0x700
#define MME3_RTR_HBW_WR_RQ_N_ARB_S_SHIFT                             16
#define MME3_RTR_HBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define MME3_RTR_HBW_WR_RQ_N_ARB_L_SHIFT                             24
#define MME3_RTR_HBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_HBW_WR_RQ_S_ARB                                   0xC017C
/* MME3_RTR_HBW_WR_RQ_S_ARB */
#define MME3_RTR_HBW_WR_RQ_S_ARB_W_SHIFT                             0
#define MME3_RTR_HBW_WR_RQ_S_ARB_W_MASK                              0x7
#define MME3_RTR_HBW_WR_RQ_S_ARB_E_SHIFT                             8
#define MME3_RTR_HBW_WR_RQ_S_ARB_E_MASK                              0x700
#define MME3_RTR_HBW_WR_RQ_S_ARB_N_SHIFT                             16
#define MME3_RTR_HBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define MME3_RTR_HBW_WR_RQ_S_ARB_L_SHIFT                             24
#define MME3_RTR_HBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_HBW_WR_RQ_L_ARB                                   0xC0180
/* MME3_RTR_HBW_WR_RQ_L_ARB */
#define MME3_RTR_HBW_WR_RQ_L_ARB_W_SHIFT                             0
#define MME3_RTR_HBW_WR_RQ_L_ARB_W_MASK                              0x7
#define MME3_RTR_HBW_WR_RQ_L_ARB_E_SHIFT                             8
#define MME3_RTR_HBW_WR_RQ_L_ARB_E_MASK                              0x700
#define MME3_RTR_HBW_WR_RQ_L_ARB_S_SHIFT                             16
#define MME3_RTR_HBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define MME3_RTR_HBW_WR_RQ_L_ARB_N_SHIFT                             24
#define MME3_RTR_HBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME3_RTR_HBW_WR_RS_E_ARB                                   0xC0190
/* MME3_RTR_HBW_WR_RS_E_ARB */
#define MME3_RTR_HBW_WR_RS_E_ARB_W_SHIFT                             0
#define MME3_RTR_HBW_WR_RS_E_ARB_W_MASK                              0x7
#define MME3_RTR_HBW_WR_RS_E_ARB_S_SHIFT                             8
#define MME3_RTR_HBW_WR_RS_E_ARB_S_MASK                              0x700
#define MME3_RTR_HBW_WR_RS_E_ARB_N_SHIFT                             16
#define MME3_RTR_HBW_WR_RS_E_ARB_N_MASK                              0x70000
#define MME3_RTR_HBW_WR_RS_E_ARB_L_SHIFT                             24
#define MME3_RTR_HBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_HBW_WR_RS_W_ARB                                   0xC0194
/* MME3_RTR_HBW_WR_RS_W_ARB */
#define MME3_RTR_HBW_WR_RS_W_ARB_E_SHIFT                             0
#define MME3_RTR_HBW_WR_RS_W_ARB_E_MASK                              0x7
#define MME3_RTR_HBW_WR_RS_W_ARB_S_SHIFT                             8
#define MME3_RTR_HBW_WR_RS_W_ARB_S_MASK                              0x700
#define MME3_RTR_HBW_WR_RS_W_ARB_N_SHIFT                             16
#define MME3_RTR_HBW_WR_RS_W_ARB_N_MASK                              0x70000
#define MME3_RTR_HBW_WR_RS_W_ARB_L_SHIFT                             24
#define MME3_RTR_HBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_HBW_WR_RS_N_ARB                                   0xC0198
/* MME3_RTR_HBW_WR_RS_N_ARB */
#define MME3_RTR_HBW_WR_RS_N_ARB_W_SHIFT                             0
#define MME3_RTR_HBW_WR_RS_N_ARB_W_MASK                              0x7
#define MME3_RTR_HBW_WR_RS_N_ARB_E_SHIFT                             8
#define MME3_RTR_HBW_WR_RS_N_ARB_E_MASK                              0x700
#define MME3_RTR_HBW_WR_RS_N_ARB_S_SHIFT                             16
#define MME3_RTR_HBW_WR_RS_N_ARB_S_MASK                              0x70000
#define MME3_RTR_HBW_WR_RS_N_ARB_L_SHIFT                             24
#define MME3_RTR_HBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_HBW_WR_RS_S_ARB                                   0xC019C
/* MME3_RTR_HBW_WR_RS_S_ARB */
#define MME3_RTR_HBW_WR_RS_S_ARB_W_SHIFT                             0
#define MME3_RTR_HBW_WR_RS_S_ARB_W_MASK                              0x7
#define MME3_RTR_HBW_WR_RS_S_ARB_E_SHIFT                             8
#define MME3_RTR_HBW_WR_RS_S_ARB_E_MASK                              0x700
#define MME3_RTR_HBW_WR_RS_S_ARB_N_SHIFT                             16
#define MME3_RTR_HBW_WR_RS_S_ARB_N_MASK                              0x70000
#define MME3_RTR_HBW_WR_RS_S_ARB_L_SHIFT                             24
#define MME3_RTR_HBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_HBW_WR_RS_L_ARB                                   0xC01A0
/* MME3_RTR_HBW_WR_RS_L_ARB */
#define MME3_RTR_HBW_WR_RS_L_ARB_W_SHIFT                             0
#define MME3_RTR_HBW_WR_RS_L_ARB_W_MASK                              0x7
#define MME3_RTR_HBW_WR_RS_L_ARB_E_SHIFT                             8
#define MME3_RTR_HBW_WR_RS_L_ARB_E_MASK                              0x700
#define MME3_RTR_HBW_WR_RS_L_ARB_S_SHIFT                             16
#define MME3_RTR_HBW_WR_RS_L_ARB_S_MASK                              0x70000
#define MME3_RTR_HBW_WR_RS_L_ARB_N_SHIFT                             24
#define MME3_RTR_HBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmMME3_RTR_LBW_RD_RQ_E_ARB                                   0xC0200
/* MME3_RTR_LBW_RD_RQ_E_ARB */
#define MME3_RTR_LBW_RD_RQ_E_ARB_W_SHIFT                             0
#define MME3_RTR_LBW_RD_RQ_E_ARB_W_MASK                              0x7
#define MME3_RTR_LBW_RD_RQ_E_ARB_S_SHIFT                             8
#define MME3_RTR_LBW_RD_RQ_E_ARB_S_MASK                              0x700
#define MME3_RTR_LBW_RD_RQ_E_ARB_N_SHIFT                             16
#define MME3_RTR_LBW_RD_RQ_E_ARB_N_MASK                              0x70000
#define MME3_RTR_LBW_RD_RQ_E_ARB_L_SHIFT                             24
#define MME3_RTR_LBW_RD_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_LBW_RD_RQ_W_ARB                                   0xC0204
/* MME3_RTR_LBW_RD_RQ_W_ARB */
#define MME3_RTR_LBW_RD_RQ_W_ARB_E_SHIFT                             0
#define MME3_RTR_LBW_RD_RQ_W_ARB_E_MASK                              0x7
#define MME3_RTR_LBW_RD_RQ_W_ARB_S_SHIFT                             8
#define MME3_RTR_LBW_RD_RQ_W_ARB_S_MASK                              0x700
#define MME3_RTR_LBW_RD_RQ_W_ARB_N_SHIFT                             16
#define MME3_RTR_LBW_RD_RQ_W_ARB_N_MASK                              0x70000
#define MME3_RTR_LBW_RD_RQ_W_ARB_L_SHIFT                             24
#define MME3_RTR_LBW_RD_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_LBW_RD_RQ_N_ARB                                   0xC0208
/* MME3_RTR_LBW_RD_RQ_N_ARB */
#define MME3_RTR_LBW_RD_RQ_N_ARB_W_SHIFT                             0
#define MME3_RTR_LBW_RD_RQ_N_ARB_W_MASK                              0x7
#define MME3_RTR_LBW_RD_RQ_N_ARB_E_SHIFT                             8
#define MME3_RTR_LBW_RD_RQ_N_ARB_E_MASK                              0x700
#define MME3_RTR_LBW_RD_RQ_N_ARB_S_SHIFT                             16
#define MME3_RTR_LBW_RD_RQ_N_ARB_S_MASK                              0x70000
#define MME3_RTR_LBW_RD_RQ_N_ARB_L_SHIFT                             24
#define MME3_RTR_LBW_RD_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_LBW_RD_RQ_S_ARB                                   0xC020C
/* MME3_RTR_LBW_RD_RQ_S_ARB */
#define MME3_RTR_LBW_RD_RQ_S_ARB_W_SHIFT                             0
#define MME3_RTR_LBW_RD_RQ_S_ARB_W_MASK                              0x7
#define MME3_RTR_LBW_RD_RQ_S_ARB_E_SHIFT                             8
#define MME3_RTR_LBW_RD_RQ_S_ARB_E_MASK                              0x700
#define MME3_RTR_LBW_RD_RQ_S_ARB_N_SHIFT                             16
#define MME3_RTR_LBW_RD_RQ_S_ARB_N_MASK                              0x70000
#define MME3_RTR_LBW_RD_RQ_S_ARB_L_SHIFT                             24
#define MME3_RTR_LBW_RD_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_LBW_RD_RQ_L_ARB                                   0xC0210
/* MME3_RTR_LBW_RD_RQ_L_ARB */
#define MME3_RTR_LBW_RD_RQ_L_ARB_W_SHIFT                             0
#define MME3_RTR_LBW_RD_RQ_L_ARB_W_MASK                              0x7
#define MME3_RTR_LBW_RD_RQ_L_ARB_E_SHIFT                             8
#define MME3_RTR_LBW_RD_RQ_L_ARB_E_MASK                              0x700
#define MME3_RTR_LBW_RD_RQ_L_ARB_S_SHIFT                             16
#define MME3_RTR_LBW_RD_RQ_L_ARB_S_MASK                              0x70000
#define MME3_RTR_LBW_RD_RQ_L_ARB_N_SHIFT                             24
#define MME3_RTR_LBW_RD_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME3_RTR_LBW_E_ARB_MAX                                     0xC0220
/* MME3_RTR_LBW_E_ARB_MAX */
#define MME3_RTR_LBW_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME3_RTR_LBW_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME3_RTR_LBW_W_ARB_MAX                                     0xC0224
/* MME3_RTR_LBW_W_ARB_MAX */
#define MME3_RTR_LBW_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME3_RTR_LBW_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME3_RTR_LBW_N_ARB_MAX                                     0xC0228
/* MME3_RTR_LBW_N_ARB_MAX */
#define MME3_RTR_LBW_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME3_RTR_LBW_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME3_RTR_LBW_S_ARB_MAX                                     0xC022C
/* MME3_RTR_LBW_S_ARB_MAX */
#define MME3_RTR_LBW_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME3_RTR_LBW_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME3_RTR_LBW_L_ARB_MAX                                     0xC0230
/* MME3_RTR_LBW_L_ARB_MAX */
#define MME3_RTR_LBW_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME3_RTR_LBW_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME3_RTR_LBW_SRAM_MAX_CREDIT                               0xC0240
/* MME3_RTR_LBW_SRAM_MAX_CREDIT */
#define MME3_RTR_LBW_SRAM_MAX_CREDIT_MSTR_SHIFT                      0
#define MME3_RTR_LBW_SRAM_MAX_CREDIT_MSTR_MASK                       0x3F
#define MME3_RTR_LBW_SRAM_MAX_CREDIT_SLV_SHIFT                       8
#define MME3_RTR_LBW_SRAM_MAX_CREDIT_SLV_MASK                        0x3F00

#define mmMME3_RTR_LBW_RD_RS_E_ARB                                   0xC0250
/* MME3_RTR_LBW_RD_RS_E_ARB */
#define MME3_RTR_LBW_RD_RS_E_ARB_W_SHIFT                             0
#define MME3_RTR_LBW_RD_RS_E_ARB_W_MASK                              0x7
#define MME3_RTR_LBW_RD_RS_E_ARB_S_SHIFT                             8
#define MME3_RTR_LBW_RD_RS_E_ARB_S_MASK                              0x700
#define MME3_RTR_LBW_RD_RS_E_ARB_N_SHIFT                             16
#define MME3_RTR_LBW_RD_RS_E_ARB_N_MASK                              0x70000
#define MME3_RTR_LBW_RD_RS_E_ARB_L_SHIFT                             24
#define MME3_RTR_LBW_RD_RS_E_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_LBW_RD_RS_W_ARB                                   0xC0254
/* MME3_RTR_LBW_RD_RS_W_ARB */
#define MME3_RTR_LBW_RD_RS_W_ARB_E_SHIFT                             0
#define MME3_RTR_LBW_RD_RS_W_ARB_E_MASK                              0x7
#define MME3_RTR_LBW_RD_RS_W_ARB_S_SHIFT                             8
#define MME3_RTR_LBW_RD_RS_W_ARB_S_MASK                              0x700
#define MME3_RTR_LBW_RD_RS_W_ARB_N_SHIFT                             16
#define MME3_RTR_LBW_RD_RS_W_ARB_N_MASK                              0x70000
#define MME3_RTR_LBW_RD_RS_W_ARB_L_SHIFT                             24
#define MME3_RTR_LBW_RD_RS_W_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_LBW_RD_RS_N_ARB                                   0xC0258
/* MME3_RTR_LBW_RD_RS_N_ARB */
#define MME3_RTR_LBW_RD_RS_N_ARB_W_SHIFT                             0
#define MME3_RTR_LBW_RD_RS_N_ARB_W_MASK                              0x7
#define MME3_RTR_LBW_RD_RS_N_ARB_E_SHIFT                             8
#define MME3_RTR_LBW_RD_RS_N_ARB_E_MASK                              0x700
#define MME3_RTR_LBW_RD_RS_N_ARB_S_SHIFT                             16
#define MME3_RTR_LBW_RD_RS_N_ARB_S_MASK                              0x70000
#define MME3_RTR_LBW_RD_RS_N_ARB_L_SHIFT                             24
#define MME3_RTR_LBW_RD_RS_N_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_LBW_RD_RS_S_ARB                                   0xC025C
/* MME3_RTR_LBW_RD_RS_S_ARB */
#define MME3_RTR_LBW_RD_RS_S_ARB_W_SHIFT                             0
#define MME3_RTR_LBW_RD_RS_S_ARB_W_MASK                              0x7
#define MME3_RTR_LBW_RD_RS_S_ARB_E_SHIFT                             8
#define MME3_RTR_LBW_RD_RS_S_ARB_E_MASK                              0x700
#define MME3_RTR_LBW_RD_RS_S_ARB_N_SHIFT                             16
#define MME3_RTR_LBW_RD_RS_S_ARB_N_MASK                              0x70000
#define MME3_RTR_LBW_RD_RS_S_ARB_L_SHIFT                             24
#define MME3_RTR_LBW_RD_RS_S_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_LBW_RD_RS_L_ARB                                   0xC0260
/* MME3_RTR_LBW_RD_RS_L_ARB */
#define MME3_RTR_LBW_RD_RS_L_ARB_W_SHIFT                             0
#define MME3_RTR_LBW_RD_RS_L_ARB_W_MASK                              0x7
#define MME3_RTR_LBW_RD_RS_L_ARB_E_SHIFT                             8
#define MME3_RTR_LBW_RD_RS_L_ARB_E_MASK                              0x700
#define MME3_RTR_LBW_RD_RS_L_ARB_S_SHIFT                             16
#define MME3_RTR_LBW_RD_RS_L_ARB_S_MASK                              0x70000
#define MME3_RTR_LBW_RD_RS_L_ARB_N_SHIFT                             24
#define MME3_RTR_LBW_RD_RS_L_ARB_N_MASK                              0x7000000

#define mmMME3_RTR_LBW_WR_RQ_E_ARB                                   0xC0270
/* MME3_RTR_LBW_WR_RQ_E_ARB */
#define MME3_RTR_LBW_WR_RQ_E_ARB_W_SHIFT                             0
#define MME3_RTR_LBW_WR_RQ_E_ARB_W_MASK                              0x7
#define MME3_RTR_LBW_WR_RQ_E_ARB_S_SHIFT                             8
#define MME3_RTR_LBW_WR_RQ_E_ARB_S_MASK                              0x700
#define MME3_RTR_LBW_WR_RQ_E_ARB_N_SHIFT                             16
#define MME3_RTR_LBW_WR_RQ_E_ARB_N_MASK                              0x70000
#define MME3_RTR_LBW_WR_RQ_E_ARB_L_SHIFT                             24
#define MME3_RTR_LBW_WR_RQ_E_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_LBW_WR_RQ_W_ARB                                   0xC0274
/* MME3_RTR_LBW_WR_RQ_W_ARB */
#define MME3_RTR_LBW_WR_RQ_W_ARB_E_SHIFT                             0
#define MME3_RTR_LBW_WR_RQ_W_ARB_E_MASK                              0x7
#define MME3_RTR_LBW_WR_RQ_W_ARB_S_SHIFT                             8
#define MME3_RTR_LBW_WR_RQ_W_ARB_S_MASK                              0x700
#define MME3_RTR_LBW_WR_RQ_W_ARB_N_SHIFT                             16
#define MME3_RTR_LBW_WR_RQ_W_ARB_N_MASK                              0x70000
#define MME3_RTR_LBW_WR_RQ_W_ARB_L_SHIFT                             24
#define MME3_RTR_LBW_WR_RQ_W_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_LBW_WR_RQ_N_ARB                                   0xC0278
/* MME3_RTR_LBW_WR_RQ_N_ARB */
#define MME3_RTR_LBW_WR_RQ_N_ARB_W_SHIFT                             0
#define MME3_RTR_LBW_WR_RQ_N_ARB_W_MASK                              0x7
#define MME3_RTR_LBW_WR_RQ_N_ARB_E_SHIFT                             8
#define MME3_RTR_LBW_WR_RQ_N_ARB_E_MASK                              0x700
#define MME3_RTR_LBW_WR_RQ_N_ARB_S_SHIFT                             16
#define MME3_RTR_LBW_WR_RQ_N_ARB_S_MASK                              0x70000
#define MME3_RTR_LBW_WR_RQ_N_ARB_L_SHIFT                             24
#define MME3_RTR_LBW_WR_RQ_N_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_LBW_WR_RQ_S_ARB                                   0xC027C
/* MME3_RTR_LBW_WR_RQ_S_ARB */
#define MME3_RTR_LBW_WR_RQ_S_ARB_W_SHIFT                             0
#define MME3_RTR_LBW_WR_RQ_S_ARB_W_MASK                              0x7
#define MME3_RTR_LBW_WR_RQ_S_ARB_E_SHIFT                             8
#define MME3_RTR_LBW_WR_RQ_S_ARB_E_MASK                              0x700
#define MME3_RTR_LBW_WR_RQ_S_ARB_N_SHIFT                             16
#define MME3_RTR_LBW_WR_RQ_S_ARB_N_MASK                              0x70000
#define MME3_RTR_LBW_WR_RQ_S_ARB_L_SHIFT                             24
#define MME3_RTR_LBW_WR_RQ_S_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_LBW_WR_RQ_L_ARB                                   0xC0280
/* MME3_RTR_LBW_WR_RQ_L_ARB */
#define MME3_RTR_LBW_WR_RQ_L_ARB_W_SHIFT                             0
#define MME3_RTR_LBW_WR_RQ_L_ARB_W_MASK                              0x7
#define MME3_RTR_LBW_WR_RQ_L_ARB_E_SHIFT                             8
#define MME3_RTR_LBW_WR_RQ_L_ARB_E_MASK                              0x700
#define MME3_RTR_LBW_WR_RQ_L_ARB_S_SHIFT                             16
#define MME3_RTR_LBW_WR_RQ_L_ARB_S_MASK                              0x70000
#define MME3_RTR_LBW_WR_RQ_L_ARB_N_SHIFT                             24
#define MME3_RTR_LBW_WR_RQ_L_ARB_N_MASK                              0x7000000

#define mmMME3_RTR_LBW_WR_RS_E_ARB                                   0xC0290
/* MME3_RTR_LBW_WR_RS_E_ARB */
#define MME3_RTR_LBW_WR_RS_E_ARB_W_SHIFT                             0
#define MME3_RTR_LBW_WR_RS_E_ARB_W_MASK                              0x7
#define MME3_RTR_LBW_WR_RS_E_ARB_S_SHIFT                             8
#define MME3_RTR_LBW_WR_RS_E_ARB_S_MASK                              0x700
#define MME3_RTR_LBW_WR_RS_E_ARB_N_SHIFT                             16
#define MME3_RTR_LBW_WR_RS_E_ARB_N_MASK                              0x70000
#define MME3_RTR_LBW_WR_RS_E_ARB_L_SHIFT                             24
#define MME3_RTR_LBW_WR_RS_E_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_LBW_WR_RS_W_ARB                                   0xC0294
/* MME3_RTR_LBW_WR_RS_W_ARB */
#define MME3_RTR_LBW_WR_RS_W_ARB_E_SHIFT                             0
#define MME3_RTR_LBW_WR_RS_W_ARB_E_MASK                              0x7
#define MME3_RTR_LBW_WR_RS_W_ARB_S_SHIFT                             8
#define MME3_RTR_LBW_WR_RS_W_ARB_S_MASK                              0x700
#define MME3_RTR_LBW_WR_RS_W_ARB_N_SHIFT                             16
#define MME3_RTR_LBW_WR_RS_W_ARB_N_MASK                              0x70000
#define MME3_RTR_LBW_WR_RS_W_ARB_L_SHIFT                             24
#define MME3_RTR_LBW_WR_RS_W_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_LBW_WR_RS_N_ARB                                   0xC0298
/* MME3_RTR_LBW_WR_RS_N_ARB */
#define MME3_RTR_LBW_WR_RS_N_ARB_W_SHIFT                             0
#define MME3_RTR_LBW_WR_RS_N_ARB_W_MASK                              0x7
#define MME3_RTR_LBW_WR_RS_N_ARB_E_SHIFT                             8
#define MME3_RTR_LBW_WR_RS_N_ARB_E_MASK                              0x700
#define MME3_RTR_LBW_WR_RS_N_ARB_S_SHIFT                             16
#define MME3_RTR_LBW_WR_RS_N_ARB_S_MASK                              0x70000
#define MME3_RTR_LBW_WR_RS_N_ARB_L_SHIFT                             24
#define MME3_RTR_LBW_WR_RS_N_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_LBW_WR_RS_S_ARB                                   0xC029C
/* MME3_RTR_LBW_WR_RS_S_ARB */
#define MME3_RTR_LBW_WR_RS_S_ARB_W_SHIFT                             0
#define MME3_RTR_LBW_WR_RS_S_ARB_W_MASK                              0x7
#define MME3_RTR_LBW_WR_RS_S_ARB_E_SHIFT                             8
#define MME3_RTR_LBW_WR_RS_S_ARB_E_MASK                              0x700
#define MME3_RTR_LBW_WR_RS_S_ARB_N_SHIFT                             16
#define MME3_RTR_LBW_WR_RS_S_ARB_N_MASK                              0x70000
#define MME3_RTR_LBW_WR_RS_S_ARB_L_SHIFT                             24
#define MME3_RTR_LBW_WR_RS_S_ARB_L_MASK                              0x7000000

#define mmMME3_RTR_LBW_WR_RS_L_ARB                                   0xC02A0
/* MME3_RTR_LBW_WR_RS_L_ARB */
#define MME3_RTR_LBW_WR_RS_L_ARB_W_SHIFT                             0
#define MME3_RTR_LBW_WR_RS_L_ARB_W_MASK                              0x7
#define MME3_RTR_LBW_WR_RS_L_ARB_E_SHIFT                             8
#define MME3_RTR_LBW_WR_RS_L_ARB_E_MASK                              0x700
#define MME3_RTR_LBW_WR_RS_L_ARB_S_SHIFT                             16
#define MME3_RTR_LBW_WR_RS_L_ARB_S_MASK                              0x70000
#define MME3_RTR_LBW_WR_RS_L_ARB_N_SHIFT                             24
#define MME3_RTR_LBW_WR_RS_L_ARB_N_MASK                              0x7000000

#define mmMME3_RTR_DBG_E_ARB                                         0xC0300
/* MME3_RTR_DBG_E_ARB */
#define MME3_RTR_DBG_E_ARB_W_SHIFT                                   0
#define MME3_RTR_DBG_E_ARB_W_MASK                                    0x7
#define MME3_RTR_DBG_E_ARB_S_SHIFT                                   8
#define MME3_RTR_DBG_E_ARB_S_MASK                                    0x700
#define MME3_RTR_DBG_E_ARB_N_SHIFT                                   16
#define MME3_RTR_DBG_E_ARB_N_MASK                                    0x70000
#define MME3_RTR_DBG_E_ARB_L_SHIFT                                   24
#define MME3_RTR_DBG_E_ARB_L_MASK                                    0x7000000

#define mmMME3_RTR_DBG_W_ARB                                         0xC0304
/* MME3_RTR_DBG_W_ARB */
#define MME3_RTR_DBG_W_ARB_E_SHIFT                                   0
#define MME3_RTR_DBG_W_ARB_E_MASK                                    0x7
#define MME3_RTR_DBG_W_ARB_S_SHIFT                                   8
#define MME3_RTR_DBG_W_ARB_S_MASK                                    0x700
#define MME3_RTR_DBG_W_ARB_N_SHIFT                                   16
#define MME3_RTR_DBG_W_ARB_N_MASK                                    0x70000
#define MME3_RTR_DBG_W_ARB_L_SHIFT                                   24
#define MME3_RTR_DBG_W_ARB_L_MASK                                    0x7000000

#define mmMME3_RTR_DBG_N_ARB                                         0xC0308
/* MME3_RTR_DBG_N_ARB */
#define MME3_RTR_DBG_N_ARB_W_SHIFT                                   0
#define MME3_RTR_DBG_N_ARB_W_MASK                                    0x7
#define MME3_RTR_DBG_N_ARB_E_SHIFT                                   8
#define MME3_RTR_DBG_N_ARB_E_MASK                                    0x700
#define MME3_RTR_DBG_N_ARB_S_SHIFT                                   16
#define MME3_RTR_DBG_N_ARB_S_MASK                                    0x70000
#define MME3_RTR_DBG_N_ARB_L_SHIFT                                   24
#define MME3_RTR_DBG_N_ARB_L_MASK                                    0x7000000

#define mmMME3_RTR_DBG_S_ARB                                         0xC030C
/* MME3_RTR_DBG_S_ARB */
#define MME3_RTR_DBG_S_ARB_W_SHIFT                                   0
#define MME3_RTR_DBG_S_ARB_W_MASK                                    0x7
#define MME3_RTR_DBG_S_ARB_E_SHIFT                                   8
#define MME3_RTR_DBG_S_ARB_E_MASK                                    0x700
#define MME3_RTR_DBG_S_ARB_N_SHIFT                                   16
#define MME3_RTR_DBG_S_ARB_N_MASK                                    0x70000
#define MME3_RTR_DBG_S_ARB_L_SHIFT                                   24
#define MME3_RTR_DBG_S_ARB_L_MASK                                    0x7000000

#define mmMME3_RTR_DBG_L_ARB                                         0xC0310
/* MME3_RTR_DBG_L_ARB */
#define MME3_RTR_DBG_L_ARB_W_SHIFT                                   0
#define MME3_RTR_DBG_L_ARB_W_MASK                                    0x7
#define MME3_RTR_DBG_L_ARB_E_SHIFT                                   8
#define MME3_RTR_DBG_L_ARB_E_MASK                                    0x700
#define MME3_RTR_DBG_L_ARB_S_SHIFT                                   16
#define MME3_RTR_DBG_L_ARB_S_MASK                                    0x70000
#define MME3_RTR_DBG_L_ARB_N_SHIFT                                   24
#define MME3_RTR_DBG_L_ARB_N_MASK                                    0x7000000

#define mmMME3_RTR_DBG_E_ARB_MAX                                     0xC0320
/* MME3_RTR_DBG_E_ARB_MAX */
#define MME3_RTR_DBG_E_ARB_MAX_CREDIT_SHIFT                          0
#define MME3_RTR_DBG_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME3_RTR_DBG_W_ARB_MAX                                     0xC0324
/* MME3_RTR_DBG_W_ARB_MAX */
#define MME3_RTR_DBG_W_ARB_MAX_CREDIT_SHIFT                          0
#define MME3_RTR_DBG_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME3_RTR_DBG_N_ARB_MAX                                     0xC0328
/* MME3_RTR_DBG_N_ARB_MAX */
#define MME3_RTR_DBG_N_ARB_MAX_CREDIT_SHIFT                          0
#define MME3_RTR_DBG_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME3_RTR_DBG_S_ARB_MAX                                     0xC032C
/* MME3_RTR_DBG_S_ARB_MAX */
#define MME3_RTR_DBG_S_ARB_MAX_CREDIT_SHIFT                          0
#define MME3_RTR_DBG_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME3_RTR_DBG_L_ARB_MAX                                     0xC0330
/* MME3_RTR_DBG_L_ARB_MAX */
#define MME3_RTR_DBG_L_ARB_MAX_CREDIT_SHIFT                          0
#define MME3_RTR_DBG_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmMME3_RTR_SPLIT_COEF_0                                      0xC0400

#define mmMME3_RTR_SPLIT_COEF_1                                      0xC0404

#define mmMME3_RTR_SPLIT_COEF_2                                      0xC0408

#define mmMME3_RTR_SPLIT_COEF_3                                      0xC040C

#define mmMME3_RTR_SPLIT_COEF_4                                      0xC0410

#define mmMME3_RTR_SPLIT_COEF_5                                      0xC0414

#define mmMME3_RTR_SPLIT_COEF_6                                      0xC0418

#define mmMME3_RTR_SPLIT_COEF_7                                      0xC041C

#define mmMME3_RTR_SPLIT_COEF_8                                      0xC0420

#define mmMME3_RTR_SPLIT_COEF_9                                      0xC0424
/* MME3_RTR_SPLIT_COEF */
#define MME3_RTR_SPLIT_COEF_VAL_SHIFT                                0
#define MME3_RTR_SPLIT_COEF_VAL_MASK                                 0xFFFF

#define mmMME3_RTR_SPLIT_CFG                                         0xC0440
/* MME3_RTR_SPLIT_CFG */
#define MME3_RTR_SPLIT_CFG_FORCE_WAK_ORDER_SHIFT                     0
#define MME3_RTR_SPLIT_CFG_FORCE_WAK_ORDER_MASK                      0x1
#define MME3_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_SHIFT                  1
#define MME3_RTR_SPLIT_CFG_FORCE_STRONG_ORDER_MASK                   0x2
#define MME3_RTR_SPLIT_CFG_DEFAULT_MESH_SHIFT                        2
#define MME3_RTR_SPLIT_CFG_DEFAULT_MESH_MASK                         0xC
#define MME3_RTR_SPLIT_CFG_WR_RATE_LIM_EN_SHIFT                      4
#define MME3_RTR_SPLIT_CFG_WR_RATE_LIM_EN_MASK                       0x10
#define MME3_RTR_SPLIT_CFG_RD_RATE_LIM_EN_SHIFT                      5
#define MME3_RTR_SPLIT_CFG_RD_RATE_LIM_EN_MASK                       0x20
#define MME3_RTR_SPLIT_CFG_B2B_OPT_SHIFT                             6
#define MME3_RTR_SPLIT_CFG_B2B_OPT_MASK                              0x1C0

#define mmMME3_RTR_SPLIT_RD_SAT                                      0xC0444
/* MME3_RTR_SPLIT_RD_SAT */
#define MME3_RTR_SPLIT_RD_SAT_VAL_SHIFT                              0
#define MME3_RTR_SPLIT_RD_SAT_VAL_MASK                               0xFFFF

#define mmMME3_RTR_SPLIT_RD_RST_TOKEN                                0xC0448
/* MME3_RTR_SPLIT_RD_RST_TOKEN */
#define MME3_RTR_SPLIT_RD_RST_TOKEN_VAL_SHIFT                        0
#define MME3_RTR_SPLIT_RD_RST_TOKEN_VAL_MASK                         0xFFFF

#define mmMME3_RTR_SPLIT_RD_TIMEOUT_0                                0xC044C

#define mmMME3_RTR_SPLIT_RD_TIMEOUT_1                                0xC0450
/* MME3_RTR_SPLIT_RD_TIMEOUT */
#define MME3_RTR_SPLIT_RD_TIMEOUT_VAL_SHIFT                          0
#define MME3_RTR_SPLIT_RD_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmMME3_RTR_SPLIT_WR_SAT                                      0xC0454
/* MME3_RTR_SPLIT_WR_SAT */
#define MME3_RTR_SPLIT_WR_SAT_VAL_SHIFT                              0
#define MME3_RTR_SPLIT_WR_SAT_VAL_MASK                               0xFFFF

#define mmMME3_RTR_WPLIT_WR_TST_TOLEN                                0xC0458
/* MME3_RTR_WPLIT_WR_TST_TOLEN */
#define MME3_RTR_WPLIT_WR_TST_TOLEN_VAL_SHIFT                        0
#define MME3_RTR_WPLIT_WR_TST_TOLEN_VAL_MASK                         0xFFFF

#define mmMME3_RTR_SPLIT_WR_TIMEOUT_0                                0xC045C

#define mmMME3_RTR_SPLIT_WR_TIMEOUT_1                                0xC0460
/* MME3_RTR_SPLIT_WR_TIMEOUT */
#define MME3_RTR_SPLIT_WR_TIMEOUT_VAL_SHIFT                          0
#define MME3_RTR_SPLIT_WR_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmMME3_RTR_HBW_RANGE_HIT                                     0xC0470
/* MME3_RTR_HBW_RANGE_HIT */
#define MME3_RTR_HBW_RANGE_HIT_IND_SHIFT                             0
#define MME3_RTR_HBW_RANGE_HIT_IND_MASK                              0xFF

#define mmMME3_RTR_HBW_RANGE_MASK_L_0                                0xC0480

#define mmMME3_RTR_HBW_RANGE_MASK_L_1                                0xC0484

#define mmMME3_RTR_HBW_RANGE_MASK_L_2                                0xC0488

#define mmMME3_RTR_HBW_RANGE_MASK_L_3                                0xC048C

#define mmMME3_RTR_HBW_RANGE_MASK_L_4                                0xC0490

#define mmMME3_RTR_HBW_RANGE_MASK_L_5                                0xC0494

#define mmMME3_RTR_HBW_RANGE_MASK_L_6                                0xC0498

#define mmMME3_RTR_HBW_RANGE_MASK_L_7                                0xC049C
/* MME3_RTR_HBW_RANGE_MASK_L */
#define MME3_RTR_HBW_RANGE_MASK_L_VAL_SHIFT                          0
#define MME3_RTR_HBW_RANGE_MASK_L_VAL_MASK                           0xFFFFFFFF

#define mmMME3_RTR_HBW_RANGE_MASK_H_0                                0xC04A0

#define mmMME3_RTR_HBW_RANGE_MASK_H_1                                0xC04A4

#define mmMME3_RTR_HBW_RANGE_MASK_H_2                                0xC04A8

#define mmMME3_RTR_HBW_RANGE_MASK_H_3                                0xC04AC

#define mmMME3_RTR_HBW_RANGE_MASK_H_4                                0xC04B0

#define mmMME3_RTR_HBW_RANGE_MASK_H_5                                0xC04B4

#define mmMME3_RTR_HBW_RANGE_MASK_H_6                                0xC04B8

#define mmMME3_RTR_HBW_RANGE_MASK_H_7                                0xC04BC
/* MME3_RTR_HBW_RANGE_MASK_H */
#define MME3_RTR_HBW_RANGE_MASK_H_VAL_SHIFT                          0
#define MME3_RTR_HBW_RANGE_MASK_H_VAL_MASK                           0x3FFFF

#define mmMME3_RTR_HBW_RANGE_BASE_L_0                                0xC04C0

#define mmMME3_RTR_HBW_RANGE_BASE_L_1                                0xC04C4

#define mmMME3_RTR_HBW_RANGE_BASE_L_2                                0xC04C8

#define mmMME3_RTR_HBW_RANGE_BASE_L_3                                0xC04CC

#define mmMME3_RTR_HBW_RANGE_BASE_L_4                                0xC04D0

#define mmMME3_RTR_HBW_RANGE_BASE_L_5                                0xC04D4

#define mmMME3_RTR_HBW_RANGE_BASE_L_6                                0xC04D8

#define mmMME3_RTR_HBW_RANGE_BASE_L_7                                0xC04DC
/* MME3_RTR_HBW_RANGE_BASE_L */
#define MME3_RTR_HBW_RANGE_BASE_L_VAL_SHIFT                          0
#define MME3_RTR_HBW_RANGE_BASE_L_VAL_MASK                           0xFFFFFFFF

#define mmMME3_RTR_HBW_RANGE_BASE_H_0                                0xC04E0

#define mmMME3_RTR_HBW_RANGE_BASE_H_1                                0xC04E4

#define mmMME3_RTR_HBW_RANGE_BASE_H_2                                0xC04E8

#define mmMME3_RTR_HBW_RANGE_BASE_H_3                                0xC04EC

#define mmMME3_RTR_HBW_RANGE_BASE_H_4                                0xC04F0

#define mmMME3_RTR_HBW_RANGE_BASE_H_5                                0xC04F4

#define mmMME3_RTR_HBW_RANGE_BASE_H_6                                0xC04F8

#define mmMME3_RTR_HBW_RANGE_BASE_H_7                                0xC04FC
/* MME3_RTR_HBW_RANGE_BASE_H */
#define MME3_RTR_HBW_RANGE_BASE_H_VAL_SHIFT                          0
#define MME3_RTR_HBW_RANGE_BASE_H_VAL_MASK                           0x3FFFF

#define mmMME3_RTR_LBW_RANGE_HIT                                     0xC0500
/* MME3_RTR_LBW_RANGE_HIT */
#define MME3_RTR_LBW_RANGE_HIT_IND_SHIFT                             0
#define MME3_RTR_LBW_RANGE_HIT_IND_MASK                              0xFFFF

#define mmMME3_RTR_LBW_RANGE_MASK_0                                  0xC0510

#define mmMME3_RTR_LBW_RANGE_MASK_1                                  0xC0514

#define mmMME3_RTR_LBW_RANGE_MASK_2                                  0xC0518

#define mmMME3_RTR_LBW_RANGE_MASK_3                                  0xC051C

#define mmMME3_RTR_LBW_RANGE_MASK_4                                  0xC0520

#define mmMME3_RTR_LBW_RANGE_MASK_5                                  0xC0524

#define mmMME3_RTR_LBW_RANGE_MASK_6                                  0xC0528

#define mmMME3_RTR_LBW_RANGE_MASK_7                                  0xC052C

#define mmMME3_RTR_LBW_RANGE_MASK_8                                  0xC0530

#define mmMME3_RTR_LBW_RANGE_MASK_9                                  0xC0534

#define mmMME3_RTR_LBW_RANGE_MASK_10                                 0xC0538

#define mmMME3_RTR_LBW_RANGE_MASK_11                                 0xC053C

#define mmMME3_RTR_LBW_RANGE_MASK_12                                 0xC0540

#define mmMME3_RTR_LBW_RANGE_MASK_13                                 0xC0544

#define mmMME3_RTR_LBW_RANGE_MASK_14                                 0xC0548

#define mmMME3_RTR_LBW_RANGE_MASK_15                                 0xC054C
/* MME3_RTR_LBW_RANGE_MASK */
#define MME3_RTR_LBW_RANGE_MASK_VAL_SHIFT                            0
#define MME3_RTR_LBW_RANGE_MASK_VAL_MASK                             0x3FFFFFF

#define mmMME3_RTR_LBW_RANGE_BASE_0                                  0xC0550

#define mmMME3_RTR_LBW_RANGE_BASE_1                                  0xC0554

#define mmMME3_RTR_LBW_RANGE_BASE_2                                  0xC0558

#define mmMME3_RTR_LBW_RANGE_BASE_3                                  0xC055C

#define mmMME3_RTR_LBW_RANGE_BASE_4                                  0xC0560

#define mmMME3_RTR_LBW_RANGE_BASE_5                                  0xC0564

#define mmMME3_RTR_LBW_RANGE_BASE_6                                  0xC0568

#define mmMME3_RTR_LBW_RANGE_BASE_7                                  0xC056C

#define mmMME3_RTR_LBW_RANGE_BASE_8                                  0xC0570

#define mmMME3_RTR_LBW_RANGE_BASE_9                                  0xC0574

#define mmMME3_RTR_LBW_RANGE_BASE_10                                 0xC0578

#define mmMME3_RTR_LBW_RANGE_BASE_11                                 0xC057C

#define mmMME3_RTR_LBW_RANGE_BASE_12                                 0xC0580

#define mmMME3_RTR_LBW_RANGE_BASE_13                                 0xC0584

#define mmMME3_RTR_LBW_RANGE_BASE_14                                 0xC0588

#define mmMME3_RTR_LBW_RANGE_BASE_15                                 0xC058C
/* MME3_RTR_LBW_RANGE_BASE */
#define MME3_RTR_LBW_RANGE_BASE_VAL_SHIFT                            0
#define MME3_RTR_LBW_RANGE_BASE_VAL_MASK                             0x3FFFFFF

#define mmMME3_RTR_RGLTR                                             0xC0590
/* MME3_RTR_RGLTR */
#define MME3_RTR_RGLTR_WR_EN_SHIFT                                   0
#define MME3_RTR_RGLTR_WR_EN_MASK                                    0x1
#define MME3_RTR_RGLTR_RD_EN_SHIFT                                   4
#define MME3_RTR_RGLTR_RD_EN_MASK                                    0x10

#define mmMME3_RTR_RGLTR_WR_RESULT                                   0xC0594
/* MME3_RTR_RGLTR_WR_RESULT */
#define MME3_RTR_RGLTR_WR_RESULT_VAL_SHIFT                           0
#define MME3_RTR_RGLTR_WR_RESULT_VAL_MASK                            0xFF

#define mmMME3_RTR_RGLTR_RD_RESULT                                   0xC0598
/* MME3_RTR_RGLTR_RD_RESULT */
#define MME3_RTR_RGLTR_RD_RESULT_VAL_SHIFT                           0
#define MME3_RTR_RGLTR_RD_RESULT_VAL_MASK                            0xFF

#define mmMME3_RTR_SCRAMB_EN                                         0xC0600
/* MME3_RTR_SCRAMB_EN */
#define MME3_RTR_SCRAMB_EN_VAL_SHIFT                                 0
#define MME3_RTR_SCRAMB_EN_VAL_MASK                                  0x1

#define mmMME3_RTR_NON_LIN_SCRAMB                                    0xC0604
/* MME3_RTR_NON_LIN_SCRAMB */
#define MME3_RTR_NON_LIN_SCRAMB_EN_SHIFT                             0
#define MME3_RTR_NON_LIN_SCRAMB_EN_MASK                              0x1

#endif /* ASIC_REG_MME3_RTR_H_ */

