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

#ifndef ASIC_REG_DMA_NRTR_H_
#define ASIC_REG_DMA_NRTR_H_

/*
 *****************************************
 *   DMA_NRTR (Prototype: IF_NRTR)
 *****************************************
 */

#define mmDMA_NRTR_HBW_MAX_CRED                                      0x1C0100
/* DMA_NRTR_HBW_MAX_CRED */
#define DMA_NRTR_HBW_MAX_CRED_WR_RQ_SHIFT                            0
#define DMA_NRTR_HBW_MAX_CRED_WR_RQ_MASK                             0x3F
#define DMA_NRTR_HBW_MAX_CRED_WR_RS_SHIFT                            8
#define DMA_NRTR_HBW_MAX_CRED_WR_RS_MASK                             0x3F00
#define DMA_NRTR_HBW_MAX_CRED_RD_RQ_SHIFT                            16
#define DMA_NRTR_HBW_MAX_CRED_RD_RQ_MASK                             0x3F0000
#define DMA_NRTR_HBW_MAX_CRED_RD_RS_SHIFT                            24
#define DMA_NRTR_HBW_MAX_CRED_RD_RS_MASK                             0x3F000000

#define mmDMA_NRTR_LBW_MAX_CRED                                      0x1C0120
/* DMA_NRTR_LBW_MAX_CRED */
#define DMA_NRTR_LBW_MAX_CRED_WR_RQ_SHIFT                            0
#define DMA_NRTR_LBW_MAX_CRED_WR_RQ_MASK                             0x3F
#define DMA_NRTR_LBW_MAX_CRED_WR_RS_SHIFT                            8
#define DMA_NRTR_LBW_MAX_CRED_WR_RS_MASK                             0x3F00
#define DMA_NRTR_LBW_MAX_CRED_RD_RQ_SHIFT                            16
#define DMA_NRTR_LBW_MAX_CRED_RD_RQ_MASK                             0x3F0000
#define DMA_NRTR_LBW_MAX_CRED_RD_RS_SHIFT                            24
#define DMA_NRTR_LBW_MAX_CRED_RD_RS_MASK                             0x3F000000

#define mmDMA_NRTR_DBG_E_ARB                                         0x1C0300
/* DMA_NRTR_DBG_E_ARB */
#define DMA_NRTR_DBG_E_ARB_W_SHIFT                                   0
#define DMA_NRTR_DBG_E_ARB_W_MASK                                    0x7
#define DMA_NRTR_DBG_E_ARB_S_SHIFT                                   8
#define DMA_NRTR_DBG_E_ARB_S_MASK                                    0x700
#define DMA_NRTR_DBG_E_ARB_N_SHIFT                                   16
#define DMA_NRTR_DBG_E_ARB_N_MASK                                    0x70000
#define DMA_NRTR_DBG_E_ARB_L_SHIFT                                   24
#define DMA_NRTR_DBG_E_ARB_L_MASK                                    0x7000000

#define mmDMA_NRTR_DBG_W_ARB                                         0x1C0304
/* DMA_NRTR_DBG_W_ARB */
#define DMA_NRTR_DBG_W_ARB_E_SHIFT                                   0
#define DMA_NRTR_DBG_W_ARB_E_MASK                                    0x7
#define DMA_NRTR_DBG_W_ARB_S_SHIFT                                   8
#define DMA_NRTR_DBG_W_ARB_S_MASK                                    0x700
#define DMA_NRTR_DBG_W_ARB_N_SHIFT                                   16
#define DMA_NRTR_DBG_W_ARB_N_MASK                                    0x70000
#define DMA_NRTR_DBG_W_ARB_L_SHIFT                                   24
#define DMA_NRTR_DBG_W_ARB_L_MASK                                    0x7000000

#define mmDMA_NRTR_DBG_N_ARB                                         0x1C0308
/* DMA_NRTR_DBG_N_ARB */
#define DMA_NRTR_DBG_N_ARB_W_SHIFT                                   0
#define DMA_NRTR_DBG_N_ARB_W_MASK                                    0x7
#define DMA_NRTR_DBG_N_ARB_E_SHIFT                                   8
#define DMA_NRTR_DBG_N_ARB_E_MASK                                    0x700
#define DMA_NRTR_DBG_N_ARB_S_SHIFT                                   16
#define DMA_NRTR_DBG_N_ARB_S_MASK                                    0x70000
#define DMA_NRTR_DBG_N_ARB_L_SHIFT                                   24
#define DMA_NRTR_DBG_N_ARB_L_MASK                                    0x7000000

#define mmDMA_NRTR_DBG_S_ARB                                         0x1C030C
/* DMA_NRTR_DBG_S_ARB */
#define DMA_NRTR_DBG_S_ARB_W_SHIFT                                   0
#define DMA_NRTR_DBG_S_ARB_W_MASK                                    0x7
#define DMA_NRTR_DBG_S_ARB_E_SHIFT                                   8
#define DMA_NRTR_DBG_S_ARB_E_MASK                                    0x700
#define DMA_NRTR_DBG_S_ARB_N_SHIFT                                   16
#define DMA_NRTR_DBG_S_ARB_N_MASK                                    0x70000
#define DMA_NRTR_DBG_S_ARB_L_SHIFT                                   24
#define DMA_NRTR_DBG_S_ARB_L_MASK                                    0x7000000

#define mmDMA_NRTR_DBG_L_ARB                                         0x1C0310
/* DMA_NRTR_DBG_L_ARB */
#define DMA_NRTR_DBG_L_ARB_W_SHIFT                                   0
#define DMA_NRTR_DBG_L_ARB_W_MASK                                    0x7
#define DMA_NRTR_DBG_L_ARB_E_SHIFT                                   8
#define DMA_NRTR_DBG_L_ARB_E_MASK                                    0x700
#define DMA_NRTR_DBG_L_ARB_S_SHIFT                                   16
#define DMA_NRTR_DBG_L_ARB_S_MASK                                    0x70000
#define DMA_NRTR_DBG_L_ARB_N_SHIFT                                   24
#define DMA_NRTR_DBG_L_ARB_N_MASK                                    0x7000000

#define mmDMA_NRTR_DBG_E_ARB_MAX                                     0x1C0320
/* DMA_NRTR_DBG_E_ARB_MAX */
#define DMA_NRTR_DBG_E_ARB_MAX_CREDIT_SHIFT                          0
#define DMA_NRTR_DBG_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmDMA_NRTR_DBG_W_ARB_MAX                                     0x1C0324
/* DMA_NRTR_DBG_W_ARB_MAX */
#define DMA_NRTR_DBG_W_ARB_MAX_CREDIT_SHIFT                          0
#define DMA_NRTR_DBG_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmDMA_NRTR_DBG_N_ARB_MAX                                     0x1C0328
/* DMA_NRTR_DBG_N_ARB_MAX */
#define DMA_NRTR_DBG_N_ARB_MAX_CREDIT_SHIFT                          0
#define DMA_NRTR_DBG_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmDMA_NRTR_DBG_S_ARB_MAX                                     0x1C032C
/* DMA_NRTR_DBG_S_ARB_MAX */
#define DMA_NRTR_DBG_S_ARB_MAX_CREDIT_SHIFT                          0
#define DMA_NRTR_DBG_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmDMA_NRTR_DBG_L_ARB_MAX                                     0x1C0330
/* DMA_NRTR_DBG_L_ARB_MAX */
#define DMA_NRTR_DBG_L_ARB_MAX_CREDIT_SHIFT                          0
#define DMA_NRTR_DBG_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmDMA_NRTR_SPLIT_COEF_0                                      0x1C0400

#define mmDMA_NRTR_SPLIT_COEF_1                                      0x1C0404

#define mmDMA_NRTR_SPLIT_COEF_2                                      0x1C0408

#define mmDMA_NRTR_SPLIT_COEF_3                                      0x1C040C

#define mmDMA_NRTR_SPLIT_COEF_4                                      0x1C0410

#define mmDMA_NRTR_SPLIT_COEF_5                                      0x1C0414

#define mmDMA_NRTR_SPLIT_COEF_6                                      0x1C0418

#define mmDMA_NRTR_SPLIT_COEF_7                                      0x1C041C

#define mmDMA_NRTR_SPLIT_COEF_8                                      0x1C0420

#define mmDMA_NRTR_SPLIT_COEF_9                                      0x1C0424
/* DMA_NRTR_SPLIT_COEF */
#define DMA_NRTR_SPLIT_COEF_VAL_SHIFT                                0
#define DMA_NRTR_SPLIT_COEF_VAL_MASK                                 0xFFFF

#define mmDMA_NRTR_SPLIT_CFG                                         0x1C0440
/* DMA_NRTR_SPLIT_CFG */
#define DMA_NRTR_SPLIT_CFG_FORCE_WAK_ORDER_SHIFT                     0
#define DMA_NRTR_SPLIT_CFG_FORCE_WAK_ORDER_MASK                      0x1
#define DMA_NRTR_SPLIT_CFG_FORCE_STRONG_ORDER_SHIFT                  1
#define DMA_NRTR_SPLIT_CFG_FORCE_STRONG_ORDER_MASK                   0x2
#define DMA_NRTR_SPLIT_CFG_DEFAULT_MESH_SHIFT                        2
#define DMA_NRTR_SPLIT_CFG_DEFAULT_MESH_MASK                         0xC
#define DMA_NRTR_SPLIT_CFG_RD_RATE_LIM_EN_SHIFT                      4
#define DMA_NRTR_SPLIT_CFG_RD_RATE_LIM_EN_MASK                       0x10
#define DMA_NRTR_SPLIT_CFG_WR_RATE_LIM_EN_SHIFT                      5
#define DMA_NRTR_SPLIT_CFG_WR_RATE_LIM_EN_MASK                       0x20
#define DMA_NRTR_SPLIT_CFG_B2B_OPT_SHIFT                             6
#define DMA_NRTR_SPLIT_CFG_B2B_OPT_MASK                              0x1C0

#define mmDMA_NRTR_SPLIT_RD_SAT                                      0x1C0444
/* DMA_NRTR_SPLIT_RD_SAT */
#define DMA_NRTR_SPLIT_RD_SAT_VAL_SHIFT                              0
#define DMA_NRTR_SPLIT_RD_SAT_VAL_MASK                               0xFFFF

#define mmDMA_NRTR_SPLIT_RD_RST_TOKEN                                0x1C0448
/* DMA_NRTR_SPLIT_RD_RST_TOKEN */
#define DMA_NRTR_SPLIT_RD_RST_TOKEN_VAL_SHIFT                        0
#define DMA_NRTR_SPLIT_RD_RST_TOKEN_VAL_MASK                         0xFFFF

#define mmDMA_NRTR_SPLIT_RD_TIMEOUT_0                                0x1C044C

#define mmDMA_NRTR_SPLIT_RD_TIMEOUT_1                                0x1C0450
/* DMA_NRTR_SPLIT_RD_TIMEOUT */
#define DMA_NRTR_SPLIT_RD_TIMEOUT_VAL_SHIFT                          0
#define DMA_NRTR_SPLIT_RD_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmDMA_NRTR_SPLIT_WR_SAT                                      0x1C0454
/* DMA_NRTR_SPLIT_WR_SAT */
#define DMA_NRTR_SPLIT_WR_SAT_VAL_SHIFT                              0
#define DMA_NRTR_SPLIT_WR_SAT_VAL_MASK                               0xFFFF

#define mmDMA_NRTR_WPLIT_WR_TST_TOLEN                                0x1C0458
/* DMA_NRTR_WPLIT_WR_TST_TOLEN */
#define DMA_NRTR_WPLIT_WR_TST_TOLEN_VAL_SHIFT                        0
#define DMA_NRTR_WPLIT_WR_TST_TOLEN_VAL_MASK                         0xFFFF

#define mmDMA_NRTR_SPLIT_WR_TIMEOUT_0                                0x1C045C

#define mmDMA_NRTR_SPLIT_WR_TIMEOUT_1                                0x1C0460
/* DMA_NRTR_SPLIT_WR_TIMEOUT */
#define DMA_NRTR_SPLIT_WR_TIMEOUT_VAL_SHIFT                          0
#define DMA_NRTR_SPLIT_WR_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmDMA_NRTR_HBW_RANGE_HIT                                     0x1C0470
/* DMA_NRTR_HBW_RANGE_HIT */
#define DMA_NRTR_HBW_RANGE_HIT_IND_SHIFT                             0
#define DMA_NRTR_HBW_RANGE_HIT_IND_MASK                              0xFF

#define mmDMA_NRTR_HBW_RANGE_MASK_L_0                                0x1C0480

#define mmDMA_NRTR_HBW_RANGE_MASK_L_1                                0x1C0484

#define mmDMA_NRTR_HBW_RANGE_MASK_L_2                                0x1C0488

#define mmDMA_NRTR_HBW_RANGE_MASK_L_3                                0x1C048C

#define mmDMA_NRTR_HBW_RANGE_MASK_L_4                                0x1C0490

#define mmDMA_NRTR_HBW_RANGE_MASK_L_5                                0x1C0494

#define mmDMA_NRTR_HBW_RANGE_MASK_L_6                                0x1C0498

#define mmDMA_NRTR_HBW_RANGE_MASK_L_7                                0x1C049C
/* DMA_NRTR_HBW_RANGE_MASK_L */
#define DMA_NRTR_HBW_RANGE_MASK_L_VAL_SHIFT                          0
#define DMA_NRTR_HBW_RANGE_MASK_L_VAL_MASK                           0xFFFFFFFF

#define mmDMA_NRTR_HBW_RANGE_MASK_H_0                                0x1C04A0

#define mmDMA_NRTR_HBW_RANGE_MASK_H_1                                0x1C04A4

#define mmDMA_NRTR_HBW_RANGE_MASK_H_2                                0x1C04A8

#define mmDMA_NRTR_HBW_RANGE_MASK_H_3                                0x1C04AC

#define mmDMA_NRTR_HBW_RANGE_MASK_H_4                                0x1C04B0

#define mmDMA_NRTR_HBW_RANGE_MASK_H_5                                0x1C04B4

#define mmDMA_NRTR_HBW_RANGE_MASK_H_6                                0x1C04B8

#define mmDMA_NRTR_HBW_RANGE_MASK_H_7                                0x1C04BC
/* DMA_NRTR_HBW_RANGE_MASK_H */
#define DMA_NRTR_HBW_RANGE_MASK_H_VAL_SHIFT                          0
#define DMA_NRTR_HBW_RANGE_MASK_H_VAL_MASK                           0x3FFFF

#define mmDMA_NRTR_HBW_RANGE_BASE_L_0                                0x1C04C0

#define mmDMA_NRTR_HBW_RANGE_BASE_L_1                                0x1C04C4

#define mmDMA_NRTR_HBW_RANGE_BASE_L_2                                0x1C04C8

#define mmDMA_NRTR_HBW_RANGE_BASE_L_3                                0x1C04CC

#define mmDMA_NRTR_HBW_RANGE_BASE_L_4                                0x1C04D0

#define mmDMA_NRTR_HBW_RANGE_BASE_L_5                                0x1C04D4

#define mmDMA_NRTR_HBW_RANGE_BASE_L_6                                0x1C04D8

#define mmDMA_NRTR_HBW_RANGE_BASE_L_7                                0x1C04DC
/* DMA_NRTR_HBW_RANGE_BASE_L */
#define DMA_NRTR_HBW_RANGE_BASE_L_VAL_SHIFT                          0
#define DMA_NRTR_HBW_RANGE_BASE_L_VAL_MASK                           0xFFFFFFFF

#define mmDMA_NRTR_HBW_RANGE_BASE_H_0                                0x1C04E0

#define mmDMA_NRTR_HBW_RANGE_BASE_H_1                                0x1C04E4

#define mmDMA_NRTR_HBW_RANGE_BASE_H_2                                0x1C04E8

#define mmDMA_NRTR_HBW_RANGE_BASE_H_3                                0x1C04EC

#define mmDMA_NRTR_HBW_RANGE_BASE_H_4                                0x1C04F0

#define mmDMA_NRTR_HBW_RANGE_BASE_H_5                                0x1C04F4

#define mmDMA_NRTR_HBW_RANGE_BASE_H_6                                0x1C04F8

#define mmDMA_NRTR_HBW_RANGE_BASE_H_7                                0x1C04FC
/* DMA_NRTR_HBW_RANGE_BASE_H */
#define DMA_NRTR_HBW_RANGE_BASE_H_VAL_SHIFT                          0
#define DMA_NRTR_HBW_RANGE_BASE_H_VAL_MASK                           0x3FFFF

#define mmDMA_NRTR_LBW_RANGE_HIT                                     0x1C0500
/* DMA_NRTR_LBW_RANGE_HIT */
#define DMA_NRTR_LBW_RANGE_HIT_IND_SHIFT                             0
#define DMA_NRTR_LBW_RANGE_HIT_IND_MASK                              0xFFFF

#define mmDMA_NRTR_LBW_RANGE_MASK_0                                  0x1C0510

#define mmDMA_NRTR_LBW_RANGE_MASK_1                                  0x1C0514

#define mmDMA_NRTR_LBW_RANGE_MASK_2                                  0x1C0518

#define mmDMA_NRTR_LBW_RANGE_MASK_3                                  0x1C051C

#define mmDMA_NRTR_LBW_RANGE_MASK_4                                  0x1C0520

#define mmDMA_NRTR_LBW_RANGE_MASK_5                                  0x1C0524

#define mmDMA_NRTR_LBW_RANGE_MASK_6                                  0x1C0528

#define mmDMA_NRTR_LBW_RANGE_MASK_7                                  0x1C052C

#define mmDMA_NRTR_LBW_RANGE_MASK_8                                  0x1C0530

#define mmDMA_NRTR_LBW_RANGE_MASK_9                                  0x1C0534

#define mmDMA_NRTR_LBW_RANGE_MASK_10                                 0x1C0538

#define mmDMA_NRTR_LBW_RANGE_MASK_11                                 0x1C053C

#define mmDMA_NRTR_LBW_RANGE_MASK_12                                 0x1C0540

#define mmDMA_NRTR_LBW_RANGE_MASK_13                                 0x1C0544

#define mmDMA_NRTR_LBW_RANGE_MASK_14                                 0x1C0548

#define mmDMA_NRTR_LBW_RANGE_MASK_15                                 0x1C054C
/* DMA_NRTR_LBW_RANGE_MASK */
#define DMA_NRTR_LBW_RANGE_MASK_VAL_SHIFT                            0
#define DMA_NRTR_LBW_RANGE_MASK_VAL_MASK                             0x3FFFFFF

#define mmDMA_NRTR_LBW_RANGE_BASE_0                                  0x1C0550

#define mmDMA_NRTR_LBW_RANGE_BASE_1                                  0x1C0554

#define mmDMA_NRTR_LBW_RANGE_BASE_2                                  0x1C0558

#define mmDMA_NRTR_LBW_RANGE_BASE_3                                  0x1C055C

#define mmDMA_NRTR_LBW_RANGE_BASE_4                                  0x1C0560

#define mmDMA_NRTR_LBW_RANGE_BASE_5                                  0x1C0564

#define mmDMA_NRTR_LBW_RANGE_BASE_6                                  0x1C0568

#define mmDMA_NRTR_LBW_RANGE_BASE_7                                  0x1C056C

#define mmDMA_NRTR_LBW_RANGE_BASE_8                                  0x1C0570

#define mmDMA_NRTR_LBW_RANGE_BASE_9                                  0x1C0574

#define mmDMA_NRTR_LBW_RANGE_BASE_10                                 0x1C0578

#define mmDMA_NRTR_LBW_RANGE_BASE_11                                 0x1C057C

#define mmDMA_NRTR_LBW_RANGE_BASE_12                                 0x1C0580

#define mmDMA_NRTR_LBW_RANGE_BASE_13                                 0x1C0584

#define mmDMA_NRTR_LBW_RANGE_BASE_14                                 0x1C0588

#define mmDMA_NRTR_LBW_RANGE_BASE_15                                 0x1C058C
/* DMA_NRTR_LBW_RANGE_BASE */
#define DMA_NRTR_LBW_RANGE_BASE_VAL_SHIFT                            0
#define DMA_NRTR_LBW_RANGE_BASE_VAL_MASK                             0x3FFFFFF

#define mmDMA_NRTR_RGLTR                                             0x1C0590
/* DMA_NRTR_RGLTR */
#define DMA_NRTR_RGLTR_WR_EN_SHIFT                                   0
#define DMA_NRTR_RGLTR_WR_EN_MASK                                    0x1
#define DMA_NRTR_RGLTR_RD_EN_SHIFT                                   4
#define DMA_NRTR_RGLTR_RD_EN_MASK                                    0x10

#define mmDMA_NRTR_RGLTR_WR_RESULT                                   0x1C0594
/* DMA_NRTR_RGLTR_WR_RESULT */
#define DMA_NRTR_RGLTR_WR_RESULT_VAL_SHIFT                           0
#define DMA_NRTR_RGLTR_WR_RESULT_VAL_MASK                            0xFF

#define mmDMA_NRTR_RGLTR_RD_RESULT                                   0x1C0598
/* DMA_NRTR_RGLTR_RD_RESULT */
#define DMA_NRTR_RGLTR_RD_RESULT_VAL_SHIFT                           0
#define DMA_NRTR_RGLTR_RD_RESULT_VAL_MASK                            0xFF

#define mmDMA_NRTR_SCRAMB_EN                                         0x1C0600
/* DMA_NRTR_SCRAMB_EN */
#define DMA_NRTR_SCRAMB_EN_VAL_SHIFT                                 0
#define DMA_NRTR_SCRAMB_EN_VAL_MASK                                  0x1

#define mmDMA_NRTR_NON_LIN_SCRAMB                                    0x1C0604
/* DMA_NRTR_NON_LIN_SCRAMB */
#define DMA_NRTR_NON_LIN_SCRAMB_EN_SHIFT                             0
#define DMA_NRTR_NON_LIN_SCRAMB_EN_MASK                              0x1

#endif /* ASIC_REG_DMA_NRTR_H_ */

