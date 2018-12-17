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

#ifndef ASIC_REG_DMA_CH_4_H_
#define ASIC_REG_DMA_CH_4_H_

/*
 *****************************************
 *   DMA_CH_4 (Prototype: DMA_CH)
 *****************************************
 */

#define mmDMA_CH_4_CFG0                                              0x421000
/* DMA_CH_4_CFG0 */
#define DMA_CH_4_CFG0_RD_MAX_OUTSTAND_SHIFT                          0
#define DMA_CH_4_CFG0_RD_MAX_OUTSTAND_MASK                           0x3FF
#define DMA_CH_4_CFG0_WR_MAX_OUTSTAND_SHIFT                          16
#define DMA_CH_4_CFG0_WR_MAX_OUTSTAND_MASK                           0xFFF0000

#define mmDMA_CH_4_CFG1                                              0x421004
/* DMA_CH_4_CFG1 */
#define DMA_CH_4_CFG1_RD_BUF_MAX_SIZE_SHIFT                          0
#define DMA_CH_4_CFG1_RD_BUF_MAX_SIZE_MASK                           0x3FF

#define mmDMA_CH_4_ERRMSG_ADDR_LO                                    0x421008
/* DMA_CH_4_ERRMSG_ADDR_LO */
#define DMA_CH_4_ERRMSG_ADDR_LO_VAL_SHIFT                            0
#define DMA_CH_4_ERRMSG_ADDR_LO_VAL_MASK                             0xFFFFFFFF

#define mmDMA_CH_4_ERRMSG_ADDR_HI                                    0x42100C
/* DMA_CH_4_ERRMSG_ADDR_HI */
#define DMA_CH_4_ERRMSG_ADDR_HI_VAL_SHIFT                            0
#define DMA_CH_4_ERRMSG_ADDR_HI_VAL_MASK                             0xFFFFFFFF

#define mmDMA_CH_4_ERRMSG_WDATA                                      0x421010
/* DMA_CH_4_ERRMSG_WDATA */
#define DMA_CH_4_ERRMSG_WDATA_VAL_SHIFT                              0
#define DMA_CH_4_ERRMSG_WDATA_VAL_MASK                               0xFFFFFFFF

#define mmDMA_CH_4_RD_COMP_ADDR_LO                                   0x421014
/* DMA_CH_4_RD_COMP_ADDR_LO */
#define DMA_CH_4_RD_COMP_ADDR_LO_VAL_SHIFT                           0
#define DMA_CH_4_RD_COMP_ADDR_LO_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_4_RD_COMP_ADDR_HI                                   0x421018
/* DMA_CH_4_RD_COMP_ADDR_HI */
#define DMA_CH_4_RD_COMP_ADDR_HI_VAL_SHIFT                           0
#define DMA_CH_4_RD_COMP_ADDR_HI_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_4_RD_COMP_WDATA                                     0x42101C
/* DMA_CH_4_RD_COMP_WDATA */
#define DMA_CH_4_RD_COMP_WDATA_VAL_SHIFT                             0
#define DMA_CH_4_RD_COMP_WDATA_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_4_WR_COMP_ADDR_LO                                   0x421020
/* DMA_CH_4_WR_COMP_ADDR_LO */
#define DMA_CH_4_WR_COMP_ADDR_LO_VAL_SHIFT                           0
#define DMA_CH_4_WR_COMP_ADDR_LO_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_4_WR_COMP_ADDR_HI                                   0x421024
/* DMA_CH_4_WR_COMP_ADDR_HI */
#define DMA_CH_4_WR_COMP_ADDR_HI_VAL_SHIFT                           0
#define DMA_CH_4_WR_COMP_ADDR_HI_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_4_WR_COMP_WDATA                                     0x421028
/* DMA_CH_4_WR_COMP_WDATA */
#define DMA_CH_4_WR_COMP_WDATA_VAL_SHIFT                             0
#define DMA_CH_4_WR_COMP_WDATA_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_4_LDMA_SRC_ADDR_LO                                  0x42102C
/* DMA_CH_4_LDMA_SRC_ADDR_LO */
#define DMA_CH_4_LDMA_SRC_ADDR_LO_VAL_SHIFT                          0
#define DMA_CH_4_LDMA_SRC_ADDR_LO_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_4_LDMA_SRC_ADDR_HI                                  0x421030
/* DMA_CH_4_LDMA_SRC_ADDR_HI */
#define DMA_CH_4_LDMA_SRC_ADDR_HI_VAL_SHIFT                          0
#define DMA_CH_4_LDMA_SRC_ADDR_HI_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_4_LDMA_DST_ADDR_LO                                  0x421034
/* DMA_CH_4_LDMA_DST_ADDR_LO */
#define DMA_CH_4_LDMA_DST_ADDR_LO_VAL_SHIFT                          0
#define DMA_CH_4_LDMA_DST_ADDR_LO_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_4_LDMA_DST_ADDR_HI                                  0x421038
/* DMA_CH_4_LDMA_DST_ADDR_HI */
#define DMA_CH_4_LDMA_DST_ADDR_HI_VAL_SHIFT                          0
#define DMA_CH_4_LDMA_DST_ADDR_HI_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_4_LDMA_TSIZE                                        0x42103C
/* DMA_CH_4_LDMA_TSIZE */
#define DMA_CH_4_LDMA_TSIZE_VAL_SHIFT                                0
#define DMA_CH_4_LDMA_TSIZE_VAL_MASK                                 0xFFFFFFFF

#define mmDMA_CH_4_COMIT_TRANSFER                                    0x421040
/* DMA_CH_4_COMIT_TRANSFER */
#define DMA_CH_4_COMIT_TRANSFER_PCI_UPS_WKORDR_SHIFT                 0
#define DMA_CH_4_COMIT_TRANSFER_PCI_UPS_WKORDR_MASK                  0x1
#define DMA_CH_4_COMIT_TRANSFER_RD_COMP_EN_SHIFT                     1
#define DMA_CH_4_COMIT_TRANSFER_RD_COMP_EN_MASK                      0x2
#define DMA_CH_4_COMIT_TRANSFER_WR_COMP_EN_SHIFT                     2
#define DMA_CH_4_COMIT_TRANSFER_WR_COMP_EN_MASK                      0x4
#define DMA_CH_4_COMIT_TRANSFER_NOSNOOP_SHIFT                        3
#define DMA_CH_4_COMIT_TRANSFER_NOSNOOP_MASK                         0x8
#define DMA_CH_4_COMIT_TRANSFER_SRC_ADDR_INC_DIS_SHIFT               4
#define DMA_CH_4_COMIT_TRANSFER_SRC_ADDR_INC_DIS_MASK                0x10
#define DMA_CH_4_COMIT_TRANSFER_DST_ADDR_INC_DIS_SHIFT               5
#define DMA_CH_4_COMIT_TRANSFER_DST_ADDR_INC_DIS_MASK                0x20
#define DMA_CH_4_COMIT_TRANSFER_MEM_SET_SHIFT                        6
#define DMA_CH_4_COMIT_TRANSFER_MEM_SET_MASK                         0x40
#define DMA_CH_4_COMIT_TRANSFER_MOD_TENSOR_SHIFT                     15
#define DMA_CH_4_COMIT_TRANSFER_MOD_TENSOR_MASK                      0x8000
#define DMA_CH_4_COMIT_TRANSFER_CTL_SHIFT                            16
#define DMA_CH_4_COMIT_TRANSFER_CTL_MASK                             0xFFFF0000

#define mmDMA_CH_4_STS0                                              0x421044
/* DMA_CH_4_STS0 */
#define DMA_CH_4_STS0_DMA_BUSY_SHIFT                                 0
#define DMA_CH_4_STS0_DMA_BUSY_MASK                                  0x1
#define DMA_CH_4_STS0_RD_STS_CTX_FULL_SHIFT                          1
#define DMA_CH_4_STS0_RD_STS_CTX_FULL_MASK                           0x2
#define DMA_CH_4_STS0_WR_STS_CTX_FULL_SHIFT                          2
#define DMA_CH_4_STS0_WR_STS_CTX_FULL_MASK                           0x4

#define mmDMA_CH_4_STS1                                              0x421048
/* DMA_CH_4_STS1 */
#define DMA_CH_4_STS1_RD_STS_CTX_CNT_SHIFT                           0
#define DMA_CH_4_STS1_RD_STS_CTX_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_4_STS2                                              0x42104C
/* DMA_CH_4_STS2 */
#define DMA_CH_4_STS2_WR_STS_CTX_CNT_SHIFT                           0
#define DMA_CH_4_STS2_WR_STS_CTX_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_4_STS3                                              0x421050
/* DMA_CH_4_STS3 */
#define DMA_CH_4_STS3_RD_STS_TRN_CNT_SHIFT                           0
#define DMA_CH_4_STS3_RD_STS_TRN_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_4_STS4                                              0x421054
/* DMA_CH_4_STS4 */
#define DMA_CH_4_STS4_WR_STS_TRN_CNT_SHIFT                           0
#define DMA_CH_4_STS4_WR_STS_TRN_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_4_SRC_ADDR_LO_STS                                   0x421058
/* DMA_CH_4_SRC_ADDR_LO_STS */
#define DMA_CH_4_SRC_ADDR_LO_STS_VAL_SHIFT                           0
#define DMA_CH_4_SRC_ADDR_LO_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_4_SRC_ADDR_HI_STS                                   0x42105C
/* DMA_CH_4_SRC_ADDR_HI_STS */
#define DMA_CH_4_SRC_ADDR_HI_STS_VAL_SHIFT                           0
#define DMA_CH_4_SRC_ADDR_HI_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_4_SRC_TSIZE_STS                                     0x421060
/* DMA_CH_4_SRC_TSIZE_STS */
#define DMA_CH_4_SRC_TSIZE_STS_VAL_SHIFT                             0
#define DMA_CH_4_SRC_TSIZE_STS_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_4_DST_ADDR_LO_STS                                   0x421064
/* DMA_CH_4_DST_ADDR_LO_STS */
#define DMA_CH_4_DST_ADDR_LO_STS_VAL_SHIFT                           0
#define DMA_CH_4_DST_ADDR_LO_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_4_DST_ADDR_HI_STS                                   0x421068
/* DMA_CH_4_DST_ADDR_HI_STS */
#define DMA_CH_4_DST_ADDR_HI_STS_VAL_SHIFT                           0
#define DMA_CH_4_DST_ADDR_HI_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_4_DST_TSIZE_STS                                     0x42106C
/* DMA_CH_4_DST_TSIZE_STS */
#define DMA_CH_4_DST_TSIZE_STS_VAL_SHIFT                             0
#define DMA_CH_4_DST_TSIZE_STS_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_4_RD_RATE_LIM_EN                                    0x421070
/* DMA_CH_4_RD_RATE_LIM_EN */
#define DMA_CH_4_RD_RATE_LIM_EN_VAL_SHIFT                            0
#define DMA_CH_4_RD_RATE_LIM_EN_VAL_MASK                             0x1

#define mmDMA_CH_4_RD_RATE_LIM_RST_TOKEN                             0x421074
/* DMA_CH_4_RD_RATE_LIM_RST_TOKEN */
#define DMA_CH_4_RD_RATE_LIM_RST_TOKEN_VAL_SHIFT                     0
#define DMA_CH_4_RD_RATE_LIM_RST_TOKEN_VAL_MASK                      0xFFFF

#define mmDMA_CH_4_RD_RATE_LIM_SAT                                   0x421078
/* DMA_CH_4_RD_RATE_LIM_SAT */
#define DMA_CH_4_RD_RATE_LIM_SAT_VAL_SHIFT                           0
#define DMA_CH_4_RD_RATE_LIM_SAT_VAL_MASK                            0xFFFF

#define mmDMA_CH_4_RD_RATE_LIM_TOUT                                  0x42107C
/* DMA_CH_4_RD_RATE_LIM_TOUT */
#define DMA_CH_4_RD_RATE_LIM_TOUT_VAL_SHIFT                          0
#define DMA_CH_4_RD_RATE_LIM_TOUT_VAL_MASK                           0x7FFFFFFF

#define mmDMA_CH_4_WR_RATE_LIM_EN                                    0x421080
/* DMA_CH_4_WR_RATE_LIM_EN */
#define DMA_CH_4_WR_RATE_LIM_EN_VAL_SHIFT                            0
#define DMA_CH_4_WR_RATE_LIM_EN_VAL_MASK                             0x1

#define mmDMA_CH_4_WR_RATE_LIM_RST_TOKEN                             0x421084
/* DMA_CH_4_WR_RATE_LIM_RST_TOKEN */
#define DMA_CH_4_WR_RATE_LIM_RST_TOKEN_VAL_SHIFT                     0
#define DMA_CH_4_WR_RATE_LIM_RST_TOKEN_VAL_MASK                      0xFFFF

#define mmDMA_CH_4_WR_RATE_LIM_SAT                                   0x421088
/* DMA_CH_4_WR_RATE_LIM_SAT */
#define DMA_CH_4_WR_RATE_LIM_SAT_VAL_SHIFT                           0
#define DMA_CH_4_WR_RATE_LIM_SAT_VAL_MASK                            0xFFFF

#define mmDMA_CH_4_WR_RATE_LIM_TOUT                                  0x42108C
/* DMA_CH_4_WR_RATE_LIM_TOUT */
#define DMA_CH_4_WR_RATE_LIM_TOUT_VAL_SHIFT                          0
#define DMA_CH_4_WR_RATE_LIM_TOUT_VAL_MASK                           0x7FFFFFFF

#define mmDMA_CH_4_CFG2                                              0x421090
/* DMA_CH_4_CFG2 */
#define DMA_CH_4_CFG2_FORCE_WORD_SHIFT                               0
#define DMA_CH_4_CFG2_FORCE_WORD_MASK                                0x1

#define mmDMA_CH_4_TDMA_CTL                                          0x421100
/* DMA_CH_4_TDMA_CTL */
#define DMA_CH_4_TDMA_CTL_DTYPE_SHIFT                                0
#define DMA_CH_4_TDMA_CTL_DTYPE_MASK                                 0x7

#define mmDMA_CH_4_TDMA_SRC_BASE_ADDR_LO                             0x421104
/* DMA_CH_4_TDMA_SRC_BASE_ADDR_LO */
#define DMA_CH_4_TDMA_SRC_BASE_ADDR_LO_VAL_SHIFT                     0
#define DMA_CH_4_TDMA_SRC_BASE_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_BASE_ADDR_HI                             0x421108
/* DMA_CH_4_TDMA_SRC_BASE_ADDR_HI */
#define DMA_CH_4_TDMA_SRC_BASE_ADDR_HI_VAL_SHIFT                     0
#define DMA_CH_4_TDMA_SRC_BASE_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_ROI_BASE_0                               0x42110C
/* DMA_CH_4_TDMA_SRC_ROI_BASE_0 */
#define DMA_CH_4_TDMA_SRC_ROI_BASE_0_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_SRC_ROI_BASE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_ROI_SIZE_0                               0x421110
/* DMA_CH_4_TDMA_SRC_ROI_SIZE_0 */
#define DMA_CH_4_TDMA_SRC_ROI_SIZE_0_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_SRC_ROI_SIZE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_VALID_ELEMENTS_0                         0x421114
/* DMA_CH_4_TDMA_SRC_VALID_ELEMENTS_0 */
#define DMA_CH_4_TDMA_SRC_VALID_ELEMENTS_0_VAL_SHIFT                 0
#define DMA_CH_4_TDMA_SRC_VALID_ELEMENTS_0_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_START_OFFSET_0                           0x421118
/* DMA_CH_4_TDMA_SRC_START_OFFSET_0 */
#define DMA_CH_4_TDMA_SRC_START_OFFSET_0_VAL_SHIFT                   0
#define DMA_CH_4_TDMA_SRC_START_OFFSET_0_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_STRIDE_0                                 0x42111C
/* DMA_CH_4_TDMA_SRC_STRIDE_0 */
#define DMA_CH_4_TDMA_SRC_STRIDE_0_VAL_SHIFT                         0
#define DMA_CH_4_TDMA_SRC_STRIDE_0_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_ROI_BASE_1                               0x421120
/* DMA_CH_4_TDMA_SRC_ROI_BASE_1 */
#define DMA_CH_4_TDMA_SRC_ROI_BASE_1_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_SRC_ROI_BASE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_ROI_SIZE_1                               0x421124
/* DMA_CH_4_TDMA_SRC_ROI_SIZE_1 */
#define DMA_CH_4_TDMA_SRC_ROI_SIZE_1_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_SRC_ROI_SIZE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_VALID_ELEMENTS_1                         0x421128
/* DMA_CH_4_TDMA_SRC_VALID_ELEMENTS_1 */
#define DMA_CH_4_TDMA_SRC_VALID_ELEMENTS_1_VAL_SHIFT                 0
#define DMA_CH_4_TDMA_SRC_VALID_ELEMENTS_1_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_START_OFFSET_1                           0x42112C
/* DMA_CH_4_TDMA_SRC_START_OFFSET_1 */
#define DMA_CH_4_TDMA_SRC_START_OFFSET_1_VAL_SHIFT                   0
#define DMA_CH_4_TDMA_SRC_START_OFFSET_1_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_STRIDE_1                                 0x421130
/* DMA_CH_4_TDMA_SRC_STRIDE_1 */
#define DMA_CH_4_TDMA_SRC_STRIDE_1_VAL_SHIFT                         0
#define DMA_CH_4_TDMA_SRC_STRIDE_1_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_ROI_BASE_2                               0x421134
/* DMA_CH_4_TDMA_SRC_ROI_BASE_2 */
#define DMA_CH_4_TDMA_SRC_ROI_BASE_2_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_SRC_ROI_BASE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_ROI_SIZE_2                               0x421138
/* DMA_CH_4_TDMA_SRC_ROI_SIZE_2 */
#define DMA_CH_4_TDMA_SRC_ROI_SIZE_2_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_SRC_ROI_SIZE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_VALID_ELEMENTS_2                         0x42113C
/* DMA_CH_4_TDMA_SRC_VALID_ELEMENTS_2 */
#define DMA_CH_4_TDMA_SRC_VALID_ELEMENTS_2_VAL_SHIFT                 0
#define DMA_CH_4_TDMA_SRC_VALID_ELEMENTS_2_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_START_OFFSET_2                           0x421140
/* DMA_CH_4_TDMA_SRC_START_OFFSET_2 */
#define DMA_CH_4_TDMA_SRC_START_OFFSET_2_VAL_SHIFT                   0
#define DMA_CH_4_TDMA_SRC_START_OFFSET_2_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_STRIDE_2                                 0x421144
/* DMA_CH_4_TDMA_SRC_STRIDE_2 */
#define DMA_CH_4_TDMA_SRC_STRIDE_2_VAL_SHIFT                         0
#define DMA_CH_4_TDMA_SRC_STRIDE_2_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_ROI_BASE_3                               0x421148
/* DMA_CH_4_TDMA_SRC_ROI_BASE_3 */
#define DMA_CH_4_TDMA_SRC_ROI_BASE_3_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_SRC_ROI_BASE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_ROI_SIZE_3                               0x42114C
/* DMA_CH_4_TDMA_SRC_ROI_SIZE_3 */
#define DMA_CH_4_TDMA_SRC_ROI_SIZE_3_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_SRC_ROI_SIZE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_VALID_ELEMENTS_3                         0x421150
/* DMA_CH_4_TDMA_SRC_VALID_ELEMENTS_3 */
#define DMA_CH_4_TDMA_SRC_VALID_ELEMENTS_3_VAL_SHIFT                 0
#define DMA_CH_4_TDMA_SRC_VALID_ELEMENTS_3_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_START_OFFSET_3                           0x421154
/* DMA_CH_4_TDMA_SRC_START_OFFSET_3 */
#define DMA_CH_4_TDMA_SRC_START_OFFSET_3_VAL_SHIFT                   0
#define DMA_CH_4_TDMA_SRC_START_OFFSET_3_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_STRIDE_3                                 0x421158
/* DMA_CH_4_TDMA_SRC_STRIDE_3 */
#define DMA_CH_4_TDMA_SRC_STRIDE_3_VAL_SHIFT                         0
#define DMA_CH_4_TDMA_SRC_STRIDE_3_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_ROI_BASE_4                               0x42115C
/* DMA_CH_4_TDMA_SRC_ROI_BASE_4 */
#define DMA_CH_4_TDMA_SRC_ROI_BASE_4_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_SRC_ROI_BASE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_ROI_SIZE_4                               0x421160
/* DMA_CH_4_TDMA_SRC_ROI_SIZE_4 */
#define DMA_CH_4_TDMA_SRC_ROI_SIZE_4_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_SRC_ROI_SIZE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_VALID_ELEMENTS_4                         0x421164
/* DMA_CH_4_TDMA_SRC_VALID_ELEMENTS_4 */
#define DMA_CH_4_TDMA_SRC_VALID_ELEMENTS_4_VAL_SHIFT                 0
#define DMA_CH_4_TDMA_SRC_VALID_ELEMENTS_4_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_START_OFFSET_4                           0x421168
/* DMA_CH_4_TDMA_SRC_START_OFFSET_4 */
#define DMA_CH_4_TDMA_SRC_START_OFFSET_4_VAL_SHIFT                   0
#define DMA_CH_4_TDMA_SRC_START_OFFSET_4_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_4_TDMA_SRC_STRIDE_4                                 0x42116C
/* DMA_CH_4_TDMA_SRC_STRIDE_4 */
#define DMA_CH_4_TDMA_SRC_STRIDE_4_VAL_SHIFT                         0
#define DMA_CH_4_TDMA_SRC_STRIDE_4_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_BASE_ADDR_LO                             0x421170
/* DMA_CH_4_TDMA_DST_BASE_ADDR_LO */
#define DMA_CH_4_TDMA_DST_BASE_ADDR_LO_VAL_SHIFT                     0
#define DMA_CH_4_TDMA_DST_BASE_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_BASE_ADDR_HI                             0x421174
/* DMA_CH_4_TDMA_DST_BASE_ADDR_HI */
#define DMA_CH_4_TDMA_DST_BASE_ADDR_HI_VAL_SHIFT                     0
#define DMA_CH_4_TDMA_DST_BASE_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_ROI_BASE_0                               0x421178
/* DMA_CH_4_TDMA_DST_ROI_BASE_0 */
#define DMA_CH_4_TDMA_DST_ROI_BASE_0_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_DST_ROI_BASE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_ROI_SIZE_0                               0x42117C
/* DMA_CH_4_TDMA_DST_ROI_SIZE_0 */
#define DMA_CH_4_TDMA_DST_ROI_SIZE_0_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_DST_ROI_SIZE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_VALID_ELEMENTS_0                         0x421180
/* DMA_CH_4_TDMA_DST_VALID_ELEMENTS_0 */
#define DMA_CH_4_TDMA_DST_VALID_ELEMENTS_0_VAL_SHIFT                 0
#define DMA_CH_4_TDMA_DST_VALID_ELEMENTS_0_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_START_OFFSET_0                           0x421184
/* DMA_CH_4_TDMA_DST_START_OFFSET_0 */
#define DMA_CH_4_TDMA_DST_START_OFFSET_0_VAL_SHIFT                   0
#define DMA_CH_4_TDMA_DST_START_OFFSET_0_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_STRIDE_0                                 0x421188
/* DMA_CH_4_TDMA_DST_STRIDE_0 */
#define DMA_CH_4_TDMA_DST_STRIDE_0_VAL_SHIFT                         0
#define DMA_CH_4_TDMA_DST_STRIDE_0_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_ROI_BASE_1                               0x42118C
/* DMA_CH_4_TDMA_DST_ROI_BASE_1 */
#define DMA_CH_4_TDMA_DST_ROI_BASE_1_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_DST_ROI_BASE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_ROI_SIZE_1                               0x421190
/* DMA_CH_4_TDMA_DST_ROI_SIZE_1 */
#define DMA_CH_4_TDMA_DST_ROI_SIZE_1_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_DST_ROI_SIZE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_VALID_ELEMENTS_1                         0x421194
/* DMA_CH_4_TDMA_DST_VALID_ELEMENTS_1 */
#define DMA_CH_4_TDMA_DST_VALID_ELEMENTS_1_VAL_SHIFT                 0
#define DMA_CH_4_TDMA_DST_VALID_ELEMENTS_1_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_START_OFFSET_1                           0x421198
/* DMA_CH_4_TDMA_DST_START_OFFSET_1 */
#define DMA_CH_4_TDMA_DST_START_OFFSET_1_VAL_SHIFT                   0
#define DMA_CH_4_TDMA_DST_START_OFFSET_1_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_STRIDE_1                                 0x42119C
/* DMA_CH_4_TDMA_DST_STRIDE_1 */
#define DMA_CH_4_TDMA_DST_STRIDE_1_VAL_SHIFT                         0
#define DMA_CH_4_TDMA_DST_STRIDE_1_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_ROI_BASE_2                               0x4211A0
/* DMA_CH_4_TDMA_DST_ROI_BASE_2 */
#define DMA_CH_4_TDMA_DST_ROI_BASE_2_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_DST_ROI_BASE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_ROI_SIZE_2                               0x4211A4
/* DMA_CH_4_TDMA_DST_ROI_SIZE_2 */
#define DMA_CH_4_TDMA_DST_ROI_SIZE_2_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_DST_ROI_SIZE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_VALID_ELEMENTS_2                         0x4211A8
/* DMA_CH_4_TDMA_DST_VALID_ELEMENTS_2 */
#define DMA_CH_4_TDMA_DST_VALID_ELEMENTS_2_VAL_SHIFT                 0
#define DMA_CH_4_TDMA_DST_VALID_ELEMENTS_2_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_START_OFFSET_2                           0x4211AC
/* DMA_CH_4_TDMA_DST_START_OFFSET_2 */
#define DMA_CH_4_TDMA_DST_START_OFFSET_2_VAL_SHIFT                   0
#define DMA_CH_4_TDMA_DST_START_OFFSET_2_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_STRIDE_2                                 0x4211B0
/* DMA_CH_4_TDMA_DST_STRIDE_2 */
#define DMA_CH_4_TDMA_DST_STRIDE_2_VAL_SHIFT                         0
#define DMA_CH_4_TDMA_DST_STRIDE_2_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_ROI_BASE_3                               0x4211B4
/* DMA_CH_4_TDMA_DST_ROI_BASE_3 */
#define DMA_CH_4_TDMA_DST_ROI_BASE_3_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_DST_ROI_BASE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_ROI_SIZE_3                               0x4211B8
/* DMA_CH_4_TDMA_DST_ROI_SIZE_3 */
#define DMA_CH_4_TDMA_DST_ROI_SIZE_3_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_DST_ROI_SIZE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_VALID_ELEMENTS_3                         0x4211BC
/* DMA_CH_4_TDMA_DST_VALID_ELEMENTS_3 */
#define DMA_CH_4_TDMA_DST_VALID_ELEMENTS_3_VAL_SHIFT                 0
#define DMA_CH_4_TDMA_DST_VALID_ELEMENTS_3_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_START_OFFSET_3                           0x4211C0
/* DMA_CH_4_TDMA_DST_START_OFFSET_3 */
#define DMA_CH_4_TDMA_DST_START_OFFSET_3_VAL_SHIFT                   0
#define DMA_CH_4_TDMA_DST_START_OFFSET_3_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_STRIDE_3                                 0x4211C4
/* DMA_CH_4_TDMA_DST_STRIDE_3 */
#define DMA_CH_4_TDMA_DST_STRIDE_3_VAL_SHIFT                         0
#define DMA_CH_4_TDMA_DST_STRIDE_3_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_ROI_BASE_4                               0x4211C8
/* DMA_CH_4_TDMA_DST_ROI_BASE_4 */
#define DMA_CH_4_TDMA_DST_ROI_BASE_4_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_DST_ROI_BASE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_ROI_SIZE_4                               0x4211CC
/* DMA_CH_4_TDMA_DST_ROI_SIZE_4 */
#define DMA_CH_4_TDMA_DST_ROI_SIZE_4_VAL_SHIFT                       0
#define DMA_CH_4_TDMA_DST_ROI_SIZE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_VALID_ELEMENTS_4                         0x4211D0
/* DMA_CH_4_TDMA_DST_VALID_ELEMENTS_4 */
#define DMA_CH_4_TDMA_DST_VALID_ELEMENTS_4_VAL_SHIFT                 0
#define DMA_CH_4_TDMA_DST_VALID_ELEMENTS_4_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_START_OFFSET_4                           0x4211D4
/* DMA_CH_4_TDMA_DST_START_OFFSET_4 */
#define DMA_CH_4_TDMA_DST_START_OFFSET_4_VAL_SHIFT                   0
#define DMA_CH_4_TDMA_DST_START_OFFSET_4_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_4_TDMA_DST_STRIDE_4                                 0x4211D8
/* DMA_CH_4_TDMA_DST_STRIDE_4 */
#define DMA_CH_4_TDMA_DST_STRIDE_4_VAL_SHIFT                         0
#define DMA_CH_4_TDMA_DST_STRIDE_4_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_4_MEM_INIT_BUSY                                     0x4211FC
/* DMA_CH_4_MEM_INIT_BUSY */
#define DMA_CH_4_MEM_INIT_BUSY_SBC_DATA_SHIFT                        0
#define DMA_CH_4_MEM_INIT_BUSY_SBC_DATA_MASK                         0xFF
#define DMA_CH_4_MEM_INIT_BUSY_SBC_MD_SHIFT                          8
#define DMA_CH_4_MEM_INIT_BUSY_SBC_MD_MASK                           0x100

#endif /* ASIC_REG_DMA_CH_4_H_ */

