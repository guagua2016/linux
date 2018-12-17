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

#ifndef ASIC_REG_DMA_CH_1_H_
#define ASIC_REG_DMA_CH_1_H_

/*
 *****************************************
 *   DMA_CH_1 (Prototype: DMA_CH)
 *****************************************
 */

#define mmDMA_CH_1_CFG0                                              0x409000
/* DMA_CH_1_CFG0 */
#define DMA_CH_1_CFG0_RD_MAX_OUTSTAND_SHIFT                          0
#define DMA_CH_1_CFG0_RD_MAX_OUTSTAND_MASK                           0x3FF
#define DMA_CH_1_CFG0_WR_MAX_OUTSTAND_SHIFT                          16
#define DMA_CH_1_CFG0_WR_MAX_OUTSTAND_MASK                           0xFFF0000

#define mmDMA_CH_1_CFG1                                              0x409004
/* DMA_CH_1_CFG1 */
#define DMA_CH_1_CFG1_RD_BUF_MAX_SIZE_SHIFT                          0
#define DMA_CH_1_CFG1_RD_BUF_MAX_SIZE_MASK                           0x3FF

#define mmDMA_CH_1_ERRMSG_ADDR_LO                                    0x409008
/* DMA_CH_1_ERRMSG_ADDR_LO */
#define DMA_CH_1_ERRMSG_ADDR_LO_VAL_SHIFT                            0
#define DMA_CH_1_ERRMSG_ADDR_LO_VAL_MASK                             0xFFFFFFFF

#define mmDMA_CH_1_ERRMSG_ADDR_HI                                    0x40900C
/* DMA_CH_1_ERRMSG_ADDR_HI */
#define DMA_CH_1_ERRMSG_ADDR_HI_VAL_SHIFT                            0
#define DMA_CH_1_ERRMSG_ADDR_HI_VAL_MASK                             0xFFFFFFFF

#define mmDMA_CH_1_ERRMSG_WDATA                                      0x409010
/* DMA_CH_1_ERRMSG_WDATA */
#define DMA_CH_1_ERRMSG_WDATA_VAL_SHIFT                              0
#define DMA_CH_1_ERRMSG_WDATA_VAL_MASK                               0xFFFFFFFF

#define mmDMA_CH_1_RD_COMP_ADDR_LO                                   0x409014
/* DMA_CH_1_RD_COMP_ADDR_LO */
#define DMA_CH_1_RD_COMP_ADDR_LO_VAL_SHIFT                           0
#define DMA_CH_1_RD_COMP_ADDR_LO_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_1_RD_COMP_ADDR_HI                                   0x409018
/* DMA_CH_1_RD_COMP_ADDR_HI */
#define DMA_CH_1_RD_COMP_ADDR_HI_VAL_SHIFT                           0
#define DMA_CH_1_RD_COMP_ADDR_HI_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_1_RD_COMP_WDATA                                     0x40901C
/* DMA_CH_1_RD_COMP_WDATA */
#define DMA_CH_1_RD_COMP_WDATA_VAL_SHIFT                             0
#define DMA_CH_1_RD_COMP_WDATA_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_1_WR_COMP_ADDR_LO                                   0x409020
/* DMA_CH_1_WR_COMP_ADDR_LO */
#define DMA_CH_1_WR_COMP_ADDR_LO_VAL_SHIFT                           0
#define DMA_CH_1_WR_COMP_ADDR_LO_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_1_WR_COMP_ADDR_HI                                   0x409024
/* DMA_CH_1_WR_COMP_ADDR_HI */
#define DMA_CH_1_WR_COMP_ADDR_HI_VAL_SHIFT                           0
#define DMA_CH_1_WR_COMP_ADDR_HI_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_1_WR_COMP_WDATA                                     0x409028
/* DMA_CH_1_WR_COMP_WDATA */
#define DMA_CH_1_WR_COMP_WDATA_VAL_SHIFT                             0
#define DMA_CH_1_WR_COMP_WDATA_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_1_LDMA_SRC_ADDR_LO                                  0x40902C
/* DMA_CH_1_LDMA_SRC_ADDR_LO */
#define DMA_CH_1_LDMA_SRC_ADDR_LO_VAL_SHIFT                          0
#define DMA_CH_1_LDMA_SRC_ADDR_LO_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_1_LDMA_SRC_ADDR_HI                                  0x409030
/* DMA_CH_1_LDMA_SRC_ADDR_HI */
#define DMA_CH_1_LDMA_SRC_ADDR_HI_VAL_SHIFT                          0
#define DMA_CH_1_LDMA_SRC_ADDR_HI_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_1_LDMA_DST_ADDR_LO                                  0x409034
/* DMA_CH_1_LDMA_DST_ADDR_LO */
#define DMA_CH_1_LDMA_DST_ADDR_LO_VAL_SHIFT                          0
#define DMA_CH_1_LDMA_DST_ADDR_LO_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_1_LDMA_DST_ADDR_HI                                  0x409038
/* DMA_CH_1_LDMA_DST_ADDR_HI */
#define DMA_CH_1_LDMA_DST_ADDR_HI_VAL_SHIFT                          0
#define DMA_CH_1_LDMA_DST_ADDR_HI_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_1_LDMA_TSIZE                                        0x40903C
/* DMA_CH_1_LDMA_TSIZE */
#define DMA_CH_1_LDMA_TSIZE_VAL_SHIFT                                0
#define DMA_CH_1_LDMA_TSIZE_VAL_MASK                                 0xFFFFFFFF

#define mmDMA_CH_1_COMIT_TRANSFER                                    0x409040
/* DMA_CH_1_COMIT_TRANSFER */
#define DMA_CH_1_COMIT_TRANSFER_PCI_UPS_WKORDR_SHIFT                 0
#define DMA_CH_1_COMIT_TRANSFER_PCI_UPS_WKORDR_MASK                  0x1
#define DMA_CH_1_COMIT_TRANSFER_RD_COMP_EN_SHIFT                     1
#define DMA_CH_1_COMIT_TRANSFER_RD_COMP_EN_MASK                      0x2
#define DMA_CH_1_COMIT_TRANSFER_WR_COMP_EN_SHIFT                     2
#define DMA_CH_1_COMIT_TRANSFER_WR_COMP_EN_MASK                      0x4
#define DMA_CH_1_COMIT_TRANSFER_NOSNOOP_SHIFT                        3
#define DMA_CH_1_COMIT_TRANSFER_NOSNOOP_MASK                         0x8
#define DMA_CH_1_COMIT_TRANSFER_SRC_ADDR_INC_DIS_SHIFT               4
#define DMA_CH_1_COMIT_TRANSFER_SRC_ADDR_INC_DIS_MASK                0x10
#define DMA_CH_1_COMIT_TRANSFER_DST_ADDR_INC_DIS_SHIFT               5
#define DMA_CH_1_COMIT_TRANSFER_DST_ADDR_INC_DIS_MASK                0x20
#define DMA_CH_1_COMIT_TRANSFER_MEM_SET_SHIFT                        6
#define DMA_CH_1_COMIT_TRANSFER_MEM_SET_MASK                         0x40
#define DMA_CH_1_COMIT_TRANSFER_MOD_TENSOR_SHIFT                     15
#define DMA_CH_1_COMIT_TRANSFER_MOD_TENSOR_MASK                      0x8000
#define DMA_CH_1_COMIT_TRANSFER_CTL_SHIFT                            16
#define DMA_CH_1_COMIT_TRANSFER_CTL_MASK                             0xFFFF0000

#define mmDMA_CH_1_STS0                                              0x409044
/* DMA_CH_1_STS0 */
#define DMA_CH_1_STS0_DMA_BUSY_SHIFT                                 0
#define DMA_CH_1_STS0_DMA_BUSY_MASK                                  0x1
#define DMA_CH_1_STS0_RD_STS_CTX_FULL_SHIFT                          1
#define DMA_CH_1_STS0_RD_STS_CTX_FULL_MASK                           0x2
#define DMA_CH_1_STS0_WR_STS_CTX_FULL_SHIFT                          2
#define DMA_CH_1_STS0_WR_STS_CTX_FULL_MASK                           0x4

#define mmDMA_CH_1_STS1                                              0x409048
/* DMA_CH_1_STS1 */
#define DMA_CH_1_STS1_RD_STS_CTX_CNT_SHIFT                           0
#define DMA_CH_1_STS1_RD_STS_CTX_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_1_STS2                                              0x40904C
/* DMA_CH_1_STS2 */
#define DMA_CH_1_STS2_WR_STS_CTX_CNT_SHIFT                           0
#define DMA_CH_1_STS2_WR_STS_CTX_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_1_STS3                                              0x409050
/* DMA_CH_1_STS3 */
#define DMA_CH_1_STS3_RD_STS_TRN_CNT_SHIFT                           0
#define DMA_CH_1_STS3_RD_STS_TRN_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_1_STS4                                              0x409054
/* DMA_CH_1_STS4 */
#define DMA_CH_1_STS4_WR_STS_TRN_CNT_SHIFT                           0
#define DMA_CH_1_STS4_WR_STS_TRN_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_1_SRC_ADDR_LO_STS                                   0x409058
/* DMA_CH_1_SRC_ADDR_LO_STS */
#define DMA_CH_1_SRC_ADDR_LO_STS_VAL_SHIFT                           0
#define DMA_CH_1_SRC_ADDR_LO_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_1_SRC_ADDR_HI_STS                                   0x40905C
/* DMA_CH_1_SRC_ADDR_HI_STS */
#define DMA_CH_1_SRC_ADDR_HI_STS_VAL_SHIFT                           0
#define DMA_CH_1_SRC_ADDR_HI_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_1_SRC_TSIZE_STS                                     0x409060
/* DMA_CH_1_SRC_TSIZE_STS */
#define DMA_CH_1_SRC_TSIZE_STS_VAL_SHIFT                             0
#define DMA_CH_1_SRC_TSIZE_STS_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_1_DST_ADDR_LO_STS                                   0x409064
/* DMA_CH_1_DST_ADDR_LO_STS */
#define DMA_CH_1_DST_ADDR_LO_STS_VAL_SHIFT                           0
#define DMA_CH_1_DST_ADDR_LO_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_1_DST_ADDR_HI_STS                                   0x409068
/* DMA_CH_1_DST_ADDR_HI_STS */
#define DMA_CH_1_DST_ADDR_HI_STS_VAL_SHIFT                           0
#define DMA_CH_1_DST_ADDR_HI_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_1_DST_TSIZE_STS                                     0x40906C
/* DMA_CH_1_DST_TSIZE_STS */
#define DMA_CH_1_DST_TSIZE_STS_VAL_SHIFT                             0
#define DMA_CH_1_DST_TSIZE_STS_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_1_RD_RATE_LIM_EN                                    0x409070
/* DMA_CH_1_RD_RATE_LIM_EN */
#define DMA_CH_1_RD_RATE_LIM_EN_VAL_SHIFT                            0
#define DMA_CH_1_RD_RATE_LIM_EN_VAL_MASK                             0x1

#define mmDMA_CH_1_RD_RATE_LIM_RST_TOKEN                             0x409074
/* DMA_CH_1_RD_RATE_LIM_RST_TOKEN */
#define DMA_CH_1_RD_RATE_LIM_RST_TOKEN_VAL_SHIFT                     0
#define DMA_CH_1_RD_RATE_LIM_RST_TOKEN_VAL_MASK                      0xFFFF

#define mmDMA_CH_1_RD_RATE_LIM_SAT                                   0x409078
/* DMA_CH_1_RD_RATE_LIM_SAT */
#define DMA_CH_1_RD_RATE_LIM_SAT_VAL_SHIFT                           0
#define DMA_CH_1_RD_RATE_LIM_SAT_VAL_MASK                            0xFFFF

#define mmDMA_CH_1_RD_RATE_LIM_TOUT                                  0x40907C
/* DMA_CH_1_RD_RATE_LIM_TOUT */
#define DMA_CH_1_RD_RATE_LIM_TOUT_VAL_SHIFT                          0
#define DMA_CH_1_RD_RATE_LIM_TOUT_VAL_MASK                           0x7FFFFFFF

#define mmDMA_CH_1_WR_RATE_LIM_EN                                    0x409080
/* DMA_CH_1_WR_RATE_LIM_EN */
#define DMA_CH_1_WR_RATE_LIM_EN_VAL_SHIFT                            0
#define DMA_CH_1_WR_RATE_LIM_EN_VAL_MASK                             0x1

#define mmDMA_CH_1_WR_RATE_LIM_RST_TOKEN                             0x409084
/* DMA_CH_1_WR_RATE_LIM_RST_TOKEN */
#define DMA_CH_1_WR_RATE_LIM_RST_TOKEN_VAL_SHIFT                     0
#define DMA_CH_1_WR_RATE_LIM_RST_TOKEN_VAL_MASK                      0xFFFF

#define mmDMA_CH_1_WR_RATE_LIM_SAT                                   0x409088
/* DMA_CH_1_WR_RATE_LIM_SAT */
#define DMA_CH_1_WR_RATE_LIM_SAT_VAL_SHIFT                           0
#define DMA_CH_1_WR_RATE_LIM_SAT_VAL_MASK                            0xFFFF

#define mmDMA_CH_1_WR_RATE_LIM_TOUT                                  0x40908C
/* DMA_CH_1_WR_RATE_LIM_TOUT */
#define DMA_CH_1_WR_RATE_LIM_TOUT_VAL_SHIFT                          0
#define DMA_CH_1_WR_RATE_LIM_TOUT_VAL_MASK                           0x7FFFFFFF

#define mmDMA_CH_1_CFG2                                              0x409090
/* DMA_CH_1_CFG2 */
#define DMA_CH_1_CFG2_FORCE_WORD_SHIFT                               0
#define DMA_CH_1_CFG2_FORCE_WORD_MASK                                0x1

#define mmDMA_CH_1_TDMA_CTL                                          0x409100
/* DMA_CH_1_TDMA_CTL */
#define DMA_CH_1_TDMA_CTL_DTYPE_SHIFT                                0
#define DMA_CH_1_TDMA_CTL_DTYPE_MASK                                 0x7

#define mmDMA_CH_1_TDMA_SRC_BASE_ADDR_LO                             0x409104
/* DMA_CH_1_TDMA_SRC_BASE_ADDR_LO */
#define DMA_CH_1_TDMA_SRC_BASE_ADDR_LO_VAL_SHIFT                     0
#define DMA_CH_1_TDMA_SRC_BASE_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_BASE_ADDR_HI                             0x409108
/* DMA_CH_1_TDMA_SRC_BASE_ADDR_HI */
#define DMA_CH_1_TDMA_SRC_BASE_ADDR_HI_VAL_SHIFT                     0
#define DMA_CH_1_TDMA_SRC_BASE_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_ROI_BASE_0                               0x40910C
/* DMA_CH_1_TDMA_SRC_ROI_BASE_0 */
#define DMA_CH_1_TDMA_SRC_ROI_BASE_0_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_SRC_ROI_BASE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_ROI_SIZE_0                               0x409110
/* DMA_CH_1_TDMA_SRC_ROI_SIZE_0 */
#define DMA_CH_1_TDMA_SRC_ROI_SIZE_0_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_SRC_ROI_SIZE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_VALID_ELEMENTS_0                         0x409114
/* DMA_CH_1_TDMA_SRC_VALID_ELEMENTS_0 */
#define DMA_CH_1_TDMA_SRC_VALID_ELEMENTS_0_VAL_SHIFT                 0
#define DMA_CH_1_TDMA_SRC_VALID_ELEMENTS_0_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_START_OFFSET_0                           0x409118
/* DMA_CH_1_TDMA_SRC_START_OFFSET_0 */
#define DMA_CH_1_TDMA_SRC_START_OFFSET_0_VAL_SHIFT                   0
#define DMA_CH_1_TDMA_SRC_START_OFFSET_0_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_STRIDE_0                                 0x40911C
/* DMA_CH_1_TDMA_SRC_STRIDE_0 */
#define DMA_CH_1_TDMA_SRC_STRIDE_0_VAL_SHIFT                         0
#define DMA_CH_1_TDMA_SRC_STRIDE_0_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_ROI_BASE_1                               0x409120
/* DMA_CH_1_TDMA_SRC_ROI_BASE_1 */
#define DMA_CH_1_TDMA_SRC_ROI_BASE_1_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_SRC_ROI_BASE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_ROI_SIZE_1                               0x409124
/* DMA_CH_1_TDMA_SRC_ROI_SIZE_1 */
#define DMA_CH_1_TDMA_SRC_ROI_SIZE_1_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_SRC_ROI_SIZE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_VALID_ELEMENTS_1                         0x409128
/* DMA_CH_1_TDMA_SRC_VALID_ELEMENTS_1 */
#define DMA_CH_1_TDMA_SRC_VALID_ELEMENTS_1_VAL_SHIFT                 0
#define DMA_CH_1_TDMA_SRC_VALID_ELEMENTS_1_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_START_OFFSET_1                           0x40912C
/* DMA_CH_1_TDMA_SRC_START_OFFSET_1 */
#define DMA_CH_1_TDMA_SRC_START_OFFSET_1_VAL_SHIFT                   0
#define DMA_CH_1_TDMA_SRC_START_OFFSET_1_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_STRIDE_1                                 0x409130
/* DMA_CH_1_TDMA_SRC_STRIDE_1 */
#define DMA_CH_1_TDMA_SRC_STRIDE_1_VAL_SHIFT                         0
#define DMA_CH_1_TDMA_SRC_STRIDE_1_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_ROI_BASE_2                               0x409134
/* DMA_CH_1_TDMA_SRC_ROI_BASE_2 */
#define DMA_CH_1_TDMA_SRC_ROI_BASE_2_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_SRC_ROI_BASE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_ROI_SIZE_2                               0x409138
/* DMA_CH_1_TDMA_SRC_ROI_SIZE_2 */
#define DMA_CH_1_TDMA_SRC_ROI_SIZE_2_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_SRC_ROI_SIZE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_VALID_ELEMENTS_2                         0x40913C
/* DMA_CH_1_TDMA_SRC_VALID_ELEMENTS_2 */
#define DMA_CH_1_TDMA_SRC_VALID_ELEMENTS_2_VAL_SHIFT                 0
#define DMA_CH_1_TDMA_SRC_VALID_ELEMENTS_2_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_START_OFFSET_2                           0x409140
/* DMA_CH_1_TDMA_SRC_START_OFFSET_2 */
#define DMA_CH_1_TDMA_SRC_START_OFFSET_2_VAL_SHIFT                   0
#define DMA_CH_1_TDMA_SRC_START_OFFSET_2_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_STRIDE_2                                 0x409144
/* DMA_CH_1_TDMA_SRC_STRIDE_2 */
#define DMA_CH_1_TDMA_SRC_STRIDE_2_VAL_SHIFT                         0
#define DMA_CH_1_TDMA_SRC_STRIDE_2_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_ROI_BASE_3                               0x409148
/* DMA_CH_1_TDMA_SRC_ROI_BASE_3 */
#define DMA_CH_1_TDMA_SRC_ROI_BASE_3_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_SRC_ROI_BASE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_ROI_SIZE_3                               0x40914C
/* DMA_CH_1_TDMA_SRC_ROI_SIZE_3 */
#define DMA_CH_1_TDMA_SRC_ROI_SIZE_3_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_SRC_ROI_SIZE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_VALID_ELEMENTS_3                         0x409150
/* DMA_CH_1_TDMA_SRC_VALID_ELEMENTS_3 */
#define DMA_CH_1_TDMA_SRC_VALID_ELEMENTS_3_VAL_SHIFT                 0
#define DMA_CH_1_TDMA_SRC_VALID_ELEMENTS_3_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_START_OFFSET_3                           0x409154
/* DMA_CH_1_TDMA_SRC_START_OFFSET_3 */
#define DMA_CH_1_TDMA_SRC_START_OFFSET_3_VAL_SHIFT                   0
#define DMA_CH_1_TDMA_SRC_START_OFFSET_3_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_STRIDE_3                                 0x409158
/* DMA_CH_1_TDMA_SRC_STRIDE_3 */
#define DMA_CH_1_TDMA_SRC_STRIDE_3_VAL_SHIFT                         0
#define DMA_CH_1_TDMA_SRC_STRIDE_3_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_ROI_BASE_4                               0x40915C
/* DMA_CH_1_TDMA_SRC_ROI_BASE_4 */
#define DMA_CH_1_TDMA_SRC_ROI_BASE_4_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_SRC_ROI_BASE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_ROI_SIZE_4                               0x409160
/* DMA_CH_1_TDMA_SRC_ROI_SIZE_4 */
#define DMA_CH_1_TDMA_SRC_ROI_SIZE_4_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_SRC_ROI_SIZE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_VALID_ELEMENTS_4                         0x409164
/* DMA_CH_1_TDMA_SRC_VALID_ELEMENTS_4 */
#define DMA_CH_1_TDMA_SRC_VALID_ELEMENTS_4_VAL_SHIFT                 0
#define DMA_CH_1_TDMA_SRC_VALID_ELEMENTS_4_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_START_OFFSET_4                           0x409168
/* DMA_CH_1_TDMA_SRC_START_OFFSET_4 */
#define DMA_CH_1_TDMA_SRC_START_OFFSET_4_VAL_SHIFT                   0
#define DMA_CH_1_TDMA_SRC_START_OFFSET_4_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_1_TDMA_SRC_STRIDE_4                                 0x40916C
/* DMA_CH_1_TDMA_SRC_STRIDE_4 */
#define DMA_CH_1_TDMA_SRC_STRIDE_4_VAL_SHIFT                         0
#define DMA_CH_1_TDMA_SRC_STRIDE_4_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_BASE_ADDR_LO                             0x409170
/* DMA_CH_1_TDMA_DST_BASE_ADDR_LO */
#define DMA_CH_1_TDMA_DST_BASE_ADDR_LO_VAL_SHIFT                     0
#define DMA_CH_1_TDMA_DST_BASE_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_BASE_ADDR_HI                             0x409174
/* DMA_CH_1_TDMA_DST_BASE_ADDR_HI */
#define DMA_CH_1_TDMA_DST_BASE_ADDR_HI_VAL_SHIFT                     0
#define DMA_CH_1_TDMA_DST_BASE_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_ROI_BASE_0                               0x409178
/* DMA_CH_1_TDMA_DST_ROI_BASE_0 */
#define DMA_CH_1_TDMA_DST_ROI_BASE_0_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_DST_ROI_BASE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_ROI_SIZE_0                               0x40917C
/* DMA_CH_1_TDMA_DST_ROI_SIZE_0 */
#define DMA_CH_1_TDMA_DST_ROI_SIZE_0_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_DST_ROI_SIZE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_VALID_ELEMENTS_0                         0x409180
/* DMA_CH_1_TDMA_DST_VALID_ELEMENTS_0 */
#define DMA_CH_1_TDMA_DST_VALID_ELEMENTS_0_VAL_SHIFT                 0
#define DMA_CH_1_TDMA_DST_VALID_ELEMENTS_0_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_START_OFFSET_0                           0x409184
/* DMA_CH_1_TDMA_DST_START_OFFSET_0 */
#define DMA_CH_1_TDMA_DST_START_OFFSET_0_VAL_SHIFT                   0
#define DMA_CH_1_TDMA_DST_START_OFFSET_0_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_STRIDE_0                                 0x409188
/* DMA_CH_1_TDMA_DST_STRIDE_0 */
#define DMA_CH_1_TDMA_DST_STRIDE_0_VAL_SHIFT                         0
#define DMA_CH_1_TDMA_DST_STRIDE_0_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_ROI_BASE_1                               0x40918C
/* DMA_CH_1_TDMA_DST_ROI_BASE_1 */
#define DMA_CH_1_TDMA_DST_ROI_BASE_1_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_DST_ROI_BASE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_ROI_SIZE_1                               0x409190
/* DMA_CH_1_TDMA_DST_ROI_SIZE_1 */
#define DMA_CH_1_TDMA_DST_ROI_SIZE_1_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_DST_ROI_SIZE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_VALID_ELEMENTS_1                         0x409194
/* DMA_CH_1_TDMA_DST_VALID_ELEMENTS_1 */
#define DMA_CH_1_TDMA_DST_VALID_ELEMENTS_1_VAL_SHIFT                 0
#define DMA_CH_1_TDMA_DST_VALID_ELEMENTS_1_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_START_OFFSET_1                           0x409198
/* DMA_CH_1_TDMA_DST_START_OFFSET_1 */
#define DMA_CH_1_TDMA_DST_START_OFFSET_1_VAL_SHIFT                   0
#define DMA_CH_1_TDMA_DST_START_OFFSET_1_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_STRIDE_1                                 0x40919C
/* DMA_CH_1_TDMA_DST_STRIDE_1 */
#define DMA_CH_1_TDMA_DST_STRIDE_1_VAL_SHIFT                         0
#define DMA_CH_1_TDMA_DST_STRIDE_1_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_ROI_BASE_2                               0x4091A0
/* DMA_CH_1_TDMA_DST_ROI_BASE_2 */
#define DMA_CH_1_TDMA_DST_ROI_BASE_2_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_DST_ROI_BASE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_ROI_SIZE_2                               0x4091A4
/* DMA_CH_1_TDMA_DST_ROI_SIZE_2 */
#define DMA_CH_1_TDMA_DST_ROI_SIZE_2_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_DST_ROI_SIZE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_VALID_ELEMENTS_2                         0x4091A8
/* DMA_CH_1_TDMA_DST_VALID_ELEMENTS_2 */
#define DMA_CH_1_TDMA_DST_VALID_ELEMENTS_2_VAL_SHIFT                 0
#define DMA_CH_1_TDMA_DST_VALID_ELEMENTS_2_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_START_OFFSET_2                           0x4091AC
/* DMA_CH_1_TDMA_DST_START_OFFSET_2 */
#define DMA_CH_1_TDMA_DST_START_OFFSET_2_VAL_SHIFT                   0
#define DMA_CH_1_TDMA_DST_START_OFFSET_2_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_STRIDE_2                                 0x4091B0
/* DMA_CH_1_TDMA_DST_STRIDE_2 */
#define DMA_CH_1_TDMA_DST_STRIDE_2_VAL_SHIFT                         0
#define DMA_CH_1_TDMA_DST_STRIDE_2_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_ROI_BASE_3                               0x4091B4
/* DMA_CH_1_TDMA_DST_ROI_BASE_3 */
#define DMA_CH_1_TDMA_DST_ROI_BASE_3_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_DST_ROI_BASE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_ROI_SIZE_3                               0x4091B8
/* DMA_CH_1_TDMA_DST_ROI_SIZE_3 */
#define DMA_CH_1_TDMA_DST_ROI_SIZE_3_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_DST_ROI_SIZE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_VALID_ELEMENTS_3                         0x4091BC
/* DMA_CH_1_TDMA_DST_VALID_ELEMENTS_3 */
#define DMA_CH_1_TDMA_DST_VALID_ELEMENTS_3_VAL_SHIFT                 0
#define DMA_CH_1_TDMA_DST_VALID_ELEMENTS_3_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_START_OFFSET_3                           0x4091C0
/* DMA_CH_1_TDMA_DST_START_OFFSET_3 */
#define DMA_CH_1_TDMA_DST_START_OFFSET_3_VAL_SHIFT                   0
#define DMA_CH_1_TDMA_DST_START_OFFSET_3_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_STRIDE_3                                 0x4091C4
/* DMA_CH_1_TDMA_DST_STRIDE_3 */
#define DMA_CH_1_TDMA_DST_STRIDE_3_VAL_SHIFT                         0
#define DMA_CH_1_TDMA_DST_STRIDE_3_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_ROI_BASE_4                               0x4091C8
/* DMA_CH_1_TDMA_DST_ROI_BASE_4 */
#define DMA_CH_1_TDMA_DST_ROI_BASE_4_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_DST_ROI_BASE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_ROI_SIZE_4                               0x4091CC
/* DMA_CH_1_TDMA_DST_ROI_SIZE_4 */
#define DMA_CH_1_TDMA_DST_ROI_SIZE_4_VAL_SHIFT                       0
#define DMA_CH_1_TDMA_DST_ROI_SIZE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_VALID_ELEMENTS_4                         0x4091D0
/* DMA_CH_1_TDMA_DST_VALID_ELEMENTS_4 */
#define DMA_CH_1_TDMA_DST_VALID_ELEMENTS_4_VAL_SHIFT                 0
#define DMA_CH_1_TDMA_DST_VALID_ELEMENTS_4_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_START_OFFSET_4                           0x4091D4
/* DMA_CH_1_TDMA_DST_START_OFFSET_4 */
#define DMA_CH_1_TDMA_DST_START_OFFSET_4_VAL_SHIFT                   0
#define DMA_CH_1_TDMA_DST_START_OFFSET_4_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_1_TDMA_DST_STRIDE_4                                 0x4091D8
/* DMA_CH_1_TDMA_DST_STRIDE_4 */
#define DMA_CH_1_TDMA_DST_STRIDE_4_VAL_SHIFT                         0
#define DMA_CH_1_TDMA_DST_STRIDE_4_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_1_MEM_INIT_BUSY                                     0x4091FC
/* DMA_CH_1_MEM_INIT_BUSY */
#define DMA_CH_1_MEM_INIT_BUSY_SBC_DATA_SHIFT                        0
#define DMA_CH_1_MEM_INIT_BUSY_SBC_DATA_MASK                         0xFF
#define DMA_CH_1_MEM_INIT_BUSY_SBC_MD_SHIFT                          8
#define DMA_CH_1_MEM_INIT_BUSY_SBC_MD_MASK                           0x100

#endif /* ASIC_REG_DMA_CH_1_H_ */

