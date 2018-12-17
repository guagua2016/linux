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

#ifndef ASIC_REG_TPC7_NRTR_H_
#define ASIC_REG_TPC7_NRTR_H_

/*
 *****************************************
 *   TPC7_NRTR (Prototype: IF_NRTR)
 *****************************************
 */

#define mmTPC7_NRTR_HBW_MAX_CRED                                     0xFC0100
/* TPC7_NRTR_HBW_MAX_CRED */
#define TPC7_NRTR_HBW_MAX_CRED_WR_RQ_SHIFT                           0
#define TPC7_NRTR_HBW_MAX_CRED_WR_RQ_MASK                            0x3F
#define TPC7_NRTR_HBW_MAX_CRED_WR_RS_SHIFT                           8
#define TPC7_NRTR_HBW_MAX_CRED_WR_RS_MASK                            0x3F00
#define TPC7_NRTR_HBW_MAX_CRED_RD_RQ_SHIFT                           16
#define TPC7_NRTR_HBW_MAX_CRED_RD_RQ_MASK                            0x3F0000
#define TPC7_NRTR_HBW_MAX_CRED_RD_RS_SHIFT                           24
#define TPC7_NRTR_HBW_MAX_CRED_RD_RS_MASK                            0x3F000000

#define mmTPC7_NRTR_LBW_MAX_CRED                                     0xFC0120
/* TPC7_NRTR_LBW_MAX_CRED */
#define TPC7_NRTR_LBW_MAX_CRED_WR_RQ_SHIFT                           0
#define TPC7_NRTR_LBW_MAX_CRED_WR_RQ_MASK                            0x3F
#define TPC7_NRTR_LBW_MAX_CRED_WR_RS_SHIFT                           8
#define TPC7_NRTR_LBW_MAX_CRED_WR_RS_MASK                            0x3F00
#define TPC7_NRTR_LBW_MAX_CRED_RD_RQ_SHIFT                           16
#define TPC7_NRTR_LBW_MAX_CRED_RD_RQ_MASK                            0x3F0000
#define TPC7_NRTR_LBW_MAX_CRED_RD_RS_SHIFT                           24
#define TPC7_NRTR_LBW_MAX_CRED_RD_RS_MASK                            0x3F000000

#define mmTPC7_NRTR_DBG_E_ARB                                        0xFC0300
/* TPC7_NRTR_DBG_E_ARB */
#define TPC7_NRTR_DBG_E_ARB_W_SHIFT                                  0
#define TPC7_NRTR_DBG_E_ARB_W_MASK                                   0x7
#define TPC7_NRTR_DBG_E_ARB_S_SHIFT                                  8
#define TPC7_NRTR_DBG_E_ARB_S_MASK                                   0x700
#define TPC7_NRTR_DBG_E_ARB_N_SHIFT                                  16
#define TPC7_NRTR_DBG_E_ARB_N_MASK                                   0x70000
#define TPC7_NRTR_DBG_E_ARB_L_SHIFT                                  24
#define TPC7_NRTR_DBG_E_ARB_L_MASK                                   0x7000000

#define mmTPC7_NRTR_DBG_W_ARB                                        0xFC0304
/* TPC7_NRTR_DBG_W_ARB */
#define TPC7_NRTR_DBG_W_ARB_E_SHIFT                                  0
#define TPC7_NRTR_DBG_W_ARB_E_MASK                                   0x7
#define TPC7_NRTR_DBG_W_ARB_S_SHIFT                                  8
#define TPC7_NRTR_DBG_W_ARB_S_MASK                                   0x700
#define TPC7_NRTR_DBG_W_ARB_N_SHIFT                                  16
#define TPC7_NRTR_DBG_W_ARB_N_MASK                                   0x70000
#define TPC7_NRTR_DBG_W_ARB_L_SHIFT                                  24
#define TPC7_NRTR_DBG_W_ARB_L_MASK                                   0x7000000

#define mmTPC7_NRTR_DBG_N_ARB                                        0xFC0308
/* TPC7_NRTR_DBG_N_ARB */
#define TPC7_NRTR_DBG_N_ARB_W_SHIFT                                  0
#define TPC7_NRTR_DBG_N_ARB_W_MASK                                   0x7
#define TPC7_NRTR_DBG_N_ARB_E_SHIFT                                  8
#define TPC7_NRTR_DBG_N_ARB_E_MASK                                   0x700
#define TPC7_NRTR_DBG_N_ARB_S_SHIFT                                  16
#define TPC7_NRTR_DBG_N_ARB_S_MASK                                   0x70000
#define TPC7_NRTR_DBG_N_ARB_L_SHIFT                                  24
#define TPC7_NRTR_DBG_N_ARB_L_MASK                                   0x7000000

#define mmTPC7_NRTR_DBG_S_ARB                                        0xFC030C
/* TPC7_NRTR_DBG_S_ARB */
#define TPC7_NRTR_DBG_S_ARB_W_SHIFT                                  0
#define TPC7_NRTR_DBG_S_ARB_W_MASK                                   0x7
#define TPC7_NRTR_DBG_S_ARB_E_SHIFT                                  8
#define TPC7_NRTR_DBG_S_ARB_E_MASK                                   0x700
#define TPC7_NRTR_DBG_S_ARB_N_SHIFT                                  16
#define TPC7_NRTR_DBG_S_ARB_N_MASK                                   0x70000
#define TPC7_NRTR_DBG_S_ARB_L_SHIFT                                  24
#define TPC7_NRTR_DBG_S_ARB_L_MASK                                   0x7000000

#define mmTPC7_NRTR_DBG_L_ARB                                        0xFC0310
/* TPC7_NRTR_DBG_L_ARB */
#define TPC7_NRTR_DBG_L_ARB_W_SHIFT                                  0
#define TPC7_NRTR_DBG_L_ARB_W_MASK                                   0x7
#define TPC7_NRTR_DBG_L_ARB_E_SHIFT                                  8
#define TPC7_NRTR_DBG_L_ARB_E_MASK                                   0x700
#define TPC7_NRTR_DBG_L_ARB_S_SHIFT                                  16
#define TPC7_NRTR_DBG_L_ARB_S_MASK                                   0x70000
#define TPC7_NRTR_DBG_L_ARB_N_SHIFT                                  24
#define TPC7_NRTR_DBG_L_ARB_N_MASK                                   0x7000000

#define mmTPC7_NRTR_DBG_E_ARB_MAX                                    0xFC0320
/* TPC7_NRTR_DBG_E_ARB_MAX */
#define TPC7_NRTR_DBG_E_ARB_MAX_CREDIT_SHIFT                         0
#define TPC7_NRTR_DBG_E_ARB_MAX_CREDIT_MASK                          0x3F

#define mmTPC7_NRTR_DBG_W_ARB_MAX                                    0xFC0324
/* TPC7_NRTR_DBG_W_ARB_MAX */
#define TPC7_NRTR_DBG_W_ARB_MAX_CREDIT_SHIFT                         0
#define TPC7_NRTR_DBG_W_ARB_MAX_CREDIT_MASK                          0x3F

#define mmTPC7_NRTR_DBG_N_ARB_MAX                                    0xFC0328
/* TPC7_NRTR_DBG_N_ARB_MAX */
#define TPC7_NRTR_DBG_N_ARB_MAX_CREDIT_SHIFT                         0
#define TPC7_NRTR_DBG_N_ARB_MAX_CREDIT_MASK                          0x3F

#define mmTPC7_NRTR_DBG_S_ARB_MAX                                    0xFC032C
/* TPC7_NRTR_DBG_S_ARB_MAX */
#define TPC7_NRTR_DBG_S_ARB_MAX_CREDIT_SHIFT                         0
#define TPC7_NRTR_DBG_S_ARB_MAX_CREDIT_MASK                          0x3F

#define mmTPC7_NRTR_DBG_L_ARB_MAX                                    0xFC0330
/* TPC7_NRTR_DBG_L_ARB_MAX */
#define TPC7_NRTR_DBG_L_ARB_MAX_CREDIT_SHIFT                         0
#define TPC7_NRTR_DBG_L_ARB_MAX_CREDIT_MASK                          0x3F

#define mmTPC7_NRTR_SPLIT_COEF_0                                     0xFC0400

#define mmTPC7_NRTR_SPLIT_COEF_1                                     0xFC0404

#define mmTPC7_NRTR_SPLIT_COEF_2                                     0xFC0408

#define mmTPC7_NRTR_SPLIT_COEF_3                                     0xFC040C

#define mmTPC7_NRTR_SPLIT_COEF_4                                     0xFC0410

#define mmTPC7_NRTR_SPLIT_COEF_5                                     0xFC0414

#define mmTPC7_NRTR_SPLIT_COEF_6                                     0xFC0418

#define mmTPC7_NRTR_SPLIT_COEF_7                                     0xFC041C

#define mmTPC7_NRTR_SPLIT_COEF_8                                     0xFC0420

#define mmTPC7_NRTR_SPLIT_COEF_9                                     0xFC0424
/* TPC7_NRTR_SPLIT_COEF */
#define TPC7_NRTR_SPLIT_COEF_VAL_SHIFT                               0
#define TPC7_NRTR_SPLIT_COEF_VAL_MASK                                0xFFFF

#define mmTPC7_NRTR_SPLIT_CFG                                        0xFC0440
/* TPC7_NRTR_SPLIT_CFG */
#define TPC7_NRTR_SPLIT_CFG_FORCE_WAK_ORDER_SHIFT                    0
#define TPC7_NRTR_SPLIT_CFG_FORCE_WAK_ORDER_MASK                     0x1
#define TPC7_NRTR_SPLIT_CFG_FORCE_STRONG_ORDER_SHIFT                 1
#define TPC7_NRTR_SPLIT_CFG_FORCE_STRONG_ORDER_MASK                  0x2
#define TPC7_NRTR_SPLIT_CFG_DEFAULT_MESH_SHIFT                       2
#define TPC7_NRTR_SPLIT_CFG_DEFAULT_MESH_MASK                        0xC
#define TPC7_NRTR_SPLIT_CFG_RD_RATE_LIM_EN_SHIFT                     4
#define TPC7_NRTR_SPLIT_CFG_RD_RATE_LIM_EN_MASK                      0x10
#define TPC7_NRTR_SPLIT_CFG_WR_RATE_LIM_EN_SHIFT                     5
#define TPC7_NRTR_SPLIT_CFG_WR_RATE_LIM_EN_MASK                      0x20
#define TPC7_NRTR_SPLIT_CFG_B2B_OPT_SHIFT                            6
#define TPC7_NRTR_SPLIT_CFG_B2B_OPT_MASK                             0x1C0

#define mmTPC7_NRTR_SPLIT_RD_SAT                                     0xFC0444
/* TPC7_NRTR_SPLIT_RD_SAT */
#define TPC7_NRTR_SPLIT_RD_SAT_VAL_SHIFT                             0
#define TPC7_NRTR_SPLIT_RD_SAT_VAL_MASK                              0xFFFF

#define mmTPC7_NRTR_SPLIT_RD_RST_TOKEN                               0xFC0448
/* TPC7_NRTR_SPLIT_RD_RST_TOKEN */
#define TPC7_NRTR_SPLIT_RD_RST_TOKEN_VAL_SHIFT                       0
#define TPC7_NRTR_SPLIT_RD_RST_TOKEN_VAL_MASK                        0xFFFF

#define mmTPC7_NRTR_SPLIT_RD_TIMEOUT_0                               0xFC044C

#define mmTPC7_NRTR_SPLIT_RD_TIMEOUT_1                               0xFC0450
/* TPC7_NRTR_SPLIT_RD_TIMEOUT */
#define TPC7_NRTR_SPLIT_RD_TIMEOUT_VAL_SHIFT                         0
#define TPC7_NRTR_SPLIT_RD_TIMEOUT_VAL_MASK                          0xFFFFFFFF

#define mmTPC7_NRTR_SPLIT_WR_SAT                                     0xFC0454
/* TPC7_NRTR_SPLIT_WR_SAT */
#define TPC7_NRTR_SPLIT_WR_SAT_VAL_SHIFT                             0
#define TPC7_NRTR_SPLIT_WR_SAT_VAL_MASK                              0xFFFF

#define mmTPC7_NRTR_WPLIT_WR_TST_TOLEN                               0xFC0458
/* TPC7_NRTR_WPLIT_WR_TST_TOLEN */
#define TPC7_NRTR_WPLIT_WR_TST_TOLEN_VAL_SHIFT                       0
#define TPC7_NRTR_WPLIT_WR_TST_TOLEN_VAL_MASK                        0xFFFF

#define mmTPC7_NRTR_SPLIT_WR_TIMEOUT_0                               0xFC045C

#define mmTPC7_NRTR_SPLIT_WR_TIMEOUT_1                               0xFC0460
/* TPC7_NRTR_SPLIT_WR_TIMEOUT */
#define TPC7_NRTR_SPLIT_WR_TIMEOUT_VAL_SHIFT                         0
#define TPC7_NRTR_SPLIT_WR_TIMEOUT_VAL_MASK                          0xFFFFFFFF

#define mmTPC7_NRTR_HBW_RANGE_HIT                                    0xFC0470
/* TPC7_NRTR_HBW_RANGE_HIT */
#define TPC7_NRTR_HBW_RANGE_HIT_IND_SHIFT                            0
#define TPC7_NRTR_HBW_RANGE_HIT_IND_MASK                             0xFF

#define mmTPC7_NRTR_HBW_RANGE_MASK_L_0                               0xFC0480

#define mmTPC7_NRTR_HBW_RANGE_MASK_L_1                               0xFC0484

#define mmTPC7_NRTR_HBW_RANGE_MASK_L_2                               0xFC0488

#define mmTPC7_NRTR_HBW_RANGE_MASK_L_3                               0xFC048C

#define mmTPC7_NRTR_HBW_RANGE_MASK_L_4                               0xFC0490

#define mmTPC7_NRTR_HBW_RANGE_MASK_L_5                               0xFC0494

#define mmTPC7_NRTR_HBW_RANGE_MASK_L_6                               0xFC0498

#define mmTPC7_NRTR_HBW_RANGE_MASK_L_7                               0xFC049C
/* TPC7_NRTR_HBW_RANGE_MASK_L */
#define TPC7_NRTR_HBW_RANGE_MASK_L_VAL_SHIFT                         0
#define TPC7_NRTR_HBW_RANGE_MASK_L_VAL_MASK                          0xFFFFFFFF

#define mmTPC7_NRTR_HBW_RANGE_MASK_H_0                               0xFC04A0

#define mmTPC7_NRTR_HBW_RANGE_MASK_H_1                               0xFC04A4

#define mmTPC7_NRTR_HBW_RANGE_MASK_H_2                               0xFC04A8

#define mmTPC7_NRTR_HBW_RANGE_MASK_H_3                               0xFC04AC

#define mmTPC7_NRTR_HBW_RANGE_MASK_H_4                               0xFC04B0

#define mmTPC7_NRTR_HBW_RANGE_MASK_H_5                               0xFC04B4

#define mmTPC7_NRTR_HBW_RANGE_MASK_H_6                               0xFC04B8

#define mmTPC7_NRTR_HBW_RANGE_MASK_H_7                               0xFC04BC
/* TPC7_NRTR_HBW_RANGE_MASK_H */
#define TPC7_NRTR_HBW_RANGE_MASK_H_VAL_SHIFT                         0
#define TPC7_NRTR_HBW_RANGE_MASK_H_VAL_MASK                          0x3FFFF

#define mmTPC7_NRTR_HBW_RANGE_BASE_L_0                               0xFC04C0

#define mmTPC7_NRTR_HBW_RANGE_BASE_L_1                               0xFC04C4

#define mmTPC7_NRTR_HBW_RANGE_BASE_L_2                               0xFC04C8

#define mmTPC7_NRTR_HBW_RANGE_BASE_L_3                               0xFC04CC

#define mmTPC7_NRTR_HBW_RANGE_BASE_L_4                               0xFC04D0

#define mmTPC7_NRTR_HBW_RANGE_BASE_L_5                               0xFC04D4

#define mmTPC7_NRTR_HBW_RANGE_BASE_L_6                               0xFC04D8

#define mmTPC7_NRTR_HBW_RANGE_BASE_L_7                               0xFC04DC
/* TPC7_NRTR_HBW_RANGE_BASE_L */
#define TPC7_NRTR_HBW_RANGE_BASE_L_VAL_SHIFT                         0
#define TPC7_NRTR_HBW_RANGE_BASE_L_VAL_MASK                          0xFFFFFFFF

#define mmTPC7_NRTR_HBW_RANGE_BASE_H_0                               0xFC04E0

#define mmTPC7_NRTR_HBW_RANGE_BASE_H_1                               0xFC04E4

#define mmTPC7_NRTR_HBW_RANGE_BASE_H_2                               0xFC04E8

#define mmTPC7_NRTR_HBW_RANGE_BASE_H_3                               0xFC04EC

#define mmTPC7_NRTR_HBW_RANGE_BASE_H_4                               0xFC04F0

#define mmTPC7_NRTR_HBW_RANGE_BASE_H_5                               0xFC04F4

#define mmTPC7_NRTR_HBW_RANGE_BASE_H_6                               0xFC04F8

#define mmTPC7_NRTR_HBW_RANGE_BASE_H_7                               0xFC04FC
/* TPC7_NRTR_HBW_RANGE_BASE_H */
#define TPC7_NRTR_HBW_RANGE_BASE_H_VAL_SHIFT                         0
#define TPC7_NRTR_HBW_RANGE_BASE_H_VAL_MASK                          0x3FFFF

#define mmTPC7_NRTR_LBW_RANGE_HIT                                    0xFC0500
/* TPC7_NRTR_LBW_RANGE_HIT */
#define TPC7_NRTR_LBW_RANGE_HIT_IND_SHIFT                            0
#define TPC7_NRTR_LBW_RANGE_HIT_IND_MASK                             0xFFFF

#define mmTPC7_NRTR_LBW_RANGE_MASK_0                                 0xFC0510

#define mmTPC7_NRTR_LBW_RANGE_MASK_1                                 0xFC0514

#define mmTPC7_NRTR_LBW_RANGE_MASK_2                                 0xFC0518

#define mmTPC7_NRTR_LBW_RANGE_MASK_3                                 0xFC051C

#define mmTPC7_NRTR_LBW_RANGE_MASK_4                                 0xFC0520

#define mmTPC7_NRTR_LBW_RANGE_MASK_5                                 0xFC0524

#define mmTPC7_NRTR_LBW_RANGE_MASK_6                                 0xFC0528

#define mmTPC7_NRTR_LBW_RANGE_MASK_7                                 0xFC052C

#define mmTPC7_NRTR_LBW_RANGE_MASK_8                                 0xFC0530

#define mmTPC7_NRTR_LBW_RANGE_MASK_9                                 0xFC0534

#define mmTPC7_NRTR_LBW_RANGE_MASK_10                                0xFC0538

#define mmTPC7_NRTR_LBW_RANGE_MASK_11                                0xFC053C

#define mmTPC7_NRTR_LBW_RANGE_MASK_12                                0xFC0540

#define mmTPC7_NRTR_LBW_RANGE_MASK_13                                0xFC0544

#define mmTPC7_NRTR_LBW_RANGE_MASK_14                                0xFC0548

#define mmTPC7_NRTR_LBW_RANGE_MASK_15                                0xFC054C
/* TPC7_NRTR_LBW_RANGE_MASK */
#define TPC7_NRTR_LBW_RANGE_MASK_VAL_SHIFT                           0
#define TPC7_NRTR_LBW_RANGE_MASK_VAL_MASK                            0x3FFFFFF

#define mmTPC7_NRTR_LBW_RANGE_BASE_0                                 0xFC0550

#define mmTPC7_NRTR_LBW_RANGE_BASE_1                                 0xFC0554

#define mmTPC7_NRTR_LBW_RANGE_BASE_2                                 0xFC0558

#define mmTPC7_NRTR_LBW_RANGE_BASE_3                                 0xFC055C

#define mmTPC7_NRTR_LBW_RANGE_BASE_4                                 0xFC0560

#define mmTPC7_NRTR_LBW_RANGE_BASE_5                                 0xFC0564

#define mmTPC7_NRTR_LBW_RANGE_BASE_6                                 0xFC0568

#define mmTPC7_NRTR_LBW_RANGE_BASE_7                                 0xFC056C

#define mmTPC7_NRTR_LBW_RANGE_BASE_8                                 0xFC0570

#define mmTPC7_NRTR_LBW_RANGE_BASE_9                                 0xFC0574

#define mmTPC7_NRTR_LBW_RANGE_BASE_10                                0xFC0578

#define mmTPC7_NRTR_LBW_RANGE_BASE_11                                0xFC057C

#define mmTPC7_NRTR_LBW_RANGE_BASE_12                                0xFC0580

#define mmTPC7_NRTR_LBW_RANGE_BASE_13                                0xFC0584

#define mmTPC7_NRTR_LBW_RANGE_BASE_14                                0xFC0588

#define mmTPC7_NRTR_LBW_RANGE_BASE_15                                0xFC058C
/* TPC7_NRTR_LBW_RANGE_BASE */
#define TPC7_NRTR_LBW_RANGE_BASE_VAL_SHIFT                           0
#define TPC7_NRTR_LBW_RANGE_BASE_VAL_MASK                            0x3FFFFFF

#define mmTPC7_NRTR_RGLTR                                            0xFC0590
/* TPC7_NRTR_RGLTR */
#define TPC7_NRTR_RGLTR_WR_EN_SHIFT                                  0
#define TPC7_NRTR_RGLTR_WR_EN_MASK                                   0x1
#define TPC7_NRTR_RGLTR_RD_EN_SHIFT                                  4
#define TPC7_NRTR_RGLTR_RD_EN_MASK                                   0x10

#define mmTPC7_NRTR_RGLTR_WR_RESULT                                  0xFC0594
/* TPC7_NRTR_RGLTR_WR_RESULT */
#define TPC7_NRTR_RGLTR_WR_RESULT_VAL_SHIFT                          0
#define TPC7_NRTR_RGLTR_WR_RESULT_VAL_MASK                           0xFF

#define mmTPC7_NRTR_RGLTR_RD_RESULT                                  0xFC0598
/* TPC7_NRTR_RGLTR_RD_RESULT */
#define TPC7_NRTR_RGLTR_RD_RESULT_VAL_SHIFT                          0
#define TPC7_NRTR_RGLTR_RD_RESULT_VAL_MASK                           0xFF

#define mmTPC7_NRTR_SCRAMB_EN                                        0xFC0600
/* TPC7_NRTR_SCRAMB_EN */
#define TPC7_NRTR_SCRAMB_EN_VAL_SHIFT                                0
#define TPC7_NRTR_SCRAMB_EN_VAL_MASK                                 0x1

#define mmTPC7_NRTR_NON_LIN_SCRAMB                                   0xFC0604
/* TPC7_NRTR_NON_LIN_SCRAMB */
#define TPC7_NRTR_NON_LIN_SCRAMB_EN_SHIFT                            0
#define TPC7_NRTR_NON_LIN_SCRAMB_EN_MASK                             0x1

#endif /* ASIC_REG_TPC7_NRTR_H_ */

