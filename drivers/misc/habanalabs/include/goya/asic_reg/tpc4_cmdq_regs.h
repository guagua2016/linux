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

#ifndef ASIC_REG_TPC4_CMDQ_H_
#define ASIC_REG_TPC4_CMDQ_H_

/*
 *****************************************
 *   TPC4_CMDQ (Prototype: CMDQ)
 *****************************************
 */

#define mmTPC4_CMDQ_GLBL_CFG0                                        0xF09000
/* TPC4_CMDQ_GLBL_CFG0 */
#define TPC4_CMDQ_GLBL_CFG0_PQF_EN_SHIFT                             0
#define TPC4_CMDQ_GLBL_CFG0_PQF_EN_MASK                              0x1
#define TPC4_CMDQ_GLBL_CFG0_CQF_EN_SHIFT                             1
#define TPC4_CMDQ_GLBL_CFG0_CQF_EN_MASK                              0x2
#define TPC4_CMDQ_GLBL_CFG0_CP_EN_SHIFT                              2
#define TPC4_CMDQ_GLBL_CFG0_CP_EN_MASK                               0x4
#define TPC4_CMDQ_GLBL_CFG0_DMA_EN_SHIFT                             3
#define TPC4_CMDQ_GLBL_CFG0_DMA_EN_MASK                              0x8

#define mmTPC4_CMDQ_GLBL_CFG1                                        0xF09004
/* TPC4_CMDQ_GLBL_CFG1 */
#define TPC4_CMDQ_GLBL_CFG1_PQF_STOP_SHIFT                           0
#define TPC4_CMDQ_GLBL_CFG1_PQF_STOP_MASK                            0x1
#define TPC4_CMDQ_GLBL_CFG1_CQF_STOP_SHIFT                           1
#define TPC4_CMDQ_GLBL_CFG1_CQF_STOP_MASK                            0x2
#define TPC4_CMDQ_GLBL_CFG1_CP_STOP_SHIFT                            2
#define TPC4_CMDQ_GLBL_CFG1_CP_STOP_MASK                             0x4
#define TPC4_CMDQ_GLBL_CFG1_DMA_STOP_SHIFT                           3
#define TPC4_CMDQ_GLBL_CFG1_DMA_STOP_MASK                            0x8
#define TPC4_CMDQ_GLBL_CFG1_PQF_FLUSH_SHIFT                          8
#define TPC4_CMDQ_GLBL_CFG1_PQF_FLUSH_MASK                           0x100
#define TPC4_CMDQ_GLBL_CFG1_CQF_FLUSH_SHIFT                          9
#define TPC4_CMDQ_GLBL_CFG1_CQF_FLUSH_MASK                           0x200
#define TPC4_CMDQ_GLBL_CFG1_CP_FLUSH_SHIFT                           10
#define TPC4_CMDQ_GLBL_CFG1_CP_FLUSH_MASK                            0x400
#define TPC4_CMDQ_GLBL_CFG1_DMA_FLUSH_SHIFT                          11
#define TPC4_CMDQ_GLBL_CFG1_DMA_FLUSH_MASK                           0x800

#define mmTPC4_CMDQ_GLBL_PROT                                        0xF09008
/* TPC4_CMDQ_GLBL_PROT */
#define TPC4_CMDQ_GLBL_PROT_PQF_PROT_SHIFT                           0
#define TPC4_CMDQ_GLBL_PROT_PQF_PROT_MASK                            0x1
#define TPC4_CMDQ_GLBL_PROT_CQF_PROT_SHIFT                           1
#define TPC4_CMDQ_GLBL_PROT_CQF_PROT_MASK                            0x2
#define TPC4_CMDQ_GLBL_PROT_CP_PROT_SHIFT                            2
#define TPC4_CMDQ_GLBL_PROT_CP_PROT_MASK                             0x4
#define TPC4_CMDQ_GLBL_PROT_DMA_PROT_SHIFT                           3
#define TPC4_CMDQ_GLBL_PROT_DMA_PROT_MASK                            0x8
#define TPC4_CMDQ_GLBL_PROT_PQF_ERR_PROT_SHIFT                       4
#define TPC4_CMDQ_GLBL_PROT_PQF_ERR_PROT_MASK                        0x10
#define TPC4_CMDQ_GLBL_PROT_CQF_ERR_PROT_SHIFT                       5
#define TPC4_CMDQ_GLBL_PROT_CQF_ERR_PROT_MASK                        0x20
#define TPC4_CMDQ_GLBL_PROT_CP_ERR_PROT_SHIFT                        6
#define TPC4_CMDQ_GLBL_PROT_CP_ERR_PROT_MASK                         0x40
#define TPC4_CMDQ_GLBL_PROT_DMA_ERR_PROT_SHIFT                       7
#define TPC4_CMDQ_GLBL_PROT_DMA_ERR_PROT_MASK                        0x80

#define mmTPC4_CMDQ_GLBL_ERR_CFG                                     0xF0900C
/* TPC4_CMDQ_GLBL_ERR_CFG */
#define TPC4_CMDQ_GLBL_ERR_CFG_PQF_ERR_INT_EN_SHIFT                  0
#define TPC4_CMDQ_GLBL_ERR_CFG_PQF_ERR_INT_EN_MASK                   0x1
#define TPC4_CMDQ_GLBL_ERR_CFG_PQF_ERR_MSG_EN_SHIFT                  1
#define TPC4_CMDQ_GLBL_ERR_CFG_PQF_ERR_MSG_EN_MASK                   0x2
#define TPC4_CMDQ_GLBL_ERR_CFG_PQF_STOP_ON_ERR_SHIFT                 2
#define TPC4_CMDQ_GLBL_ERR_CFG_PQF_STOP_ON_ERR_MASK                  0x4
#define TPC4_CMDQ_GLBL_ERR_CFG_CQF_ERR_INT_EN_SHIFT                  3
#define TPC4_CMDQ_GLBL_ERR_CFG_CQF_ERR_INT_EN_MASK                   0x8
#define TPC4_CMDQ_GLBL_ERR_CFG_CQF_ERR_MSG_EN_SHIFT                  4
#define TPC4_CMDQ_GLBL_ERR_CFG_CQF_ERR_MSG_EN_MASK                   0x10
#define TPC4_CMDQ_GLBL_ERR_CFG_CQF_STOP_ON_ERR_SHIFT                 5
#define TPC4_CMDQ_GLBL_ERR_CFG_CQF_STOP_ON_ERR_MASK                  0x20
#define TPC4_CMDQ_GLBL_ERR_CFG_CP_ERR_INT_EN_SHIFT                   6
#define TPC4_CMDQ_GLBL_ERR_CFG_CP_ERR_INT_EN_MASK                    0x40
#define TPC4_CMDQ_GLBL_ERR_CFG_CP_ERR_MSG_EN_SHIFT                   7
#define TPC4_CMDQ_GLBL_ERR_CFG_CP_ERR_MSG_EN_MASK                    0x80
#define TPC4_CMDQ_GLBL_ERR_CFG_CP_STOP_ON_ERR_SHIFT                  8
#define TPC4_CMDQ_GLBL_ERR_CFG_CP_STOP_ON_ERR_MASK                   0x100
#define TPC4_CMDQ_GLBL_ERR_CFG_DMA_ERR_INT_EN_SHIFT                  9
#define TPC4_CMDQ_GLBL_ERR_CFG_DMA_ERR_INT_EN_MASK                   0x200
#define TPC4_CMDQ_GLBL_ERR_CFG_DMA_ERR_MSG_EN_SHIFT                  10
#define TPC4_CMDQ_GLBL_ERR_CFG_DMA_ERR_MSG_EN_MASK                   0x400
#define TPC4_CMDQ_GLBL_ERR_CFG_DMA_STOP_ON_ERR_SHIFT                 11
#define TPC4_CMDQ_GLBL_ERR_CFG_DMA_STOP_ON_ERR_MASK                  0x800

#define mmTPC4_CMDQ_GLBL_ERR_ADDR_LO                                 0xF09010
/* TPC4_CMDQ_GLBL_ERR_ADDR_LO */
#define TPC4_CMDQ_GLBL_ERR_ADDR_LO_VAL_SHIFT                         0
#define TPC4_CMDQ_GLBL_ERR_ADDR_LO_VAL_MASK                          0xFFFFFFFF

#define mmTPC4_CMDQ_GLBL_ERR_ADDR_HI                                 0xF09014
/* TPC4_CMDQ_GLBL_ERR_ADDR_HI */
#define TPC4_CMDQ_GLBL_ERR_ADDR_HI_VAL_SHIFT                         0
#define TPC4_CMDQ_GLBL_ERR_ADDR_HI_VAL_MASK                          0xFFFFFFFF

#define mmTPC4_CMDQ_GLBL_ERR_WDATA                                   0xF09018
/* TPC4_CMDQ_GLBL_ERR_WDATA */
#define TPC4_CMDQ_GLBL_ERR_WDATA_VAL_SHIFT                           0
#define TPC4_CMDQ_GLBL_ERR_WDATA_VAL_MASK                            0xFFFFFFFF

#define mmTPC4_CMDQ_GLBL_SECURE_PROPS                                0xF0901C
/* TPC4_CMDQ_GLBL_SECURE_PROPS */
#define TPC4_CMDQ_GLBL_SECURE_PROPS_ASID_SHIFT                       0
#define TPC4_CMDQ_GLBL_SECURE_PROPS_ASID_MASK                        0x3FF
#define TPC4_CMDQ_GLBL_SECURE_PROPS_MMBP_SHIFT                       10
#define TPC4_CMDQ_GLBL_SECURE_PROPS_MMBP_MASK                        0x400

#define mmTPC4_CMDQ_GLBL_NON_SECURE_PROPS                            0xF09020
/* TPC4_CMDQ_GLBL_NON_SECURE_PROPS */
#define TPC4_CMDQ_GLBL_NON_SECURE_PROPS_ASID_SHIFT                   0
#define TPC4_CMDQ_GLBL_NON_SECURE_PROPS_ASID_MASK                    0x3FF
#define TPC4_CMDQ_GLBL_NON_SECURE_PROPS_MMBP_SHIFT                   10
#define TPC4_CMDQ_GLBL_NON_SECURE_PROPS_MMBP_MASK                    0x400

#define mmTPC4_CMDQ_GLBL_STS0                                        0xF09024
/* TPC4_CMDQ_GLBL_STS0 */
#define TPC4_CMDQ_GLBL_STS0_PQF_IDLE_SHIFT                           0
#define TPC4_CMDQ_GLBL_STS0_PQF_IDLE_MASK                            0x1
#define TPC4_CMDQ_GLBL_STS0_CQF_IDLE_SHIFT                           1
#define TPC4_CMDQ_GLBL_STS0_CQF_IDLE_MASK                            0x2
#define TPC4_CMDQ_GLBL_STS0_CP_IDLE_SHIFT                            2
#define TPC4_CMDQ_GLBL_STS0_CP_IDLE_MASK                             0x4
#define TPC4_CMDQ_GLBL_STS0_DMA_IDLE_SHIFT                           3
#define TPC4_CMDQ_GLBL_STS0_DMA_IDLE_MASK                            0x8
#define TPC4_CMDQ_GLBL_STS0_PQF_IS_STOP_SHIFT                        4
#define TPC4_CMDQ_GLBL_STS0_PQF_IS_STOP_MASK                         0x10
#define TPC4_CMDQ_GLBL_STS0_CQF_IS_STOP_SHIFT                        5
#define TPC4_CMDQ_GLBL_STS0_CQF_IS_STOP_MASK                         0x20
#define TPC4_CMDQ_GLBL_STS0_CP_IS_STOP_SHIFT                         6
#define TPC4_CMDQ_GLBL_STS0_CP_IS_STOP_MASK                          0x40
#define TPC4_CMDQ_GLBL_STS0_DMA_IS_STOP_SHIFT                        7
#define TPC4_CMDQ_GLBL_STS0_DMA_IS_STOP_MASK                         0x80

#define mmTPC4_CMDQ_GLBL_STS1                                        0xF09028
/* TPC4_CMDQ_GLBL_STS1 */
#define TPC4_CMDQ_GLBL_STS1_PQF_RD_ERR_SHIFT                         0
#define TPC4_CMDQ_GLBL_STS1_PQF_RD_ERR_MASK                          0x1
#define TPC4_CMDQ_GLBL_STS1_CQF_RD_ERR_SHIFT                         1
#define TPC4_CMDQ_GLBL_STS1_CQF_RD_ERR_MASK                          0x2
#define TPC4_CMDQ_GLBL_STS1_CP_RD_ERR_SHIFT                          2
#define TPC4_CMDQ_GLBL_STS1_CP_RD_ERR_MASK                           0x4
#define TPC4_CMDQ_GLBL_STS1_CP_UNDEF_CMD_ERR_SHIFT                   3
#define TPC4_CMDQ_GLBL_STS1_CP_UNDEF_CMD_ERR_MASK                    0x8
#define TPC4_CMDQ_GLBL_STS1_CP_STOP_OP_SHIFT                         4
#define TPC4_CMDQ_GLBL_STS1_CP_STOP_OP_MASK                          0x10
#define TPC4_CMDQ_GLBL_STS1_CP_MSG_WR_ERR_SHIFT                      5
#define TPC4_CMDQ_GLBL_STS1_CP_MSG_WR_ERR_MASK                       0x20
#define TPC4_CMDQ_GLBL_STS1_DMA_RD_ERR_SHIFT                         8
#define TPC4_CMDQ_GLBL_STS1_DMA_RD_ERR_MASK                          0x100
#define TPC4_CMDQ_GLBL_STS1_DMA_WR_ERR_SHIFT                         9
#define TPC4_CMDQ_GLBL_STS1_DMA_WR_ERR_MASK                          0x200
#define TPC4_CMDQ_GLBL_STS1_DMA_RD_MSG_ERR_SHIFT                     10
#define TPC4_CMDQ_GLBL_STS1_DMA_RD_MSG_ERR_MASK                      0x400
#define TPC4_CMDQ_GLBL_STS1_DMA_WR_MSG_ERR_SHIFT                     11
#define TPC4_CMDQ_GLBL_STS1_DMA_WR_MSG_ERR_MASK                      0x800

#define mmTPC4_CMDQ_CQ_CFG0                                          0xF090B0
/* TPC4_CMDQ_CQ_CFG0 */
#define TPC4_CMDQ_CQ_CFG0_RESERVED_SHIFT                             0
#define TPC4_CMDQ_CQ_CFG0_RESERVED_MASK                              0x1

#define mmTPC4_CMDQ_CQ_CFG1                                          0xF090B4
/* TPC4_CMDQ_CQ_CFG1 */
#define TPC4_CMDQ_CQ_CFG1_CREDIT_LIM_SHIFT                           0
#define TPC4_CMDQ_CQ_CFG1_CREDIT_LIM_MASK                            0xFFFF
#define TPC4_CMDQ_CQ_CFG1_MAX_INFLIGHT_SHIFT                         16
#define TPC4_CMDQ_CQ_CFG1_MAX_INFLIGHT_MASK                          0xFFFF0000

#define mmTPC4_CMDQ_CQ_ARUSER                                        0xF090B8
/* TPC4_CMDQ_CQ_ARUSER */
#define TPC4_CMDQ_CQ_ARUSER_NOSNOOP_SHIFT                            0
#define TPC4_CMDQ_CQ_ARUSER_NOSNOOP_MASK                             0x1
#define TPC4_CMDQ_CQ_ARUSER_WORD_SHIFT                               1
#define TPC4_CMDQ_CQ_ARUSER_WORD_MASK                                0x2

#define mmTPC4_CMDQ_CQ_PTR_LO                                        0xF090C0
/* TPC4_CMDQ_CQ_PTR_LO */
#define TPC4_CMDQ_CQ_PTR_LO_VAL_SHIFT                                0
#define TPC4_CMDQ_CQ_PTR_LO_VAL_MASK                                 0xFFFFFFFF

#define mmTPC4_CMDQ_CQ_PTR_HI                                        0xF090C4
/* TPC4_CMDQ_CQ_PTR_HI */
#define TPC4_CMDQ_CQ_PTR_HI_VAL_SHIFT                                0
#define TPC4_CMDQ_CQ_PTR_HI_VAL_MASK                                 0xFFFFFFFF

#define mmTPC4_CMDQ_CQ_TSIZE                                         0xF090C8
/* TPC4_CMDQ_CQ_TSIZE */
#define TPC4_CMDQ_CQ_TSIZE_VAL_SHIFT                                 0
#define TPC4_CMDQ_CQ_TSIZE_VAL_MASK                                  0xFFFFFFFF

#define mmTPC4_CMDQ_CQ_CTL                                           0xF090CC
/* TPC4_CMDQ_CQ_CTL */
#define TPC4_CMDQ_CQ_CTL_RPT_SHIFT                                   0
#define TPC4_CMDQ_CQ_CTL_RPT_MASK                                    0xFFFF
#define TPC4_CMDQ_CQ_CTL_CTL_SHIFT                                   16
#define TPC4_CMDQ_CQ_CTL_CTL_MASK                                    0xFFFF0000

#define mmTPC4_CMDQ_CQ_PTR_LO_STS                                    0xF090D4
/* TPC4_CMDQ_CQ_PTR_LO_STS */
#define TPC4_CMDQ_CQ_PTR_LO_STS_VAL_SHIFT                            0
#define TPC4_CMDQ_CQ_PTR_LO_STS_VAL_MASK                             0xFFFFFFFF

#define mmTPC4_CMDQ_CQ_PTR_HI_STS                                    0xF090D8
/* TPC4_CMDQ_CQ_PTR_HI_STS */
#define TPC4_CMDQ_CQ_PTR_HI_STS_VAL_SHIFT                            0
#define TPC4_CMDQ_CQ_PTR_HI_STS_VAL_MASK                             0xFFFFFFFF

#define mmTPC4_CMDQ_CQ_TSIZE_STS                                     0xF090DC
/* TPC4_CMDQ_CQ_TSIZE_STS */
#define TPC4_CMDQ_CQ_TSIZE_STS_VAL_SHIFT                             0
#define TPC4_CMDQ_CQ_TSIZE_STS_VAL_MASK                              0xFFFFFFFF

#define mmTPC4_CMDQ_CQ_CTL_STS                                       0xF090E0
/* TPC4_CMDQ_CQ_CTL_STS */
#define TPC4_CMDQ_CQ_CTL_STS_RPT_SHIFT                               0
#define TPC4_CMDQ_CQ_CTL_STS_RPT_MASK                                0xFFFF
#define TPC4_CMDQ_CQ_CTL_STS_CTL_SHIFT                               16
#define TPC4_CMDQ_CQ_CTL_STS_CTL_MASK                                0xFFFF0000

#define mmTPC4_CMDQ_CQ_STS0                                          0xF090E4
/* TPC4_CMDQ_CQ_STS0 */
#define TPC4_CMDQ_CQ_STS0_CQ_CREDIT_CNT_SHIFT                        0
#define TPC4_CMDQ_CQ_STS0_CQ_CREDIT_CNT_MASK                         0xFFFF
#define TPC4_CMDQ_CQ_STS0_CQ_FREE_CNT_SHIFT                          16
#define TPC4_CMDQ_CQ_STS0_CQ_FREE_CNT_MASK                           0xFFFF0000

#define mmTPC4_CMDQ_CQ_STS1                                          0xF090E8
/* TPC4_CMDQ_CQ_STS1 */
#define TPC4_CMDQ_CQ_STS1_CQ_INFLIGHT_CNT_SHIFT                      0
#define TPC4_CMDQ_CQ_STS1_CQ_INFLIGHT_CNT_MASK                       0xFFFF
#define TPC4_CMDQ_CQ_STS1_CQ_BUF_EMPTY_SHIFT                         30
#define TPC4_CMDQ_CQ_STS1_CQ_BUF_EMPTY_MASK                          0x40000000
#define TPC4_CMDQ_CQ_STS1_CQ_BUSY_SHIFT                              31
#define TPC4_CMDQ_CQ_STS1_CQ_BUSY_MASK                               0x80000000

#define mmTPC4_CMDQ_CQ_RD_RATE_LIM_EN                                0xF090F0
/* TPC4_CMDQ_CQ_RD_RATE_LIM_EN */
#define TPC4_CMDQ_CQ_RD_RATE_LIM_EN_VAL_SHIFT                        0
#define TPC4_CMDQ_CQ_RD_RATE_LIM_EN_VAL_MASK                         0x1

#define mmTPC4_CMDQ_CQ_RD_RATE_LIM_RST_TOKEN                         0xF090F4
/* TPC4_CMDQ_CQ_RD_RATE_LIM_RST_TOKEN */
#define TPC4_CMDQ_CQ_RD_RATE_LIM_RST_TOKEN_VAL_SHIFT                 0
#define TPC4_CMDQ_CQ_RD_RATE_LIM_RST_TOKEN_VAL_MASK                  0xFFFF

#define mmTPC4_CMDQ_CQ_RD_RATE_LIM_SAT                               0xF090F8
/* TPC4_CMDQ_CQ_RD_RATE_LIM_SAT */
#define TPC4_CMDQ_CQ_RD_RATE_LIM_SAT_VAL_SHIFT                       0
#define TPC4_CMDQ_CQ_RD_RATE_LIM_SAT_VAL_MASK                        0xFFFF

#define mmTPC4_CMDQ_CQ_RD_RATE_LIM_TOUT                              0xF090FC
/* TPC4_CMDQ_CQ_RD_RATE_LIM_TOUT */
#define TPC4_CMDQ_CQ_RD_RATE_LIM_TOUT_VAL_SHIFT                      0
#define TPC4_CMDQ_CQ_RD_RATE_LIM_TOUT_VAL_MASK                       0x7FFFFFFF

#define mmTPC4_CMDQ_CQ_IFIFO_CNT                                     0xF09108
/* TPC4_CMDQ_CQ_IFIFO_CNT */
#define TPC4_CMDQ_CQ_IFIFO_CNT_VAL_SHIFT                             0
#define TPC4_CMDQ_CQ_IFIFO_CNT_VAL_MASK                              0x3

#define mmTPC4_CMDQ_CP_MSG_BASE0_ADDR_LO                             0xF09120
/* TPC4_CMDQ_CP_MSG_BASE0_ADDR_LO */
#define TPC4_CMDQ_CP_MSG_BASE0_ADDR_LO_VAL_SHIFT                     0
#define TPC4_CMDQ_CP_MSG_BASE0_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmTPC4_CMDQ_CP_MSG_BASE0_ADDR_HI                             0xF09124
/* TPC4_CMDQ_CP_MSG_BASE0_ADDR_HI */
#define TPC4_CMDQ_CP_MSG_BASE0_ADDR_HI_VAL_SHIFT                     0
#define TPC4_CMDQ_CP_MSG_BASE0_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmTPC4_CMDQ_CP_MSG_BASE1_ADDR_LO                             0xF09128
/* TPC4_CMDQ_CP_MSG_BASE1_ADDR_LO */
#define TPC4_CMDQ_CP_MSG_BASE1_ADDR_LO_VAL_SHIFT                     0
#define TPC4_CMDQ_CP_MSG_BASE1_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmTPC4_CMDQ_CP_MSG_BASE1_ADDR_HI                             0xF0912C
/* TPC4_CMDQ_CP_MSG_BASE1_ADDR_HI */
#define TPC4_CMDQ_CP_MSG_BASE1_ADDR_HI_VAL_SHIFT                     0
#define TPC4_CMDQ_CP_MSG_BASE1_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmTPC4_CMDQ_CP_MSG_BASE2_ADDR_LO                             0xF09130
/* TPC4_CMDQ_CP_MSG_BASE2_ADDR_LO */
#define TPC4_CMDQ_CP_MSG_BASE2_ADDR_LO_VAL_SHIFT                     0
#define TPC4_CMDQ_CP_MSG_BASE2_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmTPC4_CMDQ_CP_MSG_BASE2_ADDR_HI                             0xF09134
/* TPC4_CMDQ_CP_MSG_BASE2_ADDR_HI */
#define TPC4_CMDQ_CP_MSG_BASE2_ADDR_HI_VAL_SHIFT                     0
#define TPC4_CMDQ_CP_MSG_BASE2_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmTPC4_CMDQ_CP_MSG_BASE3_ADDR_LO                             0xF09138
/* TPC4_CMDQ_CP_MSG_BASE3_ADDR_LO */
#define TPC4_CMDQ_CP_MSG_BASE3_ADDR_LO_VAL_SHIFT                     0
#define TPC4_CMDQ_CP_MSG_BASE3_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmTPC4_CMDQ_CP_MSG_BASE3_ADDR_HI                             0xF0913C
/* TPC4_CMDQ_CP_MSG_BASE3_ADDR_HI */
#define TPC4_CMDQ_CP_MSG_BASE3_ADDR_HI_VAL_SHIFT                     0
#define TPC4_CMDQ_CP_MSG_BASE3_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmTPC4_CMDQ_CP_LDMA_TSIZE_OFFSET                             0xF09140
/* TPC4_CMDQ_CP_LDMA_TSIZE_OFFSET */
#define TPC4_CMDQ_CP_LDMA_TSIZE_OFFSET_VAL_SHIFT                     0
#define TPC4_CMDQ_CP_LDMA_TSIZE_OFFSET_VAL_MASK                      0xFFFFFFFF

#define mmTPC4_CMDQ_CP_LDMA_SRC_BASE_LO_OFFSET                       0xF09144
/* TPC4_CMDQ_CP_LDMA_SRC_BASE_LO_OFFSET */
#define TPC4_CMDQ_CP_LDMA_SRC_BASE_LO_OFFSET_VAL_SHIFT               0
#define TPC4_CMDQ_CP_LDMA_SRC_BASE_LO_OFFSET_VAL_MASK                0xFFFFFFFF

#define mmTPC4_CMDQ_CP_LDMA_SRC_BASE_HI_OFFSET                       0xF09148
/* TPC4_CMDQ_CP_LDMA_SRC_BASE_HI_OFFSET */
#define TPC4_CMDQ_CP_LDMA_SRC_BASE_HI_OFFSET_VAL_SHIFT               0
#define TPC4_CMDQ_CP_LDMA_SRC_BASE_HI_OFFSET_VAL_MASK                0xFFFFFFFF

#define mmTPC4_CMDQ_CP_LDMA_DST_BASE_LO_OFFSET                       0xF0914C
/* TPC4_CMDQ_CP_LDMA_DST_BASE_LO_OFFSET */
#define TPC4_CMDQ_CP_LDMA_DST_BASE_LO_OFFSET_VAL_SHIFT               0
#define TPC4_CMDQ_CP_LDMA_DST_BASE_LO_OFFSET_VAL_MASK                0xFFFFFFFF

#define mmTPC4_CMDQ_CP_LDMA_DST_BASE_HI_OFFSET                       0xF09150
/* TPC4_CMDQ_CP_LDMA_DST_BASE_HI_OFFSET */
#define TPC4_CMDQ_CP_LDMA_DST_BASE_HI_OFFSET_VAL_SHIFT               0
#define TPC4_CMDQ_CP_LDMA_DST_BASE_HI_OFFSET_VAL_MASK                0xFFFFFFFF

#define mmTPC4_CMDQ_CP_LDMA_COMMIT_OFFSET                            0xF09154
/* TPC4_CMDQ_CP_LDMA_COMMIT_OFFSET */
#define TPC4_CMDQ_CP_LDMA_COMMIT_OFFSET_VAL_SHIFT                    0
#define TPC4_CMDQ_CP_LDMA_COMMIT_OFFSET_VAL_MASK                     0xFFFFFFFF

#define mmTPC4_CMDQ_CP_FENCE0_RDATA                                  0xF09158
/* TPC4_CMDQ_CP_FENCE0_RDATA */
#define TPC4_CMDQ_CP_FENCE0_RDATA_INC_VAL_SHIFT                      0
#define TPC4_CMDQ_CP_FENCE0_RDATA_INC_VAL_MASK                       0xF

#define mmTPC4_CMDQ_CP_FENCE1_RDATA                                  0xF0915C
/* TPC4_CMDQ_CP_FENCE1_RDATA */
#define TPC4_CMDQ_CP_FENCE1_RDATA_INC_VAL_SHIFT                      0
#define TPC4_CMDQ_CP_FENCE1_RDATA_INC_VAL_MASK                       0xF

#define mmTPC4_CMDQ_CP_FENCE2_RDATA                                  0xF09160
/* TPC4_CMDQ_CP_FENCE2_RDATA */
#define TPC4_CMDQ_CP_FENCE2_RDATA_INC_VAL_SHIFT                      0
#define TPC4_CMDQ_CP_FENCE2_RDATA_INC_VAL_MASK                       0xF

#define mmTPC4_CMDQ_CP_FENCE3_RDATA                                  0xF09164
/* TPC4_CMDQ_CP_FENCE3_RDATA */
#define TPC4_CMDQ_CP_FENCE3_RDATA_INC_VAL_SHIFT                      0
#define TPC4_CMDQ_CP_FENCE3_RDATA_INC_VAL_MASK                       0xF

#define mmTPC4_CMDQ_CP_FENCE0_CNT                                    0xF09168
/* TPC4_CMDQ_CP_FENCE0_CNT */
#define TPC4_CMDQ_CP_FENCE0_CNT_VAL_SHIFT                            0
#define TPC4_CMDQ_CP_FENCE0_CNT_VAL_MASK                             0xFF

#define mmTPC4_CMDQ_CP_FENCE1_CNT                                    0xF0916C
/* TPC4_CMDQ_CP_FENCE1_CNT */
#define TPC4_CMDQ_CP_FENCE1_CNT_VAL_SHIFT                            0
#define TPC4_CMDQ_CP_FENCE1_CNT_VAL_MASK                             0xFF

#define mmTPC4_CMDQ_CP_FENCE2_CNT                                    0xF09170
/* TPC4_CMDQ_CP_FENCE2_CNT */
#define TPC4_CMDQ_CP_FENCE2_CNT_VAL_SHIFT                            0
#define TPC4_CMDQ_CP_FENCE2_CNT_VAL_MASK                             0xFF

#define mmTPC4_CMDQ_CP_FENCE3_CNT                                    0xF09174
/* TPC4_CMDQ_CP_FENCE3_CNT */
#define TPC4_CMDQ_CP_FENCE3_CNT_VAL_SHIFT                            0
#define TPC4_CMDQ_CP_FENCE3_CNT_VAL_MASK                             0xFF

#define mmTPC4_CMDQ_CP_STS                                           0xF09178
/* TPC4_CMDQ_CP_STS */
#define TPC4_CMDQ_CP_STS_MSG_INFLIGHT_CNT_SHIFT                      0
#define TPC4_CMDQ_CP_STS_MSG_INFLIGHT_CNT_MASK                       0xFFFF
#define TPC4_CMDQ_CP_STS_ERDY_SHIFT                                  16
#define TPC4_CMDQ_CP_STS_ERDY_MASK                                   0x10000
#define TPC4_CMDQ_CP_STS_RRDY_SHIFT                                  17
#define TPC4_CMDQ_CP_STS_RRDY_MASK                                   0x20000
#define TPC4_CMDQ_CP_STS_MRDY_SHIFT                                  18
#define TPC4_CMDQ_CP_STS_MRDY_MASK                                   0x40000
#define TPC4_CMDQ_CP_STS_SW_STOP_SHIFT                               19
#define TPC4_CMDQ_CP_STS_SW_STOP_MASK                                0x80000
#define TPC4_CMDQ_CP_STS_FENCE_ID_SHIFT                              20
#define TPC4_CMDQ_CP_STS_FENCE_ID_MASK                               0x300000
#define TPC4_CMDQ_CP_STS_FENCE_IN_PROGRESS_SHIFT                     22
#define TPC4_CMDQ_CP_STS_FENCE_IN_PROGRESS_MASK                      0x400000

#define mmTPC4_CMDQ_CP_CURRENT_INST_LO                               0xF0917C
/* TPC4_CMDQ_CP_CURRENT_INST_LO */
#define TPC4_CMDQ_CP_CURRENT_INST_LO_VAL_SHIFT                       0
#define TPC4_CMDQ_CP_CURRENT_INST_LO_VAL_MASK                        0xFFFFFFFF

#define mmTPC4_CMDQ_CP_CURRENT_INST_HI                               0xF09180
/* TPC4_CMDQ_CP_CURRENT_INST_HI */
#define TPC4_CMDQ_CP_CURRENT_INST_HI_VAL_SHIFT                       0
#define TPC4_CMDQ_CP_CURRENT_INST_HI_VAL_MASK                        0xFFFFFFFF

#define mmTPC4_CMDQ_CP_BARRIER_CFG                                   0xF09184
/* TPC4_CMDQ_CP_BARRIER_CFG */
#define TPC4_CMDQ_CP_BARRIER_CFG_EBGUARD_SHIFT                       0
#define TPC4_CMDQ_CP_BARRIER_CFG_EBGUARD_MASK                        0xFFF

#define mmTPC4_CMDQ_CP_DBG_0                                         0xF09188
/* TPC4_CMDQ_CP_DBG_0 */
#define TPC4_CMDQ_CP_DBG_0_VAL_SHIFT                                 0
#define TPC4_CMDQ_CP_DBG_0_VAL_MASK                                  0xFF

#define mmTPC4_CMDQ_CQ_BUF_ADDR                                      0xF09308
/* TPC4_CMDQ_CQ_BUF_ADDR */
#define TPC4_CMDQ_CQ_BUF_ADDR_VAL_SHIFT                              0
#define TPC4_CMDQ_CQ_BUF_ADDR_VAL_MASK                               0xFFFFFFFF

#define mmTPC4_CMDQ_CQ_BUF_RDATA                                     0xF0930C
/* TPC4_CMDQ_CQ_BUF_RDATA */
#define TPC4_CMDQ_CQ_BUF_RDATA_VAL_SHIFT                             0
#define TPC4_CMDQ_CQ_BUF_RDATA_VAL_MASK                              0xFFFFFFFF

#endif /* ASIC_REG_TPC4_CMDQ_H_ */

