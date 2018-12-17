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

#ifndef ASIC_REG_TPC1_CMDQ_H_
#define ASIC_REG_TPC1_CMDQ_H_

/*
 *****************************************
 *   TPC1_CMDQ (Prototype: CMDQ)
 *****************************************
 */

#define mmTPC1_CMDQ_GLBL_CFG0                                        0xE49000
/* TPC1_CMDQ_GLBL_CFG0 */
#define TPC1_CMDQ_GLBL_CFG0_PQF_EN_SHIFT                             0
#define TPC1_CMDQ_GLBL_CFG0_PQF_EN_MASK                              0x1
#define TPC1_CMDQ_GLBL_CFG0_CQF_EN_SHIFT                             1
#define TPC1_CMDQ_GLBL_CFG0_CQF_EN_MASK                              0x2
#define TPC1_CMDQ_GLBL_CFG0_CP_EN_SHIFT                              2
#define TPC1_CMDQ_GLBL_CFG0_CP_EN_MASK                               0x4
#define TPC1_CMDQ_GLBL_CFG0_DMA_EN_SHIFT                             3
#define TPC1_CMDQ_GLBL_CFG0_DMA_EN_MASK                              0x8

#define mmTPC1_CMDQ_GLBL_CFG1                                        0xE49004
/* TPC1_CMDQ_GLBL_CFG1 */
#define TPC1_CMDQ_GLBL_CFG1_PQF_STOP_SHIFT                           0
#define TPC1_CMDQ_GLBL_CFG1_PQF_STOP_MASK                            0x1
#define TPC1_CMDQ_GLBL_CFG1_CQF_STOP_SHIFT                           1
#define TPC1_CMDQ_GLBL_CFG1_CQF_STOP_MASK                            0x2
#define TPC1_CMDQ_GLBL_CFG1_CP_STOP_SHIFT                            2
#define TPC1_CMDQ_GLBL_CFG1_CP_STOP_MASK                             0x4
#define TPC1_CMDQ_GLBL_CFG1_DMA_STOP_SHIFT                           3
#define TPC1_CMDQ_GLBL_CFG1_DMA_STOP_MASK                            0x8
#define TPC1_CMDQ_GLBL_CFG1_PQF_FLUSH_SHIFT                          8
#define TPC1_CMDQ_GLBL_CFG1_PQF_FLUSH_MASK                           0x100
#define TPC1_CMDQ_GLBL_CFG1_CQF_FLUSH_SHIFT                          9
#define TPC1_CMDQ_GLBL_CFG1_CQF_FLUSH_MASK                           0x200
#define TPC1_CMDQ_GLBL_CFG1_CP_FLUSH_SHIFT                           10
#define TPC1_CMDQ_GLBL_CFG1_CP_FLUSH_MASK                            0x400
#define TPC1_CMDQ_GLBL_CFG1_DMA_FLUSH_SHIFT                          11
#define TPC1_CMDQ_GLBL_CFG1_DMA_FLUSH_MASK                           0x800

#define mmTPC1_CMDQ_GLBL_PROT                                        0xE49008
/* TPC1_CMDQ_GLBL_PROT */
#define TPC1_CMDQ_GLBL_PROT_PQF_PROT_SHIFT                           0
#define TPC1_CMDQ_GLBL_PROT_PQF_PROT_MASK                            0x1
#define TPC1_CMDQ_GLBL_PROT_CQF_PROT_SHIFT                           1
#define TPC1_CMDQ_GLBL_PROT_CQF_PROT_MASK                            0x2
#define TPC1_CMDQ_GLBL_PROT_CP_PROT_SHIFT                            2
#define TPC1_CMDQ_GLBL_PROT_CP_PROT_MASK                             0x4
#define TPC1_CMDQ_GLBL_PROT_DMA_PROT_SHIFT                           3
#define TPC1_CMDQ_GLBL_PROT_DMA_PROT_MASK                            0x8
#define TPC1_CMDQ_GLBL_PROT_PQF_ERR_PROT_SHIFT                       4
#define TPC1_CMDQ_GLBL_PROT_PQF_ERR_PROT_MASK                        0x10
#define TPC1_CMDQ_GLBL_PROT_CQF_ERR_PROT_SHIFT                       5
#define TPC1_CMDQ_GLBL_PROT_CQF_ERR_PROT_MASK                        0x20
#define TPC1_CMDQ_GLBL_PROT_CP_ERR_PROT_SHIFT                        6
#define TPC1_CMDQ_GLBL_PROT_CP_ERR_PROT_MASK                         0x40
#define TPC1_CMDQ_GLBL_PROT_DMA_ERR_PROT_SHIFT                       7
#define TPC1_CMDQ_GLBL_PROT_DMA_ERR_PROT_MASK                        0x80

#define mmTPC1_CMDQ_GLBL_ERR_CFG                                     0xE4900C
/* TPC1_CMDQ_GLBL_ERR_CFG */
#define TPC1_CMDQ_GLBL_ERR_CFG_PQF_ERR_INT_EN_SHIFT                  0
#define TPC1_CMDQ_GLBL_ERR_CFG_PQF_ERR_INT_EN_MASK                   0x1
#define TPC1_CMDQ_GLBL_ERR_CFG_PQF_ERR_MSG_EN_SHIFT                  1
#define TPC1_CMDQ_GLBL_ERR_CFG_PQF_ERR_MSG_EN_MASK                   0x2
#define TPC1_CMDQ_GLBL_ERR_CFG_PQF_STOP_ON_ERR_SHIFT                 2
#define TPC1_CMDQ_GLBL_ERR_CFG_PQF_STOP_ON_ERR_MASK                  0x4
#define TPC1_CMDQ_GLBL_ERR_CFG_CQF_ERR_INT_EN_SHIFT                  3
#define TPC1_CMDQ_GLBL_ERR_CFG_CQF_ERR_INT_EN_MASK                   0x8
#define TPC1_CMDQ_GLBL_ERR_CFG_CQF_ERR_MSG_EN_SHIFT                  4
#define TPC1_CMDQ_GLBL_ERR_CFG_CQF_ERR_MSG_EN_MASK                   0x10
#define TPC1_CMDQ_GLBL_ERR_CFG_CQF_STOP_ON_ERR_SHIFT                 5
#define TPC1_CMDQ_GLBL_ERR_CFG_CQF_STOP_ON_ERR_MASK                  0x20
#define TPC1_CMDQ_GLBL_ERR_CFG_CP_ERR_INT_EN_SHIFT                   6
#define TPC1_CMDQ_GLBL_ERR_CFG_CP_ERR_INT_EN_MASK                    0x40
#define TPC1_CMDQ_GLBL_ERR_CFG_CP_ERR_MSG_EN_SHIFT                   7
#define TPC1_CMDQ_GLBL_ERR_CFG_CP_ERR_MSG_EN_MASK                    0x80
#define TPC1_CMDQ_GLBL_ERR_CFG_CP_STOP_ON_ERR_SHIFT                  8
#define TPC1_CMDQ_GLBL_ERR_CFG_CP_STOP_ON_ERR_MASK                   0x100
#define TPC1_CMDQ_GLBL_ERR_CFG_DMA_ERR_INT_EN_SHIFT                  9
#define TPC1_CMDQ_GLBL_ERR_CFG_DMA_ERR_INT_EN_MASK                   0x200
#define TPC1_CMDQ_GLBL_ERR_CFG_DMA_ERR_MSG_EN_SHIFT                  10
#define TPC1_CMDQ_GLBL_ERR_CFG_DMA_ERR_MSG_EN_MASK                   0x400
#define TPC1_CMDQ_GLBL_ERR_CFG_DMA_STOP_ON_ERR_SHIFT                 11
#define TPC1_CMDQ_GLBL_ERR_CFG_DMA_STOP_ON_ERR_MASK                  0x800

#define mmTPC1_CMDQ_GLBL_ERR_ADDR_LO                                 0xE49010
/* TPC1_CMDQ_GLBL_ERR_ADDR_LO */
#define TPC1_CMDQ_GLBL_ERR_ADDR_LO_VAL_SHIFT                         0
#define TPC1_CMDQ_GLBL_ERR_ADDR_LO_VAL_MASK                          0xFFFFFFFF

#define mmTPC1_CMDQ_GLBL_ERR_ADDR_HI                                 0xE49014
/* TPC1_CMDQ_GLBL_ERR_ADDR_HI */
#define TPC1_CMDQ_GLBL_ERR_ADDR_HI_VAL_SHIFT                         0
#define TPC1_CMDQ_GLBL_ERR_ADDR_HI_VAL_MASK                          0xFFFFFFFF

#define mmTPC1_CMDQ_GLBL_ERR_WDATA                                   0xE49018
/* TPC1_CMDQ_GLBL_ERR_WDATA */
#define TPC1_CMDQ_GLBL_ERR_WDATA_VAL_SHIFT                           0
#define TPC1_CMDQ_GLBL_ERR_WDATA_VAL_MASK                            0xFFFFFFFF

#define mmTPC1_CMDQ_GLBL_SECURE_PROPS                                0xE4901C
/* TPC1_CMDQ_GLBL_SECURE_PROPS */
#define TPC1_CMDQ_GLBL_SECURE_PROPS_ASID_SHIFT                       0
#define TPC1_CMDQ_GLBL_SECURE_PROPS_ASID_MASK                        0x3FF
#define TPC1_CMDQ_GLBL_SECURE_PROPS_MMBP_SHIFT                       10
#define TPC1_CMDQ_GLBL_SECURE_PROPS_MMBP_MASK                        0x400

#define mmTPC1_CMDQ_GLBL_NON_SECURE_PROPS                            0xE49020
/* TPC1_CMDQ_GLBL_NON_SECURE_PROPS */
#define TPC1_CMDQ_GLBL_NON_SECURE_PROPS_ASID_SHIFT                   0
#define TPC1_CMDQ_GLBL_NON_SECURE_PROPS_ASID_MASK                    0x3FF
#define TPC1_CMDQ_GLBL_NON_SECURE_PROPS_MMBP_SHIFT                   10
#define TPC1_CMDQ_GLBL_NON_SECURE_PROPS_MMBP_MASK                    0x400

#define mmTPC1_CMDQ_GLBL_STS0                                        0xE49024
/* TPC1_CMDQ_GLBL_STS0 */
#define TPC1_CMDQ_GLBL_STS0_PQF_IDLE_SHIFT                           0
#define TPC1_CMDQ_GLBL_STS0_PQF_IDLE_MASK                            0x1
#define TPC1_CMDQ_GLBL_STS0_CQF_IDLE_SHIFT                           1
#define TPC1_CMDQ_GLBL_STS0_CQF_IDLE_MASK                            0x2
#define TPC1_CMDQ_GLBL_STS0_CP_IDLE_SHIFT                            2
#define TPC1_CMDQ_GLBL_STS0_CP_IDLE_MASK                             0x4
#define TPC1_CMDQ_GLBL_STS0_DMA_IDLE_SHIFT                           3
#define TPC1_CMDQ_GLBL_STS0_DMA_IDLE_MASK                            0x8
#define TPC1_CMDQ_GLBL_STS0_PQF_IS_STOP_SHIFT                        4
#define TPC1_CMDQ_GLBL_STS0_PQF_IS_STOP_MASK                         0x10
#define TPC1_CMDQ_GLBL_STS0_CQF_IS_STOP_SHIFT                        5
#define TPC1_CMDQ_GLBL_STS0_CQF_IS_STOP_MASK                         0x20
#define TPC1_CMDQ_GLBL_STS0_CP_IS_STOP_SHIFT                         6
#define TPC1_CMDQ_GLBL_STS0_CP_IS_STOP_MASK                          0x40
#define TPC1_CMDQ_GLBL_STS0_DMA_IS_STOP_SHIFT                        7
#define TPC1_CMDQ_GLBL_STS0_DMA_IS_STOP_MASK                         0x80

#define mmTPC1_CMDQ_GLBL_STS1                                        0xE49028
/* TPC1_CMDQ_GLBL_STS1 */
#define TPC1_CMDQ_GLBL_STS1_PQF_RD_ERR_SHIFT                         0
#define TPC1_CMDQ_GLBL_STS1_PQF_RD_ERR_MASK                          0x1
#define TPC1_CMDQ_GLBL_STS1_CQF_RD_ERR_SHIFT                         1
#define TPC1_CMDQ_GLBL_STS1_CQF_RD_ERR_MASK                          0x2
#define TPC1_CMDQ_GLBL_STS1_CP_RD_ERR_SHIFT                          2
#define TPC1_CMDQ_GLBL_STS1_CP_RD_ERR_MASK                           0x4
#define TPC1_CMDQ_GLBL_STS1_CP_UNDEF_CMD_ERR_SHIFT                   3
#define TPC1_CMDQ_GLBL_STS1_CP_UNDEF_CMD_ERR_MASK                    0x8
#define TPC1_CMDQ_GLBL_STS1_CP_STOP_OP_SHIFT                         4
#define TPC1_CMDQ_GLBL_STS1_CP_STOP_OP_MASK                          0x10
#define TPC1_CMDQ_GLBL_STS1_CP_MSG_WR_ERR_SHIFT                      5
#define TPC1_CMDQ_GLBL_STS1_CP_MSG_WR_ERR_MASK                       0x20
#define TPC1_CMDQ_GLBL_STS1_DMA_RD_ERR_SHIFT                         8
#define TPC1_CMDQ_GLBL_STS1_DMA_RD_ERR_MASK                          0x100
#define TPC1_CMDQ_GLBL_STS1_DMA_WR_ERR_SHIFT                         9
#define TPC1_CMDQ_GLBL_STS1_DMA_WR_ERR_MASK                          0x200
#define TPC1_CMDQ_GLBL_STS1_DMA_RD_MSG_ERR_SHIFT                     10
#define TPC1_CMDQ_GLBL_STS1_DMA_RD_MSG_ERR_MASK                      0x400
#define TPC1_CMDQ_GLBL_STS1_DMA_WR_MSG_ERR_SHIFT                     11
#define TPC1_CMDQ_GLBL_STS1_DMA_WR_MSG_ERR_MASK                      0x800

#define mmTPC1_CMDQ_CQ_CFG0                                          0xE490B0
/* TPC1_CMDQ_CQ_CFG0 */
#define TPC1_CMDQ_CQ_CFG0_RESERVED_SHIFT                             0
#define TPC1_CMDQ_CQ_CFG0_RESERVED_MASK                              0x1

#define mmTPC1_CMDQ_CQ_CFG1                                          0xE490B4
/* TPC1_CMDQ_CQ_CFG1 */
#define TPC1_CMDQ_CQ_CFG1_CREDIT_LIM_SHIFT                           0
#define TPC1_CMDQ_CQ_CFG1_CREDIT_LIM_MASK                            0xFFFF
#define TPC1_CMDQ_CQ_CFG1_MAX_INFLIGHT_SHIFT                         16
#define TPC1_CMDQ_CQ_CFG1_MAX_INFLIGHT_MASK                          0xFFFF0000

#define mmTPC1_CMDQ_CQ_ARUSER                                        0xE490B8
/* TPC1_CMDQ_CQ_ARUSER */
#define TPC1_CMDQ_CQ_ARUSER_NOSNOOP_SHIFT                            0
#define TPC1_CMDQ_CQ_ARUSER_NOSNOOP_MASK                             0x1
#define TPC1_CMDQ_CQ_ARUSER_WORD_SHIFT                               1
#define TPC1_CMDQ_CQ_ARUSER_WORD_MASK                                0x2

#define mmTPC1_CMDQ_CQ_PTR_LO                                        0xE490C0
/* TPC1_CMDQ_CQ_PTR_LO */
#define TPC1_CMDQ_CQ_PTR_LO_VAL_SHIFT                                0
#define TPC1_CMDQ_CQ_PTR_LO_VAL_MASK                                 0xFFFFFFFF

#define mmTPC1_CMDQ_CQ_PTR_HI                                        0xE490C4
/* TPC1_CMDQ_CQ_PTR_HI */
#define TPC1_CMDQ_CQ_PTR_HI_VAL_SHIFT                                0
#define TPC1_CMDQ_CQ_PTR_HI_VAL_MASK                                 0xFFFFFFFF

#define mmTPC1_CMDQ_CQ_TSIZE                                         0xE490C8
/* TPC1_CMDQ_CQ_TSIZE */
#define TPC1_CMDQ_CQ_TSIZE_VAL_SHIFT                                 0
#define TPC1_CMDQ_CQ_TSIZE_VAL_MASK                                  0xFFFFFFFF

#define mmTPC1_CMDQ_CQ_CTL                                           0xE490CC
/* TPC1_CMDQ_CQ_CTL */
#define TPC1_CMDQ_CQ_CTL_RPT_SHIFT                                   0
#define TPC1_CMDQ_CQ_CTL_RPT_MASK                                    0xFFFF
#define TPC1_CMDQ_CQ_CTL_CTL_SHIFT                                   16
#define TPC1_CMDQ_CQ_CTL_CTL_MASK                                    0xFFFF0000

#define mmTPC1_CMDQ_CQ_PTR_LO_STS                                    0xE490D4
/* TPC1_CMDQ_CQ_PTR_LO_STS */
#define TPC1_CMDQ_CQ_PTR_LO_STS_VAL_SHIFT                            0
#define TPC1_CMDQ_CQ_PTR_LO_STS_VAL_MASK                             0xFFFFFFFF

#define mmTPC1_CMDQ_CQ_PTR_HI_STS                                    0xE490D8
/* TPC1_CMDQ_CQ_PTR_HI_STS */
#define TPC1_CMDQ_CQ_PTR_HI_STS_VAL_SHIFT                            0
#define TPC1_CMDQ_CQ_PTR_HI_STS_VAL_MASK                             0xFFFFFFFF

#define mmTPC1_CMDQ_CQ_TSIZE_STS                                     0xE490DC
/* TPC1_CMDQ_CQ_TSIZE_STS */
#define TPC1_CMDQ_CQ_TSIZE_STS_VAL_SHIFT                             0
#define TPC1_CMDQ_CQ_TSIZE_STS_VAL_MASK                              0xFFFFFFFF

#define mmTPC1_CMDQ_CQ_CTL_STS                                       0xE490E0
/* TPC1_CMDQ_CQ_CTL_STS */
#define TPC1_CMDQ_CQ_CTL_STS_RPT_SHIFT                               0
#define TPC1_CMDQ_CQ_CTL_STS_RPT_MASK                                0xFFFF
#define TPC1_CMDQ_CQ_CTL_STS_CTL_SHIFT                               16
#define TPC1_CMDQ_CQ_CTL_STS_CTL_MASK                                0xFFFF0000

#define mmTPC1_CMDQ_CQ_STS0                                          0xE490E4
/* TPC1_CMDQ_CQ_STS0 */
#define TPC1_CMDQ_CQ_STS0_CQ_CREDIT_CNT_SHIFT                        0
#define TPC1_CMDQ_CQ_STS0_CQ_CREDIT_CNT_MASK                         0xFFFF
#define TPC1_CMDQ_CQ_STS0_CQ_FREE_CNT_SHIFT                          16
#define TPC1_CMDQ_CQ_STS0_CQ_FREE_CNT_MASK                           0xFFFF0000

#define mmTPC1_CMDQ_CQ_STS1                                          0xE490E8
/* TPC1_CMDQ_CQ_STS1 */
#define TPC1_CMDQ_CQ_STS1_CQ_INFLIGHT_CNT_SHIFT                      0
#define TPC1_CMDQ_CQ_STS1_CQ_INFLIGHT_CNT_MASK                       0xFFFF
#define TPC1_CMDQ_CQ_STS1_CQ_BUF_EMPTY_SHIFT                         30
#define TPC1_CMDQ_CQ_STS1_CQ_BUF_EMPTY_MASK                          0x40000000
#define TPC1_CMDQ_CQ_STS1_CQ_BUSY_SHIFT                              31
#define TPC1_CMDQ_CQ_STS1_CQ_BUSY_MASK                               0x80000000

#define mmTPC1_CMDQ_CQ_RD_RATE_LIM_EN                                0xE490F0
/* TPC1_CMDQ_CQ_RD_RATE_LIM_EN */
#define TPC1_CMDQ_CQ_RD_RATE_LIM_EN_VAL_SHIFT                        0
#define TPC1_CMDQ_CQ_RD_RATE_LIM_EN_VAL_MASK                         0x1

#define mmTPC1_CMDQ_CQ_RD_RATE_LIM_RST_TOKEN                         0xE490F4
/* TPC1_CMDQ_CQ_RD_RATE_LIM_RST_TOKEN */
#define TPC1_CMDQ_CQ_RD_RATE_LIM_RST_TOKEN_VAL_SHIFT                 0
#define TPC1_CMDQ_CQ_RD_RATE_LIM_RST_TOKEN_VAL_MASK                  0xFFFF

#define mmTPC1_CMDQ_CQ_RD_RATE_LIM_SAT                               0xE490F8
/* TPC1_CMDQ_CQ_RD_RATE_LIM_SAT */
#define TPC1_CMDQ_CQ_RD_RATE_LIM_SAT_VAL_SHIFT                       0
#define TPC1_CMDQ_CQ_RD_RATE_LIM_SAT_VAL_MASK                        0xFFFF

#define mmTPC1_CMDQ_CQ_RD_RATE_LIM_TOUT                              0xE490FC
/* TPC1_CMDQ_CQ_RD_RATE_LIM_TOUT */
#define TPC1_CMDQ_CQ_RD_RATE_LIM_TOUT_VAL_SHIFT                      0
#define TPC1_CMDQ_CQ_RD_RATE_LIM_TOUT_VAL_MASK                       0x7FFFFFFF

#define mmTPC1_CMDQ_CQ_IFIFO_CNT                                     0xE49108
/* TPC1_CMDQ_CQ_IFIFO_CNT */
#define TPC1_CMDQ_CQ_IFIFO_CNT_VAL_SHIFT                             0
#define TPC1_CMDQ_CQ_IFIFO_CNT_VAL_MASK                              0x3

#define mmTPC1_CMDQ_CP_MSG_BASE0_ADDR_LO                             0xE49120
/* TPC1_CMDQ_CP_MSG_BASE0_ADDR_LO */
#define TPC1_CMDQ_CP_MSG_BASE0_ADDR_LO_VAL_SHIFT                     0
#define TPC1_CMDQ_CP_MSG_BASE0_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmTPC1_CMDQ_CP_MSG_BASE0_ADDR_HI                             0xE49124
/* TPC1_CMDQ_CP_MSG_BASE0_ADDR_HI */
#define TPC1_CMDQ_CP_MSG_BASE0_ADDR_HI_VAL_SHIFT                     0
#define TPC1_CMDQ_CP_MSG_BASE0_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmTPC1_CMDQ_CP_MSG_BASE1_ADDR_LO                             0xE49128
/* TPC1_CMDQ_CP_MSG_BASE1_ADDR_LO */
#define TPC1_CMDQ_CP_MSG_BASE1_ADDR_LO_VAL_SHIFT                     0
#define TPC1_CMDQ_CP_MSG_BASE1_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmTPC1_CMDQ_CP_MSG_BASE1_ADDR_HI                             0xE4912C
/* TPC1_CMDQ_CP_MSG_BASE1_ADDR_HI */
#define TPC1_CMDQ_CP_MSG_BASE1_ADDR_HI_VAL_SHIFT                     0
#define TPC1_CMDQ_CP_MSG_BASE1_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmTPC1_CMDQ_CP_MSG_BASE2_ADDR_LO                             0xE49130
/* TPC1_CMDQ_CP_MSG_BASE2_ADDR_LO */
#define TPC1_CMDQ_CP_MSG_BASE2_ADDR_LO_VAL_SHIFT                     0
#define TPC1_CMDQ_CP_MSG_BASE2_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmTPC1_CMDQ_CP_MSG_BASE2_ADDR_HI                             0xE49134
/* TPC1_CMDQ_CP_MSG_BASE2_ADDR_HI */
#define TPC1_CMDQ_CP_MSG_BASE2_ADDR_HI_VAL_SHIFT                     0
#define TPC1_CMDQ_CP_MSG_BASE2_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmTPC1_CMDQ_CP_MSG_BASE3_ADDR_LO                             0xE49138
/* TPC1_CMDQ_CP_MSG_BASE3_ADDR_LO */
#define TPC1_CMDQ_CP_MSG_BASE3_ADDR_LO_VAL_SHIFT                     0
#define TPC1_CMDQ_CP_MSG_BASE3_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmTPC1_CMDQ_CP_MSG_BASE3_ADDR_HI                             0xE4913C
/* TPC1_CMDQ_CP_MSG_BASE3_ADDR_HI */
#define TPC1_CMDQ_CP_MSG_BASE3_ADDR_HI_VAL_SHIFT                     0
#define TPC1_CMDQ_CP_MSG_BASE3_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmTPC1_CMDQ_CP_LDMA_TSIZE_OFFSET                             0xE49140
/* TPC1_CMDQ_CP_LDMA_TSIZE_OFFSET */
#define TPC1_CMDQ_CP_LDMA_TSIZE_OFFSET_VAL_SHIFT                     0
#define TPC1_CMDQ_CP_LDMA_TSIZE_OFFSET_VAL_MASK                      0xFFFFFFFF

#define mmTPC1_CMDQ_CP_LDMA_SRC_BASE_LO_OFFSET                       0xE49144
/* TPC1_CMDQ_CP_LDMA_SRC_BASE_LO_OFFSET */
#define TPC1_CMDQ_CP_LDMA_SRC_BASE_LO_OFFSET_VAL_SHIFT               0
#define TPC1_CMDQ_CP_LDMA_SRC_BASE_LO_OFFSET_VAL_MASK                0xFFFFFFFF

#define mmTPC1_CMDQ_CP_LDMA_SRC_BASE_HI_OFFSET                       0xE49148
/* TPC1_CMDQ_CP_LDMA_SRC_BASE_HI_OFFSET */
#define TPC1_CMDQ_CP_LDMA_SRC_BASE_HI_OFFSET_VAL_SHIFT               0
#define TPC1_CMDQ_CP_LDMA_SRC_BASE_HI_OFFSET_VAL_MASK                0xFFFFFFFF

#define mmTPC1_CMDQ_CP_LDMA_DST_BASE_LO_OFFSET                       0xE4914C
/* TPC1_CMDQ_CP_LDMA_DST_BASE_LO_OFFSET */
#define TPC1_CMDQ_CP_LDMA_DST_BASE_LO_OFFSET_VAL_SHIFT               0
#define TPC1_CMDQ_CP_LDMA_DST_BASE_LO_OFFSET_VAL_MASK                0xFFFFFFFF

#define mmTPC1_CMDQ_CP_LDMA_DST_BASE_HI_OFFSET                       0xE49150
/* TPC1_CMDQ_CP_LDMA_DST_BASE_HI_OFFSET */
#define TPC1_CMDQ_CP_LDMA_DST_BASE_HI_OFFSET_VAL_SHIFT               0
#define TPC1_CMDQ_CP_LDMA_DST_BASE_HI_OFFSET_VAL_MASK                0xFFFFFFFF

#define mmTPC1_CMDQ_CP_LDMA_COMMIT_OFFSET                            0xE49154
/* TPC1_CMDQ_CP_LDMA_COMMIT_OFFSET */
#define TPC1_CMDQ_CP_LDMA_COMMIT_OFFSET_VAL_SHIFT                    0
#define TPC1_CMDQ_CP_LDMA_COMMIT_OFFSET_VAL_MASK                     0xFFFFFFFF

#define mmTPC1_CMDQ_CP_FENCE0_RDATA                                  0xE49158
/* TPC1_CMDQ_CP_FENCE0_RDATA */
#define TPC1_CMDQ_CP_FENCE0_RDATA_INC_VAL_SHIFT                      0
#define TPC1_CMDQ_CP_FENCE0_RDATA_INC_VAL_MASK                       0xF

#define mmTPC1_CMDQ_CP_FENCE1_RDATA                                  0xE4915C
/* TPC1_CMDQ_CP_FENCE1_RDATA */
#define TPC1_CMDQ_CP_FENCE1_RDATA_INC_VAL_SHIFT                      0
#define TPC1_CMDQ_CP_FENCE1_RDATA_INC_VAL_MASK                       0xF

#define mmTPC1_CMDQ_CP_FENCE2_RDATA                                  0xE49160
/* TPC1_CMDQ_CP_FENCE2_RDATA */
#define TPC1_CMDQ_CP_FENCE2_RDATA_INC_VAL_SHIFT                      0
#define TPC1_CMDQ_CP_FENCE2_RDATA_INC_VAL_MASK                       0xF

#define mmTPC1_CMDQ_CP_FENCE3_RDATA                                  0xE49164
/* TPC1_CMDQ_CP_FENCE3_RDATA */
#define TPC1_CMDQ_CP_FENCE3_RDATA_INC_VAL_SHIFT                      0
#define TPC1_CMDQ_CP_FENCE3_RDATA_INC_VAL_MASK                       0xF

#define mmTPC1_CMDQ_CP_FENCE0_CNT                                    0xE49168
/* TPC1_CMDQ_CP_FENCE0_CNT */
#define TPC1_CMDQ_CP_FENCE0_CNT_VAL_SHIFT                            0
#define TPC1_CMDQ_CP_FENCE0_CNT_VAL_MASK                             0xFF

#define mmTPC1_CMDQ_CP_FENCE1_CNT                                    0xE4916C
/* TPC1_CMDQ_CP_FENCE1_CNT */
#define TPC1_CMDQ_CP_FENCE1_CNT_VAL_SHIFT                            0
#define TPC1_CMDQ_CP_FENCE1_CNT_VAL_MASK                             0xFF

#define mmTPC1_CMDQ_CP_FENCE2_CNT                                    0xE49170
/* TPC1_CMDQ_CP_FENCE2_CNT */
#define TPC1_CMDQ_CP_FENCE2_CNT_VAL_SHIFT                            0
#define TPC1_CMDQ_CP_FENCE2_CNT_VAL_MASK                             0xFF

#define mmTPC1_CMDQ_CP_FENCE3_CNT                                    0xE49174
/* TPC1_CMDQ_CP_FENCE3_CNT */
#define TPC1_CMDQ_CP_FENCE3_CNT_VAL_SHIFT                            0
#define TPC1_CMDQ_CP_FENCE3_CNT_VAL_MASK                             0xFF

#define mmTPC1_CMDQ_CP_STS                                           0xE49178
/* TPC1_CMDQ_CP_STS */
#define TPC1_CMDQ_CP_STS_MSG_INFLIGHT_CNT_SHIFT                      0
#define TPC1_CMDQ_CP_STS_MSG_INFLIGHT_CNT_MASK                       0xFFFF
#define TPC1_CMDQ_CP_STS_ERDY_SHIFT                                  16
#define TPC1_CMDQ_CP_STS_ERDY_MASK                                   0x10000
#define TPC1_CMDQ_CP_STS_RRDY_SHIFT                                  17
#define TPC1_CMDQ_CP_STS_RRDY_MASK                                   0x20000
#define TPC1_CMDQ_CP_STS_MRDY_SHIFT                                  18
#define TPC1_CMDQ_CP_STS_MRDY_MASK                                   0x40000
#define TPC1_CMDQ_CP_STS_SW_STOP_SHIFT                               19
#define TPC1_CMDQ_CP_STS_SW_STOP_MASK                                0x80000
#define TPC1_CMDQ_CP_STS_FENCE_ID_SHIFT                              20
#define TPC1_CMDQ_CP_STS_FENCE_ID_MASK                               0x300000
#define TPC1_CMDQ_CP_STS_FENCE_IN_PROGRESS_SHIFT                     22
#define TPC1_CMDQ_CP_STS_FENCE_IN_PROGRESS_MASK                      0x400000

#define mmTPC1_CMDQ_CP_CURRENT_INST_LO                               0xE4917C
/* TPC1_CMDQ_CP_CURRENT_INST_LO */
#define TPC1_CMDQ_CP_CURRENT_INST_LO_VAL_SHIFT                       0
#define TPC1_CMDQ_CP_CURRENT_INST_LO_VAL_MASK                        0xFFFFFFFF

#define mmTPC1_CMDQ_CP_CURRENT_INST_HI                               0xE49180
/* TPC1_CMDQ_CP_CURRENT_INST_HI */
#define TPC1_CMDQ_CP_CURRENT_INST_HI_VAL_SHIFT                       0
#define TPC1_CMDQ_CP_CURRENT_INST_HI_VAL_MASK                        0xFFFFFFFF

#define mmTPC1_CMDQ_CP_BARRIER_CFG                                   0xE49184
/* TPC1_CMDQ_CP_BARRIER_CFG */
#define TPC1_CMDQ_CP_BARRIER_CFG_EBGUARD_SHIFT                       0
#define TPC1_CMDQ_CP_BARRIER_CFG_EBGUARD_MASK                        0xFFF

#define mmTPC1_CMDQ_CP_DBG_0                                         0xE49188
/* TPC1_CMDQ_CP_DBG_0 */
#define TPC1_CMDQ_CP_DBG_0_VAL_SHIFT                                 0
#define TPC1_CMDQ_CP_DBG_0_VAL_MASK                                  0xFF

#define mmTPC1_CMDQ_CQ_BUF_ADDR                                      0xE49308
/* TPC1_CMDQ_CQ_BUF_ADDR */
#define TPC1_CMDQ_CQ_BUF_ADDR_VAL_SHIFT                              0
#define TPC1_CMDQ_CQ_BUF_ADDR_VAL_MASK                               0xFFFFFFFF

#define mmTPC1_CMDQ_CQ_BUF_RDATA                                     0xE4930C
/* TPC1_CMDQ_CQ_BUF_RDATA */
#define TPC1_CMDQ_CQ_BUF_RDATA_VAL_SHIFT                             0
#define TPC1_CMDQ_CQ_BUF_RDATA_VAL_MASK                              0xFFFFFFFF

#endif /* ASIC_REG_TPC1_CMDQ_H_ */

