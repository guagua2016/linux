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

#ifndef ASIC_REG_DMA_CH_3_H_
#define ASIC_REG_DMA_CH_3_H_

/*
 *****************************************
 *   DMA_CH_3 (Prototype: DMA_CH)
 *****************************************
 */

#define mmDMA_CH_3_CFG0                                              0x419000
/* DMA_CH_3_CFG0 */
#define DMA_CH_3_CFG0_RD_MAX_OUTSTAND_SHIFT                          0
#define DMA_CH_3_CFG0_RD_MAX_OUTSTAND_MASK                           0x3FF
#define DMA_CH_3_CFG0_WR_MAX_OUTSTAND_SHIFT                          16
#define DMA_CH_3_CFG0_WR_MAX_OUTSTAND_MASK                           0xFFF0000

#define mmDMA_CH_3_CFG1                                              0x419004
/* DMA_CH_3_CFG1 */
#define DMA_CH_3_CFG1_RD_BUF_MAX_SIZE_SHIFT                          0
#define DMA_CH_3_CFG1_RD_BUF_MAX_SIZE_MASK                           0x3FF

#define mmDMA_CH_3_ERRMSG_ADDR_LO                                    0x419008
/* DMA_CH_3_ERRMSG_ADDR_LO */
#define DMA_CH_3_ERRMSG_ADDR_LO_VAL_SHIFT                            0
#define DMA_CH_3_ERRMSG_ADDR_LO_VAL_MASK                             0xFFFFFFFF

#define mmDMA_CH_3_ERRMSG_ADDR_HI                                    0x41900C
/* DMA_CH_3_ERRMSG_ADDR_HI */
#define DMA_CH_3_ERRMSG_ADDR_HI_VAL_SHIFT                            0
#define DMA_CH_3_ERRMSG_ADDR_HI_VAL_MASK                             0xFFFFFFFF

#define mmDMA_CH_3_ERRMSG_WDATA                                      0x419010
/* DMA_CH_3_ERRMSG_WDATA */
#define DMA_CH_3_ERRMSG_WDATA_VAL_SHIFT                              0
#define DMA_CH_3_ERRMSG_WDATA_VAL_MASK                               0xFFFFFFFF

#define mmDMA_CH_3_RD_COMP_ADDR_LO                                   0x419014
/* DMA_CH_3_RD_COMP_ADDR_LO */
#define DMA_CH_3_RD_COMP_ADDR_LO_VAL_SHIFT                           0
#define DMA_CH_3_RD_COMP_ADDR_LO_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_3_RD_COMP_ADDR_HI                                   0x419018
/* DMA_CH_3_RD_COMP_ADDR_HI */
#define DMA_CH_3_RD_COMP_ADDR_HI_VAL_SHIFT                           0
#define DMA_CH_3_RD_COMP_ADDR_HI_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_3_RD_COMP_WDATA                                     0x41901C
/* DMA_CH_3_RD_COMP_WDATA */
#define DMA_CH_3_RD_COMP_WDATA_VAL_SHIFT                             0
#define DMA_CH_3_RD_COMP_WDATA_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_3_WR_COMP_ADDR_LO                                   0x419020
/* DMA_CH_3_WR_COMP_ADDR_LO */
#define DMA_CH_3_WR_COMP_ADDR_LO_VAL_SHIFT                           0
#define DMA_CH_3_WR_COMP_ADDR_LO_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_3_WR_COMP_ADDR_HI                                   0x419024
/* DMA_CH_3_WR_COMP_ADDR_HI */
#define DMA_CH_3_WR_COMP_ADDR_HI_VAL_SHIFT                           0
#define DMA_CH_3_WR_COMP_ADDR_HI_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_3_WR_COMP_WDATA                                     0x419028
/* DMA_CH_3_WR_COMP_WDATA */
#define DMA_CH_3_WR_COMP_WDATA_VAL_SHIFT                             0
#define DMA_CH_3_WR_COMP_WDATA_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_3_LDMA_SRC_ADDR_LO                                  0x41902C
/* DMA_CH_3_LDMA_SRC_ADDR_LO */
#define DMA_CH_3_LDMA_SRC_ADDR_LO_VAL_SHIFT                          0
#define DMA_CH_3_LDMA_SRC_ADDR_LO_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_3_LDMA_SRC_ADDR_HI                                  0x419030
/* DMA_CH_3_LDMA_SRC_ADDR_HI */
#define DMA_CH_3_LDMA_SRC_ADDR_HI_VAL_SHIFT                          0
#define DMA_CH_3_LDMA_SRC_ADDR_HI_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_3_LDMA_DST_ADDR_LO                                  0x419034
/* DMA_CH_3_LDMA_DST_ADDR_LO */
#define DMA_CH_3_LDMA_DST_ADDR_LO_VAL_SHIFT                          0
#define DMA_CH_3_LDMA_DST_ADDR_LO_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_3_LDMA_DST_ADDR_HI                                  0x419038
/* DMA_CH_3_LDMA_DST_ADDR_HI */
#define DMA_CH_3_LDMA_DST_ADDR_HI_VAL_SHIFT                          0
#define DMA_CH_3_LDMA_DST_ADDR_HI_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_3_LDMA_TSIZE                                        0x41903C
/* DMA_CH_3_LDMA_TSIZE */
#define DMA_CH_3_LDMA_TSIZE_VAL_SHIFT                                0
#define DMA_CH_3_LDMA_TSIZE_VAL_MASK                                 0xFFFFFFFF

#define mmDMA_CH_3_COMIT_TRANSFER                                    0x419040
/* DMA_CH_3_COMIT_TRANSFER */
#define DMA_CH_3_COMIT_TRANSFER_PCI_UPS_WKORDR_SHIFT                 0
#define DMA_CH_3_COMIT_TRANSFER_PCI_UPS_WKORDR_MASK                  0x1
#define DMA_CH_3_COMIT_TRANSFER_RD_COMP_EN_SHIFT                     1
#define DMA_CH_3_COMIT_TRANSFER_RD_COMP_EN_MASK                      0x2
#define DMA_CH_3_COMIT_TRANSFER_WR_COMP_EN_SHIFT                     2
#define DMA_CH_3_COMIT_TRANSFER_WR_COMP_EN_MASK                      0x4
#define DMA_CH_3_COMIT_TRANSFER_NOSNOOP_SHIFT                        3
#define DMA_CH_3_COMIT_TRANSFER_NOSNOOP_MASK                         0x8
#define DMA_CH_3_COMIT_TRANSFER_SRC_ADDR_INC_DIS_SHIFT               4
#define DMA_CH_3_COMIT_TRANSFER_SRC_ADDR_INC_DIS_MASK                0x10
#define DMA_CH_3_COMIT_TRANSFER_DST_ADDR_INC_DIS_SHIFT               5
#define DMA_CH_3_COMIT_TRANSFER_DST_ADDR_INC_DIS_MASK                0x20
#define DMA_CH_3_COMIT_TRANSFER_MEM_SET_SHIFT                        6
#define DMA_CH_3_COMIT_TRANSFER_MEM_SET_MASK                         0x40
#define DMA_CH_3_COMIT_TRANSFER_MOD_TENSOR_SHIFT                     15
#define DMA_CH_3_COMIT_TRANSFER_MOD_TENSOR_MASK                      0x8000
#define DMA_CH_3_COMIT_TRANSFER_CTL_SHIFT                            16
#define DMA_CH_3_COMIT_TRANSFER_CTL_MASK                             0xFFFF0000

#define mmDMA_CH_3_STS0                                              0x419044
/* DMA_CH_3_STS0 */
#define DMA_CH_3_STS0_DMA_BUSY_SHIFT                                 0
#define DMA_CH_3_STS0_DMA_BUSY_MASK                                  0x1
#define DMA_CH_3_STS0_RD_STS_CTX_FULL_SHIFT                          1
#define DMA_CH_3_STS0_RD_STS_CTX_FULL_MASK                           0x2
#define DMA_CH_3_STS0_WR_STS_CTX_FULL_SHIFT                          2
#define DMA_CH_3_STS0_WR_STS_CTX_FULL_MASK                           0x4

#define mmDMA_CH_3_STS1                                              0x419048
/* DMA_CH_3_STS1 */
#define DMA_CH_3_STS1_RD_STS_CTX_CNT_SHIFT                           0
#define DMA_CH_3_STS1_RD_STS_CTX_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_3_STS2                                              0x41904C
/* DMA_CH_3_STS2 */
#define DMA_CH_3_STS2_WR_STS_CTX_CNT_SHIFT                           0
#define DMA_CH_3_STS2_WR_STS_CTX_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_3_STS3                                              0x419050
/* DMA_CH_3_STS3 */
#define DMA_CH_3_STS3_RD_STS_TRN_CNT_SHIFT                           0
#define DMA_CH_3_STS3_RD_STS_TRN_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_3_STS4                                              0x419054
/* DMA_CH_3_STS4 */
#define DMA_CH_3_STS4_WR_STS_TRN_CNT_SHIFT                           0
#define DMA_CH_3_STS4_WR_STS_TRN_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_3_SRC_ADDR_LO_STS                                   0x419058
/* DMA_CH_3_SRC_ADDR_LO_STS */
#define DMA_CH_3_SRC_ADDR_LO_STS_VAL_SHIFT                           0
#define DMA_CH_3_SRC_ADDR_LO_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_3_SRC_ADDR_HI_STS                                   0x41905C
/* DMA_CH_3_SRC_ADDR_HI_STS */
#define DMA_CH_3_SRC_ADDR_HI_STS_VAL_SHIFT                           0
#define DMA_CH_3_SRC_ADDR_HI_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_3_SRC_TSIZE_STS                                     0x419060
/* DMA_CH_3_SRC_TSIZE_STS */
#define DMA_CH_3_SRC_TSIZE_STS_VAL_SHIFT                             0
#define DMA_CH_3_SRC_TSIZE_STS_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_3_DST_ADDR_LO_STS                                   0x419064
/* DMA_CH_3_DST_ADDR_LO_STS */
#define DMA_CH_3_DST_ADDR_LO_STS_VAL_SHIFT                           0
#define DMA_CH_3_DST_ADDR_LO_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_3_DST_ADDR_HI_STS                                   0x419068
/* DMA_CH_3_DST_ADDR_HI_STS */
#define DMA_CH_3_DST_ADDR_HI_STS_VAL_SHIFT                           0
#define DMA_CH_3_DST_ADDR_HI_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_3_DST_TSIZE_STS                                     0x41906C
/* DMA_CH_3_DST_TSIZE_STS */
#define DMA_CH_3_DST_TSIZE_STS_VAL_SHIFT                             0
#define DMA_CH_3_DST_TSIZE_STS_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_3_RD_RATE_LIM_EN                                    0x419070
/* DMA_CH_3_RD_RATE_LIM_EN */
#define DMA_CH_3_RD_RATE_LIM_EN_VAL_SHIFT                            0
#define DMA_CH_3_RD_RATE_LIM_EN_VAL_MASK                             0x1

#define mmDMA_CH_3_RD_RATE_LIM_RST_TOKEN                             0x419074
/* DMA_CH_3_RD_RATE_LIM_RST_TOKEN */
#define DMA_CH_3_RD_RATE_LIM_RST_TOKEN_VAL_SHIFT                     0
#define DMA_CH_3_RD_RATE_LIM_RST_TOKEN_VAL_MASK                      0xFFFF

#define mmDMA_CH_3_RD_RATE_LIM_SAT                                   0x419078
/* DMA_CH_3_RD_RATE_LIM_SAT */
#define DMA_CH_3_RD_RATE_LIM_SAT_VAL_SHIFT                           0
#define DMA_CH_3_RD_RATE_LIM_SAT_VAL_MASK                            0xFFFF

#define mmDMA_CH_3_RD_RATE_LIM_TOUT                                  0x41907C
/* DMA_CH_3_RD_RATE_LIM_TOUT */
#define DMA_CH_3_RD_RATE_LIM_TOUT_VAL_SHIFT                          0
#define DMA_CH_3_RD_RATE_LIM_TOUT_VAL_MASK                           0x7FFFFFFF

#define mmDMA_CH_3_WR_RATE_LIM_EN                                    0x419080
/* DMA_CH_3_WR_RATE_LIM_EN */
#define DMA_CH_3_WR_RATE_LIM_EN_VAL_SHIFT                            0
#define DMA_CH_3_WR_RATE_LIM_EN_VAL_MASK                             0x1

#define mmDMA_CH_3_WR_RATE_LIM_RST_TOKEN                             0x419084
/* DMA_CH_3_WR_RATE_LIM_RST_TOKEN */
#define DMA_CH_3_WR_RATE_LIM_RST_TOKEN_VAL_SHIFT                     0
#define DMA_CH_3_WR_RATE_LIM_RST_TOKEN_VAL_MASK                      0xFFFF

#define mmDMA_CH_3_WR_RATE_LIM_SAT                                   0x419088
/* DMA_CH_3_WR_RATE_LIM_SAT */
#define DMA_CH_3_WR_RATE_LIM_SAT_VAL_SHIFT                           0
#define DMA_CH_3_WR_RATE_LIM_SAT_VAL_MASK                            0xFFFF

#define mmDMA_CH_3_WR_RATE_LIM_TOUT                                  0x41908C
/* DMA_CH_3_WR_RATE_LIM_TOUT */
#define DMA_CH_3_WR_RATE_LIM_TOUT_VAL_SHIFT                          0
#define DMA_CH_3_WR_RATE_LIM_TOUT_VAL_MASK                           0x7FFFFFFF

#define mmDMA_CH_3_CFG2                                              0x419090
/* DMA_CH_3_CFG2 */
#define DMA_CH_3_CFG2_FORCE_WORD_SHIFT                               0
#define DMA_CH_3_CFG2_FORCE_WORD_MASK                                0x1

#define mmDMA_CH_3_TDMA_CTL                                          0x419100
/* DMA_CH_3_TDMA_CTL */
#define DMA_CH_3_TDMA_CTL_DTYPE_SHIFT                                0
#define DMA_CH_3_TDMA_CTL_DTYPE_MASK                                 0x7

#define mmDMA_CH_3_TDMA_SRC_BASE_ADDR_LO                             0x419104
/* DMA_CH_3_TDMA_SRC_BASE_ADDR_LO */
#define DMA_CH_3_TDMA_SRC_BASE_ADDR_LO_VAL_SHIFT                     0
#define DMA_CH_3_TDMA_SRC_BASE_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_BASE_ADDR_HI                             0x419108
/* DMA_CH_3_TDMA_SRC_BASE_ADDR_HI */
#define DMA_CH_3_TDMA_SRC_BASE_ADDR_HI_VAL_SHIFT                     0
#define DMA_CH_3_TDMA_SRC_BASE_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_ROI_BASE_0                               0x41910C
/* DMA_CH_3_TDMA_SRC_ROI_BASE_0 */
#define DMA_CH_3_TDMA_SRC_ROI_BASE_0_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_SRC_ROI_BASE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_ROI_SIZE_0                               0x419110
/* DMA_CH_3_TDMA_SRC_ROI_SIZE_0 */
#define DMA_CH_3_TDMA_SRC_ROI_SIZE_0_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_SRC_ROI_SIZE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_VALID_ELEMENTS_0                         0x419114
/* DMA_CH_3_TDMA_SRC_VALID_ELEMENTS_0 */
#define DMA_CH_3_TDMA_SRC_VALID_ELEMENTS_0_VAL_SHIFT                 0
#define DMA_CH_3_TDMA_SRC_VALID_ELEMENTS_0_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_START_OFFSET_0                           0x419118
/* DMA_CH_3_TDMA_SRC_START_OFFSET_0 */
#define DMA_CH_3_TDMA_SRC_START_OFFSET_0_VAL_SHIFT                   0
#define DMA_CH_3_TDMA_SRC_START_OFFSET_0_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_STRIDE_0                                 0x41911C
/* DMA_CH_3_TDMA_SRC_STRIDE_0 */
#define DMA_CH_3_TDMA_SRC_STRIDE_0_VAL_SHIFT                         0
#define DMA_CH_3_TDMA_SRC_STRIDE_0_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_ROI_BASE_1                               0x419120
/* DMA_CH_3_TDMA_SRC_ROI_BASE_1 */
#define DMA_CH_3_TDMA_SRC_ROI_BASE_1_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_SRC_ROI_BASE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_ROI_SIZE_1                               0x419124
/* DMA_CH_3_TDMA_SRC_ROI_SIZE_1 */
#define DMA_CH_3_TDMA_SRC_ROI_SIZE_1_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_SRC_ROI_SIZE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_VALID_ELEMENTS_1                         0x419128
/* DMA_CH_3_TDMA_SRC_VALID_ELEMENTS_1 */
#define DMA_CH_3_TDMA_SRC_VALID_ELEMENTS_1_VAL_SHIFT                 0
#define DMA_CH_3_TDMA_SRC_VALID_ELEMENTS_1_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_START_OFFSET_1                           0x41912C
/* DMA_CH_3_TDMA_SRC_START_OFFSET_1 */
#define DMA_CH_3_TDMA_SRC_START_OFFSET_1_VAL_SHIFT                   0
#define DMA_CH_3_TDMA_SRC_START_OFFSET_1_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_STRIDE_1                                 0x419130
/* DMA_CH_3_TDMA_SRC_STRIDE_1 */
#define DMA_CH_3_TDMA_SRC_STRIDE_1_VAL_SHIFT                         0
#define DMA_CH_3_TDMA_SRC_STRIDE_1_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_ROI_BASE_2                               0x419134
/* DMA_CH_3_TDMA_SRC_ROI_BASE_2 */
#define DMA_CH_3_TDMA_SRC_ROI_BASE_2_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_SRC_ROI_BASE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_ROI_SIZE_2                               0x419138
/* DMA_CH_3_TDMA_SRC_ROI_SIZE_2 */
#define DMA_CH_3_TDMA_SRC_ROI_SIZE_2_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_SRC_ROI_SIZE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_VALID_ELEMENTS_2                         0x41913C
/* DMA_CH_3_TDMA_SRC_VALID_ELEMENTS_2 */
#define DMA_CH_3_TDMA_SRC_VALID_ELEMENTS_2_VAL_SHIFT                 0
#define DMA_CH_3_TDMA_SRC_VALID_ELEMENTS_2_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_START_OFFSET_2                           0x419140
/* DMA_CH_3_TDMA_SRC_START_OFFSET_2 */
#define DMA_CH_3_TDMA_SRC_START_OFFSET_2_VAL_SHIFT                   0
#define DMA_CH_3_TDMA_SRC_START_OFFSET_2_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_STRIDE_2                                 0x419144
/* DMA_CH_3_TDMA_SRC_STRIDE_2 */
#define DMA_CH_3_TDMA_SRC_STRIDE_2_VAL_SHIFT                         0
#define DMA_CH_3_TDMA_SRC_STRIDE_2_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_ROI_BASE_3                               0x419148
/* DMA_CH_3_TDMA_SRC_ROI_BASE_3 */
#define DMA_CH_3_TDMA_SRC_ROI_BASE_3_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_SRC_ROI_BASE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_ROI_SIZE_3                               0x41914C
/* DMA_CH_3_TDMA_SRC_ROI_SIZE_3 */
#define DMA_CH_3_TDMA_SRC_ROI_SIZE_3_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_SRC_ROI_SIZE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_VALID_ELEMENTS_3                         0x419150
/* DMA_CH_3_TDMA_SRC_VALID_ELEMENTS_3 */
#define DMA_CH_3_TDMA_SRC_VALID_ELEMENTS_3_VAL_SHIFT                 0
#define DMA_CH_3_TDMA_SRC_VALID_ELEMENTS_3_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_START_OFFSET_3                           0x419154
/* DMA_CH_3_TDMA_SRC_START_OFFSET_3 */
#define DMA_CH_3_TDMA_SRC_START_OFFSET_3_VAL_SHIFT                   0
#define DMA_CH_3_TDMA_SRC_START_OFFSET_3_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_STRIDE_3                                 0x419158
/* DMA_CH_3_TDMA_SRC_STRIDE_3 */
#define DMA_CH_3_TDMA_SRC_STRIDE_3_VAL_SHIFT                         0
#define DMA_CH_3_TDMA_SRC_STRIDE_3_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_ROI_BASE_4                               0x41915C
/* DMA_CH_3_TDMA_SRC_ROI_BASE_4 */
#define DMA_CH_3_TDMA_SRC_ROI_BASE_4_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_SRC_ROI_BASE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_ROI_SIZE_4                               0x419160
/* DMA_CH_3_TDMA_SRC_ROI_SIZE_4 */
#define DMA_CH_3_TDMA_SRC_ROI_SIZE_4_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_SRC_ROI_SIZE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_VALID_ELEMENTS_4                         0x419164
/* DMA_CH_3_TDMA_SRC_VALID_ELEMENTS_4 */
#define DMA_CH_3_TDMA_SRC_VALID_ELEMENTS_4_VAL_SHIFT                 0
#define DMA_CH_3_TDMA_SRC_VALID_ELEMENTS_4_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_START_OFFSET_4                           0x419168
/* DMA_CH_3_TDMA_SRC_START_OFFSET_4 */
#define DMA_CH_3_TDMA_SRC_START_OFFSET_4_VAL_SHIFT                   0
#define DMA_CH_3_TDMA_SRC_START_OFFSET_4_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_3_TDMA_SRC_STRIDE_4                                 0x41916C
/* DMA_CH_3_TDMA_SRC_STRIDE_4 */
#define DMA_CH_3_TDMA_SRC_STRIDE_4_VAL_SHIFT                         0
#define DMA_CH_3_TDMA_SRC_STRIDE_4_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_BASE_ADDR_LO                             0x419170
/* DMA_CH_3_TDMA_DST_BASE_ADDR_LO */
#define DMA_CH_3_TDMA_DST_BASE_ADDR_LO_VAL_SHIFT                     0
#define DMA_CH_3_TDMA_DST_BASE_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_BASE_ADDR_HI                             0x419174
/* DMA_CH_3_TDMA_DST_BASE_ADDR_HI */
#define DMA_CH_3_TDMA_DST_BASE_ADDR_HI_VAL_SHIFT                     0
#define DMA_CH_3_TDMA_DST_BASE_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_ROI_BASE_0                               0x419178
/* DMA_CH_3_TDMA_DST_ROI_BASE_0 */
#define DMA_CH_3_TDMA_DST_ROI_BASE_0_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_DST_ROI_BASE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_ROI_SIZE_0                               0x41917C
/* DMA_CH_3_TDMA_DST_ROI_SIZE_0 */
#define DMA_CH_3_TDMA_DST_ROI_SIZE_0_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_DST_ROI_SIZE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_VALID_ELEMENTS_0                         0x419180
/* DMA_CH_3_TDMA_DST_VALID_ELEMENTS_0 */
#define DMA_CH_3_TDMA_DST_VALID_ELEMENTS_0_VAL_SHIFT                 0
#define DMA_CH_3_TDMA_DST_VALID_ELEMENTS_0_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_START_OFFSET_0                           0x419184
/* DMA_CH_3_TDMA_DST_START_OFFSET_0 */
#define DMA_CH_3_TDMA_DST_START_OFFSET_0_VAL_SHIFT                   0
#define DMA_CH_3_TDMA_DST_START_OFFSET_0_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_STRIDE_0                                 0x419188
/* DMA_CH_3_TDMA_DST_STRIDE_0 */
#define DMA_CH_3_TDMA_DST_STRIDE_0_VAL_SHIFT                         0
#define DMA_CH_3_TDMA_DST_STRIDE_0_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_ROI_BASE_1                               0x41918C
/* DMA_CH_3_TDMA_DST_ROI_BASE_1 */
#define DMA_CH_3_TDMA_DST_ROI_BASE_1_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_DST_ROI_BASE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_ROI_SIZE_1                               0x419190
/* DMA_CH_3_TDMA_DST_ROI_SIZE_1 */
#define DMA_CH_3_TDMA_DST_ROI_SIZE_1_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_DST_ROI_SIZE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_VALID_ELEMENTS_1                         0x419194
/* DMA_CH_3_TDMA_DST_VALID_ELEMENTS_1 */
#define DMA_CH_3_TDMA_DST_VALID_ELEMENTS_1_VAL_SHIFT                 0
#define DMA_CH_3_TDMA_DST_VALID_ELEMENTS_1_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_START_OFFSET_1                           0x419198
/* DMA_CH_3_TDMA_DST_START_OFFSET_1 */
#define DMA_CH_3_TDMA_DST_START_OFFSET_1_VAL_SHIFT                   0
#define DMA_CH_3_TDMA_DST_START_OFFSET_1_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_STRIDE_1                                 0x41919C
/* DMA_CH_3_TDMA_DST_STRIDE_1 */
#define DMA_CH_3_TDMA_DST_STRIDE_1_VAL_SHIFT                         0
#define DMA_CH_3_TDMA_DST_STRIDE_1_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_ROI_BASE_2                               0x4191A0
/* DMA_CH_3_TDMA_DST_ROI_BASE_2 */
#define DMA_CH_3_TDMA_DST_ROI_BASE_2_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_DST_ROI_BASE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_ROI_SIZE_2                               0x4191A4
/* DMA_CH_3_TDMA_DST_ROI_SIZE_2 */
#define DMA_CH_3_TDMA_DST_ROI_SIZE_2_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_DST_ROI_SIZE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_VALID_ELEMENTS_2                         0x4191A8
/* DMA_CH_3_TDMA_DST_VALID_ELEMENTS_2 */
#define DMA_CH_3_TDMA_DST_VALID_ELEMENTS_2_VAL_SHIFT                 0
#define DMA_CH_3_TDMA_DST_VALID_ELEMENTS_2_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_START_OFFSET_2                           0x4191AC
/* DMA_CH_3_TDMA_DST_START_OFFSET_2 */
#define DMA_CH_3_TDMA_DST_START_OFFSET_2_VAL_SHIFT                   0
#define DMA_CH_3_TDMA_DST_START_OFFSET_2_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_STRIDE_2                                 0x4191B0
/* DMA_CH_3_TDMA_DST_STRIDE_2 */
#define DMA_CH_3_TDMA_DST_STRIDE_2_VAL_SHIFT                         0
#define DMA_CH_3_TDMA_DST_STRIDE_2_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_ROI_BASE_3                               0x4191B4
/* DMA_CH_3_TDMA_DST_ROI_BASE_3 */
#define DMA_CH_3_TDMA_DST_ROI_BASE_3_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_DST_ROI_BASE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_ROI_SIZE_3                               0x4191B8
/* DMA_CH_3_TDMA_DST_ROI_SIZE_3 */
#define DMA_CH_3_TDMA_DST_ROI_SIZE_3_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_DST_ROI_SIZE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_VALID_ELEMENTS_3                         0x4191BC
/* DMA_CH_3_TDMA_DST_VALID_ELEMENTS_3 */
#define DMA_CH_3_TDMA_DST_VALID_ELEMENTS_3_VAL_SHIFT                 0
#define DMA_CH_3_TDMA_DST_VALID_ELEMENTS_3_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_START_OFFSET_3                           0x4191C0
/* DMA_CH_3_TDMA_DST_START_OFFSET_3 */
#define DMA_CH_3_TDMA_DST_START_OFFSET_3_VAL_SHIFT                   0
#define DMA_CH_3_TDMA_DST_START_OFFSET_3_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_STRIDE_3                                 0x4191C4
/* DMA_CH_3_TDMA_DST_STRIDE_3 */
#define DMA_CH_3_TDMA_DST_STRIDE_3_VAL_SHIFT                         0
#define DMA_CH_3_TDMA_DST_STRIDE_3_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_ROI_BASE_4                               0x4191C8
/* DMA_CH_3_TDMA_DST_ROI_BASE_4 */
#define DMA_CH_3_TDMA_DST_ROI_BASE_4_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_DST_ROI_BASE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_ROI_SIZE_4                               0x4191CC
/* DMA_CH_3_TDMA_DST_ROI_SIZE_4 */
#define DMA_CH_3_TDMA_DST_ROI_SIZE_4_VAL_SHIFT                       0
#define DMA_CH_3_TDMA_DST_ROI_SIZE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_VALID_ELEMENTS_4                         0x4191D0
/* DMA_CH_3_TDMA_DST_VALID_ELEMENTS_4 */
#define DMA_CH_3_TDMA_DST_VALID_ELEMENTS_4_VAL_SHIFT                 0
#define DMA_CH_3_TDMA_DST_VALID_ELEMENTS_4_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_START_OFFSET_4                           0x4191D4
/* DMA_CH_3_TDMA_DST_START_OFFSET_4 */
#define DMA_CH_3_TDMA_DST_START_OFFSET_4_VAL_SHIFT                   0
#define DMA_CH_3_TDMA_DST_START_OFFSET_4_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_3_TDMA_DST_STRIDE_4                                 0x4191D8
/* DMA_CH_3_TDMA_DST_STRIDE_4 */
#define DMA_CH_3_TDMA_DST_STRIDE_4_VAL_SHIFT                         0
#define DMA_CH_3_TDMA_DST_STRIDE_4_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_3_MEM_INIT_BUSY                                     0x4191FC
/* DMA_CH_3_MEM_INIT_BUSY */
#define DMA_CH_3_MEM_INIT_BUSY_SBC_DATA_SHIFT                        0
#define DMA_CH_3_MEM_INIT_BUSY_SBC_DATA_MASK                         0xFF
#define DMA_CH_3_MEM_INIT_BUSY_SBC_MD_SHIFT                          8
#define DMA_CH_3_MEM_INIT_BUSY_SBC_MD_MASK                           0x100

#endif /* ASIC_REG_DMA_CH_3_H_ */

