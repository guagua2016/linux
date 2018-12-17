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

#ifndef ASIC_REG_TPC5_QM_H_
#define ASIC_REG_TPC5_QM_H_

/*
 *****************************************
 *   TPC5_QM (Prototype: QMAN)
 *****************************************
 */

#define mmTPC5_QM_GLBL_CFG0                                          0xF48000
/* TPC5_QM_GLBL_CFG0 */
#define TPC5_QM_GLBL_CFG0_PQF_EN_SHIFT                               0
#define TPC5_QM_GLBL_CFG0_PQF_EN_MASK                                0x1
#define TPC5_QM_GLBL_CFG0_CQF_EN_SHIFT                               1
#define TPC5_QM_GLBL_CFG0_CQF_EN_MASK                                0x2
#define TPC5_QM_GLBL_CFG0_CP_EN_SHIFT                                2
#define TPC5_QM_GLBL_CFG0_CP_EN_MASK                                 0x4
#define TPC5_QM_GLBL_CFG0_DMA_EN_SHIFT                               3
#define TPC5_QM_GLBL_CFG0_DMA_EN_MASK                                0x8

#define mmTPC5_QM_GLBL_CFG1                                          0xF48004
/* TPC5_QM_GLBL_CFG1 */
#define TPC5_QM_GLBL_CFG1_PQF_STOP_SHIFT                             0
#define TPC5_QM_GLBL_CFG1_PQF_STOP_MASK                              0x1
#define TPC5_QM_GLBL_CFG1_CQF_STOP_SHIFT                             1
#define TPC5_QM_GLBL_CFG1_CQF_STOP_MASK                              0x2
#define TPC5_QM_GLBL_CFG1_CP_STOP_SHIFT                              2
#define TPC5_QM_GLBL_CFG1_CP_STOP_MASK                               0x4
#define TPC5_QM_GLBL_CFG1_DMA_STOP_SHIFT                             3
#define TPC5_QM_GLBL_CFG1_DMA_STOP_MASK                              0x8
#define TPC5_QM_GLBL_CFG1_PQF_FLUSH_SHIFT                            8
#define TPC5_QM_GLBL_CFG1_PQF_FLUSH_MASK                             0x100
#define TPC5_QM_GLBL_CFG1_CQF_FLUSH_SHIFT                            9
#define TPC5_QM_GLBL_CFG1_CQF_FLUSH_MASK                             0x200
#define TPC5_QM_GLBL_CFG1_CP_FLUSH_SHIFT                             10
#define TPC5_QM_GLBL_CFG1_CP_FLUSH_MASK                              0x400
#define TPC5_QM_GLBL_CFG1_DMA_FLUSH_SHIFT                            11
#define TPC5_QM_GLBL_CFG1_DMA_FLUSH_MASK                             0x800

#define mmTPC5_QM_GLBL_PROT                                          0xF48008
/* TPC5_QM_GLBL_PROT */
#define TPC5_QM_GLBL_PROT_PQF_PROT_SHIFT                             0
#define TPC5_QM_GLBL_PROT_PQF_PROT_MASK                              0x1
#define TPC5_QM_GLBL_PROT_CQF_PROT_SHIFT                             1
#define TPC5_QM_GLBL_PROT_CQF_PROT_MASK                              0x2
#define TPC5_QM_GLBL_PROT_CP_PROT_SHIFT                              2
#define TPC5_QM_GLBL_PROT_CP_PROT_MASK                               0x4
#define TPC5_QM_GLBL_PROT_DMA_PROT_SHIFT                             3
#define TPC5_QM_GLBL_PROT_DMA_PROT_MASK                              0x8
#define TPC5_QM_GLBL_PROT_PQF_ERR_PROT_SHIFT                         4
#define TPC5_QM_GLBL_PROT_PQF_ERR_PROT_MASK                          0x10
#define TPC5_QM_GLBL_PROT_CQF_ERR_PROT_SHIFT                         5
#define TPC5_QM_GLBL_PROT_CQF_ERR_PROT_MASK                          0x20
#define TPC5_QM_GLBL_PROT_CP_ERR_PROT_SHIFT                          6
#define TPC5_QM_GLBL_PROT_CP_ERR_PROT_MASK                           0x40
#define TPC5_QM_GLBL_PROT_DMA_ERR_PROT_SHIFT                         7
#define TPC5_QM_GLBL_PROT_DMA_ERR_PROT_MASK                          0x80

#define mmTPC5_QM_GLBL_ERR_CFG                                       0xF4800C
/* TPC5_QM_GLBL_ERR_CFG */
#define TPC5_QM_GLBL_ERR_CFG_PQF_ERR_INT_EN_SHIFT                    0
#define TPC5_QM_GLBL_ERR_CFG_PQF_ERR_INT_EN_MASK                     0x1
#define TPC5_QM_GLBL_ERR_CFG_PQF_ERR_MSG_EN_SHIFT                    1
#define TPC5_QM_GLBL_ERR_CFG_PQF_ERR_MSG_EN_MASK                     0x2
#define TPC5_QM_GLBL_ERR_CFG_PQF_STOP_ON_ERR_SHIFT                   2
#define TPC5_QM_GLBL_ERR_CFG_PQF_STOP_ON_ERR_MASK                    0x4
#define TPC5_QM_GLBL_ERR_CFG_CQF_ERR_INT_EN_SHIFT                    3
#define TPC5_QM_GLBL_ERR_CFG_CQF_ERR_INT_EN_MASK                     0x8
#define TPC5_QM_GLBL_ERR_CFG_CQF_ERR_MSG_EN_SHIFT                    4
#define TPC5_QM_GLBL_ERR_CFG_CQF_ERR_MSG_EN_MASK                     0x10
#define TPC5_QM_GLBL_ERR_CFG_CQF_STOP_ON_ERR_SHIFT                   5
#define TPC5_QM_GLBL_ERR_CFG_CQF_STOP_ON_ERR_MASK                    0x20
#define TPC5_QM_GLBL_ERR_CFG_CP_ERR_INT_EN_SHIFT                     6
#define TPC5_QM_GLBL_ERR_CFG_CP_ERR_INT_EN_MASK                      0x40
#define TPC5_QM_GLBL_ERR_CFG_CP_ERR_MSG_EN_SHIFT                     7
#define TPC5_QM_GLBL_ERR_CFG_CP_ERR_MSG_EN_MASK                      0x80
#define TPC5_QM_GLBL_ERR_CFG_CP_STOP_ON_ERR_SHIFT                    8
#define TPC5_QM_GLBL_ERR_CFG_CP_STOP_ON_ERR_MASK                     0x100
#define TPC5_QM_GLBL_ERR_CFG_DMA_ERR_INT_EN_SHIFT                    9
#define TPC5_QM_GLBL_ERR_CFG_DMA_ERR_INT_EN_MASK                     0x200
#define TPC5_QM_GLBL_ERR_CFG_DMA_ERR_MSG_EN_SHIFT                    10
#define TPC5_QM_GLBL_ERR_CFG_DMA_ERR_MSG_EN_MASK                     0x400
#define TPC5_QM_GLBL_ERR_CFG_DMA_STOP_ON_ERR_SHIFT                   11
#define TPC5_QM_GLBL_ERR_CFG_DMA_STOP_ON_ERR_MASK                    0x800

#define mmTPC5_QM_GLBL_ERR_ADDR_LO                                   0xF48010
/* TPC5_QM_GLBL_ERR_ADDR_LO */
#define TPC5_QM_GLBL_ERR_ADDR_LO_VAL_SHIFT                           0
#define TPC5_QM_GLBL_ERR_ADDR_LO_VAL_MASK                            0xFFFFFFFF

#define mmTPC5_QM_GLBL_ERR_ADDR_HI                                   0xF48014
/* TPC5_QM_GLBL_ERR_ADDR_HI */
#define TPC5_QM_GLBL_ERR_ADDR_HI_VAL_SHIFT                           0
#define TPC5_QM_GLBL_ERR_ADDR_HI_VAL_MASK                            0xFFFFFFFF

#define mmTPC5_QM_GLBL_ERR_WDATA                                     0xF48018
/* TPC5_QM_GLBL_ERR_WDATA */
#define TPC5_QM_GLBL_ERR_WDATA_VAL_SHIFT                             0
#define TPC5_QM_GLBL_ERR_WDATA_VAL_MASK                              0xFFFFFFFF

#define mmTPC5_QM_GLBL_SECURE_PROPS                                  0xF4801C
/* TPC5_QM_GLBL_SECURE_PROPS */
#define TPC5_QM_GLBL_SECURE_PROPS_ASID_SHIFT                         0
#define TPC5_QM_GLBL_SECURE_PROPS_ASID_MASK                          0x3FF
#define TPC5_QM_GLBL_SECURE_PROPS_MMBP_SHIFT                         10
#define TPC5_QM_GLBL_SECURE_PROPS_MMBP_MASK                          0x400

#define mmTPC5_QM_GLBL_NON_SECURE_PROPS                              0xF48020
/* TPC5_QM_GLBL_NON_SECURE_PROPS */
#define TPC5_QM_GLBL_NON_SECURE_PROPS_ASID_SHIFT                     0
#define TPC5_QM_GLBL_NON_SECURE_PROPS_ASID_MASK                      0x3FF
#define TPC5_QM_GLBL_NON_SECURE_PROPS_MMBP_SHIFT                     10
#define TPC5_QM_GLBL_NON_SECURE_PROPS_MMBP_MASK                      0x400

#define mmTPC5_QM_GLBL_STS0                                          0xF48024
/* TPC5_QM_GLBL_STS0 */
#define TPC5_QM_GLBL_STS0_PQF_IDLE_SHIFT                             0
#define TPC5_QM_GLBL_STS0_PQF_IDLE_MASK                              0x1
#define TPC5_QM_GLBL_STS0_CQF_IDLE_SHIFT                             1
#define TPC5_QM_GLBL_STS0_CQF_IDLE_MASK                              0x2
#define TPC5_QM_GLBL_STS0_CP_IDLE_SHIFT                              2
#define TPC5_QM_GLBL_STS0_CP_IDLE_MASK                               0x4
#define TPC5_QM_GLBL_STS0_DMA_IDLE_SHIFT                             3
#define TPC5_QM_GLBL_STS0_DMA_IDLE_MASK                              0x8
#define TPC5_QM_GLBL_STS0_PQF_IS_STOP_SHIFT                          4
#define TPC5_QM_GLBL_STS0_PQF_IS_STOP_MASK                           0x10
#define TPC5_QM_GLBL_STS0_CQF_IS_STOP_SHIFT                          5
#define TPC5_QM_GLBL_STS0_CQF_IS_STOP_MASK                           0x20
#define TPC5_QM_GLBL_STS0_CP_IS_STOP_SHIFT                           6
#define TPC5_QM_GLBL_STS0_CP_IS_STOP_MASK                            0x40
#define TPC5_QM_GLBL_STS0_DMA_IS_STOP_SHIFT                          7
#define TPC5_QM_GLBL_STS0_DMA_IS_STOP_MASK                           0x80

#define mmTPC5_QM_GLBL_STS1                                          0xF48028
/* TPC5_QM_GLBL_STS1 */
#define TPC5_QM_GLBL_STS1_PQF_RD_ERR_SHIFT                           0
#define TPC5_QM_GLBL_STS1_PQF_RD_ERR_MASK                            0x1
#define TPC5_QM_GLBL_STS1_CQF_RD_ERR_SHIFT                           1
#define TPC5_QM_GLBL_STS1_CQF_RD_ERR_MASK                            0x2
#define TPC5_QM_GLBL_STS1_CP_RD_ERR_SHIFT                            2
#define TPC5_QM_GLBL_STS1_CP_RD_ERR_MASK                             0x4
#define TPC5_QM_GLBL_STS1_CP_UNDEF_CMD_ERR_SHIFT                     3
#define TPC5_QM_GLBL_STS1_CP_UNDEF_CMD_ERR_MASK                      0x8
#define TPC5_QM_GLBL_STS1_CP_STOP_OP_SHIFT                           4
#define TPC5_QM_GLBL_STS1_CP_STOP_OP_MASK                            0x10
#define TPC5_QM_GLBL_STS1_CP_MSG_WR_ERR_SHIFT                        5
#define TPC5_QM_GLBL_STS1_CP_MSG_WR_ERR_MASK                         0x20
#define TPC5_QM_GLBL_STS1_DMA_RD_ERR_SHIFT                           8
#define TPC5_QM_GLBL_STS1_DMA_RD_ERR_MASK                            0x100
#define TPC5_QM_GLBL_STS1_DMA_WR_ERR_SHIFT                           9
#define TPC5_QM_GLBL_STS1_DMA_WR_ERR_MASK                            0x200
#define TPC5_QM_GLBL_STS1_DMA_RD_MSG_ERR_SHIFT                       10
#define TPC5_QM_GLBL_STS1_DMA_RD_MSG_ERR_MASK                        0x400
#define TPC5_QM_GLBL_STS1_DMA_WR_MSG_ERR_SHIFT                       11
#define TPC5_QM_GLBL_STS1_DMA_WR_MSG_ERR_MASK                        0x800

#define mmTPC5_QM_PQ_BASE_LO                                         0xF48060
/* TPC5_QM_PQ_BASE_LO */
#define TPC5_QM_PQ_BASE_LO_VAL_SHIFT                                 0
#define TPC5_QM_PQ_BASE_LO_VAL_MASK                                  0xFFFFFFFF

#define mmTPC5_QM_PQ_BASE_HI                                         0xF48064
/* TPC5_QM_PQ_BASE_HI */
#define TPC5_QM_PQ_BASE_HI_VAL_SHIFT                                 0
#define TPC5_QM_PQ_BASE_HI_VAL_MASK                                  0xFFFFFFFF

#define mmTPC5_QM_PQ_SIZE                                            0xF48068
/* TPC5_QM_PQ_SIZE */
#define TPC5_QM_PQ_SIZE_VAL_SHIFT                                    0
#define TPC5_QM_PQ_SIZE_VAL_MASK                                     0xFFFFFFFF

#define mmTPC5_QM_PQ_PI                                              0xF4806C
/* TPC5_QM_PQ_PI */
#define TPC5_QM_PQ_PI_VAL_SHIFT                                      0
#define TPC5_QM_PQ_PI_VAL_MASK                                       0xFFFFFFFF

#define mmTPC5_QM_PQ_CI                                              0xF48070
/* TPC5_QM_PQ_CI */
#define TPC5_QM_PQ_CI_VAL_SHIFT                                      0
#define TPC5_QM_PQ_CI_VAL_MASK                                       0xFFFFFFFF

#define mmTPC5_QM_PQ_CFG0                                            0xF48074
/* TPC5_QM_PQ_CFG0 */
#define TPC5_QM_PQ_CFG0_RESERVED_SHIFT                               0
#define TPC5_QM_PQ_CFG0_RESERVED_MASK                                0x1

#define mmTPC5_QM_PQ_CFG1                                            0xF48078
/* TPC5_QM_PQ_CFG1 */
#define TPC5_QM_PQ_CFG1_CREDIT_LIM_SHIFT                             0
#define TPC5_QM_PQ_CFG1_CREDIT_LIM_MASK                              0xFFFF
#define TPC5_QM_PQ_CFG1_MAX_INFLIGHT_SHIFT                           16
#define TPC5_QM_PQ_CFG1_MAX_INFLIGHT_MASK                            0xFFFF0000

#define mmTPC5_QM_PQ_ARUSER                                          0xF4807C
/* TPC5_QM_PQ_ARUSER */
#define TPC5_QM_PQ_ARUSER_NOSNOOP_SHIFT                              0
#define TPC5_QM_PQ_ARUSER_NOSNOOP_MASK                               0x1
#define TPC5_QM_PQ_ARUSER_WORD_SHIFT                                 1
#define TPC5_QM_PQ_ARUSER_WORD_MASK                                  0x2

#define mmTPC5_QM_PQ_PUSH0                                           0xF48080
/* TPC5_QM_PQ_PUSH0 */
#define TPC5_QM_PQ_PUSH0_PTR_LO_SHIFT                                0
#define TPC5_QM_PQ_PUSH0_PTR_LO_MASK                                 0xFFFFFFFF

#define mmTPC5_QM_PQ_PUSH1                                           0xF48084
/* TPC5_QM_PQ_PUSH1 */
#define TPC5_QM_PQ_PUSH1_PTR_HI_SHIFT                                0
#define TPC5_QM_PQ_PUSH1_PTR_HI_MASK                                 0xFFFFFFFF

#define mmTPC5_QM_PQ_PUSH2                                           0xF48088
/* TPC5_QM_PQ_PUSH2 */
#define TPC5_QM_PQ_PUSH2_TSIZE_SHIFT                                 0
#define TPC5_QM_PQ_PUSH2_TSIZE_MASK                                  0xFFFFFFFF

#define mmTPC5_QM_PQ_PUSH3                                           0xF4808C
/* TPC5_QM_PQ_PUSH3 */
#define TPC5_QM_PQ_PUSH3_RPT_SHIFT                                   0
#define TPC5_QM_PQ_PUSH3_RPT_MASK                                    0xFFFF
#define TPC5_QM_PQ_PUSH3_CTL_SHIFT                                   16
#define TPC5_QM_PQ_PUSH3_CTL_MASK                                    0xFFFF0000

#define mmTPC5_QM_PQ_STS0                                            0xF48090
/* TPC5_QM_PQ_STS0 */
#define TPC5_QM_PQ_STS0_PQ_CREDIT_CNT_SHIFT                          0
#define TPC5_QM_PQ_STS0_PQ_CREDIT_CNT_MASK                           0xFFFF
#define TPC5_QM_PQ_STS0_PQ_FREE_CNT_SHIFT                            16
#define TPC5_QM_PQ_STS0_PQ_FREE_CNT_MASK                             0xFFFF0000

#define mmTPC5_QM_PQ_STS1                                            0xF48094
/* TPC5_QM_PQ_STS1 */
#define TPC5_QM_PQ_STS1_PQ_INFLIGHT_CNT_SHIFT                        0
#define TPC5_QM_PQ_STS1_PQ_INFLIGHT_CNT_MASK                         0xFFFF
#define TPC5_QM_PQ_STS1_PQ_BUF_EMPTY_SHIFT                           30
#define TPC5_QM_PQ_STS1_PQ_BUF_EMPTY_MASK                            0x40000000
#define TPC5_QM_PQ_STS1_PQ_BUSY_SHIFT                                31
#define TPC5_QM_PQ_STS1_PQ_BUSY_MASK                                 0x80000000

#define mmTPC5_QM_PQ_RD_RATE_LIM_EN                                  0xF480A0
/* TPC5_QM_PQ_RD_RATE_LIM_EN */
#define TPC5_QM_PQ_RD_RATE_LIM_EN_VAL_SHIFT                          0
#define TPC5_QM_PQ_RD_RATE_LIM_EN_VAL_MASK                           0x1

#define mmTPC5_QM_PQ_RD_RATE_LIM_RST_TOKEN                           0xF480A4
/* TPC5_QM_PQ_RD_RATE_LIM_RST_TOKEN */
#define TPC5_QM_PQ_RD_RATE_LIM_RST_TOKEN_VAL_SHIFT                   0
#define TPC5_QM_PQ_RD_RATE_LIM_RST_TOKEN_VAL_MASK                    0xFFFF

#define mmTPC5_QM_PQ_RD_RATE_LIM_SAT                                 0xF480A8
/* TPC5_QM_PQ_RD_RATE_LIM_SAT */
#define TPC5_QM_PQ_RD_RATE_LIM_SAT_VAL_SHIFT                         0
#define TPC5_QM_PQ_RD_RATE_LIM_SAT_VAL_MASK                          0xFFFF

#define mmTPC5_QM_PQ_RD_RATE_LIM_TOUT                                0xF480AC
/* TPC5_QM_PQ_RD_RATE_LIM_TOUT */
#define TPC5_QM_PQ_RD_RATE_LIM_TOUT_VAL_SHIFT                        0
#define TPC5_QM_PQ_RD_RATE_LIM_TOUT_VAL_MASK                         0x7FFFFFFF

#define mmTPC5_QM_CQ_CFG0                                            0xF480B0
/* TPC5_QM_CQ_CFG0 */
#define TPC5_QM_CQ_CFG0_RESERVED_SHIFT                               0
#define TPC5_QM_CQ_CFG0_RESERVED_MASK                                0x1

#define mmTPC5_QM_CQ_CFG1                                            0xF480B4
/* TPC5_QM_CQ_CFG1 */
#define TPC5_QM_CQ_CFG1_CREDIT_LIM_SHIFT                             0
#define TPC5_QM_CQ_CFG1_CREDIT_LIM_MASK                              0xFFFF
#define TPC5_QM_CQ_CFG1_MAX_INFLIGHT_SHIFT                           16
#define TPC5_QM_CQ_CFG1_MAX_INFLIGHT_MASK                            0xFFFF0000

#define mmTPC5_QM_CQ_ARUSER                                          0xF480B8
/* TPC5_QM_CQ_ARUSER */
#define TPC5_QM_CQ_ARUSER_NOSNOOP_SHIFT                              0
#define TPC5_QM_CQ_ARUSER_NOSNOOP_MASK                               0x1
#define TPC5_QM_CQ_ARUSER_WORD_SHIFT                                 1
#define TPC5_QM_CQ_ARUSER_WORD_MASK                                  0x2

#define mmTPC5_QM_CQ_PTR_LO                                          0xF480C0
/* TPC5_QM_CQ_PTR_LO */
#define TPC5_QM_CQ_PTR_LO_VAL_SHIFT                                  0
#define TPC5_QM_CQ_PTR_LO_VAL_MASK                                   0xFFFFFFFF

#define mmTPC5_QM_CQ_PTR_HI                                          0xF480C4
/* TPC5_QM_CQ_PTR_HI */
#define TPC5_QM_CQ_PTR_HI_VAL_SHIFT                                  0
#define TPC5_QM_CQ_PTR_HI_VAL_MASK                                   0xFFFFFFFF

#define mmTPC5_QM_CQ_TSIZE                                           0xF480C8
/* TPC5_QM_CQ_TSIZE */
#define TPC5_QM_CQ_TSIZE_VAL_SHIFT                                   0
#define TPC5_QM_CQ_TSIZE_VAL_MASK                                    0xFFFFFFFF

#define mmTPC5_QM_CQ_CTL                                             0xF480CC
/* TPC5_QM_CQ_CTL */
#define TPC5_QM_CQ_CTL_RPT_SHIFT                                     0
#define TPC5_QM_CQ_CTL_RPT_MASK                                      0xFFFF
#define TPC5_QM_CQ_CTL_CTL_SHIFT                                     16
#define TPC5_QM_CQ_CTL_CTL_MASK                                      0xFFFF0000

#define mmTPC5_QM_CQ_PTR_LO_STS                                      0xF480D4
/* TPC5_QM_CQ_PTR_LO_STS */
#define TPC5_QM_CQ_PTR_LO_STS_VAL_SHIFT                              0
#define TPC5_QM_CQ_PTR_LO_STS_VAL_MASK                               0xFFFFFFFF

#define mmTPC5_QM_CQ_PTR_HI_STS                                      0xF480D8
/* TPC5_QM_CQ_PTR_HI_STS */
#define TPC5_QM_CQ_PTR_HI_STS_VAL_SHIFT                              0
#define TPC5_QM_CQ_PTR_HI_STS_VAL_MASK                               0xFFFFFFFF

#define mmTPC5_QM_CQ_TSIZE_STS                                       0xF480DC
/* TPC5_QM_CQ_TSIZE_STS */
#define TPC5_QM_CQ_TSIZE_STS_VAL_SHIFT                               0
#define TPC5_QM_CQ_TSIZE_STS_VAL_MASK                                0xFFFFFFFF

#define mmTPC5_QM_CQ_CTL_STS                                         0xF480E0
/* TPC5_QM_CQ_CTL_STS */
#define TPC5_QM_CQ_CTL_STS_RPT_SHIFT                                 0
#define TPC5_QM_CQ_CTL_STS_RPT_MASK                                  0xFFFF
#define TPC5_QM_CQ_CTL_STS_CTL_SHIFT                                 16
#define TPC5_QM_CQ_CTL_STS_CTL_MASK                                  0xFFFF0000

#define mmTPC5_QM_CQ_STS0                                            0xF480E4
/* TPC5_QM_CQ_STS0 */
#define TPC5_QM_CQ_STS0_CQ_CREDIT_CNT_SHIFT                          0
#define TPC5_QM_CQ_STS0_CQ_CREDIT_CNT_MASK                           0xFFFF
#define TPC5_QM_CQ_STS0_CQ_FREE_CNT_SHIFT                            16
#define TPC5_QM_CQ_STS0_CQ_FREE_CNT_MASK                             0xFFFF0000

#define mmTPC5_QM_CQ_STS1                                            0xF480E8
/* TPC5_QM_CQ_STS1 */
#define TPC5_QM_CQ_STS1_CQ_INFLIGHT_CNT_SHIFT                        0
#define TPC5_QM_CQ_STS1_CQ_INFLIGHT_CNT_MASK                         0xFFFF
#define TPC5_QM_CQ_STS1_CQ_BUF_EMPTY_SHIFT                           30
#define TPC5_QM_CQ_STS1_CQ_BUF_EMPTY_MASK                            0x40000000
#define TPC5_QM_CQ_STS1_CQ_BUSY_SHIFT                                31
#define TPC5_QM_CQ_STS1_CQ_BUSY_MASK                                 0x80000000

#define mmTPC5_QM_CQ_RD_RATE_LIM_EN                                  0xF480F0
/* TPC5_QM_CQ_RD_RATE_LIM_EN */
#define TPC5_QM_CQ_RD_RATE_LIM_EN_VAL_SHIFT                          0
#define TPC5_QM_CQ_RD_RATE_LIM_EN_VAL_MASK                           0x1

#define mmTPC5_QM_CQ_RD_RATE_LIM_RST_TOKEN                           0xF480F4
/* TPC5_QM_CQ_RD_RATE_LIM_RST_TOKEN */
#define TPC5_QM_CQ_RD_RATE_LIM_RST_TOKEN_VAL_SHIFT                   0
#define TPC5_QM_CQ_RD_RATE_LIM_RST_TOKEN_VAL_MASK                    0xFFFF

#define mmTPC5_QM_CQ_RD_RATE_LIM_SAT                                 0xF480F8
/* TPC5_QM_CQ_RD_RATE_LIM_SAT */
#define TPC5_QM_CQ_RD_RATE_LIM_SAT_VAL_SHIFT                         0
#define TPC5_QM_CQ_RD_RATE_LIM_SAT_VAL_MASK                          0xFFFF

#define mmTPC5_QM_CQ_RD_RATE_LIM_TOUT                                0xF480FC
/* TPC5_QM_CQ_RD_RATE_LIM_TOUT */
#define TPC5_QM_CQ_RD_RATE_LIM_TOUT_VAL_SHIFT                        0
#define TPC5_QM_CQ_RD_RATE_LIM_TOUT_VAL_MASK                         0x7FFFFFFF

#define mmTPC5_QM_CQ_IFIFO_CNT                                       0xF48108
/* TPC5_QM_CQ_IFIFO_CNT */
#define TPC5_QM_CQ_IFIFO_CNT_VAL_SHIFT                               0
#define TPC5_QM_CQ_IFIFO_CNT_VAL_MASK                                0x3

#define mmTPC5_QM_CP_MSG_BASE0_ADDR_LO                               0xF48120
/* TPC5_QM_CP_MSG_BASE0_ADDR_LO */
#define TPC5_QM_CP_MSG_BASE0_ADDR_LO_VAL_SHIFT                       0
#define TPC5_QM_CP_MSG_BASE0_ADDR_LO_VAL_MASK                        0xFFFFFFFF

#define mmTPC5_QM_CP_MSG_BASE0_ADDR_HI                               0xF48124
/* TPC5_QM_CP_MSG_BASE0_ADDR_HI */
#define TPC5_QM_CP_MSG_BASE0_ADDR_HI_VAL_SHIFT                       0
#define TPC5_QM_CP_MSG_BASE0_ADDR_HI_VAL_MASK                        0xFFFFFFFF

#define mmTPC5_QM_CP_MSG_BASE1_ADDR_LO                               0xF48128
/* TPC5_QM_CP_MSG_BASE1_ADDR_LO */
#define TPC5_QM_CP_MSG_BASE1_ADDR_LO_VAL_SHIFT                       0
#define TPC5_QM_CP_MSG_BASE1_ADDR_LO_VAL_MASK                        0xFFFFFFFF

#define mmTPC5_QM_CP_MSG_BASE1_ADDR_HI                               0xF4812C
/* TPC5_QM_CP_MSG_BASE1_ADDR_HI */
#define TPC5_QM_CP_MSG_BASE1_ADDR_HI_VAL_SHIFT                       0
#define TPC5_QM_CP_MSG_BASE1_ADDR_HI_VAL_MASK                        0xFFFFFFFF

#define mmTPC5_QM_CP_MSG_BASE2_ADDR_LO                               0xF48130
/* TPC5_QM_CP_MSG_BASE2_ADDR_LO */
#define TPC5_QM_CP_MSG_BASE2_ADDR_LO_VAL_SHIFT                       0
#define TPC5_QM_CP_MSG_BASE2_ADDR_LO_VAL_MASK                        0xFFFFFFFF

#define mmTPC5_QM_CP_MSG_BASE2_ADDR_HI                               0xF48134
/* TPC5_QM_CP_MSG_BASE2_ADDR_HI */
#define TPC5_QM_CP_MSG_BASE2_ADDR_HI_VAL_SHIFT                       0
#define TPC5_QM_CP_MSG_BASE2_ADDR_HI_VAL_MASK                        0xFFFFFFFF

#define mmTPC5_QM_CP_MSG_BASE3_ADDR_LO                               0xF48138
/* TPC5_QM_CP_MSG_BASE3_ADDR_LO */
#define TPC5_QM_CP_MSG_BASE3_ADDR_LO_VAL_SHIFT                       0
#define TPC5_QM_CP_MSG_BASE3_ADDR_LO_VAL_MASK                        0xFFFFFFFF

#define mmTPC5_QM_CP_MSG_BASE3_ADDR_HI                               0xF4813C
/* TPC5_QM_CP_MSG_BASE3_ADDR_HI */
#define TPC5_QM_CP_MSG_BASE3_ADDR_HI_VAL_SHIFT                       0
#define TPC5_QM_CP_MSG_BASE3_ADDR_HI_VAL_MASK                        0xFFFFFFFF

#define mmTPC5_QM_CP_LDMA_TSIZE_OFFSET                               0xF48140
/* TPC5_QM_CP_LDMA_TSIZE_OFFSET */
#define TPC5_QM_CP_LDMA_TSIZE_OFFSET_VAL_SHIFT                       0
#define TPC5_QM_CP_LDMA_TSIZE_OFFSET_VAL_MASK                        0xFFFFFFFF

#define mmTPC5_QM_CP_LDMA_SRC_BASE_LO_OFFSET                         0xF48144
/* TPC5_QM_CP_LDMA_SRC_BASE_LO_OFFSET */
#define TPC5_QM_CP_LDMA_SRC_BASE_LO_OFFSET_VAL_SHIFT                 0
#define TPC5_QM_CP_LDMA_SRC_BASE_LO_OFFSET_VAL_MASK                  0xFFFFFFFF

#define mmTPC5_QM_CP_LDMA_SRC_BASE_HI_OFFSET                         0xF48148
/* TPC5_QM_CP_LDMA_SRC_BASE_HI_OFFSET */
#define TPC5_QM_CP_LDMA_SRC_BASE_HI_OFFSET_VAL_SHIFT                 0
#define TPC5_QM_CP_LDMA_SRC_BASE_HI_OFFSET_VAL_MASK                  0xFFFFFFFF

#define mmTPC5_QM_CP_LDMA_DST_BASE_LO_OFFSET                         0xF4814C
/* TPC5_QM_CP_LDMA_DST_BASE_LO_OFFSET */
#define TPC5_QM_CP_LDMA_DST_BASE_LO_OFFSET_VAL_SHIFT                 0
#define TPC5_QM_CP_LDMA_DST_BASE_LO_OFFSET_VAL_MASK                  0xFFFFFFFF

#define mmTPC5_QM_CP_LDMA_DST_BASE_HI_OFFSET                         0xF48150
/* TPC5_QM_CP_LDMA_DST_BASE_HI_OFFSET */
#define TPC5_QM_CP_LDMA_DST_BASE_HI_OFFSET_VAL_SHIFT                 0
#define TPC5_QM_CP_LDMA_DST_BASE_HI_OFFSET_VAL_MASK                  0xFFFFFFFF

#define mmTPC5_QM_CP_LDMA_COMMIT_OFFSET                              0xF48154
/* TPC5_QM_CP_LDMA_COMMIT_OFFSET */
#define TPC5_QM_CP_LDMA_COMMIT_OFFSET_VAL_SHIFT                      0
#define TPC5_QM_CP_LDMA_COMMIT_OFFSET_VAL_MASK                       0xFFFFFFFF

#define mmTPC5_QM_CP_FENCE0_RDATA                                    0xF48158
/* TPC5_QM_CP_FENCE0_RDATA */
#define TPC5_QM_CP_FENCE0_RDATA_INC_VAL_SHIFT                        0
#define TPC5_QM_CP_FENCE0_RDATA_INC_VAL_MASK                         0xF

#define mmTPC5_QM_CP_FENCE1_RDATA                                    0xF4815C
/* TPC5_QM_CP_FENCE1_RDATA */
#define TPC5_QM_CP_FENCE1_RDATA_INC_VAL_SHIFT                        0
#define TPC5_QM_CP_FENCE1_RDATA_INC_VAL_MASK                         0xF

#define mmTPC5_QM_CP_FENCE2_RDATA                                    0xF48160
/* TPC5_QM_CP_FENCE2_RDATA */
#define TPC5_QM_CP_FENCE2_RDATA_INC_VAL_SHIFT                        0
#define TPC5_QM_CP_FENCE2_RDATA_INC_VAL_MASK                         0xF

#define mmTPC5_QM_CP_FENCE3_RDATA                                    0xF48164
/* TPC5_QM_CP_FENCE3_RDATA */
#define TPC5_QM_CP_FENCE3_RDATA_INC_VAL_SHIFT                        0
#define TPC5_QM_CP_FENCE3_RDATA_INC_VAL_MASK                         0xF

#define mmTPC5_QM_CP_FENCE0_CNT                                      0xF48168
/* TPC5_QM_CP_FENCE0_CNT */
#define TPC5_QM_CP_FENCE0_CNT_VAL_SHIFT                              0
#define TPC5_QM_CP_FENCE0_CNT_VAL_MASK                               0xFF

#define mmTPC5_QM_CP_FENCE1_CNT                                      0xF4816C
/* TPC5_QM_CP_FENCE1_CNT */
#define TPC5_QM_CP_FENCE1_CNT_VAL_SHIFT                              0
#define TPC5_QM_CP_FENCE1_CNT_VAL_MASK                               0xFF

#define mmTPC5_QM_CP_FENCE2_CNT                                      0xF48170
/* TPC5_QM_CP_FENCE2_CNT */
#define TPC5_QM_CP_FENCE2_CNT_VAL_SHIFT                              0
#define TPC5_QM_CP_FENCE2_CNT_VAL_MASK                               0xFF

#define mmTPC5_QM_CP_FENCE3_CNT                                      0xF48174
/* TPC5_QM_CP_FENCE3_CNT */
#define TPC5_QM_CP_FENCE3_CNT_VAL_SHIFT                              0
#define TPC5_QM_CP_FENCE3_CNT_VAL_MASK                               0xFF

#define mmTPC5_QM_CP_STS                                             0xF48178
/* TPC5_QM_CP_STS */
#define TPC5_QM_CP_STS_MSG_INFLIGHT_CNT_SHIFT                        0
#define TPC5_QM_CP_STS_MSG_INFLIGHT_CNT_MASK                         0xFFFF
#define TPC5_QM_CP_STS_ERDY_SHIFT                                    16
#define TPC5_QM_CP_STS_ERDY_MASK                                     0x10000
#define TPC5_QM_CP_STS_RRDY_SHIFT                                    17
#define TPC5_QM_CP_STS_RRDY_MASK                                     0x20000
#define TPC5_QM_CP_STS_MRDY_SHIFT                                    18
#define TPC5_QM_CP_STS_MRDY_MASK                                     0x40000
#define TPC5_QM_CP_STS_SW_STOP_SHIFT                                 19
#define TPC5_QM_CP_STS_SW_STOP_MASK                                  0x80000
#define TPC5_QM_CP_STS_FENCE_ID_SHIFT                                20
#define TPC5_QM_CP_STS_FENCE_ID_MASK                                 0x300000
#define TPC5_QM_CP_STS_FENCE_IN_PROGRESS_SHIFT                       22
#define TPC5_QM_CP_STS_FENCE_IN_PROGRESS_MASK                        0x400000

#define mmTPC5_QM_CP_CURRENT_INST_LO                                 0xF4817C
/* TPC5_QM_CP_CURRENT_INST_LO */
#define TPC5_QM_CP_CURRENT_INST_LO_VAL_SHIFT                         0
#define TPC5_QM_CP_CURRENT_INST_LO_VAL_MASK                          0xFFFFFFFF

#define mmTPC5_QM_CP_CURRENT_INST_HI                                 0xF48180
/* TPC5_QM_CP_CURRENT_INST_HI */
#define TPC5_QM_CP_CURRENT_INST_HI_VAL_SHIFT                         0
#define TPC5_QM_CP_CURRENT_INST_HI_VAL_MASK                          0xFFFFFFFF

#define mmTPC5_QM_CP_BARRIER_CFG                                     0xF48184
/* TPC5_QM_CP_BARRIER_CFG */
#define TPC5_QM_CP_BARRIER_CFG_EBGUARD_SHIFT                         0
#define TPC5_QM_CP_BARRIER_CFG_EBGUARD_MASK                          0xFFF

#define mmTPC5_QM_CP_DBG_0                                           0xF48188
/* TPC5_QM_CP_DBG_0 */
#define TPC5_QM_CP_DBG_0_VAL_SHIFT                                   0
#define TPC5_QM_CP_DBG_0_VAL_MASK                                    0xFF

#define mmTPC5_QM_PQ_BUF_ADDR                                        0xF48300
/* TPC5_QM_PQ_BUF_ADDR */
#define TPC5_QM_PQ_BUF_ADDR_VAL_SHIFT                                0
#define TPC5_QM_PQ_BUF_ADDR_VAL_MASK                                 0xFFFFFFFF

#define mmTPC5_QM_PQ_BUF_RDATA                                       0xF48304
/* TPC5_QM_PQ_BUF_RDATA */
#define TPC5_QM_PQ_BUF_RDATA_VAL_SHIFT                               0
#define TPC5_QM_PQ_BUF_RDATA_VAL_MASK                                0xFFFFFFFF

#define mmTPC5_QM_CQ_BUF_ADDR                                        0xF48308
/* TPC5_QM_CQ_BUF_ADDR */
#define TPC5_QM_CQ_BUF_ADDR_VAL_SHIFT                                0
#define TPC5_QM_CQ_BUF_ADDR_VAL_MASK                                 0xFFFFFFFF

#define mmTPC5_QM_CQ_BUF_RDATA                                       0xF4830C
/* TPC5_QM_CQ_BUF_RDATA */
#define TPC5_QM_CQ_BUF_RDATA_VAL_SHIFT                               0
#define TPC5_QM_CQ_BUF_RDATA_VAL_MASK                                0xFFFFFFFF

#endif /* ASIC_REG_TPC5_QM_H_ */

