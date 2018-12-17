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

#ifndef ASIC_REG_DMA_CH_0_H_
#define ASIC_REG_DMA_CH_0_H_

/*
 *****************************************
 *   DMA_CH_0 (Prototype: DMA_CH)
 *****************************************
 */

#define mmDMA_CH_0_CFG0                                              0x401000
/* DMA_CH_0_CFG0 */
#define DMA_CH_0_CFG0_RD_MAX_OUTSTAND_SHIFT                          0
#define DMA_CH_0_CFG0_RD_MAX_OUTSTAND_MASK                           0x3FF
#define DMA_CH_0_CFG0_WR_MAX_OUTSTAND_SHIFT                          16
#define DMA_CH_0_CFG0_WR_MAX_OUTSTAND_MASK                           0xFFF0000

#define mmDMA_CH_0_CFG1                                              0x401004
/* DMA_CH_0_CFG1 */
#define DMA_CH_0_CFG1_RD_BUF_MAX_SIZE_SHIFT                          0
#define DMA_CH_0_CFG1_RD_BUF_MAX_SIZE_MASK                           0x3FF

#define mmDMA_CH_0_ERRMSG_ADDR_LO                                    0x401008
/* DMA_CH_0_ERRMSG_ADDR_LO */
#define DMA_CH_0_ERRMSG_ADDR_LO_VAL_SHIFT                            0
#define DMA_CH_0_ERRMSG_ADDR_LO_VAL_MASK                             0xFFFFFFFF

#define mmDMA_CH_0_ERRMSG_ADDR_HI                                    0x40100C
/* DMA_CH_0_ERRMSG_ADDR_HI */
#define DMA_CH_0_ERRMSG_ADDR_HI_VAL_SHIFT                            0
#define DMA_CH_0_ERRMSG_ADDR_HI_VAL_MASK                             0xFFFFFFFF

#define mmDMA_CH_0_ERRMSG_WDATA                                      0x401010
/* DMA_CH_0_ERRMSG_WDATA */
#define DMA_CH_0_ERRMSG_WDATA_VAL_SHIFT                              0
#define DMA_CH_0_ERRMSG_WDATA_VAL_MASK                               0xFFFFFFFF

#define mmDMA_CH_0_RD_COMP_ADDR_LO                                   0x401014
/* DMA_CH_0_RD_COMP_ADDR_LO */
#define DMA_CH_0_RD_COMP_ADDR_LO_VAL_SHIFT                           0
#define DMA_CH_0_RD_COMP_ADDR_LO_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_0_RD_COMP_ADDR_HI                                   0x401018
/* DMA_CH_0_RD_COMP_ADDR_HI */
#define DMA_CH_0_RD_COMP_ADDR_HI_VAL_SHIFT                           0
#define DMA_CH_0_RD_COMP_ADDR_HI_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_0_RD_COMP_WDATA                                     0x40101C
/* DMA_CH_0_RD_COMP_WDATA */
#define DMA_CH_0_RD_COMP_WDATA_VAL_SHIFT                             0
#define DMA_CH_0_RD_COMP_WDATA_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_0_WR_COMP_ADDR_LO                                   0x401020
/* DMA_CH_0_WR_COMP_ADDR_LO */
#define DMA_CH_0_WR_COMP_ADDR_LO_VAL_SHIFT                           0
#define DMA_CH_0_WR_COMP_ADDR_LO_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_0_WR_COMP_ADDR_HI                                   0x401024
/* DMA_CH_0_WR_COMP_ADDR_HI */
#define DMA_CH_0_WR_COMP_ADDR_HI_VAL_SHIFT                           0
#define DMA_CH_0_WR_COMP_ADDR_HI_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_0_WR_COMP_WDATA                                     0x401028
/* DMA_CH_0_WR_COMP_WDATA */
#define DMA_CH_0_WR_COMP_WDATA_VAL_SHIFT                             0
#define DMA_CH_0_WR_COMP_WDATA_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_0_LDMA_SRC_ADDR_LO                                  0x40102C
/* DMA_CH_0_LDMA_SRC_ADDR_LO */
#define DMA_CH_0_LDMA_SRC_ADDR_LO_VAL_SHIFT                          0
#define DMA_CH_0_LDMA_SRC_ADDR_LO_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_0_LDMA_SRC_ADDR_HI                                  0x401030
/* DMA_CH_0_LDMA_SRC_ADDR_HI */
#define DMA_CH_0_LDMA_SRC_ADDR_HI_VAL_SHIFT                          0
#define DMA_CH_0_LDMA_SRC_ADDR_HI_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_0_LDMA_DST_ADDR_LO                                  0x401034
/* DMA_CH_0_LDMA_DST_ADDR_LO */
#define DMA_CH_0_LDMA_DST_ADDR_LO_VAL_SHIFT                          0
#define DMA_CH_0_LDMA_DST_ADDR_LO_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_0_LDMA_DST_ADDR_HI                                  0x401038
/* DMA_CH_0_LDMA_DST_ADDR_HI */
#define DMA_CH_0_LDMA_DST_ADDR_HI_VAL_SHIFT                          0
#define DMA_CH_0_LDMA_DST_ADDR_HI_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_0_LDMA_TSIZE                                        0x40103C
/* DMA_CH_0_LDMA_TSIZE */
#define DMA_CH_0_LDMA_TSIZE_VAL_SHIFT                                0
#define DMA_CH_0_LDMA_TSIZE_VAL_MASK                                 0xFFFFFFFF

#define mmDMA_CH_0_COMIT_TRANSFER                                    0x401040
/* DMA_CH_0_COMIT_TRANSFER */
#define DMA_CH_0_COMIT_TRANSFER_PCI_UPS_WKORDR_SHIFT                 0
#define DMA_CH_0_COMIT_TRANSFER_PCI_UPS_WKORDR_MASK                  0x1
#define DMA_CH_0_COMIT_TRANSFER_RD_COMP_EN_SHIFT                     1
#define DMA_CH_0_COMIT_TRANSFER_RD_COMP_EN_MASK                      0x2
#define DMA_CH_0_COMIT_TRANSFER_WR_COMP_EN_SHIFT                     2
#define DMA_CH_0_COMIT_TRANSFER_WR_COMP_EN_MASK                      0x4
#define DMA_CH_0_COMIT_TRANSFER_NOSNOOP_SHIFT                        3
#define DMA_CH_0_COMIT_TRANSFER_NOSNOOP_MASK                         0x8
#define DMA_CH_0_COMIT_TRANSFER_SRC_ADDR_INC_DIS_SHIFT               4
#define DMA_CH_0_COMIT_TRANSFER_SRC_ADDR_INC_DIS_MASK                0x10
#define DMA_CH_0_COMIT_TRANSFER_DST_ADDR_INC_DIS_SHIFT               5
#define DMA_CH_0_COMIT_TRANSFER_DST_ADDR_INC_DIS_MASK                0x20
#define DMA_CH_0_COMIT_TRANSFER_MEM_SET_SHIFT                        6
#define DMA_CH_0_COMIT_TRANSFER_MEM_SET_MASK                         0x40
#define DMA_CH_0_COMIT_TRANSFER_MOD_TENSOR_SHIFT                     15
#define DMA_CH_0_COMIT_TRANSFER_MOD_TENSOR_MASK                      0x8000
#define DMA_CH_0_COMIT_TRANSFER_CTL_SHIFT                            16
#define DMA_CH_0_COMIT_TRANSFER_CTL_MASK                             0xFFFF0000

#define mmDMA_CH_0_STS0                                              0x401044
/* DMA_CH_0_STS0 */
#define DMA_CH_0_STS0_DMA_BUSY_SHIFT                                 0
#define DMA_CH_0_STS0_DMA_BUSY_MASK                                  0x1
#define DMA_CH_0_STS0_RD_STS_CTX_FULL_SHIFT                          1
#define DMA_CH_0_STS0_RD_STS_CTX_FULL_MASK                           0x2
#define DMA_CH_0_STS0_WR_STS_CTX_FULL_SHIFT                          2
#define DMA_CH_0_STS0_WR_STS_CTX_FULL_MASK                           0x4

#define mmDMA_CH_0_STS1                                              0x401048
/* DMA_CH_0_STS1 */
#define DMA_CH_0_STS1_RD_STS_CTX_CNT_SHIFT                           0
#define DMA_CH_0_STS1_RD_STS_CTX_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_0_STS2                                              0x40104C
/* DMA_CH_0_STS2 */
#define DMA_CH_0_STS2_WR_STS_CTX_CNT_SHIFT                           0
#define DMA_CH_0_STS2_WR_STS_CTX_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_0_STS3                                              0x401050
/* DMA_CH_0_STS3 */
#define DMA_CH_0_STS3_RD_STS_TRN_CNT_SHIFT                           0
#define DMA_CH_0_STS3_RD_STS_TRN_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_0_STS4                                              0x401054
/* DMA_CH_0_STS4 */
#define DMA_CH_0_STS4_WR_STS_TRN_CNT_SHIFT                           0
#define DMA_CH_0_STS4_WR_STS_TRN_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_0_SRC_ADDR_LO_STS                                   0x401058
/* DMA_CH_0_SRC_ADDR_LO_STS */
#define DMA_CH_0_SRC_ADDR_LO_STS_VAL_SHIFT                           0
#define DMA_CH_0_SRC_ADDR_LO_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_0_SRC_ADDR_HI_STS                                   0x40105C
/* DMA_CH_0_SRC_ADDR_HI_STS */
#define DMA_CH_0_SRC_ADDR_HI_STS_VAL_SHIFT                           0
#define DMA_CH_0_SRC_ADDR_HI_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_0_SRC_TSIZE_STS                                     0x401060
/* DMA_CH_0_SRC_TSIZE_STS */
#define DMA_CH_0_SRC_TSIZE_STS_VAL_SHIFT                             0
#define DMA_CH_0_SRC_TSIZE_STS_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_0_DST_ADDR_LO_STS                                   0x401064
/* DMA_CH_0_DST_ADDR_LO_STS */
#define DMA_CH_0_DST_ADDR_LO_STS_VAL_SHIFT                           0
#define DMA_CH_0_DST_ADDR_LO_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_0_DST_ADDR_HI_STS                                   0x401068
/* DMA_CH_0_DST_ADDR_HI_STS */
#define DMA_CH_0_DST_ADDR_HI_STS_VAL_SHIFT                           0
#define DMA_CH_0_DST_ADDR_HI_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_0_DST_TSIZE_STS                                     0x40106C
/* DMA_CH_0_DST_TSIZE_STS */
#define DMA_CH_0_DST_TSIZE_STS_VAL_SHIFT                             0
#define DMA_CH_0_DST_TSIZE_STS_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_0_RD_RATE_LIM_EN                                    0x401070
/* DMA_CH_0_RD_RATE_LIM_EN */
#define DMA_CH_0_RD_RATE_LIM_EN_VAL_SHIFT                            0
#define DMA_CH_0_RD_RATE_LIM_EN_VAL_MASK                             0x1

#define mmDMA_CH_0_RD_RATE_LIM_RST_TOKEN                             0x401074
/* DMA_CH_0_RD_RATE_LIM_RST_TOKEN */
#define DMA_CH_0_RD_RATE_LIM_RST_TOKEN_VAL_SHIFT                     0
#define DMA_CH_0_RD_RATE_LIM_RST_TOKEN_VAL_MASK                      0xFFFF

#define mmDMA_CH_0_RD_RATE_LIM_SAT                                   0x401078
/* DMA_CH_0_RD_RATE_LIM_SAT */
#define DMA_CH_0_RD_RATE_LIM_SAT_VAL_SHIFT                           0
#define DMA_CH_0_RD_RATE_LIM_SAT_VAL_MASK                            0xFFFF

#define mmDMA_CH_0_RD_RATE_LIM_TOUT                                  0x40107C
/* DMA_CH_0_RD_RATE_LIM_TOUT */
#define DMA_CH_0_RD_RATE_LIM_TOUT_VAL_SHIFT                          0
#define DMA_CH_0_RD_RATE_LIM_TOUT_VAL_MASK                           0x7FFFFFFF

#define mmDMA_CH_0_WR_RATE_LIM_EN                                    0x401080
/* DMA_CH_0_WR_RATE_LIM_EN */
#define DMA_CH_0_WR_RATE_LIM_EN_VAL_SHIFT                            0
#define DMA_CH_0_WR_RATE_LIM_EN_VAL_MASK                             0x1

#define mmDMA_CH_0_WR_RATE_LIM_RST_TOKEN                             0x401084
/* DMA_CH_0_WR_RATE_LIM_RST_TOKEN */
#define DMA_CH_0_WR_RATE_LIM_RST_TOKEN_VAL_SHIFT                     0
#define DMA_CH_0_WR_RATE_LIM_RST_TOKEN_VAL_MASK                      0xFFFF

#define mmDMA_CH_0_WR_RATE_LIM_SAT                                   0x401088
/* DMA_CH_0_WR_RATE_LIM_SAT */
#define DMA_CH_0_WR_RATE_LIM_SAT_VAL_SHIFT                           0
#define DMA_CH_0_WR_RATE_LIM_SAT_VAL_MASK                            0xFFFF

#define mmDMA_CH_0_WR_RATE_LIM_TOUT                                  0x40108C
/* DMA_CH_0_WR_RATE_LIM_TOUT */
#define DMA_CH_0_WR_RATE_LIM_TOUT_VAL_SHIFT                          0
#define DMA_CH_0_WR_RATE_LIM_TOUT_VAL_MASK                           0x7FFFFFFF

#define mmDMA_CH_0_CFG2                                              0x401090
/* DMA_CH_0_CFG2 */
#define DMA_CH_0_CFG2_FORCE_WORD_SHIFT                               0
#define DMA_CH_0_CFG2_FORCE_WORD_MASK                                0x1

#define mmDMA_CH_0_TDMA_CTL                                          0x401100
/* DMA_CH_0_TDMA_CTL */
#define DMA_CH_0_TDMA_CTL_DTYPE_SHIFT                                0
#define DMA_CH_0_TDMA_CTL_DTYPE_MASK                                 0x7

#define mmDMA_CH_0_TDMA_SRC_BASE_ADDR_LO                             0x401104
/* DMA_CH_0_TDMA_SRC_BASE_ADDR_LO */
#define DMA_CH_0_TDMA_SRC_BASE_ADDR_LO_VAL_SHIFT                     0
#define DMA_CH_0_TDMA_SRC_BASE_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_BASE_ADDR_HI                             0x401108
/* DMA_CH_0_TDMA_SRC_BASE_ADDR_HI */
#define DMA_CH_0_TDMA_SRC_BASE_ADDR_HI_VAL_SHIFT                     0
#define DMA_CH_0_TDMA_SRC_BASE_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_ROI_BASE_0                               0x40110C
/* DMA_CH_0_TDMA_SRC_ROI_BASE_0 */
#define DMA_CH_0_TDMA_SRC_ROI_BASE_0_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_SRC_ROI_BASE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_ROI_SIZE_0                               0x401110
/* DMA_CH_0_TDMA_SRC_ROI_SIZE_0 */
#define DMA_CH_0_TDMA_SRC_ROI_SIZE_0_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_SRC_ROI_SIZE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_VALID_ELEMENTS_0                         0x401114
/* DMA_CH_0_TDMA_SRC_VALID_ELEMENTS_0 */
#define DMA_CH_0_TDMA_SRC_VALID_ELEMENTS_0_VAL_SHIFT                 0
#define DMA_CH_0_TDMA_SRC_VALID_ELEMENTS_0_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_START_OFFSET_0                           0x401118
/* DMA_CH_0_TDMA_SRC_START_OFFSET_0 */
#define DMA_CH_0_TDMA_SRC_START_OFFSET_0_VAL_SHIFT                   0
#define DMA_CH_0_TDMA_SRC_START_OFFSET_0_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_STRIDE_0                                 0x40111C
/* DMA_CH_0_TDMA_SRC_STRIDE_0 */
#define DMA_CH_0_TDMA_SRC_STRIDE_0_VAL_SHIFT                         0
#define DMA_CH_0_TDMA_SRC_STRIDE_0_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_ROI_BASE_1                               0x401120
/* DMA_CH_0_TDMA_SRC_ROI_BASE_1 */
#define DMA_CH_0_TDMA_SRC_ROI_BASE_1_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_SRC_ROI_BASE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_ROI_SIZE_1                               0x401124
/* DMA_CH_0_TDMA_SRC_ROI_SIZE_1 */
#define DMA_CH_0_TDMA_SRC_ROI_SIZE_1_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_SRC_ROI_SIZE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_VALID_ELEMENTS_1                         0x401128
/* DMA_CH_0_TDMA_SRC_VALID_ELEMENTS_1 */
#define DMA_CH_0_TDMA_SRC_VALID_ELEMENTS_1_VAL_SHIFT                 0
#define DMA_CH_0_TDMA_SRC_VALID_ELEMENTS_1_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_START_OFFSET_1                           0x40112C
/* DMA_CH_0_TDMA_SRC_START_OFFSET_1 */
#define DMA_CH_0_TDMA_SRC_START_OFFSET_1_VAL_SHIFT                   0
#define DMA_CH_0_TDMA_SRC_START_OFFSET_1_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_STRIDE_1                                 0x401130
/* DMA_CH_0_TDMA_SRC_STRIDE_1 */
#define DMA_CH_0_TDMA_SRC_STRIDE_1_VAL_SHIFT                         0
#define DMA_CH_0_TDMA_SRC_STRIDE_1_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_ROI_BASE_2                               0x401134
/* DMA_CH_0_TDMA_SRC_ROI_BASE_2 */
#define DMA_CH_0_TDMA_SRC_ROI_BASE_2_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_SRC_ROI_BASE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_ROI_SIZE_2                               0x401138
/* DMA_CH_0_TDMA_SRC_ROI_SIZE_2 */
#define DMA_CH_0_TDMA_SRC_ROI_SIZE_2_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_SRC_ROI_SIZE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_VALID_ELEMENTS_2                         0x40113C
/* DMA_CH_0_TDMA_SRC_VALID_ELEMENTS_2 */
#define DMA_CH_0_TDMA_SRC_VALID_ELEMENTS_2_VAL_SHIFT                 0
#define DMA_CH_0_TDMA_SRC_VALID_ELEMENTS_2_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_START_OFFSET_2                           0x401140
/* DMA_CH_0_TDMA_SRC_START_OFFSET_2 */
#define DMA_CH_0_TDMA_SRC_START_OFFSET_2_VAL_SHIFT                   0
#define DMA_CH_0_TDMA_SRC_START_OFFSET_2_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_STRIDE_2                                 0x401144
/* DMA_CH_0_TDMA_SRC_STRIDE_2 */
#define DMA_CH_0_TDMA_SRC_STRIDE_2_VAL_SHIFT                         0
#define DMA_CH_0_TDMA_SRC_STRIDE_2_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_ROI_BASE_3                               0x401148
/* DMA_CH_0_TDMA_SRC_ROI_BASE_3 */
#define DMA_CH_0_TDMA_SRC_ROI_BASE_3_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_SRC_ROI_BASE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_ROI_SIZE_3                               0x40114C
/* DMA_CH_0_TDMA_SRC_ROI_SIZE_3 */
#define DMA_CH_0_TDMA_SRC_ROI_SIZE_3_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_SRC_ROI_SIZE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_VALID_ELEMENTS_3                         0x401150
/* DMA_CH_0_TDMA_SRC_VALID_ELEMENTS_3 */
#define DMA_CH_0_TDMA_SRC_VALID_ELEMENTS_3_VAL_SHIFT                 0
#define DMA_CH_0_TDMA_SRC_VALID_ELEMENTS_3_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_START_OFFSET_3                           0x401154
/* DMA_CH_0_TDMA_SRC_START_OFFSET_3 */
#define DMA_CH_0_TDMA_SRC_START_OFFSET_3_VAL_SHIFT                   0
#define DMA_CH_0_TDMA_SRC_START_OFFSET_3_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_STRIDE_3                                 0x401158
/* DMA_CH_0_TDMA_SRC_STRIDE_3 */
#define DMA_CH_0_TDMA_SRC_STRIDE_3_VAL_SHIFT                         0
#define DMA_CH_0_TDMA_SRC_STRIDE_3_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_ROI_BASE_4                               0x40115C
/* DMA_CH_0_TDMA_SRC_ROI_BASE_4 */
#define DMA_CH_0_TDMA_SRC_ROI_BASE_4_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_SRC_ROI_BASE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_ROI_SIZE_4                               0x401160
/* DMA_CH_0_TDMA_SRC_ROI_SIZE_4 */
#define DMA_CH_0_TDMA_SRC_ROI_SIZE_4_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_SRC_ROI_SIZE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_VALID_ELEMENTS_4                         0x401164
/* DMA_CH_0_TDMA_SRC_VALID_ELEMENTS_4 */
#define DMA_CH_0_TDMA_SRC_VALID_ELEMENTS_4_VAL_SHIFT                 0
#define DMA_CH_0_TDMA_SRC_VALID_ELEMENTS_4_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_START_OFFSET_4                           0x401168
/* DMA_CH_0_TDMA_SRC_START_OFFSET_4 */
#define DMA_CH_0_TDMA_SRC_START_OFFSET_4_VAL_SHIFT                   0
#define DMA_CH_0_TDMA_SRC_START_OFFSET_4_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_0_TDMA_SRC_STRIDE_4                                 0x40116C
/* DMA_CH_0_TDMA_SRC_STRIDE_4 */
#define DMA_CH_0_TDMA_SRC_STRIDE_4_VAL_SHIFT                         0
#define DMA_CH_0_TDMA_SRC_STRIDE_4_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_BASE_ADDR_LO                             0x401170
/* DMA_CH_0_TDMA_DST_BASE_ADDR_LO */
#define DMA_CH_0_TDMA_DST_BASE_ADDR_LO_VAL_SHIFT                     0
#define DMA_CH_0_TDMA_DST_BASE_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_BASE_ADDR_HI                             0x401174
/* DMA_CH_0_TDMA_DST_BASE_ADDR_HI */
#define DMA_CH_0_TDMA_DST_BASE_ADDR_HI_VAL_SHIFT                     0
#define DMA_CH_0_TDMA_DST_BASE_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_ROI_BASE_0                               0x401178
/* DMA_CH_0_TDMA_DST_ROI_BASE_0 */
#define DMA_CH_0_TDMA_DST_ROI_BASE_0_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_DST_ROI_BASE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_ROI_SIZE_0                               0x40117C
/* DMA_CH_0_TDMA_DST_ROI_SIZE_0 */
#define DMA_CH_0_TDMA_DST_ROI_SIZE_0_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_DST_ROI_SIZE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_VALID_ELEMENTS_0                         0x401180
/* DMA_CH_0_TDMA_DST_VALID_ELEMENTS_0 */
#define DMA_CH_0_TDMA_DST_VALID_ELEMENTS_0_VAL_SHIFT                 0
#define DMA_CH_0_TDMA_DST_VALID_ELEMENTS_0_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_START_OFFSET_0                           0x401184
/* DMA_CH_0_TDMA_DST_START_OFFSET_0 */
#define DMA_CH_0_TDMA_DST_START_OFFSET_0_VAL_SHIFT                   0
#define DMA_CH_0_TDMA_DST_START_OFFSET_0_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_STRIDE_0                                 0x401188
/* DMA_CH_0_TDMA_DST_STRIDE_0 */
#define DMA_CH_0_TDMA_DST_STRIDE_0_VAL_SHIFT                         0
#define DMA_CH_0_TDMA_DST_STRIDE_0_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_ROI_BASE_1                               0x40118C
/* DMA_CH_0_TDMA_DST_ROI_BASE_1 */
#define DMA_CH_0_TDMA_DST_ROI_BASE_1_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_DST_ROI_BASE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_ROI_SIZE_1                               0x401190
/* DMA_CH_0_TDMA_DST_ROI_SIZE_1 */
#define DMA_CH_0_TDMA_DST_ROI_SIZE_1_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_DST_ROI_SIZE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_VALID_ELEMENTS_1                         0x401194
/* DMA_CH_0_TDMA_DST_VALID_ELEMENTS_1 */
#define DMA_CH_0_TDMA_DST_VALID_ELEMENTS_1_VAL_SHIFT                 0
#define DMA_CH_0_TDMA_DST_VALID_ELEMENTS_1_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_START_OFFSET_1                           0x401198
/* DMA_CH_0_TDMA_DST_START_OFFSET_1 */
#define DMA_CH_0_TDMA_DST_START_OFFSET_1_VAL_SHIFT                   0
#define DMA_CH_0_TDMA_DST_START_OFFSET_1_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_STRIDE_1                                 0x40119C
/* DMA_CH_0_TDMA_DST_STRIDE_1 */
#define DMA_CH_0_TDMA_DST_STRIDE_1_VAL_SHIFT                         0
#define DMA_CH_0_TDMA_DST_STRIDE_1_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_ROI_BASE_2                               0x4011A0
/* DMA_CH_0_TDMA_DST_ROI_BASE_2 */
#define DMA_CH_0_TDMA_DST_ROI_BASE_2_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_DST_ROI_BASE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_ROI_SIZE_2                               0x4011A4
/* DMA_CH_0_TDMA_DST_ROI_SIZE_2 */
#define DMA_CH_0_TDMA_DST_ROI_SIZE_2_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_DST_ROI_SIZE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_VALID_ELEMENTS_2                         0x4011A8
/* DMA_CH_0_TDMA_DST_VALID_ELEMENTS_2 */
#define DMA_CH_0_TDMA_DST_VALID_ELEMENTS_2_VAL_SHIFT                 0
#define DMA_CH_0_TDMA_DST_VALID_ELEMENTS_2_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_START_OFFSET_2                           0x4011AC
/* DMA_CH_0_TDMA_DST_START_OFFSET_2 */
#define DMA_CH_0_TDMA_DST_START_OFFSET_2_VAL_SHIFT                   0
#define DMA_CH_0_TDMA_DST_START_OFFSET_2_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_STRIDE_2                                 0x4011B0
/* DMA_CH_0_TDMA_DST_STRIDE_2 */
#define DMA_CH_0_TDMA_DST_STRIDE_2_VAL_SHIFT                         0
#define DMA_CH_0_TDMA_DST_STRIDE_2_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_ROI_BASE_3                               0x4011B4
/* DMA_CH_0_TDMA_DST_ROI_BASE_3 */
#define DMA_CH_0_TDMA_DST_ROI_BASE_3_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_DST_ROI_BASE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_ROI_SIZE_3                               0x4011B8
/* DMA_CH_0_TDMA_DST_ROI_SIZE_3 */
#define DMA_CH_0_TDMA_DST_ROI_SIZE_3_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_DST_ROI_SIZE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_VALID_ELEMENTS_3                         0x4011BC
/* DMA_CH_0_TDMA_DST_VALID_ELEMENTS_3 */
#define DMA_CH_0_TDMA_DST_VALID_ELEMENTS_3_VAL_SHIFT                 0
#define DMA_CH_0_TDMA_DST_VALID_ELEMENTS_3_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_START_OFFSET_3                           0x4011C0
/* DMA_CH_0_TDMA_DST_START_OFFSET_3 */
#define DMA_CH_0_TDMA_DST_START_OFFSET_3_VAL_SHIFT                   0
#define DMA_CH_0_TDMA_DST_START_OFFSET_3_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_STRIDE_3                                 0x4011C4
/* DMA_CH_0_TDMA_DST_STRIDE_3 */
#define DMA_CH_0_TDMA_DST_STRIDE_3_VAL_SHIFT                         0
#define DMA_CH_0_TDMA_DST_STRIDE_3_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_ROI_BASE_4                               0x4011C8
/* DMA_CH_0_TDMA_DST_ROI_BASE_4 */
#define DMA_CH_0_TDMA_DST_ROI_BASE_4_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_DST_ROI_BASE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_ROI_SIZE_4                               0x4011CC
/* DMA_CH_0_TDMA_DST_ROI_SIZE_4 */
#define DMA_CH_0_TDMA_DST_ROI_SIZE_4_VAL_SHIFT                       0
#define DMA_CH_0_TDMA_DST_ROI_SIZE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_VALID_ELEMENTS_4                         0x4011D0
/* DMA_CH_0_TDMA_DST_VALID_ELEMENTS_4 */
#define DMA_CH_0_TDMA_DST_VALID_ELEMENTS_4_VAL_SHIFT                 0
#define DMA_CH_0_TDMA_DST_VALID_ELEMENTS_4_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_START_OFFSET_4                           0x4011D4
/* DMA_CH_0_TDMA_DST_START_OFFSET_4 */
#define DMA_CH_0_TDMA_DST_START_OFFSET_4_VAL_SHIFT                   0
#define DMA_CH_0_TDMA_DST_START_OFFSET_4_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_0_TDMA_DST_STRIDE_4                                 0x4011D8
/* DMA_CH_0_TDMA_DST_STRIDE_4 */
#define DMA_CH_0_TDMA_DST_STRIDE_4_VAL_SHIFT                         0
#define DMA_CH_0_TDMA_DST_STRIDE_4_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_0_MEM_INIT_BUSY                                     0x4011FC
/* DMA_CH_0_MEM_INIT_BUSY */
#define DMA_CH_0_MEM_INIT_BUSY_SBC_DATA_SHIFT                        0
#define DMA_CH_0_MEM_INIT_BUSY_SBC_DATA_MASK                         0xFF
#define DMA_CH_0_MEM_INIT_BUSY_SBC_MD_SHIFT                          8
#define DMA_CH_0_MEM_INIT_BUSY_SBC_MD_MASK                           0x100

#endif /* ASIC_REG_DMA_CH_0_H_ */

