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

#ifndef ASIC_REG_DMA_CH_2_H_
#define ASIC_REG_DMA_CH_2_H_

/*
 *****************************************
 *   DMA_CH_2 (Prototype: DMA_CH)
 *****************************************
 */

#define mmDMA_CH_2_CFG0                                              0x411000
/* DMA_CH_2_CFG0 */
#define DMA_CH_2_CFG0_RD_MAX_OUTSTAND_SHIFT                          0
#define DMA_CH_2_CFG0_RD_MAX_OUTSTAND_MASK                           0x3FF
#define DMA_CH_2_CFG0_WR_MAX_OUTSTAND_SHIFT                          16
#define DMA_CH_2_CFG0_WR_MAX_OUTSTAND_MASK                           0xFFF0000

#define mmDMA_CH_2_CFG1                                              0x411004
/* DMA_CH_2_CFG1 */
#define DMA_CH_2_CFG1_RD_BUF_MAX_SIZE_SHIFT                          0
#define DMA_CH_2_CFG1_RD_BUF_MAX_SIZE_MASK                           0x3FF

#define mmDMA_CH_2_ERRMSG_ADDR_LO                                    0x411008
/* DMA_CH_2_ERRMSG_ADDR_LO */
#define DMA_CH_2_ERRMSG_ADDR_LO_VAL_SHIFT                            0
#define DMA_CH_2_ERRMSG_ADDR_LO_VAL_MASK                             0xFFFFFFFF

#define mmDMA_CH_2_ERRMSG_ADDR_HI                                    0x41100C
/* DMA_CH_2_ERRMSG_ADDR_HI */
#define DMA_CH_2_ERRMSG_ADDR_HI_VAL_SHIFT                            0
#define DMA_CH_2_ERRMSG_ADDR_HI_VAL_MASK                             0xFFFFFFFF

#define mmDMA_CH_2_ERRMSG_WDATA                                      0x411010
/* DMA_CH_2_ERRMSG_WDATA */
#define DMA_CH_2_ERRMSG_WDATA_VAL_SHIFT                              0
#define DMA_CH_2_ERRMSG_WDATA_VAL_MASK                               0xFFFFFFFF

#define mmDMA_CH_2_RD_COMP_ADDR_LO                                   0x411014
/* DMA_CH_2_RD_COMP_ADDR_LO */
#define DMA_CH_2_RD_COMP_ADDR_LO_VAL_SHIFT                           0
#define DMA_CH_2_RD_COMP_ADDR_LO_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_2_RD_COMP_ADDR_HI                                   0x411018
/* DMA_CH_2_RD_COMP_ADDR_HI */
#define DMA_CH_2_RD_COMP_ADDR_HI_VAL_SHIFT                           0
#define DMA_CH_2_RD_COMP_ADDR_HI_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_2_RD_COMP_WDATA                                     0x41101C
/* DMA_CH_2_RD_COMP_WDATA */
#define DMA_CH_2_RD_COMP_WDATA_VAL_SHIFT                             0
#define DMA_CH_2_RD_COMP_WDATA_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_2_WR_COMP_ADDR_LO                                   0x411020
/* DMA_CH_2_WR_COMP_ADDR_LO */
#define DMA_CH_2_WR_COMP_ADDR_LO_VAL_SHIFT                           0
#define DMA_CH_2_WR_COMP_ADDR_LO_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_2_WR_COMP_ADDR_HI                                   0x411024
/* DMA_CH_2_WR_COMP_ADDR_HI */
#define DMA_CH_2_WR_COMP_ADDR_HI_VAL_SHIFT                           0
#define DMA_CH_2_WR_COMP_ADDR_HI_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_2_WR_COMP_WDATA                                     0x411028
/* DMA_CH_2_WR_COMP_WDATA */
#define DMA_CH_2_WR_COMP_WDATA_VAL_SHIFT                             0
#define DMA_CH_2_WR_COMP_WDATA_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_2_LDMA_SRC_ADDR_LO                                  0x41102C
/* DMA_CH_2_LDMA_SRC_ADDR_LO */
#define DMA_CH_2_LDMA_SRC_ADDR_LO_VAL_SHIFT                          0
#define DMA_CH_2_LDMA_SRC_ADDR_LO_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_2_LDMA_SRC_ADDR_HI                                  0x411030
/* DMA_CH_2_LDMA_SRC_ADDR_HI */
#define DMA_CH_2_LDMA_SRC_ADDR_HI_VAL_SHIFT                          0
#define DMA_CH_2_LDMA_SRC_ADDR_HI_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_2_LDMA_DST_ADDR_LO                                  0x411034
/* DMA_CH_2_LDMA_DST_ADDR_LO */
#define DMA_CH_2_LDMA_DST_ADDR_LO_VAL_SHIFT                          0
#define DMA_CH_2_LDMA_DST_ADDR_LO_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_2_LDMA_DST_ADDR_HI                                  0x411038
/* DMA_CH_2_LDMA_DST_ADDR_HI */
#define DMA_CH_2_LDMA_DST_ADDR_HI_VAL_SHIFT                          0
#define DMA_CH_2_LDMA_DST_ADDR_HI_VAL_MASK                           0xFFFFFFFF

#define mmDMA_CH_2_LDMA_TSIZE                                        0x41103C
/* DMA_CH_2_LDMA_TSIZE */
#define DMA_CH_2_LDMA_TSIZE_VAL_SHIFT                                0
#define DMA_CH_2_LDMA_TSIZE_VAL_MASK                                 0xFFFFFFFF

#define mmDMA_CH_2_COMIT_TRANSFER                                    0x411040
/* DMA_CH_2_COMIT_TRANSFER */
#define DMA_CH_2_COMIT_TRANSFER_PCI_UPS_WKORDR_SHIFT                 0
#define DMA_CH_2_COMIT_TRANSFER_PCI_UPS_WKORDR_MASK                  0x1
#define DMA_CH_2_COMIT_TRANSFER_RD_COMP_EN_SHIFT                     1
#define DMA_CH_2_COMIT_TRANSFER_RD_COMP_EN_MASK                      0x2
#define DMA_CH_2_COMIT_TRANSFER_WR_COMP_EN_SHIFT                     2
#define DMA_CH_2_COMIT_TRANSFER_WR_COMP_EN_MASK                      0x4
#define DMA_CH_2_COMIT_TRANSFER_NOSNOOP_SHIFT                        3
#define DMA_CH_2_COMIT_TRANSFER_NOSNOOP_MASK                         0x8
#define DMA_CH_2_COMIT_TRANSFER_SRC_ADDR_INC_DIS_SHIFT               4
#define DMA_CH_2_COMIT_TRANSFER_SRC_ADDR_INC_DIS_MASK                0x10
#define DMA_CH_2_COMIT_TRANSFER_DST_ADDR_INC_DIS_SHIFT               5
#define DMA_CH_2_COMIT_TRANSFER_DST_ADDR_INC_DIS_MASK                0x20
#define DMA_CH_2_COMIT_TRANSFER_MEM_SET_SHIFT                        6
#define DMA_CH_2_COMIT_TRANSFER_MEM_SET_MASK                         0x40
#define DMA_CH_2_COMIT_TRANSFER_MOD_TENSOR_SHIFT                     15
#define DMA_CH_2_COMIT_TRANSFER_MOD_TENSOR_MASK                      0x8000
#define DMA_CH_2_COMIT_TRANSFER_CTL_SHIFT                            16
#define DMA_CH_2_COMIT_TRANSFER_CTL_MASK                             0xFFFF0000

#define mmDMA_CH_2_STS0                                              0x411044
/* DMA_CH_2_STS0 */
#define DMA_CH_2_STS0_DMA_BUSY_SHIFT                                 0
#define DMA_CH_2_STS0_DMA_BUSY_MASK                                  0x1
#define DMA_CH_2_STS0_RD_STS_CTX_FULL_SHIFT                          1
#define DMA_CH_2_STS0_RD_STS_CTX_FULL_MASK                           0x2
#define DMA_CH_2_STS0_WR_STS_CTX_FULL_SHIFT                          2
#define DMA_CH_2_STS0_WR_STS_CTX_FULL_MASK                           0x4

#define mmDMA_CH_2_STS1                                              0x411048
/* DMA_CH_2_STS1 */
#define DMA_CH_2_STS1_RD_STS_CTX_CNT_SHIFT                           0
#define DMA_CH_2_STS1_RD_STS_CTX_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_2_STS2                                              0x41104C
/* DMA_CH_2_STS2 */
#define DMA_CH_2_STS2_WR_STS_CTX_CNT_SHIFT                           0
#define DMA_CH_2_STS2_WR_STS_CTX_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_2_STS3                                              0x411050
/* DMA_CH_2_STS3 */
#define DMA_CH_2_STS3_RD_STS_TRN_CNT_SHIFT                           0
#define DMA_CH_2_STS3_RD_STS_TRN_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_2_STS4                                              0x411054
/* DMA_CH_2_STS4 */
#define DMA_CH_2_STS4_WR_STS_TRN_CNT_SHIFT                           0
#define DMA_CH_2_STS4_WR_STS_TRN_CNT_MASK                            0xFFFFFFFF

#define mmDMA_CH_2_SRC_ADDR_LO_STS                                   0x411058
/* DMA_CH_2_SRC_ADDR_LO_STS */
#define DMA_CH_2_SRC_ADDR_LO_STS_VAL_SHIFT                           0
#define DMA_CH_2_SRC_ADDR_LO_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_2_SRC_ADDR_HI_STS                                   0x41105C
/* DMA_CH_2_SRC_ADDR_HI_STS */
#define DMA_CH_2_SRC_ADDR_HI_STS_VAL_SHIFT                           0
#define DMA_CH_2_SRC_ADDR_HI_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_2_SRC_TSIZE_STS                                     0x411060
/* DMA_CH_2_SRC_TSIZE_STS */
#define DMA_CH_2_SRC_TSIZE_STS_VAL_SHIFT                             0
#define DMA_CH_2_SRC_TSIZE_STS_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_2_DST_ADDR_LO_STS                                   0x411064
/* DMA_CH_2_DST_ADDR_LO_STS */
#define DMA_CH_2_DST_ADDR_LO_STS_VAL_SHIFT                           0
#define DMA_CH_2_DST_ADDR_LO_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_2_DST_ADDR_HI_STS                                   0x411068
/* DMA_CH_2_DST_ADDR_HI_STS */
#define DMA_CH_2_DST_ADDR_HI_STS_VAL_SHIFT                           0
#define DMA_CH_2_DST_ADDR_HI_STS_VAL_MASK                            0xFFFFFFFF

#define mmDMA_CH_2_DST_TSIZE_STS                                     0x41106C
/* DMA_CH_2_DST_TSIZE_STS */
#define DMA_CH_2_DST_TSIZE_STS_VAL_SHIFT                             0
#define DMA_CH_2_DST_TSIZE_STS_VAL_MASK                              0xFFFFFFFF

#define mmDMA_CH_2_RD_RATE_LIM_EN                                    0x411070
/* DMA_CH_2_RD_RATE_LIM_EN */
#define DMA_CH_2_RD_RATE_LIM_EN_VAL_SHIFT                            0
#define DMA_CH_2_RD_RATE_LIM_EN_VAL_MASK                             0x1

#define mmDMA_CH_2_RD_RATE_LIM_RST_TOKEN                             0x411074
/* DMA_CH_2_RD_RATE_LIM_RST_TOKEN */
#define DMA_CH_2_RD_RATE_LIM_RST_TOKEN_VAL_SHIFT                     0
#define DMA_CH_2_RD_RATE_LIM_RST_TOKEN_VAL_MASK                      0xFFFF

#define mmDMA_CH_2_RD_RATE_LIM_SAT                                   0x411078
/* DMA_CH_2_RD_RATE_LIM_SAT */
#define DMA_CH_2_RD_RATE_LIM_SAT_VAL_SHIFT                           0
#define DMA_CH_2_RD_RATE_LIM_SAT_VAL_MASK                            0xFFFF

#define mmDMA_CH_2_RD_RATE_LIM_TOUT                                  0x41107C
/* DMA_CH_2_RD_RATE_LIM_TOUT */
#define DMA_CH_2_RD_RATE_LIM_TOUT_VAL_SHIFT                          0
#define DMA_CH_2_RD_RATE_LIM_TOUT_VAL_MASK                           0x7FFFFFFF

#define mmDMA_CH_2_WR_RATE_LIM_EN                                    0x411080
/* DMA_CH_2_WR_RATE_LIM_EN */
#define DMA_CH_2_WR_RATE_LIM_EN_VAL_SHIFT                            0
#define DMA_CH_2_WR_RATE_LIM_EN_VAL_MASK                             0x1

#define mmDMA_CH_2_WR_RATE_LIM_RST_TOKEN                             0x411084
/* DMA_CH_2_WR_RATE_LIM_RST_TOKEN */
#define DMA_CH_2_WR_RATE_LIM_RST_TOKEN_VAL_SHIFT                     0
#define DMA_CH_2_WR_RATE_LIM_RST_TOKEN_VAL_MASK                      0xFFFF

#define mmDMA_CH_2_WR_RATE_LIM_SAT                                   0x411088
/* DMA_CH_2_WR_RATE_LIM_SAT */
#define DMA_CH_2_WR_RATE_LIM_SAT_VAL_SHIFT                           0
#define DMA_CH_2_WR_RATE_LIM_SAT_VAL_MASK                            0xFFFF

#define mmDMA_CH_2_WR_RATE_LIM_TOUT                                  0x41108C
/* DMA_CH_2_WR_RATE_LIM_TOUT */
#define DMA_CH_2_WR_RATE_LIM_TOUT_VAL_SHIFT                          0
#define DMA_CH_2_WR_RATE_LIM_TOUT_VAL_MASK                           0x7FFFFFFF

#define mmDMA_CH_2_CFG2                                              0x411090
/* DMA_CH_2_CFG2 */
#define DMA_CH_2_CFG2_FORCE_WORD_SHIFT                               0
#define DMA_CH_2_CFG2_FORCE_WORD_MASK                                0x1

#define mmDMA_CH_2_TDMA_CTL                                          0x411100
/* DMA_CH_2_TDMA_CTL */
#define DMA_CH_2_TDMA_CTL_DTYPE_SHIFT                                0
#define DMA_CH_2_TDMA_CTL_DTYPE_MASK                                 0x7

#define mmDMA_CH_2_TDMA_SRC_BASE_ADDR_LO                             0x411104
/* DMA_CH_2_TDMA_SRC_BASE_ADDR_LO */
#define DMA_CH_2_TDMA_SRC_BASE_ADDR_LO_VAL_SHIFT                     0
#define DMA_CH_2_TDMA_SRC_BASE_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_BASE_ADDR_HI                             0x411108
/* DMA_CH_2_TDMA_SRC_BASE_ADDR_HI */
#define DMA_CH_2_TDMA_SRC_BASE_ADDR_HI_VAL_SHIFT                     0
#define DMA_CH_2_TDMA_SRC_BASE_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_ROI_BASE_0                               0x41110C
/* DMA_CH_2_TDMA_SRC_ROI_BASE_0 */
#define DMA_CH_2_TDMA_SRC_ROI_BASE_0_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_SRC_ROI_BASE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_ROI_SIZE_0                               0x411110
/* DMA_CH_2_TDMA_SRC_ROI_SIZE_0 */
#define DMA_CH_2_TDMA_SRC_ROI_SIZE_0_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_SRC_ROI_SIZE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_VALID_ELEMENTS_0                         0x411114
/* DMA_CH_2_TDMA_SRC_VALID_ELEMENTS_0 */
#define DMA_CH_2_TDMA_SRC_VALID_ELEMENTS_0_VAL_SHIFT                 0
#define DMA_CH_2_TDMA_SRC_VALID_ELEMENTS_0_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_START_OFFSET_0                           0x411118
/* DMA_CH_2_TDMA_SRC_START_OFFSET_0 */
#define DMA_CH_2_TDMA_SRC_START_OFFSET_0_VAL_SHIFT                   0
#define DMA_CH_2_TDMA_SRC_START_OFFSET_0_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_STRIDE_0                                 0x41111C
/* DMA_CH_2_TDMA_SRC_STRIDE_0 */
#define DMA_CH_2_TDMA_SRC_STRIDE_0_VAL_SHIFT                         0
#define DMA_CH_2_TDMA_SRC_STRIDE_0_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_ROI_BASE_1                               0x411120
/* DMA_CH_2_TDMA_SRC_ROI_BASE_1 */
#define DMA_CH_2_TDMA_SRC_ROI_BASE_1_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_SRC_ROI_BASE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_ROI_SIZE_1                               0x411124
/* DMA_CH_2_TDMA_SRC_ROI_SIZE_1 */
#define DMA_CH_2_TDMA_SRC_ROI_SIZE_1_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_SRC_ROI_SIZE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_VALID_ELEMENTS_1                         0x411128
/* DMA_CH_2_TDMA_SRC_VALID_ELEMENTS_1 */
#define DMA_CH_2_TDMA_SRC_VALID_ELEMENTS_1_VAL_SHIFT                 0
#define DMA_CH_2_TDMA_SRC_VALID_ELEMENTS_1_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_START_OFFSET_1                           0x41112C
/* DMA_CH_2_TDMA_SRC_START_OFFSET_1 */
#define DMA_CH_2_TDMA_SRC_START_OFFSET_1_VAL_SHIFT                   0
#define DMA_CH_2_TDMA_SRC_START_OFFSET_1_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_STRIDE_1                                 0x411130
/* DMA_CH_2_TDMA_SRC_STRIDE_1 */
#define DMA_CH_2_TDMA_SRC_STRIDE_1_VAL_SHIFT                         0
#define DMA_CH_2_TDMA_SRC_STRIDE_1_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_ROI_BASE_2                               0x411134
/* DMA_CH_2_TDMA_SRC_ROI_BASE_2 */
#define DMA_CH_2_TDMA_SRC_ROI_BASE_2_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_SRC_ROI_BASE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_ROI_SIZE_2                               0x411138
/* DMA_CH_2_TDMA_SRC_ROI_SIZE_2 */
#define DMA_CH_2_TDMA_SRC_ROI_SIZE_2_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_SRC_ROI_SIZE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_VALID_ELEMENTS_2                         0x41113C
/* DMA_CH_2_TDMA_SRC_VALID_ELEMENTS_2 */
#define DMA_CH_2_TDMA_SRC_VALID_ELEMENTS_2_VAL_SHIFT                 0
#define DMA_CH_2_TDMA_SRC_VALID_ELEMENTS_2_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_START_OFFSET_2                           0x411140
/* DMA_CH_2_TDMA_SRC_START_OFFSET_2 */
#define DMA_CH_2_TDMA_SRC_START_OFFSET_2_VAL_SHIFT                   0
#define DMA_CH_2_TDMA_SRC_START_OFFSET_2_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_STRIDE_2                                 0x411144
/* DMA_CH_2_TDMA_SRC_STRIDE_2 */
#define DMA_CH_2_TDMA_SRC_STRIDE_2_VAL_SHIFT                         0
#define DMA_CH_2_TDMA_SRC_STRIDE_2_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_ROI_BASE_3                               0x411148
/* DMA_CH_2_TDMA_SRC_ROI_BASE_3 */
#define DMA_CH_2_TDMA_SRC_ROI_BASE_3_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_SRC_ROI_BASE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_ROI_SIZE_3                               0x41114C
/* DMA_CH_2_TDMA_SRC_ROI_SIZE_3 */
#define DMA_CH_2_TDMA_SRC_ROI_SIZE_3_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_SRC_ROI_SIZE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_VALID_ELEMENTS_3                         0x411150
/* DMA_CH_2_TDMA_SRC_VALID_ELEMENTS_3 */
#define DMA_CH_2_TDMA_SRC_VALID_ELEMENTS_3_VAL_SHIFT                 0
#define DMA_CH_2_TDMA_SRC_VALID_ELEMENTS_3_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_START_OFFSET_3                           0x411154
/* DMA_CH_2_TDMA_SRC_START_OFFSET_3 */
#define DMA_CH_2_TDMA_SRC_START_OFFSET_3_VAL_SHIFT                   0
#define DMA_CH_2_TDMA_SRC_START_OFFSET_3_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_STRIDE_3                                 0x411158
/* DMA_CH_2_TDMA_SRC_STRIDE_3 */
#define DMA_CH_2_TDMA_SRC_STRIDE_3_VAL_SHIFT                         0
#define DMA_CH_2_TDMA_SRC_STRIDE_3_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_ROI_BASE_4                               0x41115C
/* DMA_CH_2_TDMA_SRC_ROI_BASE_4 */
#define DMA_CH_2_TDMA_SRC_ROI_BASE_4_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_SRC_ROI_BASE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_ROI_SIZE_4                               0x411160
/* DMA_CH_2_TDMA_SRC_ROI_SIZE_4 */
#define DMA_CH_2_TDMA_SRC_ROI_SIZE_4_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_SRC_ROI_SIZE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_VALID_ELEMENTS_4                         0x411164
/* DMA_CH_2_TDMA_SRC_VALID_ELEMENTS_4 */
#define DMA_CH_2_TDMA_SRC_VALID_ELEMENTS_4_VAL_SHIFT                 0
#define DMA_CH_2_TDMA_SRC_VALID_ELEMENTS_4_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_START_OFFSET_4                           0x411168
/* DMA_CH_2_TDMA_SRC_START_OFFSET_4 */
#define DMA_CH_2_TDMA_SRC_START_OFFSET_4_VAL_SHIFT                   0
#define DMA_CH_2_TDMA_SRC_START_OFFSET_4_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_2_TDMA_SRC_STRIDE_4                                 0x41116C
/* DMA_CH_2_TDMA_SRC_STRIDE_4 */
#define DMA_CH_2_TDMA_SRC_STRIDE_4_VAL_SHIFT                         0
#define DMA_CH_2_TDMA_SRC_STRIDE_4_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_BASE_ADDR_LO                             0x411170
/* DMA_CH_2_TDMA_DST_BASE_ADDR_LO */
#define DMA_CH_2_TDMA_DST_BASE_ADDR_LO_VAL_SHIFT                     0
#define DMA_CH_2_TDMA_DST_BASE_ADDR_LO_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_BASE_ADDR_HI                             0x411174
/* DMA_CH_2_TDMA_DST_BASE_ADDR_HI */
#define DMA_CH_2_TDMA_DST_BASE_ADDR_HI_VAL_SHIFT                     0
#define DMA_CH_2_TDMA_DST_BASE_ADDR_HI_VAL_MASK                      0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_ROI_BASE_0                               0x411178
/* DMA_CH_2_TDMA_DST_ROI_BASE_0 */
#define DMA_CH_2_TDMA_DST_ROI_BASE_0_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_DST_ROI_BASE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_ROI_SIZE_0                               0x41117C
/* DMA_CH_2_TDMA_DST_ROI_SIZE_0 */
#define DMA_CH_2_TDMA_DST_ROI_SIZE_0_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_DST_ROI_SIZE_0_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_VALID_ELEMENTS_0                         0x411180
/* DMA_CH_2_TDMA_DST_VALID_ELEMENTS_0 */
#define DMA_CH_2_TDMA_DST_VALID_ELEMENTS_0_VAL_SHIFT                 0
#define DMA_CH_2_TDMA_DST_VALID_ELEMENTS_0_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_START_OFFSET_0                           0x411184
/* DMA_CH_2_TDMA_DST_START_OFFSET_0 */
#define DMA_CH_2_TDMA_DST_START_OFFSET_0_VAL_SHIFT                   0
#define DMA_CH_2_TDMA_DST_START_OFFSET_0_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_STRIDE_0                                 0x411188
/* DMA_CH_2_TDMA_DST_STRIDE_0 */
#define DMA_CH_2_TDMA_DST_STRIDE_0_VAL_SHIFT                         0
#define DMA_CH_2_TDMA_DST_STRIDE_0_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_ROI_BASE_1                               0x41118C
/* DMA_CH_2_TDMA_DST_ROI_BASE_1 */
#define DMA_CH_2_TDMA_DST_ROI_BASE_1_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_DST_ROI_BASE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_ROI_SIZE_1                               0x411190
/* DMA_CH_2_TDMA_DST_ROI_SIZE_1 */
#define DMA_CH_2_TDMA_DST_ROI_SIZE_1_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_DST_ROI_SIZE_1_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_VALID_ELEMENTS_1                         0x411194
/* DMA_CH_2_TDMA_DST_VALID_ELEMENTS_1 */
#define DMA_CH_2_TDMA_DST_VALID_ELEMENTS_1_VAL_SHIFT                 0
#define DMA_CH_2_TDMA_DST_VALID_ELEMENTS_1_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_START_OFFSET_1                           0x411198
/* DMA_CH_2_TDMA_DST_START_OFFSET_1 */
#define DMA_CH_2_TDMA_DST_START_OFFSET_1_VAL_SHIFT                   0
#define DMA_CH_2_TDMA_DST_START_OFFSET_1_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_STRIDE_1                                 0x41119C
/* DMA_CH_2_TDMA_DST_STRIDE_1 */
#define DMA_CH_2_TDMA_DST_STRIDE_1_VAL_SHIFT                         0
#define DMA_CH_2_TDMA_DST_STRIDE_1_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_ROI_BASE_2                               0x4111A0
/* DMA_CH_2_TDMA_DST_ROI_BASE_2 */
#define DMA_CH_2_TDMA_DST_ROI_BASE_2_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_DST_ROI_BASE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_ROI_SIZE_2                               0x4111A4
/* DMA_CH_2_TDMA_DST_ROI_SIZE_2 */
#define DMA_CH_2_TDMA_DST_ROI_SIZE_2_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_DST_ROI_SIZE_2_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_VALID_ELEMENTS_2                         0x4111A8
/* DMA_CH_2_TDMA_DST_VALID_ELEMENTS_2 */
#define DMA_CH_2_TDMA_DST_VALID_ELEMENTS_2_VAL_SHIFT                 0
#define DMA_CH_2_TDMA_DST_VALID_ELEMENTS_2_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_START_OFFSET_2                           0x4111AC
/* DMA_CH_2_TDMA_DST_START_OFFSET_2 */
#define DMA_CH_2_TDMA_DST_START_OFFSET_2_VAL_SHIFT                   0
#define DMA_CH_2_TDMA_DST_START_OFFSET_2_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_STRIDE_2                                 0x4111B0
/* DMA_CH_2_TDMA_DST_STRIDE_2 */
#define DMA_CH_2_TDMA_DST_STRIDE_2_VAL_SHIFT                         0
#define DMA_CH_2_TDMA_DST_STRIDE_2_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_ROI_BASE_3                               0x4111B4
/* DMA_CH_2_TDMA_DST_ROI_BASE_3 */
#define DMA_CH_2_TDMA_DST_ROI_BASE_3_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_DST_ROI_BASE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_ROI_SIZE_3                               0x4111B8
/* DMA_CH_2_TDMA_DST_ROI_SIZE_3 */
#define DMA_CH_2_TDMA_DST_ROI_SIZE_3_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_DST_ROI_SIZE_3_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_VALID_ELEMENTS_3                         0x4111BC
/* DMA_CH_2_TDMA_DST_VALID_ELEMENTS_3 */
#define DMA_CH_2_TDMA_DST_VALID_ELEMENTS_3_VAL_SHIFT                 0
#define DMA_CH_2_TDMA_DST_VALID_ELEMENTS_3_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_START_OFFSET_3                           0x4111C0
/* DMA_CH_2_TDMA_DST_START_OFFSET_3 */
#define DMA_CH_2_TDMA_DST_START_OFFSET_3_VAL_SHIFT                   0
#define DMA_CH_2_TDMA_DST_START_OFFSET_3_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_STRIDE_3                                 0x4111C4
/* DMA_CH_2_TDMA_DST_STRIDE_3 */
#define DMA_CH_2_TDMA_DST_STRIDE_3_VAL_SHIFT                         0
#define DMA_CH_2_TDMA_DST_STRIDE_3_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_ROI_BASE_4                               0x4111C8
/* DMA_CH_2_TDMA_DST_ROI_BASE_4 */
#define DMA_CH_2_TDMA_DST_ROI_BASE_4_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_DST_ROI_BASE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_ROI_SIZE_4                               0x4111CC
/* DMA_CH_2_TDMA_DST_ROI_SIZE_4 */
#define DMA_CH_2_TDMA_DST_ROI_SIZE_4_VAL_SHIFT                       0
#define DMA_CH_2_TDMA_DST_ROI_SIZE_4_VAL_MASK                        0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_VALID_ELEMENTS_4                         0x4111D0
/* DMA_CH_2_TDMA_DST_VALID_ELEMENTS_4 */
#define DMA_CH_2_TDMA_DST_VALID_ELEMENTS_4_VAL_SHIFT                 0
#define DMA_CH_2_TDMA_DST_VALID_ELEMENTS_4_VAL_MASK                  0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_START_OFFSET_4                           0x4111D4
/* DMA_CH_2_TDMA_DST_START_OFFSET_4 */
#define DMA_CH_2_TDMA_DST_START_OFFSET_4_VAL_SHIFT                   0
#define DMA_CH_2_TDMA_DST_START_OFFSET_4_VAL_MASK                    0xFFFFFFFF

#define mmDMA_CH_2_TDMA_DST_STRIDE_4                                 0x4111D8
/* DMA_CH_2_TDMA_DST_STRIDE_4 */
#define DMA_CH_2_TDMA_DST_STRIDE_4_VAL_SHIFT                         0
#define DMA_CH_2_TDMA_DST_STRIDE_4_VAL_MASK                          0xFFFFFFFF

#define mmDMA_CH_2_MEM_INIT_BUSY                                     0x4111FC
/* DMA_CH_2_MEM_INIT_BUSY */
#define DMA_CH_2_MEM_INIT_BUSY_SBC_DATA_SHIFT                        0
#define DMA_CH_2_MEM_INIT_BUSY_SBC_DATA_MASK                         0xFF
#define DMA_CH_2_MEM_INIT_BUSY_SBC_MD_SHIFT                          8
#define DMA_CH_2_MEM_INIT_BUSY_SBC_MD_MASK                           0x100

#endif /* ASIC_REG_DMA_CH_2_H_ */

