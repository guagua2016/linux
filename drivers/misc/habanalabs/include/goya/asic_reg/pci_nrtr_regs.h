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

#ifndef ASIC_REG_PCI_NRTR_H_
#define ASIC_REG_PCI_NRTR_H_

/*
 *****************************************
 *   PCI_NRTR (Prototype: IF_NRTR)
 *****************************************
 */

#define mmPCI_NRTR_HBW_MAX_CRED                                      0x100
/* PCI_NRTR_HBW_MAX_CRED */
#define PCI_NRTR_HBW_MAX_CRED_WR_RQ_SHIFT                            0
#define PCI_NRTR_HBW_MAX_CRED_WR_RQ_MASK                             0x3F
#define PCI_NRTR_HBW_MAX_CRED_WR_RS_SHIFT                            8
#define PCI_NRTR_HBW_MAX_CRED_WR_RS_MASK                             0x3F00
#define PCI_NRTR_HBW_MAX_CRED_RD_RQ_SHIFT                            16
#define PCI_NRTR_HBW_MAX_CRED_RD_RQ_MASK                             0x3F0000
#define PCI_NRTR_HBW_MAX_CRED_RD_RS_SHIFT                            24
#define PCI_NRTR_HBW_MAX_CRED_RD_RS_MASK                             0x3F000000

#define mmPCI_NRTR_LBW_MAX_CRED                                      0x120
/* PCI_NRTR_LBW_MAX_CRED */
#define PCI_NRTR_LBW_MAX_CRED_WR_RQ_SHIFT                            0
#define PCI_NRTR_LBW_MAX_CRED_WR_RQ_MASK                             0x3F
#define PCI_NRTR_LBW_MAX_CRED_WR_RS_SHIFT                            8
#define PCI_NRTR_LBW_MAX_CRED_WR_RS_MASK                             0x3F00
#define PCI_NRTR_LBW_MAX_CRED_RD_RQ_SHIFT                            16
#define PCI_NRTR_LBW_MAX_CRED_RD_RQ_MASK                             0x3F0000
#define PCI_NRTR_LBW_MAX_CRED_RD_RS_SHIFT                            24
#define PCI_NRTR_LBW_MAX_CRED_RD_RS_MASK                             0x3F000000

#define mmPCI_NRTR_DBG_E_ARB                                         0x300
/* PCI_NRTR_DBG_E_ARB */
#define PCI_NRTR_DBG_E_ARB_W_SHIFT                                   0
#define PCI_NRTR_DBG_E_ARB_W_MASK                                    0x7
#define PCI_NRTR_DBG_E_ARB_S_SHIFT                                   8
#define PCI_NRTR_DBG_E_ARB_S_MASK                                    0x700
#define PCI_NRTR_DBG_E_ARB_N_SHIFT                                   16
#define PCI_NRTR_DBG_E_ARB_N_MASK                                    0x70000
#define PCI_NRTR_DBG_E_ARB_L_SHIFT                                   24
#define PCI_NRTR_DBG_E_ARB_L_MASK                                    0x7000000

#define mmPCI_NRTR_DBG_W_ARB                                         0x304
/* PCI_NRTR_DBG_W_ARB */
#define PCI_NRTR_DBG_W_ARB_E_SHIFT                                   0
#define PCI_NRTR_DBG_W_ARB_E_MASK                                    0x7
#define PCI_NRTR_DBG_W_ARB_S_SHIFT                                   8
#define PCI_NRTR_DBG_W_ARB_S_MASK                                    0x700
#define PCI_NRTR_DBG_W_ARB_N_SHIFT                                   16
#define PCI_NRTR_DBG_W_ARB_N_MASK                                    0x70000
#define PCI_NRTR_DBG_W_ARB_L_SHIFT                                   24
#define PCI_NRTR_DBG_W_ARB_L_MASK                                    0x7000000

#define mmPCI_NRTR_DBG_N_ARB                                         0x308
/* PCI_NRTR_DBG_N_ARB */
#define PCI_NRTR_DBG_N_ARB_W_SHIFT                                   0
#define PCI_NRTR_DBG_N_ARB_W_MASK                                    0x7
#define PCI_NRTR_DBG_N_ARB_E_SHIFT                                   8
#define PCI_NRTR_DBG_N_ARB_E_MASK                                    0x700
#define PCI_NRTR_DBG_N_ARB_S_SHIFT                                   16
#define PCI_NRTR_DBG_N_ARB_S_MASK                                    0x70000
#define PCI_NRTR_DBG_N_ARB_L_SHIFT                                   24
#define PCI_NRTR_DBG_N_ARB_L_MASK                                    0x7000000

#define mmPCI_NRTR_DBG_S_ARB                                         0x30C
/* PCI_NRTR_DBG_S_ARB */
#define PCI_NRTR_DBG_S_ARB_W_SHIFT                                   0
#define PCI_NRTR_DBG_S_ARB_W_MASK                                    0x7
#define PCI_NRTR_DBG_S_ARB_E_SHIFT                                   8
#define PCI_NRTR_DBG_S_ARB_E_MASK                                    0x700
#define PCI_NRTR_DBG_S_ARB_N_SHIFT                                   16
#define PCI_NRTR_DBG_S_ARB_N_MASK                                    0x70000
#define PCI_NRTR_DBG_S_ARB_L_SHIFT                                   24
#define PCI_NRTR_DBG_S_ARB_L_MASK                                    0x7000000

#define mmPCI_NRTR_DBG_L_ARB                                         0x310
/* PCI_NRTR_DBG_L_ARB */
#define PCI_NRTR_DBG_L_ARB_W_SHIFT                                   0
#define PCI_NRTR_DBG_L_ARB_W_MASK                                    0x7
#define PCI_NRTR_DBG_L_ARB_E_SHIFT                                   8
#define PCI_NRTR_DBG_L_ARB_E_MASK                                    0x700
#define PCI_NRTR_DBG_L_ARB_S_SHIFT                                   16
#define PCI_NRTR_DBG_L_ARB_S_MASK                                    0x70000
#define PCI_NRTR_DBG_L_ARB_N_SHIFT                                   24
#define PCI_NRTR_DBG_L_ARB_N_MASK                                    0x7000000

#define mmPCI_NRTR_DBG_E_ARB_MAX                                     0x320
/* PCI_NRTR_DBG_E_ARB_MAX */
#define PCI_NRTR_DBG_E_ARB_MAX_CREDIT_SHIFT                          0
#define PCI_NRTR_DBG_E_ARB_MAX_CREDIT_MASK                           0x3F

#define mmPCI_NRTR_DBG_W_ARB_MAX                                     0x324
/* PCI_NRTR_DBG_W_ARB_MAX */
#define PCI_NRTR_DBG_W_ARB_MAX_CREDIT_SHIFT                          0
#define PCI_NRTR_DBG_W_ARB_MAX_CREDIT_MASK                           0x3F

#define mmPCI_NRTR_DBG_N_ARB_MAX                                     0x328
/* PCI_NRTR_DBG_N_ARB_MAX */
#define PCI_NRTR_DBG_N_ARB_MAX_CREDIT_SHIFT                          0
#define PCI_NRTR_DBG_N_ARB_MAX_CREDIT_MASK                           0x3F

#define mmPCI_NRTR_DBG_S_ARB_MAX                                     0x32C
/* PCI_NRTR_DBG_S_ARB_MAX */
#define PCI_NRTR_DBG_S_ARB_MAX_CREDIT_SHIFT                          0
#define PCI_NRTR_DBG_S_ARB_MAX_CREDIT_MASK                           0x3F

#define mmPCI_NRTR_DBG_L_ARB_MAX                                     0x330
/* PCI_NRTR_DBG_L_ARB_MAX */
#define PCI_NRTR_DBG_L_ARB_MAX_CREDIT_SHIFT                          0
#define PCI_NRTR_DBG_L_ARB_MAX_CREDIT_MASK                           0x3F

#define mmPCI_NRTR_SPLIT_COEF_0                                      0x400

#define mmPCI_NRTR_SPLIT_COEF_1                                      0x404

#define mmPCI_NRTR_SPLIT_COEF_2                                      0x408

#define mmPCI_NRTR_SPLIT_COEF_3                                      0x40C

#define mmPCI_NRTR_SPLIT_COEF_4                                      0x410

#define mmPCI_NRTR_SPLIT_COEF_5                                      0x414

#define mmPCI_NRTR_SPLIT_COEF_6                                      0x418

#define mmPCI_NRTR_SPLIT_COEF_7                                      0x41C

#define mmPCI_NRTR_SPLIT_COEF_8                                      0x420

#define mmPCI_NRTR_SPLIT_COEF_9                                      0x424
/* PCI_NRTR_SPLIT_COEF */
#define PCI_NRTR_SPLIT_COEF_VAL_SHIFT                                0
#define PCI_NRTR_SPLIT_COEF_VAL_MASK                                 0xFFFF

#define mmPCI_NRTR_SPLIT_CFG                                         0x440
/* PCI_NRTR_SPLIT_CFG */
#define PCI_NRTR_SPLIT_CFG_FORCE_WAK_ORDER_SHIFT                     0
#define PCI_NRTR_SPLIT_CFG_FORCE_WAK_ORDER_MASK                      0x1
#define PCI_NRTR_SPLIT_CFG_FORCE_STRONG_ORDER_SHIFT                  1
#define PCI_NRTR_SPLIT_CFG_FORCE_STRONG_ORDER_MASK                   0x2
#define PCI_NRTR_SPLIT_CFG_DEFAULT_MESH_SHIFT                        2
#define PCI_NRTR_SPLIT_CFG_DEFAULT_MESH_MASK                         0xC
#define PCI_NRTR_SPLIT_CFG_RD_RATE_LIM_EN_SHIFT                      4
#define PCI_NRTR_SPLIT_CFG_RD_RATE_LIM_EN_MASK                       0x10
#define PCI_NRTR_SPLIT_CFG_WR_RATE_LIM_EN_SHIFT                      5
#define PCI_NRTR_SPLIT_CFG_WR_RATE_LIM_EN_MASK                       0x20
#define PCI_NRTR_SPLIT_CFG_B2B_OPT_SHIFT                             6
#define PCI_NRTR_SPLIT_CFG_B2B_OPT_MASK                              0x1C0

#define mmPCI_NRTR_SPLIT_RD_SAT                                      0x444
/* PCI_NRTR_SPLIT_RD_SAT */
#define PCI_NRTR_SPLIT_RD_SAT_VAL_SHIFT                              0
#define PCI_NRTR_SPLIT_RD_SAT_VAL_MASK                               0xFFFF

#define mmPCI_NRTR_SPLIT_RD_RST_TOKEN                                0x448
/* PCI_NRTR_SPLIT_RD_RST_TOKEN */
#define PCI_NRTR_SPLIT_RD_RST_TOKEN_VAL_SHIFT                        0
#define PCI_NRTR_SPLIT_RD_RST_TOKEN_VAL_MASK                         0xFFFF

#define mmPCI_NRTR_SPLIT_RD_TIMEOUT_0                                0x44C

#define mmPCI_NRTR_SPLIT_RD_TIMEOUT_1                                0x450
/* PCI_NRTR_SPLIT_RD_TIMEOUT */
#define PCI_NRTR_SPLIT_RD_TIMEOUT_VAL_SHIFT                          0
#define PCI_NRTR_SPLIT_RD_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmPCI_NRTR_SPLIT_WR_SAT                                      0x454
/* PCI_NRTR_SPLIT_WR_SAT */
#define PCI_NRTR_SPLIT_WR_SAT_VAL_SHIFT                              0
#define PCI_NRTR_SPLIT_WR_SAT_VAL_MASK                               0xFFFF

#define mmPCI_NRTR_WPLIT_WR_TST_TOLEN                                0x458
/* PCI_NRTR_WPLIT_WR_TST_TOLEN */
#define PCI_NRTR_WPLIT_WR_TST_TOLEN_VAL_SHIFT                        0
#define PCI_NRTR_WPLIT_WR_TST_TOLEN_VAL_MASK                         0xFFFF

#define mmPCI_NRTR_SPLIT_WR_TIMEOUT_0                                0x45C

#define mmPCI_NRTR_SPLIT_WR_TIMEOUT_1                                0x460
/* PCI_NRTR_SPLIT_WR_TIMEOUT */
#define PCI_NRTR_SPLIT_WR_TIMEOUT_VAL_SHIFT                          0
#define PCI_NRTR_SPLIT_WR_TIMEOUT_VAL_MASK                           0xFFFFFFFF

#define mmPCI_NRTR_HBW_RANGE_HIT                                     0x470
/* PCI_NRTR_HBW_RANGE_HIT */
#define PCI_NRTR_HBW_RANGE_HIT_IND_SHIFT                             0
#define PCI_NRTR_HBW_RANGE_HIT_IND_MASK                              0xFF

#define mmPCI_NRTR_HBW_RANGE_MASK_L_0                                0x480

#define mmPCI_NRTR_HBW_RANGE_MASK_L_1                                0x484

#define mmPCI_NRTR_HBW_RANGE_MASK_L_2                                0x488

#define mmPCI_NRTR_HBW_RANGE_MASK_L_3                                0x48C

#define mmPCI_NRTR_HBW_RANGE_MASK_L_4                                0x490

#define mmPCI_NRTR_HBW_RANGE_MASK_L_5                                0x494

#define mmPCI_NRTR_HBW_RANGE_MASK_L_6                                0x498

#define mmPCI_NRTR_HBW_RANGE_MASK_L_7                                0x49C
/* PCI_NRTR_HBW_RANGE_MASK_L */
#define PCI_NRTR_HBW_RANGE_MASK_L_VAL_SHIFT                          0
#define PCI_NRTR_HBW_RANGE_MASK_L_VAL_MASK                           0xFFFFFFFF

#define mmPCI_NRTR_HBW_RANGE_MASK_H_0                                0x4A0

#define mmPCI_NRTR_HBW_RANGE_MASK_H_1                                0x4A4

#define mmPCI_NRTR_HBW_RANGE_MASK_H_2                                0x4A8

#define mmPCI_NRTR_HBW_RANGE_MASK_H_3                                0x4AC

#define mmPCI_NRTR_HBW_RANGE_MASK_H_4                                0x4B0

#define mmPCI_NRTR_HBW_RANGE_MASK_H_5                                0x4B4

#define mmPCI_NRTR_HBW_RANGE_MASK_H_6                                0x4B8

#define mmPCI_NRTR_HBW_RANGE_MASK_H_7                                0x4BC
/* PCI_NRTR_HBW_RANGE_MASK_H */
#define PCI_NRTR_HBW_RANGE_MASK_H_VAL_SHIFT                          0
#define PCI_NRTR_HBW_RANGE_MASK_H_VAL_MASK                           0x3FFFF

#define mmPCI_NRTR_HBW_RANGE_BASE_L_0                                0x4C0

#define mmPCI_NRTR_HBW_RANGE_BASE_L_1                                0x4C4

#define mmPCI_NRTR_HBW_RANGE_BASE_L_2                                0x4C8

#define mmPCI_NRTR_HBW_RANGE_BASE_L_3                                0x4CC

#define mmPCI_NRTR_HBW_RANGE_BASE_L_4                                0x4D0

#define mmPCI_NRTR_HBW_RANGE_BASE_L_5                                0x4D4

#define mmPCI_NRTR_HBW_RANGE_BASE_L_6                                0x4D8

#define mmPCI_NRTR_HBW_RANGE_BASE_L_7                                0x4DC
/* PCI_NRTR_HBW_RANGE_BASE_L */
#define PCI_NRTR_HBW_RANGE_BASE_L_VAL_SHIFT                          0
#define PCI_NRTR_HBW_RANGE_BASE_L_VAL_MASK                           0xFFFFFFFF

#define mmPCI_NRTR_HBW_RANGE_BASE_H_0                                0x4E0

#define mmPCI_NRTR_HBW_RANGE_BASE_H_1                                0x4E4

#define mmPCI_NRTR_HBW_RANGE_BASE_H_2                                0x4E8

#define mmPCI_NRTR_HBW_RANGE_BASE_H_3                                0x4EC

#define mmPCI_NRTR_HBW_RANGE_BASE_H_4                                0x4F0

#define mmPCI_NRTR_HBW_RANGE_BASE_H_5                                0x4F4

#define mmPCI_NRTR_HBW_RANGE_BASE_H_6                                0x4F8

#define mmPCI_NRTR_HBW_RANGE_BASE_H_7                                0x4FC
/* PCI_NRTR_HBW_RANGE_BASE_H */
#define PCI_NRTR_HBW_RANGE_BASE_H_VAL_SHIFT                          0
#define PCI_NRTR_HBW_RANGE_BASE_H_VAL_MASK                           0x3FFFF

#define mmPCI_NRTR_LBW_RANGE_HIT                                     0x500
/* PCI_NRTR_LBW_RANGE_HIT */
#define PCI_NRTR_LBW_RANGE_HIT_IND_SHIFT                             0
#define PCI_NRTR_LBW_RANGE_HIT_IND_MASK                              0xFFFF

#define mmPCI_NRTR_LBW_RANGE_MASK_0                                  0x510

#define mmPCI_NRTR_LBW_RANGE_MASK_1                                  0x514

#define mmPCI_NRTR_LBW_RANGE_MASK_2                                  0x518

#define mmPCI_NRTR_LBW_RANGE_MASK_3                                  0x51C

#define mmPCI_NRTR_LBW_RANGE_MASK_4                                  0x520

#define mmPCI_NRTR_LBW_RANGE_MASK_5                                  0x524

#define mmPCI_NRTR_LBW_RANGE_MASK_6                                  0x528

#define mmPCI_NRTR_LBW_RANGE_MASK_7                                  0x52C

#define mmPCI_NRTR_LBW_RANGE_MASK_8                                  0x530

#define mmPCI_NRTR_LBW_RANGE_MASK_9                                  0x534

#define mmPCI_NRTR_LBW_RANGE_MASK_10                                 0x538

#define mmPCI_NRTR_LBW_RANGE_MASK_11                                 0x53C

#define mmPCI_NRTR_LBW_RANGE_MASK_12                                 0x540

#define mmPCI_NRTR_LBW_RANGE_MASK_13                                 0x544

#define mmPCI_NRTR_LBW_RANGE_MASK_14                                 0x548

#define mmPCI_NRTR_LBW_RANGE_MASK_15                                 0x54C
/* PCI_NRTR_LBW_RANGE_MASK */
#define PCI_NRTR_LBW_RANGE_MASK_VAL_SHIFT                            0
#define PCI_NRTR_LBW_RANGE_MASK_VAL_MASK                             0x3FFFFFF

#define mmPCI_NRTR_LBW_RANGE_BASE_0                                  0x550

#define mmPCI_NRTR_LBW_RANGE_BASE_1                                  0x554

#define mmPCI_NRTR_LBW_RANGE_BASE_2                                  0x558

#define mmPCI_NRTR_LBW_RANGE_BASE_3                                  0x55C

#define mmPCI_NRTR_LBW_RANGE_BASE_4                                  0x560

#define mmPCI_NRTR_LBW_RANGE_BASE_5                                  0x564

#define mmPCI_NRTR_LBW_RANGE_BASE_6                                  0x568

#define mmPCI_NRTR_LBW_RANGE_BASE_7                                  0x56C

#define mmPCI_NRTR_LBW_RANGE_BASE_8                                  0x570

#define mmPCI_NRTR_LBW_RANGE_BASE_9                                  0x574

#define mmPCI_NRTR_LBW_RANGE_BASE_10                                 0x578

#define mmPCI_NRTR_LBW_RANGE_BASE_11                                 0x57C

#define mmPCI_NRTR_LBW_RANGE_BASE_12                                 0x580

#define mmPCI_NRTR_LBW_RANGE_BASE_13                                 0x584

#define mmPCI_NRTR_LBW_RANGE_BASE_14                                 0x588

#define mmPCI_NRTR_LBW_RANGE_BASE_15                                 0x58C
/* PCI_NRTR_LBW_RANGE_BASE */
#define PCI_NRTR_LBW_RANGE_BASE_VAL_SHIFT                            0
#define PCI_NRTR_LBW_RANGE_BASE_VAL_MASK                             0x3FFFFFF

#define mmPCI_NRTR_RGLTR                                             0x590
/* PCI_NRTR_RGLTR */
#define PCI_NRTR_RGLTR_WR_EN_SHIFT                                   0
#define PCI_NRTR_RGLTR_WR_EN_MASK                                    0x1
#define PCI_NRTR_RGLTR_RD_EN_SHIFT                                   4
#define PCI_NRTR_RGLTR_RD_EN_MASK                                    0x10

#define mmPCI_NRTR_RGLTR_WR_RESULT                                   0x594
/* PCI_NRTR_RGLTR_WR_RESULT */
#define PCI_NRTR_RGLTR_WR_RESULT_VAL_SHIFT                           0
#define PCI_NRTR_RGLTR_WR_RESULT_VAL_MASK                            0xFF

#define mmPCI_NRTR_RGLTR_RD_RESULT                                   0x598
/* PCI_NRTR_RGLTR_RD_RESULT */
#define PCI_NRTR_RGLTR_RD_RESULT_VAL_SHIFT                           0
#define PCI_NRTR_RGLTR_RD_RESULT_VAL_MASK                            0xFF

#define mmPCI_NRTR_SCRAMB_EN                                         0x600
/* PCI_NRTR_SCRAMB_EN */
#define PCI_NRTR_SCRAMB_EN_VAL_SHIFT                                 0
#define PCI_NRTR_SCRAMB_EN_VAL_MASK                                  0x1

#define mmPCI_NRTR_NON_LIN_SCRAMB                                    0x604
/* PCI_NRTR_NON_LIN_SCRAMB */
#define PCI_NRTR_NON_LIN_SCRAMB_EN_SHIFT                             0
#define PCI_NRTR_NON_LIN_SCRAMB_EN_MASK                              0x1

#endif /* ASIC_REG_PCI_NRTR_H_ */

