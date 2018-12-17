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

#ifndef ASIC_REG_TPC0_NRTR_H_
#define ASIC_REG_TPC0_NRTR_H_

/*
 *****************************************
 *   TPC0_NRTR (Prototype: IF_NRTR)
 *****************************************
 */

#define mmTPC0_NRTR_HBW_MAX_CRED                                     0xE00100
/* TPC0_NRTR_HBW_MAX_CRED */
#define TPC0_NRTR_HBW_MAX_CRED_WR_RQ_SHIFT                           0
#define TPC0_NRTR_HBW_MAX_CRED_WR_RQ_MASK                            0x3F
#define TPC0_NRTR_HBW_MAX_CRED_WR_RS_SHIFT                           8
#define TPC0_NRTR_HBW_MAX_CRED_WR_RS_MASK                            0x3F00
#define TPC0_NRTR_HBW_MAX_CRED_RD_RQ_SHIFT                           16
#define TPC0_NRTR_HBW_MAX_CRED_RD_RQ_MASK                            0x3F0000
#define TPC0_NRTR_HBW_MAX_CRED_RD_RS_SHIFT                           24
#define TPC0_NRTR_HBW_MAX_CRED_RD_RS_MASK                            0x3F000000

#define mmTPC0_NRTR_LBW_MAX_CRED                                     0xE00120
/* TPC0_NRTR_LBW_MAX_CRED */
#define TPC0_NRTR_LBW_MAX_CRED_WR_RQ_SHIFT                           0
#define TPC0_NRTR_LBW_MAX_CRED_WR_RQ_MASK                            0x3F
#define TPC0_NRTR_LBW_MAX_CRED_WR_RS_SHIFT                           8
#define TPC0_NRTR_LBW_MAX_CRED_WR_RS_MASK                            0x3F00
#define TPC0_NRTR_LBW_MAX_CRED_RD_RQ_SHIFT                           16
#define TPC0_NRTR_LBW_MAX_CRED_RD_RQ_MASK                            0x3F0000
#define TPC0_NRTR_LBW_MAX_CRED_RD_RS_SHIFT                           24
#define TPC0_NRTR_LBW_MAX_CRED_RD_RS_MASK                            0x3F000000

#define mmTPC0_NRTR_DBG_E_ARB                                        0xE00300
/* TPC0_NRTR_DBG_E_ARB */
#define TPC0_NRTR_DBG_E_ARB_W_SHIFT                                  0
#define TPC0_NRTR_DBG_E_ARB_W_MASK                                   0x7
#define TPC0_NRTR_DBG_E_ARB_S_SHIFT                                  8
#define TPC0_NRTR_DBG_E_ARB_S_MASK                                   0x700
#define TPC0_NRTR_DBG_E_ARB_N_SHIFT                                  16
#define TPC0_NRTR_DBG_E_ARB_N_MASK                                   0x70000
#define TPC0_NRTR_DBG_E_ARB_L_SHIFT                                  24
#define TPC0_NRTR_DBG_E_ARB_L_MASK                                   0x7000000

#define mmTPC0_NRTR_DBG_W_ARB                                        0xE00304
/* TPC0_NRTR_DBG_W_ARB */
#define TPC0_NRTR_DBG_W_ARB_E_SHIFT                                  0
#define TPC0_NRTR_DBG_W_ARB_E_MASK                                   0x7
#define TPC0_NRTR_DBG_W_ARB_S_SHIFT                                  8
#define TPC0_NRTR_DBG_W_ARB_S_MASK                                   0x700
#define TPC0_NRTR_DBG_W_ARB_N_SHIFT                                  16
#define TPC0_NRTR_DBG_W_ARB_N_MASK                                   0x70000
#define TPC0_NRTR_DBG_W_ARB_L_SHIFT                                  24
#define TPC0_NRTR_DBG_W_ARB_L_MASK                                   0x7000000

#define mmTPC0_NRTR_DBG_N_ARB                                        0xE00308
/* TPC0_NRTR_DBG_N_ARB */
#define TPC0_NRTR_DBG_N_ARB_W_SHIFT                                  0
#define TPC0_NRTR_DBG_N_ARB_W_MASK                                   0x7
#define TPC0_NRTR_DBG_N_ARB_E_SHIFT                                  8
#define TPC0_NRTR_DBG_N_ARB_E_MASK                                   0x700
#define TPC0_NRTR_DBG_N_ARB_S_SHIFT                                  16
#define TPC0_NRTR_DBG_N_ARB_S_MASK                                   0x70000
#define TPC0_NRTR_DBG_N_ARB_L_SHIFT                                  24
#define TPC0_NRTR_DBG_N_ARB_L_MASK                                   0x7000000

#define mmTPC0_NRTR_DBG_S_ARB                                        0xE0030C
/* TPC0_NRTR_DBG_S_ARB */
#define TPC0_NRTR_DBG_S_ARB_W_SHIFT                                  0
#define TPC0_NRTR_DBG_S_ARB_W_MASK                                   0x7
#define TPC0_NRTR_DBG_S_ARB_E_SHIFT                                  8
#define TPC0_NRTR_DBG_S_ARB_E_MASK                                   0x700
#define TPC0_NRTR_DBG_S_ARB_N_SHIFT                                  16
#define TPC0_NRTR_DBG_S_ARB_N_MASK                                   0x70000
#define TPC0_NRTR_DBG_S_ARB_L_SHIFT                                  24
#define TPC0_NRTR_DBG_S_ARB_L_MASK                                   0x7000000

#define mmTPC0_NRTR_DBG_L_ARB                                        0xE00310
/* TPC0_NRTR_DBG_L_ARB */
#define TPC0_NRTR_DBG_L_ARB_W_SHIFT                                  0
#define TPC0_NRTR_DBG_L_ARB_W_MASK                                   0x7
#define TPC0_NRTR_DBG_L_ARB_E_SHIFT                                  8
#define TPC0_NRTR_DBG_L_ARB_E_MASK                                   0x700
#define TPC0_NRTR_DBG_L_ARB_S_SHIFT                                  16
#define TPC0_NRTR_DBG_L_ARB_S_MASK                                   0x70000
#define TPC0_NRTR_DBG_L_ARB_N_SHIFT                                  24
#define TPC0_NRTR_DBG_L_ARB_N_MASK                                   0x7000000

#define mmTPC0_NRTR_DBG_E_ARB_MAX                                    0xE00320
/* TPC0_NRTR_DBG_E_ARB_MAX */
#define TPC0_NRTR_DBG_E_ARB_MAX_CREDIT_SHIFT                         0
#define TPC0_NRTR_DBG_E_ARB_MAX_CREDIT_MASK                          0x3F

#define mmTPC0_NRTR_DBG_W_ARB_MAX                                    0xE00324
/* TPC0_NRTR_DBG_W_ARB_MAX */
#define TPC0_NRTR_DBG_W_ARB_MAX_CREDIT_SHIFT                         0
#define TPC0_NRTR_DBG_W_ARB_MAX_CREDIT_MASK                          0x3F

#define mmTPC0_NRTR_DBG_N_ARB_MAX                                    0xE00328
/* TPC0_NRTR_DBG_N_ARB_MAX */
#define TPC0_NRTR_DBG_N_ARB_MAX_CREDIT_SHIFT                         0
#define TPC0_NRTR_DBG_N_ARB_MAX_CREDIT_MASK                          0x3F

#define mmTPC0_NRTR_DBG_S_ARB_MAX                                    0xE0032C
/* TPC0_NRTR_DBG_S_ARB_MAX */
#define TPC0_NRTR_DBG_S_ARB_MAX_CREDIT_SHIFT                         0
#define TPC0_NRTR_DBG_S_ARB_MAX_CREDIT_MASK                          0x3F

#define mmTPC0_NRTR_DBG_L_ARB_MAX                                    0xE00330
/* TPC0_NRTR_DBG_L_ARB_MAX */
#define TPC0_NRTR_DBG_L_ARB_MAX_CREDIT_SHIFT                         0
#define TPC0_NRTR_DBG_L_ARB_MAX_CREDIT_MASK                          0x3F

#define mmTPC0_NRTR_SPLIT_COEF_0                                     0xE00400

#define mmTPC0_NRTR_SPLIT_COEF_1                                     0xE00404

#define mmTPC0_NRTR_SPLIT_COEF_2                                     0xE00408

#define mmTPC0_NRTR_SPLIT_COEF_3                                     0xE0040C

#define mmTPC0_NRTR_SPLIT_COEF_4                                     0xE00410

#define mmTPC0_NRTR_SPLIT_COEF_5                                     0xE00414

#define mmTPC0_NRTR_SPLIT_COEF_6                                     0xE00418

#define mmTPC0_NRTR_SPLIT_COEF_7                                     0xE0041C

#define mmTPC0_NRTR_SPLIT_COEF_8                                     0xE00420

#define mmTPC0_NRTR_SPLIT_COEF_9                                     0xE00424
/* TPC0_NRTR_SPLIT_COEF */
#define TPC0_NRTR_SPLIT_COEF_VAL_SHIFT                               0
#define TPC0_NRTR_SPLIT_COEF_VAL_MASK                                0xFFFF

#define mmTPC0_NRTR_SPLIT_CFG                                        0xE00440
/* TPC0_NRTR_SPLIT_CFG */
#define TPC0_NRTR_SPLIT_CFG_FORCE_WAK_ORDER_SHIFT                    0
#define TPC0_NRTR_SPLIT_CFG_FORCE_WAK_ORDER_MASK                     0x1
#define TPC0_NRTR_SPLIT_CFG_FORCE_STRONG_ORDER_SHIFT                 1
#define TPC0_NRTR_SPLIT_CFG_FORCE_STRONG_ORDER_MASK                  0x2
#define TPC0_NRTR_SPLIT_CFG_DEFAULT_MESH_SHIFT                       2
#define TPC0_NRTR_SPLIT_CFG_DEFAULT_MESH_MASK                        0xC
#define TPC0_NRTR_SPLIT_CFG_RD_RATE_LIM_EN_SHIFT                     4
#define TPC0_NRTR_SPLIT_CFG_RD_RATE_LIM_EN_MASK                      0x10
#define TPC0_NRTR_SPLIT_CFG_WR_RATE_LIM_EN_SHIFT                     5
#define TPC0_NRTR_SPLIT_CFG_WR_RATE_LIM_EN_MASK                      0x20
#define TPC0_NRTR_SPLIT_CFG_B2B_OPT_SHIFT                            6
#define TPC0_NRTR_SPLIT_CFG_B2B_OPT_MASK                             0x1C0

#define mmTPC0_NRTR_SPLIT_RD_SAT                                     0xE00444
/* TPC0_NRTR_SPLIT_RD_SAT */
#define TPC0_NRTR_SPLIT_RD_SAT_VAL_SHIFT                             0
#define TPC0_NRTR_SPLIT_RD_SAT_VAL_MASK                              0xFFFF

#define mmTPC0_NRTR_SPLIT_RD_RST_TOKEN                               0xE00448
/* TPC0_NRTR_SPLIT_RD_RST_TOKEN */
#define TPC0_NRTR_SPLIT_RD_RST_TOKEN_VAL_SHIFT                       0
#define TPC0_NRTR_SPLIT_RD_RST_TOKEN_VAL_MASK                        0xFFFF

#define mmTPC0_NRTR_SPLIT_RD_TIMEOUT_0                               0xE0044C

#define mmTPC0_NRTR_SPLIT_RD_TIMEOUT_1                               0xE00450
/* TPC0_NRTR_SPLIT_RD_TIMEOUT */
#define TPC0_NRTR_SPLIT_RD_TIMEOUT_VAL_SHIFT                         0
#define TPC0_NRTR_SPLIT_RD_TIMEOUT_VAL_MASK                          0xFFFFFFFF

#define mmTPC0_NRTR_SPLIT_WR_SAT                                     0xE00454
/* TPC0_NRTR_SPLIT_WR_SAT */
#define TPC0_NRTR_SPLIT_WR_SAT_VAL_SHIFT                             0
#define TPC0_NRTR_SPLIT_WR_SAT_VAL_MASK                              0xFFFF

#define mmTPC0_NRTR_WPLIT_WR_TST_TOLEN                               0xE00458
/* TPC0_NRTR_WPLIT_WR_TST_TOLEN */
#define TPC0_NRTR_WPLIT_WR_TST_TOLEN_VAL_SHIFT                       0
#define TPC0_NRTR_WPLIT_WR_TST_TOLEN_VAL_MASK                        0xFFFF

#define mmTPC0_NRTR_SPLIT_WR_TIMEOUT_0                               0xE0045C

#define mmTPC0_NRTR_SPLIT_WR_TIMEOUT_1                               0xE00460
/* TPC0_NRTR_SPLIT_WR_TIMEOUT */
#define TPC0_NRTR_SPLIT_WR_TIMEOUT_VAL_SHIFT                         0
#define TPC0_NRTR_SPLIT_WR_TIMEOUT_VAL_MASK                          0xFFFFFFFF

#define mmTPC0_NRTR_HBW_RANGE_HIT                                    0xE00470
/* TPC0_NRTR_HBW_RANGE_HIT */
#define TPC0_NRTR_HBW_RANGE_HIT_IND_SHIFT                            0
#define TPC0_NRTR_HBW_RANGE_HIT_IND_MASK                             0xFF

#define mmTPC0_NRTR_HBW_RANGE_MASK_L_0                               0xE00480

#define mmTPC0_NRTR_HBW_RANGE_MASK_L_1                               0xE00484

#define mmTPC0_NRTR_HBW_RANGE_MASK_L_2                               0xE00488

#define mmTPC0_NRTR_HBW_RANGE_MASK_L_3                               0xE0048C

#define mmTPC0_NRTR_HBW_RANGE_MASK_L_4                               0xE00490

#define mmTPC0_NRTR_HBW_RANGE_MASK_L_5                               0xE00494

#define mmTPC0_NRTR_HBW_RANGE_MASK_L_6                               0xE00498

#define mmTPC0_NRTR_HBW_RANGE_MASK_L_7                               0xE0049C
/* TPC0_NRTR_HBW_RANGE_MASK_L */
#define TPC0_NRTR_HBW_RANGE_MASK_L_VAL_SHIFT                         0
#define TPC0_NRTR_HBW_RANGE_MASK_L_VAL_MASK                          0xFFFFFFFF

#define mmTPC0_NRTR_HBW_RANGE_MASK_H_0                               0xE004A0

#define mmTPC0_NRTR_HBW_RANGE_MASK_H_1                               0xE004A4

#define mmTPC0_NRTR_HBW_RANGE_MASK_H_2                               0xE004A8

#define mmTPC0_NRTR_HBW_RANGE_MASK_H_3                               0xE004AC

#define mmTPC0_NRTR_HBW_RANGE_MASK_H_4                               0xE004B0

#define mmTPC0_NRTR_HBW_RANGE_MASK_H_5                               0xE004B4

#define mmTPC0_NRTR_HBW_RANGE_MASK_H_6                               0xE004B8

#define mmTPC0_NRTR_HBW_RANGE_MASK_H_7                               0xE004BC
/* TPC0_NRTR_HBW_RANGE_MASK_H */
#define TPC0_NRTR_HBW_RANGE_MASK_H_VAL_SHIFT                         0
#define TPC0_NRTR_HBW_RANGE_MASK_H_VAL_MASK                          0x3FFFF

#define mmTPC0_NRTR_HBW_RANGE_BASE_L_0                               0xE004C0

#define mmTPC0_NRTR_HBW_RANGE_BASE_L_1                               0xE004C4

#define mmTPC0_NRTR_HBW_RANGE_BASE_L_2                               0xE004C8

#define mmTPC0_NRTR_HBW_RANGE_BASE_L_3                               0xE004CC

#define mmTPC0_NRTR_HBW_RANGE_BASE_L_4                               0xE004D0

#define mmTPC0_NRTR_HBW_RANGE_BASE_L_5                               0xE004D4

#define mmTPC0_NRTR_HBW_RANGE_BASE_L_6                               0xE004D8

#define mmTPC0_NRTR_HBW_RANGE_BASE_L_7                               0xE004DC
/* TPC0_NRTR_HBW_RANGE_BASE_L */
#define TPC0_NRTR_HBW_RANGE_BASE_L_VAL_SHIFT                         0
#define TPC0_NRTR_HBW_RANGE_BASE_L_VAL_MASK                          0xFFFFFFFF

#define mmTPC0_NRTR_HBW_RANGE_BASE_H_0                               0xE004E0

#define mmTPC0_NRTR_HBW_RANGE_BASE_H_1                               0xE004E4

#define mmTPC0_NRTR_HBW_RANGE_BASE_H_2                               0xE004E8

#define mmTPC0_NRTR_HBW_RANGE_BASE_H_3                               0xE004EC

#define mmTPC0_NRTR_HBW_RANGE_BASE_H_4                               0xE004F0

#define mmTPC0_NRTR_HBW_RANGE_BASE_H_5                               0xE004F4

#define mmTPC0_NRTR_HBW_RANGE_BASE_H_6                               0xE004F8

#define mmTPC0_NRTR_HBW_RANGE_BASE_H_7                               0xE004FC
/* TPC0_NRTR_HBW_RANGE_BASE_H */
#define TPC0_NRTR_HBW_RANGE_BASE_H_VAL_SHIFT                         0
#define TPC0_NRTR_HBW_RANGE_BASE_H_VAL_MASK                          0x3FFFF

#define mmTPC0_NRTR_LBW_RANGE_HIT                                    0xE00500
/* TPC0_NRTR_LBW_RANGE_HIT */
#define TPC0_NRTR_LBW_RANGE_HIT_IND_SHIFT                            0
#define TPC0_NRTR_LBW_RANGE_HIT_IND_MASK                             0xFFFF

#define mmTPC0_NRTR_LBW_RANGE_MASK_0                                 0xE00510

#define mmTPC0_NRTR_LBW_RANGE_MASK_1                                 0xE00514

#define mmTPC0_NRTR_LBW_RANGE_MASK_2                                 0xE00518

#define mmTPC0_NRTR_LBW_RANGE_MASK_3                                 0xE0051C

#define mmTPC0_NRTR_LBW_RANGE_MASK_4                                 0xE00520

#define mmTPC0_NRTR_LBW_RANGE_MASK_5                                 0xE00524

#define mmTPC0_NRTR_LBW_RANGE_MASK_6                                 0xE00528

#define mmTPC0_NRTR_LBW_RANGE_MASK_7                                 0xE0052C

#define mmTPC0_NRTR_LBW_RANGE_MASK_8                                 0xE00530

#define mmTPC0_NRTR_LBW_RANGE_MASK_9                                 0xE00534

#define mmTPC0_NRTR_LBW_RANGE_MASK_10                                0xE00538

#define mmTPC0_NRTR_LBW_RANGE_MASK_11                                0xE0053C

#define mmTPC0_NRTR_LBW_RANGE_MASK_12                                0xE00540

#define mmTPC0_NRTR_LBW_RANGE_MASK_13                                0xE00544

#define mmTPC0_NRTR_LBW_RANGE_MASK_14                                0xE00548

#define mmTPC0_NRTR_LBW_RANGE_MASK_15                                0xE0054C
/* TPC0_NRTR_LBW_RANGE_MASK */
#define TPC0_NRTR_LBW_RANGE_MASK_VAL_SHIFT                           0
#define TPC0_NRTR_LBW_RANGE_MASK_VAL_MASK                            0x3FFFFFF

#define mmTPC0_NRTR_LBW_RANGE_BASE_0                                 0xE00550

#define mmTPC0_NRTR_LBW_RANGE_BASE_1                                 0xE00554

#define mmTPC0_NRTR_LBW_RANGE_BASE_2                                 0xE00558

#define mmTPC0_NRTR_LBW_RANGE_BASE_3                                 0xE0055C

#define mmTPC0_NRTR_LBW_RANGE_BASE_4                                 0xE00560

#define mmTPC0_NRTR_LBW_RANGE_BASE_5                                 0xE00564

#define mmTPC0_NRTR_LBW_RANGE_BASE_6                                 0xE00568

#define mmTPC0_NRTR_LBW_RANGE_BASE_7                                 0xE0056C

#define mmTPC0_NRTR_LBW_RANGE_BASE_8                                 0xE00570

#define mmTPC0_NRTR_LBW_RANGE_BASE_9                                 0xE00574

#define mmTPC0_NRTR_LBW_RANGE_BASE_10                                0xE00578

#define mmTPC0_NRTR_LBW_RANGE_BASE_11                                0xE0057C

#define mmTPC0_NRTR_LBW_RANGE_BASE_12                                0xE00580

#define mmTPC0_NRTR_LBW_RANGE_BASE_13                                0xE00584

#define mmTPC0_NRTR_LBW_RANGE_BASE_14                                0xE00588

#define mmTPC0_NRTR_LBW_RANGE_BASE_15                                0xE0058C
/* TPC0_NRTR_LBW_RANGE_BASE */
#define TPC0_NRTR_LBW_RANGE_BASE_VAL_SHIFT                           0
#define TPC0_NRTR_LBW_RANGE_BASE_VAL_MASK                            0x3FFFFFF

#define mmTPC0_NRTR_RGLTR                                            0xE00590
/* TPC0_NRTR_RGLTR */
#define TPC0_NRTR_RGLTR_WR_EN_SHIFT                                  0
#define TPC0_NRTR_RGLTR_WR_EN_MASK                                   0x1
#define TPC0_NRTR_RGLTR_RD_EN_SHIFT                                  4
#define TPC0_NRTR_RGLTR_RD_EN_MASK                                   0x10

#define mmTPC0_NRTR_RGLTR_WR_RESULT                                  0xE00594
/* TPC0_NRTR_RGLTR_WR_RESULT */
#define TPC0_NRTR_RGLTR_WR_RESULT_VAL_SHIFT                          0
#define TPC0_NRTR_RGLTR_WR_RESULT_VAL_MASK                           0xFF

#define mmTPC0_NRTR_RGLTR_RD_RESULT                                  0xE00598
/* TPC0_NRTR_RGLTR_RD_RESULT */
#define TPC0_NRTR_RGLTR_RD_RESULT_VAL_SHIFT                          0
#define TPC0_NRTR_RGLTR_RD_RESULT_VAL_MASK                           0xFF

#define mmTPC0_NRTR_SCRAMB_EN                                        0xE00600
/* TPC0_NRTR_SCRAMB_EN */
#define TPC0_NRTR_SCRAMB_EN_VAL_SHIFT                                0
#define TPC0_NRTR_SCRAMB_EN_VAL_MASK                                 0x1

#define mmTPC0_NRTR_NON_LIN_SCRAMB                                   0xE00604
/* TPC0_NRTR_NON_LIN_SCRAMB */
#define TPC0_NRTR_NON_LIN_SCRAMB_EN_SHIFT                            0
#define TPC0_NRTR_NON_LIN_SCRAMB_EN_MASK                             0x1

#endif /* ASIC_REG_TPC0_NRTR_H_ */

