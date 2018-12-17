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

#ifndef ASIC_REG_DMA_QM_2_H_
#define ASIC_REG_DMA_QM_2_H_

/*
 *****************************************
 *   DMA_QM_2 (Prototype: QMAN)
 *****************************************
 */

#define mmDMA_QM_2_GLBL_CFG0                                         0x410000
/* DMA_QM_2_GLBL_CFG0 */
#define DMA_QM_2_GLBL_CFG0_PQF_EN_SHIFT                              0
#define DMA_QM_2_GLBL_CFG0_PQF_EN_MASK                               0x1
#define DMA_QM_2_GLBL_CFG0_CQF_EN_SHIFT                              1
#define DMA_QM_2_GLBL_CFG0_CQF_EN_MASK                               0x2
#define DMA_QM_2_GLBL_CFG0_CP_EN_SHIFT                               2
#define DMA_QM_2_GLBL_CFG0_CP_EN_MASK                                0x4
#define DMA_QM_2_GLBL_CFG0_DMA_EN_SHIFT                              3
#define DMA_QM_2_GLBL_CFG0_DMA_EN_MASK                               0x8

#define mmDMA_QM_2_GLBL_CFG1                                         0x410004
/* DMA_QM_2_GLBL_CFG1 */
#define DMA_QM_2_GLBL_CFG1_PQF_STOP_SHIFT                            0
#define DMA_QM_2_GLBL_CFG1_PQF_STOP_MASK                             0x1
#define DMA_QM_2_GLBL_CFG1_CQF_STOP_SHIFT                            1
#define DMA_QM_2_GLBL_CFG1_CQF_STOP_MASK                             0x2
#define DMA_QM_2_GLBL_CFG1_CP_STOP_SHIFT                             2
#define DMA_QM_2_GLBL_CFG1_CP_STOP_MASK                              0x4
#define DMA_QM_2_GLBL_CFG1_DMA_STOP_SHIFT                            3
#define DMA_QM_2_GLBL_CFG1_DMA_STOP_MASK                             0x8
#define DMA_QM_2_GLBL_CFG1_PQF_FLUSH_SHIFT                           8
#define DMA_QM_2_GLBL_CFG1_PQF_FLUSH_MASK                            0x100
#define DMA_QM_2_GLBL_CFG1_CQF_FLUSH_SHIFT                           9
#define DMA_QM_2_GLBL_CFG1_CQF_FLUSH_MASK                            0x200
#define DMA_QM_2_GLBL_CFG1_CP_FLUSH_SHIFT                            10
#define DMA_QM_2_GLBL_CFG1_CP_FLUSH_MASK                             0x400
#define DMA_QM_2_GLBL_CFG1_DMA_FLUSH_SHIFT                           11
#define DMA_QM_2_GLBL_CFG1_DMA_FLUSH_MASK                            0x800

#define mmDMA_QM_2_GLBL_PROT                                         0x410008
/* DMA_QM_2_GLBL_PROT */
#define DMA_QM_2_GLBL_PROT_PQF_PROT_SHIFT                            0
#define DMA_QM_2_GLBL_PROT_PQF_PROT_MASK                             0x1
#define DMA_QM_2_GLBL_PROT_CQF_PROT_SHIFT                            1
#define DMA_QM_2_GLBL_PROT_CQF_PROT_MASK                             0x2
#define DMA_QM_2_GLBL_PROT_CP_PROT_SHIFT                             2
#define DMA_QM_2_GLBL_PROT_CP_PROT_MASK                              0x4
#define DMA_QM_2_GLBL_PROT_DMA_PROT_SHIFT                            3
#define DMA_QM_2_GLBL_PROT_DMA_PROT_MASK                             0x8
#define DMA_QM_2_GLBL_PROT_PQF_ERR_PROT_SHIFT                        4
#define DMA_QM_2_GLBL_PROT_PQF_ERR_PROT_MASK                         0x10
#define DMA_QM_2_GLBL_PROT_CQF_ERR_PROT_SHIFT                        5
#define DMA_QM_2_GLBL_PROT_CQF_ERR_PROT_MASK                         0x20
#define DMA_QM_2_GLBL_PROT_CP_ERR_PROT_SHIFT                         6
#define DMA_QM_2_GLBL_PROT_CP_ERR_PROT_MASK                          0x40
#define DMA_QM_2_GLBL_PROT_DMA_ERR_PROT_SHIFT                        7
#define DMA_QM_2_GLBL_PROT_DMA_ERR_PROT_MASK                         0x80

#define mmDMA_QM_2_GLBL_ERR_CFG                                      0x41000C
/* DMA_QM_2_GLBL_ERR_CFG */
#define DMA_QM_2_GLBL_ERR_CFG_PQF_ERR_INT_EN_SHIFT                   0
#define DMA_QM_2_GLBL_ERR_CFG_PQF_ERR_INT_EN_MASK                    0x1
#define DMA_QM_2_GLBL_ERR_CFG_PQF_ERR_MSG_EN_SHIFT                   1
#define DMA_QM_2_GLBL_ERR_CFG_PQF_ERR_MSG_EN_MASK                    0x2
#define DMA_QM_2_GLBL_ERR_CFG_PQF_STOP_ON_ERR_SHIFT                  2
#define DMA_QM_2_GLBL_ERR_CFG_PQF_STOP_ON_ERR_MASK                   0x4
#define DMA_QM_2_GLBL_ERR_CFG_CQF_ERR_INT_EN_SHIFT                   3
#define DMA_QM_2_GLBL_ERR_CFG_CQF_ERR_INT_EN_MASK                    0x8
#define DMA_QM_2_GLBL_ERR_CFG_CQF_ERR_MSG_EN_SHIFT                   4
#define DMA_QM_2_GLBL_ERR_CFG_CQF_ERR_MSG_EN_MASK                    0x10
#define DMA_QM_2_GLBL_ERR_CFG_CQF_STOP_ON_ERR_SHIFT                  5
#define DMA_QM_2_GLBL_ERR_CFG_CQF_STOP_ON_ERR_MASK                   0x20
#define DMA_QM_2_GLBL_ERR_CFG_CP_ERR_INT_EN_SHIFT                    6
#define DMA_QM_2_GLBL_ERR_CFG_CP_ERR_INT_EN_MASK                     0x40
#define DMA_QM_2_GLBL_ERR_CFG_CP_ERR_MSG_EN_SHIFT                    7
#define DMA_QM_2_GLBL_ERR_CFG_CP_ERR_MSG_EN_MASK                     0x80
#define DMA_QM_2_GLBL_ERR_CFG_CP_STOP_ON_ERR_SHIFT                   8
#define DMA_QM_2_GLBL_ERR_CFG_CP_STOP_ON_ERR_MASK                    0x100
#define DMA_QM_2_GLBL_ERR_CFG_DMA_ERR_INT_EN_SHIFT                   9
#define DMA_QM_2_GLBL_ERR_CFG_DMA_ERR_INT_EN_MASK                    0x200
#define DMA_QM_2_GLBL_ERR_CFG_DMA_ERR_MSG_EN_SHIFT                   10
#define DMA_QM_2_GLBL_ERR_CFG_DMA_ERR_MSG_EN_MASK                    0x400
#define DMA_QM_2_GLBL_ERR_CFG_DMA_STOP_ON_ERR_SHIFT                  11
#define DMA_QM_2_GLBL_ERR_CFG_DMA_STOP_ON_ERR_MASK                   0x800

#define mmDMA_QM_2_GLBL_ERR_ADDR_LO                                  0x410010
/* DMA_QM_2_GLBL_ERR_ADDR_LO */
#define DMA_QM_2_GLBL_ERR_ADDR_LO_VAL_SHIFT                          0
#define DMA_QM_2_GLBL_ERR_ADDR_LO_VAL_MASK                           0xFFFFFFFF

#define mmDMA_QM_2_GLBL_ERR_ADDR_HI                                  0x410014
/* DMA_QM_2_GLBL_ERR_ADDR_HI */
#define DMA_QM_2_GLBL_ERR_ADDR_HI_VAL_SHIFT                          0
#define DMA_QM_2_GLBL_ERR_ADDR_HI_VAL_MASK                           0xFFFFFFFF

#define mmDMA_QM_2_GLBL_ERR_WDATA                                    0x410018
/* DMA_QM_2_GLBL_ERR_WDATA */
#define DMA_QM_2_GLBL_ERR_WDATA_VAL_SHIFT                            0
#define DMA_QM_2_GLBL_ERR_WDATA_VAL_MASK                             0xFFFFFFFF

#define mmDMA_QM_2_GLBL_SECURE_PROPS                                 0x41001C
/* DMA_QM_2_GLBL_SECURE_PROPS */
#define DMA_QM_2_GLBL_SECURE_PROPS_ASID_SHIFT                        0
#define DMA_QM_2_GLBL_SECURE_PROPS_ASID_MASK                         0x3FF
#define DMA_QM_2_GLBL_SECURE_PROPS_MMBP_SHIFT                        10
#define DMA_QM_2_GLBL_SECURE_PROPS_MMBP_MASK                         0x400

#define mmDMA_QM_2_GLBL_NON_SECURE_PROPS                             0x410020
/* DMA_QM_2_GLBL_NON_SECURE_PROPS */
#define DMA_QM_2_GLBL_NON_SECURE_PROPS_ASID_SHIFT                    0
#define DMA_QM_2_GLBL_NON_SECURE_PROPS_ASID_MASK                     0x3FF
#define DMA_QM_2_GLBL_NON_SECURE_PROPS_MMBP_SHIFT                    10
#define DMA_QM_2_GLBL_NON_SECURE_PROPS_MMBP_MASK                     0x400

#define mmDMA_QM_2_GLBL_STS0                                         0x410024
/* DMA_QM_2_GLBL_STS0 */
#define DMA_QM_2_GLBL_STS0_PQF_IDLE_SHIFT                            0
#define DMA_QM_2_GLBL_STS0_PQF_IDLE_MASK                             0x1
#define DMA_QM_2_GLBL_STS0_CQF_IDLE_SHIFT                            1
#define DMA_QM_2_GLBL_STS0_CQF_IDLE_MASK                             0x2
#define DMA_QM_2_GLBL_STS0_CP_IDLE_SHIFT                             2
#define DMA_QM_2_GLBL_STS0_CP_IDLE_MASK                              0x4
#define DMA_QM_2_GLBL_STS0_DMA_IDLE_SHIFT                            3
#define DMA_QM_2_GLBL_STS0_DMA_IDLE_MASK                             0x8
#define DMA_QM_2_GLBL_STS0_PQF_IS_STOP_SHIFT                         4
#define DMA_QM_2_GLBL_STS0_PQF_IS_STOP_MASK                          0x10
#define DMA_QM_2_GLBL_STS0_CQF_IS_STOP_SHIFT                         5
#define DMA_QM_2_GLBL_STS0_CQF_IS_STOP_MASK                          0x20
#define DMA_QM_2_GLBL_STS0_CP_IS_STOP_SHIFT                          6
#define DMA_QM_2_GLBL_STS0_CP_IS_STOP_MASK                           0x40
#define DMA_QM_2_GLBL_STS0_DMA_IS_STOP_SHIFT                         7
#define DMA_QM_2_GLBL_STS0_DMA_IS_STOP_MASK                          0x80

#define mmDMA_QM_2_GLBL_STS1                                         0x410028
/* DMA_QM_2_GLBL_STS1 */
#define DMA_QM_2_GLBL_STS1_PQF_RD_ERR_SHIFT                          0
#define DMA_QM_2_GLBL_STS1_PQF_RD_ERR_MASK                           0x1
#define DMA_QM_2_GLBL_STS1_CQF_RD_ERR_SHIFT                          1
#define DMA_QM_2_GLBL_STS1_CQF_RD_ERR_MASK                           0x2
#define DMA_QM_2_GLBL_STS1_CP_RD_ERR_SHIFT                           2
#define DMA_QM_2_GLBL_STS1_CP_RD_ERR_MASK                            0x4
#define DMA_QM_2_GLBL_STS1_CP_UNDEF_CMD_ERR_SHIFT                    3
#define DMA_QM_2_GLBL_STS1_CP_UNDEF_CMD_ERR_MASK                     0x8
#define DMA_QM_2_GLBL_STS1_CP_STOP_OP_SHIFT                          4
#define DMA_QM_2_GLBL_STS1_CP_STOP_OP_MASK                           0x10
#define DMA_QM_2_GLBL_STS1_CP_MSG_WR_ERR_SHIFT                       5
#define DMA_QM_2_GLBL_STS1_CP_MSG_WR_ERR_MASK                        0x20
#define DMA_QM_2_GLBL_STS1_DMA_RD_ERR_SHIFT                          8
#define DMA_QM_2_GLBL_STS1_DMA_RD_ERR_MASK                           0x100
#define DMA_QM_2_GLBL_STS1_DMA_WR_ERR_SHIFT                          9
#define DMA_QM_2_GLBL_STS1_DMA_WR_ERR_MASK                           0x200
#define DMA_QM_2_GLBL_STS1_DMA_RD_MSG_ERR_SHIFT                      10
#define DMA_QM_2_GLBL_STS1_DMA_RD_MSG_ERR_MASK                       0x400
#define DMA_QM_2_GLBL_STS1_DMA_WR_MSG_ERR_SHIFT                      11
#define DMA_QM_2_GLBL_STS1_DMA_WR_MSG_ERR_MASK                       0x800

#define mmDMA_QM_2_PQ_BASE_LO                                        0x410060
/* DMA_QM_2_PQ_BASE_LO */
#define DMA_QM_2_PQ_BASE_LO_VAL_SHIFT                                0
#define DMA_QM_2_PQ_BASE_LO_VAL_MASK                                 0xFFFFFFFF

#define mmDMA_QM_2_PQ_BASE_HI                                        0x410064
/* DMA_QM_2_PQ_BASE_HI */
#define DMA_QM_2_PQ_BASE_HI_VAL_SHIFT                                0
#define DMA_QM_2_PQ_BASE_HI_VAL_MASK                                 0xFFFFFFFF

#define mmDMA_QM_2_PQ_SIZE                                           0x410068
/* DMA_QM_2_PQ_SIZE */
#define DMA_QM_2_PQ_SIZE_VAL_SHIFT                                   0
#define DMA_QM_2_PQ_SIZE_VAL_MASK                                    0xFFFFFFFF

#define mmDMA_QM_2_PQ_PI                                             0x41006C
/* DMA_QM_2_PQ_PI */
#define DMA_QM_2_PQ_PI_VAL_SHIFT                                     0
#define DMA_QM_2_PQ_PI_VAL_MASK                                      0xFFFFFFFF

#define mmDMA_QM_2_PQ_CI                                             0x410070
/* DMA_QM_2_PQ_CI */
#define DMA_QM_2_PQ_CI_VAL_SHIFT                                     0
#define DMA_QM_2_PQ_CI_VAL_MASK                                      0xFFFFFFFF

#define mmDMA_QM_2_PQ_CFG0                                           0x410074
/* DMA_QM_2_PQ_CFG0 */
#define DMA_QM_2_PQ_CFG0_RESERVED_SHIFT                              0
#define DMA_QM_2_PQ_CFG0_RESERVED_MASK                               0x1

#define mmDMA_QM_2_PQ_CFG1                                           0x410078
/* DMA_QM_2_PQ_CFG1 */
#define DMA_QM_2_PQ_CFG1_CREDIT_LIM_SHIFT                            0
#define DMA_QM_2_PQ_CFG1_CREDIT_LIM_MASK                             0xFFFF
#define DMA_QM_2_PQ_CFG1_MAX_INFLIGHT_SHIFT                          16
#define DMA_QM_2_PQ_CFG1_MAX_INFLIGHT_MASK                           0xFFFF0000

#define mmDMA_QM_2_PQ_ARUSER                                         0x41007C
/* DMA_QM_2_PQ_ARUSER */
#define DMA_QM_2_PQ_ARUSER_NOSNOOP_SHIFT                             0
#define DMA_QM_2_PQ_ARUSER_NOSNOOP_MASK                              0x1
#define DMA_QM_2_PQ_ARUSER_WORD_SHIFT                                1
#define DMA_QM_2_PQ_ARUSER_WORD_MASK                                 0x2

#define mmDMA_QM_2_PQ_PUSH0                                          0x410080
/* DMA_QM_2_PQ_PUSH0 */
#define DMA_QM_2_PQ_PUSH0_PTR_LO_SHIFT                               0
#define DMA_QM_2_PQ_PUSH0_PTR_LO_MASK                                0xFFFFFFFF

#define mmDMA_QM_2_PQ_PUSH1                                          0x410084
/* DMA_QM_2_PQ_PUSH1 */
#define DMA_QM_2_PQ_PUSH1_PTR_HI_SHIFT                               0
#define DMA_QM_2_PQ_PUSH1_PTR_HI_MASK                                0xFFFFFFFF

#define mmDMA_QM_2_PQ_PUSH2                                          0x410088
/* DMA_QM_2_PQ_PUSH2 */
#define DMA_QM_2_PQ_PUSH2_TSIZE_SHIFT                                0
#define DMA_QM_2_PQ_PUSH2_TSIZE_MASK                                 0xFFFFFFFF

#define mmDMA_QM_2_PQ_PUSH3                                          0x41008C
/* DMA_QM_2_PQ_PUSH3 */
#define DMA_QM_2_PQ_PUSH3_RPT_SHIFT                                  0
#define DMA_QM_2_PQ_PUSH3_RPT_MASK                                   0xFFFF
#define DMA_QM_2_PQ_PUSH3_CTL_SHIFT                                  16
#define DMA_QM_2_PQ_PUSH3_CTL_MASK                                   0xFFFF0000

#define mmDMA_QM_2_PQ_STS0                                           0x410090
/* DMA_QM_2_PQ_STS0 */
#define DMA_QM_2_PQ_STS0_PQ_CREDIT_CNT_SHIFT                         0
#define DMA_QM_2_PQ_STS0_PQ_CREDIT_CNT_MASK                          0xFFFF
#define DMA_QM_2_PQ_STS0_PQ_FREE_CNT_SHIFT                           16
#define DMA_QM_2_PQ_STS0_PQ_FREE_CNT_MASK                            0xFFFF0000

#define mmDMA_QM_2_PQ_STS1                                           0x410094
/* DMA_QM_2_PQ_STS1 */
#define DMA_QM_2_PQ_STS1_PQ_INFLIGHT_CNT_SHIFT                       0
#define DMA_QM_2_PQ_STS1_PQ_INFLIGHT_CNT_MASK                        0xFFFF
#define DMA_QM_2_PQ_STS1_PQ_BUF_EMPTY_SHIFT                          30
#define DMA_QM_2_PQ_STS1_PQ_BUF_EMPTY_MASK                           0x40000000
#define DMA_QM_2_PQ_STS1_PQ_BUSY_SHIFT                               31
#define DMA_QM_2_PQ_STS1_PQ_BUSY_MASK                                0x80000000

#define mmDMA_QM_2_PQ_RD_RATE_LIM_EN                                 0x4100A0
/* DMA_QM_2_PQ_RD_RATE_LIM_EN */
#define DMA_QM_2_PQ_RD_RATE_LIM_EN_VAL_SHIFT                         0
#define DMA_QM_2_PQ_RD_RATE_LIM_EN_VAL_MASK                          0x1

#define mmDMA_QM_2_PQ_RD_RATE_LIM_RST_TOKEN                          0x4100A4
/* DMA_QM_2_PQ_RD_RATE_LIM_RST_TOKEN */
#define DMA_QM_2_PQ_RD_RATE_LIM_RST_TOKEN_VAL_SHIFT                  0
#define DMA_QM_2_PQ_RD_RATE_LIM_RST_TOKEN_VAL_MASK                   0xFFFF

#define mmDMA_QM_2_PQ_RD_RATE_LIM_SAT                                0x4100A8
/* DMA_QM_2_PQ_RD_RATE_LIM_SAT */
#define DMA_QM_2_PQ_RD_RATE_LIM_SAT_VAL_SHIFT                        0
#define DMA_QM_2_PQ_RD_RATE_LIM_SAT_VAL_MASK                         0xFFFF

#define mmDMA_QM_2_PQ_RD_RATE_LIM_TOUT                               0x4100AC
/* DMA_QM_2_PQ_RD_RATE_LIM_TOUT */
#define DMA_QM_2_PQ_RD_RATE_LIM_TOUT_VAL_SHIFT                       0
#define DMA_QM_2_PQ_RD_RATE_LIM_TOUT_VAL_MASK                        0x7FFFFFFF

#define mmDMA_QM_2_CQ_CFG0                                           0x4100B0
/* DMA_QM_2_CQ_CFG0 */
#define DMA_QM_2_CQ_CFG0_RESERVED_SHIFT                              0
#define DMA_QM_2_CQ_CFG0_RESERVED_MASK                               0x1

#define mmDMA_QM_2_CQ_CFG1                                           0x4100B4
/* DMA_QM_2_CQ_CFG1 */
#define DMA_QM_2_CQ_CFG1_CREDIT_LIM_SHIFT                            0
#define DMA_QM_2_CQ_CFG1_CREDIT_LIM_MASK                             0xFFFF
#define DMA_QM_2_CQ_CFG1_MAX_INFLIGHT_SHIFT                          16
#define DMA_QM_2_CQ_CFG1_MAX_INFLIGHT_MASK                           0xFFFF0000

#define mmDMA_QM_2_CQ_ARUSER                                         0x4100B8
/* DMA_QM_2_CQ_ARUSER */
#define DMA_QM_2_CQ_ARUSER_NOSNOOP_SHIFT                             0
#define DMA_QM_2_CQ_ARUSER_NOSNOOP_MASK                              0x1
#define DMA_QM_2_CQ_ARUSER_WORD_SHIFT                                1
#define DMA_QM_2_CQ_ARUSER_WORD_MASK                                 0x2

#define mmDMA_QM_2_CQ_PTR_LO                                         0x4100C0
/* DMA_QM_2_CQ_PTR_LO */
#define DMA_QM_2_CQ_PTR_LO_VAL_SHIFT                                 0
#define DMA_QM_2_CQ_PTR_LO_VAL_MASK                                  0xFFFFFFFF

#define mmDMA_QM_2_CQ_PTR_HI                                         0x4100C4
/* DMA_QM_2_CQ_PTR_HI */
#define DMA_QM_2_CQ_PTR_HI_VAL_SHIFT                                 0
#define DMA_QM_2_CQ_PTR_HI_VAL_MASK                                  0xFFFFFFFF

#define mmDMA_QM_2_CQ_TSIZE                                          0x4100C8
/* DMA_QM_2_CQ_TSIZE */
#define DMA_QM_2_CQ_TSIZE_VAL_SHIFT                                  0
#define DMA_QM_2_CQ_TSIZE_VAL_MASK                                   0xFFFFFFFF

#define mmDMA_QM_2_CQ_CTL                                            0x4100CC
/* DMA_QM_2_CQ_CTL */
#define DMA_QM_2_CQ_CTL_RPT_SHIFT                                    0
#define DMA_QM_2_CQ_CTL_RPT_MASK                                     0xFFFF
#define DMA_QM_2_CQ_CTL_CTL_SHIFT                                    16
#define DMA_QM_2_CQ_CTL_CTL_MASK                                     0xFFFF0000

#define mmDMA_QM_2_CQ_PTR_LO_STS                                     0x4100D4
/* DMA_QM_2_CQ_PTR_LO_STS */
#define DMA_QM_2_CQ_PTR_LO_STS_VAL_SHIFT                             0
#define DMA_QM_2_CQ_PTR_LO_STS_VAL_MASK                              0xFFFFFFFF

#define mmDMA_QM_2_CQ_PTR_HI_STS                                     0x4100D8
/* DMA_QM_2_CQ_PTR_HI_STS */
#define DMA_QM_2_CQ_PTR_HI_STS_VAL_SHIFT                             0
#define DMA_QM_2_CQ_PTR_HI_STS_VAL_MASK                              0xFFFFFFFF

#define mmDMA_QM_2_CQ_TSIZE_STS                                      0x4100DC
/* DMA_QM_2_CQ_TSIZE_STS */
#define DMA_QM_2_CQ_TSIZE_STS_VAL_SHIFT                              0
#define DMA_QM_2_CQ_TSIZE_STS_VAL_MASK                               0xFFFFFFFF

#define mmDMA_QM_2_CQ_CTL_STS                                        0x4100E0
/* DMA_QM_2_CQ_CTL_STS */
#define DMA_QM_2_CQ_CTL_STS_RPT_SHIFT                                0
#define DMA_QM_2_CQ_CTL_STS_RPT_MASK                                 0xFFFF
#define DMA_QM_2_CQ_CTL_STS_CTL_SHIFT                                16
#define DMA_QM_2_CQ_CTL_STS_CTL_MASK                                 0xFFFF0000

#define mmDMA_QM_2_CQ_STS0                                           0x4100E4
/* DMA_QM_2_CQ_STS0 */
#define DMA_QM_2_CQ_STS0_CQ_CREDIT_CNT_SHIFT                         0
#define DMA_QM_2_CQ_STS0_CQ_CREDIT_CNT_MASK                          0xFFFF
#define DMA_QM_2_CQ_STS0_CQ_FREE_CNT_SHIFT                           16
#define DMA_QM_2_CQ_STS0_CQ_FREE_CNT_MASK                            0xFFFF0000

#define mmDMA_QM_2_CQ_STS1                                           0x4100E8
/* DMA_QM_2_CQ_STS1 */
#define DMA_QM_2_CQ_STS1_CQ_INFLIGHT_CNT_SHIFT                       0
#define DMA_QM_2_CQ_STS1_CQ_INFLIGHT_CNT_MASK                        0xFFFF
#define DMA_QM_2_CQ_STS1_CQ_BUF_EMPTY_SHIFT                          30
#define DMA_QM_2_CQ_STS1_CQ_BUF_EMPTY_MASK                           0x40000000
#define DMA_QM_2_CQ_STS1_CQ_BUSY_SHIFT                               31
#define DMA_QM_2_CQ_STS1_CQ_BUSY_MASK                                0x80000000

#define mmDMA_QM_2_CQ_RD_RATE_LIM_EN                                 0x4100F0
/* DMA_QM_2_CQ_RD_RATE_LIM_EN */
#define DMA_QM_2_CQ_RD_RATE_LIM_EN_VAL_SHIFT                         0
#define DMA_QM_2_CQ_RD_RATE_LIM_EN_VAL_MASK                          0x1

#define mmDMA_QM_2_CQ_RD_RATE_LIM_RST_TOKEN                          0x4100F4
/* DMA_QM_2_CQ_RD_RATE_LIM_RST_TOKEN */
#define DMA_QM_2_CQ_RD_RATE_LIM_RST_TOKEN_VAL_SHIFT                  0
#define DMA_QM_2_CQ_RD_RATE_LIM_RST_TOKEN_VAL_MASK                   0xFFFF

#define mmDMA_QM_2_CQ_RD_RATE_LIM_SAT                                0x4100F8
/* DMA_QM_2_CQ_RD_RATE_LIM_SAT */
#define DMA_QM_2_CQ_RD_RATE_LIM_SAT_VAL_SHIFT                        0
#define DMA_QM_2_CQ_RD_RATE_LIM_SAT_VAL_MASK                         0xFFFF

#define mmDMA_QM_2_CQ_RD_RATE_LIM_TOUT                               0x4100FC
/* DMA_QM_2_CQ_RD_RATE_LIM_TOUT */
#define DMA_QM_2_CQ_RD_RATE_LIM_TOUT_VAL_SHIFT                       0
#define DMA_QM_2_CQ_RD_RATE_LIM_TOUT_VAL_MASK                        0x7FFFFFFF

#define mmDMA_QM_2_CQ_IFIFO_CNT                                      0x410108
/* DMA_QM_2_CQ_IFIFO_CNT */
#define DMA_QM_2_CQ_IFIFO_CNT_VAL_SHIFT                              0
#define DMA_QM_2_CQ_IFIFO_CNT_VAL_MASK                               0x3

#define mmDMA_QM_2_CP_MSG_BASE0_ADDR_LO                              0x410120
/* DMA_QM_2_CP_MSG_BASE0_ADDR_LO */
#define DMA_QM_2_CP_MSG_BASE0_ADDR_LO_VAL_SHIFT                      0
#define DMA_QM_2_CP_MSG_BASE0_ADDR_LO_VAL_MASK                       0xFFFFFFFF

#define mmDMA_QM_2_CP_MSG_BASE0_ADDR_HI                              0x410124
/* DMA_QM_2_CP_MSG_BASE0_ADDR_HI */
#define DMA_QM_2_CP_MSG_BASE0_ADDR_HI_VAL_SHIFT                      0
#define DMA_QM_2_CP_MSG_BASE0_ADDR_HI_VAL_MASK                       0xFFFFFFFF

#define mmDMA_QM_2_CP_MSG_BASE1_ADDR_LO                              0x410128
/* DMA_QM_2_CP_MSG_BASE1_ADDR_LO */
#define DMA_QM_2_CP_MSG_BASE1_ADDR_LO_VAL_SHIFT                      0
#define DMA_QM_2_CP_MSG_BASE1_ADDR_LO_VAL_MASK                       0xFFFFFFFF

#define mmDMA_QM_2_CP_MSG_BASE1_ADDR_HI                              0x41012C
/* DMA_QM_2_CP_MSG_BASE1_ADDR_HI */
#define DMA_QM_2_CP_MSG_BASE1_ADDR_HI_VAL_SHIFT                      0
#define DMA_QM_2_CP_MSG_BASE1_ADDR_HI_VAL_MASK                       0xFFFFFFFF

#define mmDMA_QM_2_CP_MSG_BASE2_ADDR_LO                              0x410130
/* DMA_QM_2_CP_MSG_BASE2_ADDR_LO */
#define DMA_QM_2_CP_MSG_BASE2_ADDR_LO_VAL_SHIFT                      0
#define DMA_QM_2_CP_MSG_BASE2_ADDR_LO_VAL_MASK                       0xFFFFFFFF

#define mmDMA_QM_2_CP_MSG_BASE2_ADDR_HI                              0x410134
/* DMA_QM_2_CP_MSG_BASE2_ADDR_HI */
#define DMA_QM_2_CP_MSG_BASE2_ADDR_HI_VAL_SHIFT                      0
#define DMA_QM_2_CP_MSG_BASE2_ADDR_HI_VAL_MASK                       0xFFFFFFFF

#define mmDMA_QM_2_CP_MSG_BASE3_ADDR_LO                              0x410138
/* DMA_QM_2_CP_MSG_BASE3_ADDR_LO */
#define DMA_QM_2_CP_MSG_BASE3_ADDR_LO_VAL_SHIFT                      0
#define DMA_QM_2_CP_MSG_BASE3_ADDR_LO_VAL_MASK                       0xFFFFFFFF

#define mmDMA_QM_2_CP_MSG_BASE3_ADDR_HI                              0x41013C
/* DMA_QM_2_CP_MSG_BASE3_ADDR_HI */
#define DMA_QM_2_CP_MSG_BASE3_ADDR_HI_VAL_SHIFT                      0
#define DMA_QM_2_CP_MSG_BASE3_ADDR_HI_VAL_MASK                       0xFFFFFFFF

#define mmDMA_QM_2_CP_LDMA_TSIZE_OFFSET                              0x410140
/* DMA_QM_2_CP_LDMA_TSIZE_OFFSET */
#define DMA_QM_2_CP_LDMA_TSIZE_OFFSET_VAL_SHIFT                      0
#define DMA_QM_2_CP_LDMA_TSIZE_OFFSET_VAL_MASK                       0xFFFFFFFF

#define mmDMA_QM_2_CP_LDMA_SRC_BASE_LO_OFFSET                        0x410144
/* DMA_QM_2_CP_LDMA_SRC_BASE_LO_OFFSET */
#define DMA_QM_2_CP_LDMA_SRC_BASE_LO_OFFSET_VAL_SHIFT                0
#define DMA_QM_2_CP_LDMA_SRC_BASE_LO_OFFSET_VAL_MASK                 0xFFFFFFFF

#define mmDMA_QM_2_CP_LDMA_SRC_BASE_HI_OFFSET                        0x410148
/* DMA_QM_2_CP_LDMA_SRC_BASE_HI_OFFSET */
#define DMA_QM_2_CP_LDMA_SRC_BASE_HI_OFFSET_VAL_SHIFT                0
#define DMA_QM_2_CP_LDMA_SRC_BASE_HI_OFFSET_VAL_MASK                 0xFFFFFFFF

#define mmDMA_QM_2_CP_LDMA_DST_BASE_LO_OFFSET                        0x41014C
/* DMA_QM_2_CP_LDMA_DST_BASE_LO_OFFSET */
#define DMA_QM_2_CP_LDMA_DST_BASE_LO_OFFSET_VAL_SHIFT                0
#define DMA_QM_2_CP_LDMA_DST_BASE_LO_OFFSET_VAL_MASK                 0xFFFFFFFF

#define mmDMA_QM_2_CP_LDMA_DST_BASE_HI_OFFSET                        0x410150
/* DMA_QM_2_CP_LDMA_DST_BASE_HI_OFFSET */
#define DMA_QM_2_CP_LDMA_DST_BASE_HI_OFFSET_VAL_SHIFT                0
#define DMA_QM_2_CP_LDMA_DST_BASE_HI_OFFSET_VAL_MASK                 0xFFFFFFFF

#define mmDMA_QM_2_CP_LDMA_COMMIT_OFFSET                             0x410154
/* DMA_QM_2_CP_LDMA_COMMIT_OFFSET */
#define DMA_QM_2_CP_LDMA_COMMIT_OFFSET_VAL_SHIFT                     0
#define DMA_QM_2_CP_LDMA_COMMIT_OFFSET_VAL_MASK                      0xFFFFFFFF

#define mmDMA_QM_2_CP_FENCE0_RDATA                                   0x410158
/* DMA_QM_2_CP_FENCE0_RDATA */
#define DMA_QM_2_CP_FENCE0_RDATA_INC_VAL_SHIFT                       0
#define DMA_QM_2_CP_FENCE0_RDATA_INC_VAL_MASK                        0xF

#define mmDMA_QM_2_CP_FENCE1_RDATA                                   0x41015C
/* DMA_QM_2_CP_FENCE1_RDATA */
#define DMA_QM_2_CP_FENCE1_RDATA_INC_VAL_SHIFT                       0
#define DMA_QM_2_CP_FENCE1_RDATA_INC_VAL_MASK                        0xF

#define mmDMA_QM_2_CP_FENCE2_RDATA                                   0x410160
/* DMA_QM_2_CP_FENCE2_RDATA */
#define DMA_QM_2_CP_FENCE2_RDATA_INC_VAL_SHIFT                       0
#define DMA_QM_2_CP_FENCE2_RDATA_INC_VAL_MASK                        0xF

#define mmDMA_QM_2_CP_FENCE3_RDATA                                   0x410164
/* DMA_QM_2_CP_FENCE3_RDATA */
#define DMA_QM_2_CP_FENCE3_RDATA_INC_VAL_SHIFT                       0
#define DMA_QM_2_CP_FENCE3_RDATA_INC_VAL_MASK                        0xF

#define mmDMA_QM_2_CP_FENCE0_CNT                                     0x410168
/* DMA_QM_2_CP_FENCE0_CNT */
#define DMA_QM_2_CP_FENCE0_CNT_VAL_SHIFT                             0
#define DMA_QM_2_CP_FENCE0_CNT_VAL_MASK                              0xFF

#define mmDMA_QM_2_CP_FENCE1_CNT                                     0x41016C
/* DMA_QM_2_CP_FENCE1_CNT */
#define DMA_QM_2_CP_FENCE1_CNT_VAL_SHIFT                             0
#define DMA_QM_2_CP_FENCE1_CNT_VAL_MASK                              0xFF

#define mmDMA_QM_2_CP_FENCE2_CNT                                     0x410170
/* DMA_QM_2_CP_FENCE2_CNT */
#define DMA_QM_2_CP_FENCE2_CNT_VAL_SHIFT                             0
#define DMA_QM_2_CP_FENCE2_CNT_VAL_MASK                              0xFF

#define mmDMA_QM_2_CP_FENCE3_CNT                                     0x410174
/* DMA_QM_2_CP_FENCE3_CNT */
#define DMA_QM_2_CP_FENCE3_CNT_VAL_SHIFT                             0
#define DMA_QM_2_CP_FENCE3_CNT_VAL_MASK                              0xFF

#define mmDMA_QM_2_CP_STS                                            0x410178
/* DMA_QM_2_CP_STS */
#define DMA_QM_2_CP_STS_MSG_INFLIGHT_CNT_SHIFT                       0
#define DMA_QM_2_CP_STS_MSG_INFLIGHT_CNT_MASK                        0xFFFF
#define DMA_QM_2_CP_STS_ERDY_SHIFT                                   16
#define DMA_QM_2_CP_STS_ERDY_MASK                                    0x10000
#define DMA_QM_2_CP_STS_RRDY_SHIFT                                   17
#define DMA_QM_2_CP_STS_RRDY_MASK                                    0x20000
#define DMA_QM_2_CP_STS_MRDY_SHIFT                                   18
#define DMA_QM_2_CP_STS_MRDY_MASK                                    0x40000
#define DMA_QM_2_CP_STS_SW_STOP_SHIFT                                19
#define DMA_QM_2_CP_STS_SW_STOP_MASK                                 0x80000
#define DMA_QM_2_CP_STS_FENCE_ID_SHIFT                               20
#define DMA_QM_2_CP_STS_FENCE_ID_MASK                                0x300000
#define DMA_QM_2_CP_STS_FENCE_IN_PROGRESS_SHIFT                      22
#define DMA_QM_2_CP_STS_FENCE_IN_PROGRESS_MASK                       0x400000

#define mmDMA_QM_2_CP_CURRENT_INST_LO                                0x41017C
/* DMA_QM_2_CP_CURRENT_INST_LO */
#define DMA_QM_2_CP_CURRENT_INST_LO_VAL_SHIFT                        0
#define DMA_QM_2_CP_CURRENT_INST_LO_VAL_MASK                         0xFFFFFFFF

#define mmDMA_QM_2_CP_CURRENT_INST_HI                                0x410180
/* DMA_QM_2_CP_CURRENT_INST_HI */
#define DMA_QM_2_CP_CURRENT_INST_HI_VAL_SHIFT                        0
#define DMA_QM_2_CP_CURRENT_INST_HI_VAL_MASK                         0xFFFFFFFF

#define mmDMA_QM_2_CP_BARRIER_CFG                                    0x410184
/* DMA_QM_2_CP_BARRIER_CFG */
#define DMA_QM_2_CP_BARRIER_CFG_EBGUARD_SHIFT                        0
#define DMA_QM_2_CP_BARRIER_CFG_EBGUARD_MASK                         0xFFF

#define mmDMA_QM_2_CP_DBG_0                                          0x410188
/* DMA_QM_2_CP_DBG_0 */
#define DMA_QM_2_CP_DBG_0_VAL_SHIFT                                  0
#define DMA_QM_2_CP_DBG_0_VAL_MASK                                   0xFF

#define mmDMA_QM_2_PQ_BUF_ADDR                                       0x410300
/* DMA_QM_2_PQ_BUF_ADDR */
#define DMA_QM_2_PQ_BUF_ADDR_VAL_SHIFT                               0
#define DMA_QM_2_PQ_BUF_ADDR_VAL_MASK                                0xFFFFFFFF

#define mmDMA_QM_2_PQ_BUF_RDATA                                      0x410304
/* DMA_QM_2_PQ_BUF_RDATA */
#define DMA_QM_2_PQ_BUF_RDATA_VAL_SHIFT                              0
#define DMA_QM_2_PQ_BUF_RDATA_VAL_MASK                               0xFFFFFFFF

#define mmDMA_QM_2_CQ_BUF_ADDR                                       0x410308
/* DMA_QM_2_CQ_BUF_ADDR */
#define DMA_QM_2_CQ_BUF_ADDR_VAL_SHIFT                               0
#define DMA_QM_2_CQ_BUF_ADDR_VAL_MASK                                0xFFFFFFFF

#define mmDMA_QM_2_CQ_BUF_RDATA                                      0x41030C
/* DMA_QM_2_CQ_BUF_RDATA */
#define DMA_QM_2_CQ_BUF_RDATA_VAL_SHIFT                              0
#define DMA_QM_2_CQ_BUF_RDATA_VAL_MASK                               0xFFFFFFFF

#endif /* ASIC_REG_DMA_QM_2_H_ */

