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

#ifndef ASIC_REG_MME_QM_H_
#define ASIC_REG_MME_QM_H_

/*
 *****************************************
 *   MME_QM (Prototype: QMAN)
 *****************************************
 */

#define mmMME_QM_GLBL_CFG0                                           0xD8000
/* MME_QM_GLBL_CFG0 */
#define MME_QM_GLBL_CFG0_PQF_EN_SHIFT                                0
#define MME_QM_GLBL_CFG0_PQF_EN_MASK                                 0x1
#define MME_QM_GLBL_CFG0_CQF_EN_SHIFT                                1
#define MME_QM_GLBL_CFG0_CQF_EN_MASK                                 0x2
#define MME_QM_GLBL_CFG0_CP_EN_SHIFT                                 2
#define MME_QM_GLBL_CFG0_CP_EN_MASK                                  0x4
#define MME_QM_GLBL_CFG0_DMA_EN_SHIFT                                3
#define MME_QM_GLBL_CFG0_DMA_EN_MASK                                 0x8

#define mmMME_QM_GLBL_CFG1                                           0xD8004
/* MME_QM_GLBL_CFG1 */
#define MME_QM_GLBL_CFG1_PQF_STOP_SHIFT                              0
#define MME_QM_GLBL_CFG1_PQF_STOP_MASK                               0x1
#define MME_QM_GLBL_CFG1_CQF_STOP_SHIFT                              1
#define MME_QM_GLBL_CFG1_CQF_STOP_MASK                               0x2
#define MME_QM_GLBL_CFG1_CP_STOP_SHIFT                               2
#define MME_QM_GLBL_CFG1_CP_STOP_MASK                                0x4
#define MME_QM_GLBL_CFG1_DMA_STOP_SHIFT                              3
#define MME_QM_GLBL_CFG1_DMA_STOP_MASK                               0x8
#define MME_QM_GLBL_CFG1_PQF_FLUSH_SHIFT                             8
#define MME_QM_GLBL_CFG1_PQF_FLUSH_MASK                              0x100
#define MME_QM_GLBL_CFG1_CQF_FLUSH_SHIFT                             9
#define MME_QM_GLBL_CFG1_CQF_FLUSH_MASK                              0x200
#define MME_QM_GLBL_CFG1_CP_FLUSH_SHIFT                              10
#define MME_QM_GLBL_CFG1_CP_FLUSH_MASK                               0x400
#define MME_QM_GLBL_CFG1_DMA_FLUSH_SHIFT                             11
#define MME_QM_GLBL_CFG1_DMA_FLUSH_MASK                              0x800

#define mmMME_QM_GLBL_PROT                                           0xD8008
/* MME_QM_GLBL_PROT */
#define MME_QM_GLBL_PROT_PQF_PROT_SHIFT                              0
#define MME_QM_GLBL_PROT_PQF_PROT_MASK                               0x1
#define MME_QM_GLBL_PROT_CQF_PROT_SHIFT                              1
#define MME_QM_GLBL_PROT_CQF_PROT_MASK                               0x2
#define MME_QM_GLBL_PROT_CP_PROT_SHIFT                               2
#define MME_QM_GLBL_PROT_CP_PROT_MASK                                0x4
#define MME_QM_GLBL_PROT_DMA_PROT_SHIFT                              3
#define MME_QM_GLBL_PROT_DMA_PROT_MASK                               0x8
#define MME_QM_GLBL_PROT_PQF_ERR_PROT_SHIFT                          4
#define MME_QM_GLBL_PROT_PQF_ERR_PROT_MASK                           0x10
#define MME_QM_GLBL_PROT_CQF_ERR_PROT_SHIFT                          5
#define MME_QM_GLBL_PROT_CQF_ERR_PROT_MASK                           0x20
#define MME_QM_GLBL_PROT_CP_ERR_PROT_SHIFT                           6
#define MME_QM_GLBL_PROT_CP_ERR_PROT_MASK                            0x40
#define MME_QM_GLBL_PROT_DMA_ERR_PROT_SHIFT                          7
#define MME_QM_GLBL_PROT_DMA_ERR_PROT_MASK                           0x80

#define mmMME_QM_GLBL_ERR_CFG                                        0xD800C
/* MME_QM_GLBL_ERR_CFG */
#define MME_QM_GLBL_ERR_CFG_PQF_ERR_INT_EN_SHIFT                     0
#define MME_QM_GLBL_ERR_CFG_PQF_ERR_INT_EN_MASK                      0x1
#define MME_QM_GLBL_ERR_CFG_PQF_ERR_MSG_EN_SHIFT                     1
#define MME_QM_GLBL_ERR_CFG_PQF_ERR_MSG_EN_MASK                      0x2
#define MME_QM_GLBL_ERR_CFG_PQF_STOP_ON_ERR_SHIFT                    2
#define MME_QM_GLBL_ERR_CFG_PQF_STOP_ON_ERR_MASK                     0x4
#define MME_QM_GLBL_ERR_CFG_CQF_ERR_INT_EN_SHIFT                     3
#define MME_QM_GLBL_ERR_CFG_CQF_ERR_INT_EN_MASK                      0x8
#define MME_QM_GLBL_ERR_CFG_CQF_ERR_MSG_EN_SHIFT                     4
#define MME_QM_GLBL_ERR_CFG_CQF_ERR_MSG_EN_MASK                      0x10
#define MME_QM_GLBL_ERR_CFG_CQF_STOP_ON_ERR_SHIFT                    5
#define MME_QM_GLBL_ERR_CFG_CQF_STOP_ON_ERR_MASK                     0x20
#define MME_QM_GLBL_ERR_CFG_CP_ERR_INT_EN_SHIFT                      6
#define MME_QM_GLBL_ERR_CFG_CP_ERR_INT_EN_MASK                       0x40
#define MME_QM_GLBL_ERR_CFG_CP_ERR_MSG_EN_SHIFT                      7
#define MME_QM_GLBL_ERR_CFG_CP_ERR_MSG_EN_MASK                       0x80
#define MME_QM_GLBL_ERR_CFG_CP_STOP_ON_ERR_SHIFT                     8
#define MME_QM_GLBL_ERR_CFG_CP_STOP_ON_ERR_MASK                      0x100
#define MME_QM_GLBL_ERR_CFG_DMA_ERR_INT_EN_SHIFT                     9
#define MME_QM_GLBL_ERR_CFG_DMA_ERR_INT_EN_MASK                      0x200
#define MME_QM_GLBL_ERR_CFG_DMA_ERR_MSG_EN_SHIFT                     10
#define MME_QM_GLBL_ERR_CFG_DMA_ERR_MSG_EN_MASK                      0x400
#define MME_QM_GLBL_ERR_CFG_DMA_STOP_ON_ERR_SHIFT                    11
#define MME_QM_GLBL_ERR_CFG_DMA_STOP_ON_ERR_MASK                     0x800

#define mmMME_QM_GLBL_ERR_ADDR_LO                                    0xD8010
/* MME_QM_GLBL_ERR_ADDR_LO */
#define MME_QM_GLBL_ERR_ADDR_LO_VAL_SHIFT                            0
#define MME_QM_GLBL_ERR_ADDR_LO_VAL_MASK                             0xFFFFFFFF

#define mmMME_QM_GLBL_ERR_ADDR_HI                                    0xD8014
/* MME_QM_GLBL_ERR_ADDR_HI */
#define MME_QM_GLBL_ERR_ADDR_HI_VAL_SHIFT                            0
#define MME_QM_GLBL_ERR_ADDR_HI_VAL_MASK                             0xFFFFFFFF

#define mmMME_QM_GLBL_ERR_WDATA                                      0xD8018
/* MME_QM_GLBL_ERR_WDATA */
#define MME_QM_GLBL_ERR_WDATA_VAL_SHIFT                              0
#define MME_QM_GLBL_ERR_WDATA_VAL_MASK                               0xFFFFFFFF

#define mmMME_QM_GLBL_SECURE_PROPS                                   0xD801C
/* MME_QM_GLBL_SECURE_PROPS */
#define MME_QM_GLBL_SECURE_PROPS_ASID_SHIFT                          0
#define MME_QM_GLBL_SECURE_PROPS_ASID_MASK                           0x3FF
#define MME_QM_GLBL_SECURE_PROPS_MMBP_SHIFT                          10
#define MME_QM_GLBL_SECURE_PROPS_MMBP_MASK                           0x400

#define mmMME_QM_GLBL_NON_SECURE_PROPS                               0xD8020
/* MME_QM_GLBL_NON_SECURE_PROPS */
#define MME_QM_GLBL_NON_SECURE_PROPS_ASID_SHIFT                      0
#define MME_QM_GLBL_NON_SECURE_PROPS_ASID_MASK                       0x3FF
#define MME_QM_GLBL_NON_SECURE_PROPS_MMBP_SHIFT                      10
#define MME_QM_GLBL_NON_SECURE_PROPS_MMBP_MASK                       0x400

#define mmMME_QM_GLBL_STS0                                           0xD8024
/* MME_QM_GLBL_STS0 */
#define MME_QM_GLBL_STS0_PQF_IDLE_SHIFT                              0
#define MME_QM_GLBL_STS0_PQF_IDLE_MASK                               0x1
#define MME_QM_GLBL_STS0_CQF_IDLE_SHIFT                              1
#define MME_QM_GLBL_STS0_CQF_IDLE_MASK                               0x2
#define MME_QM_GLBL_STS0_CP_IDLE_SHIFT                               2
#define MME_QM_GLBL_STS0_CP_IDLE_MASK                                0x4
#define MME_QM_GLBL_STS0_DMA_IDLE_SHIFT                              3
#define MME_QM_GLBL_STS0_DMA_IDLE_MASK                               0x8
#define MME_QM_GLBL_STS0_PQF_IS_STOP_SHIFT                           4
#define MME_QM_GLBL_STS0_PQF_IS_STOP_MASK                            0x10
#define MME_QM_GLBL_STS0_CQF_IS_STOP_SHIFT                           5
#define MME_QM_GLBL_STS0_CQF_IS_STOP_MASK                            0x20
#define MME_QM_GLBL_STS0_CP_IS_STOP_SHIFT                            6
#define MME_QM_GLBL_STS0_CP_IS_STOP_MASK                             0x40
#define MME_QM_GLBL_STS0_DMA_IS_STOP_SHIFT                           7
#define MME_QM_GLBL_STS0_DMA_IS_STOP_MASK                            0x80

#define mmMME_QM_GLBL_STS1                                           0xD8028
/* MME_QM_GLBL_STS1 */
#define MME_QM_GLBL_STS1_PQF_RD_ERR_SHIFT                            0
#define MME_QM_GLBL_STS1_PQF_RD_ERR_MASK                             0x1
#define MME_QM_GLBL_STS1_CQF_RD_ERR_SHIFT                            1
#define MME_QM_GLBL_STS1_CQF_RD_ERR_MASK                             0x2
#define MME_QM_GLBL_STS1_CP_RD_ERR_SHIFT                             2
#define MME_QM_GLBL_STS1_CP_RD_ERR_MASK                              0x4
#define MME_QM_GLBL_STS1_CP_UNDEF_CMD_ERR_SHIFT                      3
#define MME_QM_GLBL_STS1_CP_UNDEF_CMD_ERR_MASK                       0x8
#define MME_QM_GLBL_STS1_CP_STOP_OP_SHIFT                            4
#define MME_QM_GLBL_STS1_CP_STOP_OP_MASK                             0x10
#define MME_QM_GLBL_STS1_CP_MSG_WR_ERR_SHIFT                         5
#define MME_QM_GLBL_STS1_CP_MSG_WR_ERR_MASK                          0x20
#define MME_QM_GLBL_STS1_DMA_RD_ERR_SHIFT                            8
#define MME_QM_GLBL_STS1_DMA_RD_ERR_MASK                             0x100
#define MME_QM_GLBL_STS1_DMA_WR_ERR_SHIFT                            9
#define MME_QM_GLBL_STS1_DMA_WR_ERR_MASK                             0x200
#define MME_QM_GLBL_STS1_DMA_RD_MSG_ERR_SHIFT                        10
#define MME_QM_GLBL_STS1_DMA_RD_MSG_ERR_MASK                         0x400
#define MME_QM_GLBL_STS1_DMA_WR_MSG_ERR_SHIFT                        11
#define MME_QM_GLBL_STS1_DMA_WR_MSG_ERR_MASK                         0x800

#define mmMME_QM_PQ_BASE_LO                                          0xD8060
/* MME_QM_PQ_BASE_LO */
#define MME_QM_PQ_BASE_LO_VAL_SHIFT                                  0
#define MME_QM_PQ_BASE_LO_VAL_MASK                                   0xFFFFFFFF

#define mmMME_QM_PQ_BASE_HI                                          0xD8064
/* MME_QM_PQ_BASE_HI */
#define MME_QM_PQ_BASE_HI_VAL_SHIFT                                  0
#define MME_QM_PQ_BASE_HI_VAL_MASK                                   0xFFFFFFFF

#define mmMME_QM_PQ_SIZE                                             0xD8068
/* MME_QM_PQ_SIZE */
#define MME_QM_PQ_SIZE_VAL_SHIFT                                     0
#define MME_QM_PQ_SIZE_VAL_MASK                                      0xFFFFFFFF

#define mmMME_QM_PQ_PI                                               0xD806C
/* MME_QM_PQ_PI */
#define MME_QM_PQ_PI_VAL_SHIFT                                       0
#define MME_QM_PQ_PI_VAL_MASK                                        0xFFFFFFFF

#define mmMME_QM_PQ_CI                                               0xD8070
/* MME_QM_PQ_CI */
#define MME_QM_PQ_CI_VAL_SHIFT                                       0
#define MME_QM_PQ_CI_VAL_MASK                                        0xFFFFFFFF

#define mmMME_QM_PQ_CFG0                                             0xD8074
/* MME_QM_PQ_CFG0 */
#define MME_QM_PQ_CFG0_RESERVED_SHIFT                                0
#define MME_QM_PQ_CFG0_RESERVED_MASK                                 0x1

#define mmMME_QM_PQ_CFG1                                             0xD8078
/* MME_QM_PQ_CFG1 */
#define MME_QM_PQ_CFG1_CREDIT_LIM_SHIFT                              0
#define MME_QM_PQ_CFG1_CREDIT_LIM_MASK                               0xFFFF
#define MME_QM_PQ_CFG1_MAX_INFLIGHT_SHIFT                            16
#define MME_QM_PQ_CFG1_MAX_INFLIGHT_MASK                             0xFFFF0000

#define mmMME_QM_PQ_ARUSER                                           0xD807C
/* MME_QM_PQ_ARUSER */
#define MME_QM_PQ_ARUSER_NOSNOOP_SHIFT                               0
#define MME_QM_PQ_ARUSER_NOSNOOP_MASK                                0x1
#define MME_QM_PQ_ARUSER_WORD_SHIFT                                  1
#define MME_QM_PQ_ARUSER_WORD_MASK                                   0x2

#define mmMME_QM_PQ_PUSH0                                            0xD8080
/* MME_QM_PQ_PUSH0 */
#define MME_QM_PQ_PUSH0_PTR_LO_SHIFT                                 0
#define MME_QM_PQ_PUSH0_PTR_LO_MASK                                  0xFFFFFFFF

#define mmMME_QM_PQ_PUSH1                                            0xD8084
/* MME_QM_PQ_PUSH1 */
#define MME_QM_PQ_PUSH1_PTR_HI_SHIFT                                 0
#define MME_QM_PQ_PUSH1_PTR_HI_MASK                                  0xFFFFFFFF

#define mmMME_QM_PQ_PUSH2                                            0xD8088
/* MME_QM_PQ_PUSH2 */
#define MME_QM_PQ_PUSH2_TSIZE_SHIFT                                  0
#define MME_QM_PQ_PUSH2_TSIZE_MASK                                   0xFFFFFFFF

#define mmMME_QM_PQ_PUSH3                                            0xD808C
/* MME_QM_PQ_PUSH3 */
#define MME_QM_PQ_PUSH3_RPT_SHIFT                                    0
#define MME_QM_PQ_PUSH3_RPT_MASK                                     0xFFFF
#define MME_QM_PQ_PUSH3_CTL_SHIFT                                    16
#define MME_QM_PQ_PUSH3_CTL_MASK                                     0xFFFF0000

#define mmMME_QM_PQ_STS0                                             0xD8090
/* MME_QM_PQ_STS0 */
#define MME_QM_PQ_STS0_PQ_CREDIT_CNT_SHIFT                           0
#define MME_QM_PQ_STS0_PQ_CREDIT_CNT_MASK                            0xFFFF
#define MME_QM_PQ_STS0_PQ_FREE_CNT_SHIFT                             16
#define MME_QM_PQ_STS0_PQ_FREE_CNT_MASK                              0xFFFF0000

#define mmMME_QM_PQ_STS1                                             0xD8094
/* MME_QM_PQ_STS1 */
#define MME_QM_PQ_STS1_PQ_INFLIGHT_CNT_SHIFT                         0
#define MME_QM_PQ_STS1_PQ_INFLIGHT_CNT_MASK                          0xFFFF
#define MME_QM_PQ_STS1_PQ_BUF_EMPTY_SHIFT                            30
#define MME_QM_PQ_STS1_PQ_BUF_EMPTY_MASK                             0x40000000
#define MME_QM_PQ_STS1_PQ_BUSY_SHIFT                                 31
#define MME_QM_PQ_STS1_PQ_BUSY_MASK                                  0x80000000

#define mmMME_QM_PQ_RD_RATE_LIM_EN                                   0xD80A0
/* MME_QM_PQ_RD_RATE_LIM_EN */
#define MME_QM_PQ_RD_RATE_LIM_EN_VAL_SHIFT                           0
#define MME_QM_PQ_RD_RATE_LIM_EN_VAL_MASK                            0x1

#define mmMME_QM_PQ_RD_RATE_LIM_RST_TOKEN                            0xD80A4
/* MME_QM_PQ_RD_RATE_LIM_RST_TOKEN */
#define MME_QM_PQ_RD_RATE_LIM_RST_TOKEN_VAL_SHIFT                    0
#define MME_QM_PQ_RD_RATE_LIM_RST_TOKEN_VAL_MASK                     0xFFFF

#define mmMME_QM_PQ_RD_RATE_LIM_SAT                                  0xD80A8
/* MME_QM_PQ_RD_RATE_LIM_SAT */
#define MME_QM_PQ_RD_RATE_LIM_SAT_VAL_SHIFT                          0
#define MME_QM_PQ_RD_RATE_LIM_SAT_VAL_MASK                           0xFFFF

#define mmMME_QM_PQ_RD_RATE_LIM_TOUT                                 0xD80AC
/* MME_QM_PQ_RD_RATE_LIM_TOUT */
#define MME_QM_PQ_RD_RATE_LIM_TOUT_VAL_SHIFT                         0
#define MME_QM_PQ_RD_RATE_LIM_TOUT_VAL_MASK                          0x7FFFFFFF

#define mmMME_QM_CQ_CFG0                                             0xD80B0
/* MME_QM_CQ_CFG0 */
#define MME_QM_CQ_CFG0_RESERVED_SHIFT                                0
#define MME_QM_CQ_CFG0_RESERVED_MASK                                 0x1

#define mmMME_QM_CQ_CFG1                                             0xD80B4
/* MME_QM_CQ_CFG1 */
#define MME_QM_CQ_CFG1_CREDIT_LIM_SHIFT                              0
#define MME_QM_CQ_CFG1_CREDIT_LIM_MASK                               0xFFFF
#define MME_QM_CQ_CFG1_MAX_INFLIGHT_SHIFT                            16
#define MME_QM_CQ_CFG1_MAX_INFLIGHT_MASK                             0xFFFF0000

#define mmMME_QM_CQ_ARUSER                                           0xD80B8
/* MME_QM_CQ_ARUSER */
#define MME_QM_CQ_ARUSER_NOSNOOP_SHIFT                               0
#define MME_QM_CQ_ARUSER_NOSNOOP_MASK                                0x1
#define MME_QM_CQ_ARUSER_WORD_SHIFT                                  1
#define MME_QM_CQ_ARUSER_WORD_MASK                                   0x2

#define mmMME_QM_CQ_PTR_LO                                           0xD80C0
/* MME_QM_CQ_PTR_LO */
#define MME_QM_CQ_PTR_LO_VAL_SHIFT                                   0
#define MME_QM_CQ_PTR_LO_VAL_MASK                                    0xFFFFFFFF

#define mmMME_QM_CQ_PTR_HI                                           0xD80C4
/* MME_QM_CQ_PTR_HI */
#define MME_QM_CQ_PTR_HI_VAL_SHIFT                                   0
#define MME_QM_CQ_PTR_HI_VAL_MASK                                    0xFFFFFFFF

#define mmMME_QM_CQ_TSIZE                                            0xD80C8
/* MME_QM_CQ_TSIZE */
#define MME_QM_CQ_TSIZE_VAL_SHIFT                                    0
#define MME_QM_CQ_TSIZE_VAL_MASK                                     0xFFFFFFFF

#define mmMME_QM_CQ_CTL                                              0xD80CC
/* MME_QM_CQ_CTL */
#define MME_QM_CQ_CTL_RPT_SHIFT                                      0
#define MME_QM_CQ_CTL_RPT_MASK                                       0xFFFF
#define MME_QM_CQ_CTL_CTL_SHIFT                                      16
#define MME_QM_CQ_CTL_CTL_MASK                                       0xFFFF0000

#define mmMME_QM_CQ_PTR_LO_STS                                       0xD80D4
/* MME_QM_CQ_PTR_LO_STS */
#define MME_QM_CQ_PTR_LO_STS_VAL_SHIFT                               0
#define MME_QM_CQ_PTR_LO_STS_VAL_MASK                                0xFFFFFFFF

#define mmMME_QM_CQ_PTR_HI_STS                                       0xD80D8
/* MME_QM_CQ_PTR_HI_STS */
#define MME_QM_CQ_PTR_HI_STS_VAL_SHIFT                               0
#define MME_QM_CQ_PTR_HI_STS_VAL_MASK                                0xFFFFFFFF

#define mmMME_QM_CQ_TSIZE_STS                                        0xD80DC
/* MME_QM_CQ_TSIZE_STS */
#define MME_QM_CQ_TSIZE_STS_VAL_SHIFT                                0
#define MME_QM_CQ_TSIZE_STS_VAL_MASK                                 0xFFFFFFFF

#define mmMME_QM_CQ_CTL_STS                                          0xD80E0
/* MME_QM_CQ_CTL_STS */
#define MME_QM_CQ_CTL_STS_RPT_SHIFT                                  0
#define MME_QM_CQ_CTL_STS_RPT_MASK                                   0xFFFF
#define MME_QM_CQ_CTL_STS_CTL_SHIFT                                  16
#define MME_QM_CQ_CTL_STS_CTL_MASK                                   0xFFFF0000

#define mmMME_QM_CQ_STS0                                             0xD80E4
/* MME_QM_CQ_STS0 */
#define MME_QM_CQ_STS0_CQ_CREDIT_CNT_SHIFT                           0
#define MME_QM_CQ_STS0_CQ_CREDIT_CNT_MASK                            0xFFFF
#define MME_QM_CQ_STS0_CQ_FREE_CNT_SHIFT                             16
#define MME_QM_CQ_STS0_CQ_FREE_CNT_MASK                              0xFFFF0000

#define mmMME_QM_CQ_STS1                                             0xD80E8
/* MME_QM_CQ_STS1 */
#define MME_QM_CQ_STS1_CQ_INFLIGHT_CNT_SHIFT                         0
#define MME_QM_CQ_STS1_CQ_INFLIGHT_CNT_MASK                          0xFFFF
#define MME_QM_CQ_STS1_CQ_BUF_EMPTY_SHIFT                            30
#define MME_QM_CQ_STS1_CQ_BUF_EMPTY_MASK                             0x40000000
#define MME_QM_CQ_STS1_CQ_BUSY_SHIFT                                 31
#define MME_QM_CQ_STS1_CQ_BUSY_MASK                                  0x80000000

#define mmMME_QM_CQ_RD_RATE_LIM_EN                                   0xD80F0
/* MME_QM_CQ_RD_RATE_LIM_EN */
#define MME_QM_CQ_RD_RATE_LIM_EN_VAL_SHIFT                           0
#define MME_QM_CQ_RD_RATE_LIM_EN_VAL_MASK                            0x1

#define mmMME_QM_CQ_RD_RATE_LIM_RST_TOKEN                            0xD80F4
/* MME_QM_CQ_RD_RATE_LIM_RST_TOKEN */
#define MME_QM_CQ_RD_RATE_LIM_RST_TOKEN_VAL_SHIFT                    0
#define MME_QM_CQ_RD_RATE_LIM_RST_TOKEN_VAL_MASK                     0xFFFF

#define mmMME_QM_CQ_RD_RATE_LIM_SAT                                  0xD80F8
/* MME_QM_CQ_RD_RATE_LIM_SAT */
#define MME_QM_CQ_RD_RATE_LIM_SAT_VAL_SHIFT                          0
#define MME_QM_CQ_RD_RATE_LIM_SAT_VAL_MASK                           0xFFFF

#define mmMME_QM_CQ_RD_RATE_LIM_TOUT                                 0xD80FC
/* MME_QM_CQ_RD_RATE_LIM_TOUT */
#define MME_QM_CQ_RD_RATE_LIM_TOUT_VAL_SHIFT                         0
#define MME_QM_CQ_RD_RATE_LIM_TOUT_VAL_MASK                          0x7FFFFFFF

#define mmMME_QM_CQ_IFIFO_CNT                                        0xD8108
/* MME_QM_CQ_IFIFO_CNT */
#define MME_QM_CQ_IFIFO_CNT_VAL_SHIFT                                0
#define MME_QM_CQ_IFIFO_CNT_VAL_MASK                                 0x3

#define mmMME_QM_CP_MSG_BASE0_ADDR_LO                                0xD8120
/* MME_QM_CP_MSG_BASE0_ADDR_LO */
#define MME_QM_CP_MSG_BASE0_ADDR_LO_VAL_SHIFT                        0
#define MME_QM_CP_MSG_BASE0_ADDR_LO_VAL_MASK                         0xFFFFFFFF

#define mmMME_QM_CP_MSG_BASE0_ADDR_HI                                0xD8124
/* MME_QM_CP_MSG_BASE0_ADDR_HI */
#define MME_QM_CP_MSG_BASE0_ADDR_HI_VAL_SHIFT                        0
#define MME_QM_CP_MSG_BASE0_ADDR_HI_VAL_MASK                         0xFFFFFFFF

#define mmMME_QM_CP_MSG_BASE1_ADDR_LO                                0xD8128
/* MME_QM_CP_MSG_BASE1_ADDR_LO */
#define MME_QM_CP_MSG_BASE1_ADDR_LO_VAL_SHIFT                        0
#define MME_QM_CP_MSG_BASE1_ADDR_LO_VAL_MASK                         0xFFFFFFFF

#define mmMME_QM_CP_MSG_BASE1_ADDR_HI                                0xD812C
/* MME_QM_CP_MSG_BASE1_ADDR_HI */
#define MME_QM_CP_MSG_BASE1_ADDR_HI_VAL_SHIFT                        0
#define MME_QM_CP_MSG_BASE1_ADDR_HI_VAL_MASK                         0xFFFFFFFF

#define mmMME_QM_CP_MSG_BASE2_ADDR_LO                                0xD8130
/* MME_QM_CP_MSG_BASE2_ADDR_LO */
#define MME_QM_CP_MSG_BASE2_ADDR_LO_VAL_SHIFT                        0
#define MME_QM_CP_MSG_BASE2_ADDR_LO_VAL_MASK                         0xFFFFFFFF

#define mmMME_QM_CP_MSG_BASE2_ADDR_HI                                0xD8134
/* MME_QM_CP_MSG_BASE2_ADDR_HI */
#define MME_QM_CP_MSG_BASE2_ADDR_HI_VAL_SHIFT                        0
#define MME_QM_CP_MSG_BASE2_ADDR_HI_VAL_MASK                         0xFFFFFFFF

#define mmMME_QM_CP_MSG_BASE3_ADDR_LO                                0xD8138
/* MME_QM_CP_MSG_BASE3_ADDR_LO */
#define MME_QM_CP_MSG_BASE3_ADDR_LO_VAL_SHIFT                        0
#define MME_QM_CP_MSG_BASE3_ADDR_LO_VAL_MASK                         0xFFFFFFFF

#define mmMME_QM_CP_MSG_BASE3_ADDR_HI                                0xD813C
/* MME_QM_CP_MSG_BASE3_ADDR_HI */
#define MME_QM_CP_MSG_BASE3_ADDR_HI_VAL_SHIFT                        0
#define MME_QM_CP_MSG_BASE3_ADDR_HI_VAL_MASK                         0xFFFFFFFF

#define mmMME_QM_CP_LDMA_TSIZE_OFFSET                                0xD8140
/* MME_QM_CP_LDMA_TSIZE_OFFSET */
#define MME_QM_CP_LDMA_TSIZE_OFFSET_VAL_SHIFT                        0
#define MME_QM_CP_LDMA_TSIZE_OFFSET_VAL_MASK                         0xFFFFFFFF

#define mmMME_QM_CP_LDMA_SRC_BASE_LO_OFFSET                          0xD8144
/* MME_QM_CP_LDMA_SRC_BASE_LO_OFFSET */
#define MME_QM_CP_LDMA_SRC_BASE_LO_OFFSET_VAL_SHIFT                  0
#define MME_QM_CP_LDMA_SRC_BASE_LO_OFFSET_VAL_MASK                   0xFFFFFFFF

#define mmMME_QM_CP_LDMA_SRC_BASE_HI_OFFSET                          0xD8148
/* MME_QM_CP_LDMA_SRC_BASE_HI_OFFSET */
#define MME_QM_CP_LDMA_SRC_BASE_HI_OFFSET_VAL_SHIFT                  0
#define MME_QM_CP_LDMA_SRC_BASE_HI_OFFSET_VAL_MASK                   0xFFFFFFFF

#define mmMME_QM_CP_LDMA_DST_BASE_LO_OFFSET                          0xD814C
/* MME_QM_CP_LDMA_DST_BASE_LO_OFFSET */
#define MME_QM_CP_LDMA_DST_BASE_LO_OFFSET_VAL_SHIFT                  0
#define MME_QM_CP_LDMA_DST_BASE_LO_OFFSET_VAL_MASK                   0xFFFFFFFF

#define mmMME_QM_CP_LDMA_DST_BASE_HI_OFFSET                          0xD8150
/* MME_QM_CP_LDMA_DST_BASE_HI_OFFSET */
#define MME_QM_CP_LDMA_DST_BASE_HI_OFFSET_VAL_SHIFT                  0
#define MME_QM_CP_LDMA_DST_BASE_HI_OFFSET_VAL_MASK                   0xFFFFFFFF

#define mmMME_QM_CP_LDMA_COMMIT_OFFSET                               0xD8154
/* MME_QM_CP_LDMA_COMMIT_OFFSET */
#define MME_QM_CP_LDMA_COMMIT_OFFSET_VAL_SHIFT                       0
#define MME_QM_CP_LDMA_COMMIT_OFFSET_VAL_MASK                        0xFFFFFFFF

#define mmMME_QM_CP_FENCE0_RDATA                                     0xD8158
/* MME_QM_CP_FENCE0_RDATA */
#define MME_QM_CP_FENCE0_RDATA_INC_VAL_SHIFT                         0
#define MME_QM_CP_FENCE0_RDATA_INC_VAL_MASK                          0xF

#define mmMME_QM_CP_FENCE1_RDATA                                     0xD815C
/* MME_QM_CP_FENCE1_RDATA */
#define MME_QM_CP_FENCE1_RDATA_INC_VAL_SHIFT                         0
#define MME_QM_CP_FENCE1_RDATA_INC_VAL_MASK                          0xF

#define mmMME_QM_CP_FENCE2_RDATA                                     0xD8160
/* MME_QM_CP_FENCE2_RDATA */
#define MME_QM_CP_FENCE2_RDATA_INC_VAL_SHIFT                         0
#define MME_QM_CP_FENCE2_RDATA_INC_VAL_MASK                          0xF

#define mmMME_QM_CP_FENCE3_RDATA                                     0xD8164
/* MME_QM_CP_FENCE3_RDATA */
#define MME_QM_CP_FENCE3_RDATA_INC_VAL_SHIFT                         0
#define MME_QM_CP_FENCE3_RDATA_INC_VAL_MASK                          0xF

#define mmMME_QM_CP_FENCE0_CNT                                       0xD8168
/* MME_QM_CP_FENCE0_CNT */
#define MME_QM_CP_FENCE0_CNT_VAL_SHIFT                               0
#define MME_QM_CP_FENCE0_CNT_VAL_MASK                                0xFF

#define mmMME_QM_CP_FENCE1_CNT                                       0xD816C
/* MME_QM_CP_FENCE1_CNT */
#define MME_QM_CP_FENCE1_CNT_VAL_SHIFT                               0
#define MME_QM_CP_FENCE1_CNT_VAL_MASK                                0xFF

#define mmMME_QM_CP_FENCE2_CNT                                       0xD8170
/* MME_QM_CP_FENCE2_CNT */
#define MME_QM_CP_FENCE2_CNT_VAL_SHIFT                               0
#define MME_QM_CP_FENCE2_CNT_VAL_MASK                                0xFF

#define mmMME_QM_CP_FENCE3_CNT                                       0xD8174
/* MME_QM_CP_FENCE3_CNT */
#define MME_QM_CP_FENCE3_CNT_VAL_SHIFT                               0
#define MME_QM_CP_FENCE3_CNT_VAL_MASK                                0xFF

#define mmMME_QM_CP_STS                                              0xD8178
/* MME_QM_CP_STS */
#define MME_QM_CP_STS_MSG_INFLIGHT_CNT_SHIFT                         0
#define MME_QM_CP_STS_MSG_INFLIGHT_CNT_MASK                          0xFFFF
#define MME_QM_CP_STS_ERDY_SHIFT                                     16
#define MME_QM_CP_STS_ERDY_MASK                                      0x10000
#define MME_QM_CP_STS_RRDY_SHIFT                                     17
#define MME_QM_CP_STS_RRDY_MASK                                      0x20000
#define MME_QM_CP_STS_MRDY_SHIFT                                     18
#define MME_QM_CP_STS_MRDY_MASK                                      0x40000
#define MME_QM_CP_STS_SW_STOP_SHIFT                                  19
#define MME_QM_CP_STS_SW_STOP_MASK                                   0x80000
#define MME_QM_CP_STS_FENCE_ID_SHIFT                                 20
#define MME_QM_CP_STS_FENCE_ID_MASK                                  0x300000
#define MME_QM_CP_STS_FENCE_IN_PROGRESS_SHIFT                        22
#define MME_QM_CP_STS_FENCE_IN_PROGRESS_MASK                         0x400000

#define mmMME_QM_CP_CURRENT_INST_LO                                  0xD817C
/* MME_QM_CP_CURRENT_INST_LO */
#define MME_QM_CP_CURRENT_INST_LO_VAL_SHIFT                          0
#define MME_QM_CP_CURRENT_INST_LO_VAL_MASK                           0xFFFFFFFF

#define mmMME_QM_CP_CURRENT_INST_HI                                  0xD8180
/* MME_QM_CP_CURRENT_INST_HI */
#define MME_QM_CP_CURRENT_INST_HI_VAL_SHIFT                          0
#define MME_QM_CP_CURRENT_INST_HI_VAL_MASK                           0xFFFFFFFF

#define mmMME_QM_CP_BARRIER_CFG                                      0xD8184
/* MME_QM_CP_BARRIER_CFG */
#define MME_QM_CP_BARRIER_CFG_EBGUARD_SHIFT                          0
#define MME_QM_CP_BARRIER_CFG_EBGUARD_MASK                           0xFFF

#define mmMME_QM_CP_DBG_0                                            0xD8188
/* MME_QM_CP_DBG_0 */
#define MME_QM_CP_DBG_0_VAL_SHIFT                                    0
#define MME_QM_CP_DBG_0_VAL_MASK                                     0xFF

#define mmMME_QM_PQ_BUF_ADDR                                         0xD8300
/* MME_QM_PQ_BUF_ADDR */
#define MME_QM_PQ_BUF_ADDR_VAL_SHIFT                                 0
#define MME_QM_PQ_BUF_ADDR_VAL_MASK                                  0xFFFFFFFF

#define mmMME_QM_PQ_BUF_RDATA                                        0xD8304
/* MME_QM_PQ_BUF_RDATA */
#define MME_QM_PQ_BUF_RDATA_VAL_SHIFT                                0
#define MME_QM_PQ_BUF_RDATA_VAL_MASK                                 0xFFFFFFFF

#define mmMME_QM_CQ_BUF_ADDR                                         0xD8308
/* MME_QM_CQ_BUF_ADDR */
#define MME_QM_CQ_BUF_ADDR_VAL_SHIFT                                 0
#define MME_QM_CQ_BUF_ADDR_VAL_MASK                                  0xFFFFFFFF

#define mmMME_QM_CQ_BUF_RDATA                                        0xD830C
/* MME_QM_CQ_BUF_RDATA */
#define MME_QM_CQ_BUF_RDATA_VAL_SHIFT                                0
#define MME_QM_CQ_BUF_RDATA_VAL_MASK                                 0xFFFFFFFF

#endif /* ASIC_REG_MME_QM_H_ */

