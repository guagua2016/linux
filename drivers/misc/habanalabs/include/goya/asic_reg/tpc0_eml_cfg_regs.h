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

#ifndef ASIC_REG_TPC0_EML_CFG_H_
#define ASIC_REG_TPC0_EML_CFG_H_

/*
 *****************************************
 *   TPC0_EML_CFG (Prototype: TPC_EML_CFG)
 *****************************************
 */

#define mmTPC0_EML_CFG_DBG_CNT                                       0x3040000
/* TPC0_EML_CFG_DBG_CNT */
#define TPC0_EML_CFG_DBG_CNT_DBG_ENTER_SHIFT                         0
#define TPC0_EML_CFG_DBG_CNT_DBG_ENTER_MASK                          0x1
#define TPC0_EML_CFG_DBG_CNT_DBG_EN_SHIFT                            1
#define TPC0_EML_CFG_DBG_CNT_DBG_EN_MASK                             0x2
#define TPC0_EML_CFG_DBG_CNT_CORE_RST_SHIFT                          2
#define TPC0_EML_CFG_DBG_CNT_CORE_RST_MASK                           0x4
#define TPC0_EML_CFG_DBG_CNT_DCACHE_INV_SHIFT                        4
#define TPC0_EML_CFG_DBG_CNT_DCACHE_INV_MASK                         0x10
#define TPC0_EML_CFG_DBG_CNT_ICACHE_INV_SHIFT                        5
#define TPC0_EML_CFG_DBG_CNT_ICACHE_INV_MASK                         0x20
#define TPC0_EML_CFG_DBG_CNT_DBG_EXIT_SHIFT                          6
#define TPC0_EML_CFG_DBG_CNT_DBG_EXIT_MASK                           0x40
#define TPC0_EML_CFG_DBG_CNT_SNG_STEP_SHIFT                          7
#define TPC0_EML_CFG_DBG_CNT_SNG_STEP_MASK                           0x80
#define TPC0_EML_CFG_DBG_CNT_BP_DBGSW_EN_SHIFT                       16
#define TPC0_EML_CFG_DBG_CNT_BP_DBGSW_EN_MASK                        0x10000

#define mmTPC0_EML_CFG_DBG_STS                                       0x3040004
/* TPC0_EML_CFG_DBG_STS */
#define TPC0_EML_CFG_DBG_STS_DBG_MODE_SHIFT                          0
#define TPC0_EML_CFG_DBG_STS_DBG_MODE_MASK                           0x1
#define TPC0_EML_CFG_DBG_STS_CORE_READY_SHIFT                        1
#define TPC0_EML_CFG_DBG_STS_CORE_READY_MASK                         0x2
#define TPC0_EML_CFG_DBG_STS_DURING_KERNEL_SHIFT                     2
#define TPC0_EML_CFG_DBG_STS_DURING_KERNEL_MASK                      0x4
#define TPC0_EML_CFG_DBG_STS_ICACHE_IDLE_SHIFT                       3
#define TPC0_EML_CFG_DBG_STS_ICACHE_IDLE_MASK                        0x8
#define TPC0_EML_CFG_DBG_STS_DCACHE_IDLE_SHIFT                       4
#define TPC0_EML_CFG_DBG_STS_DCACHE_IDLE_MASK                        0x10
#define TPC0_EML_CFG_DBG_STS_QM_IDLE_SHIFT                           5
#define TPC0_EML_CFG_DBG_STS_QM_IDLE_MASK                            0x20
#define TPC0_EML_CFG_DBG_STS_WQ_IDLE_SHIFT                           6
#define TPC0_EML_CFG_DBG_STS_WQ_IDLE_MASK                            0x40
#define TPC0_EML_CFG_DBG_STS_MSS_IDLE_SHIFT                          7
#define TPC0_EML_CFG_DBG_STS_MSS_IDLE_MASK                           0x80
#define TPC0_EML_CFG_DBG_STS_DBG_CAUSE_SHIFT                         8
#define TPC0_EML_CFG_DBG_STS_DBG_CAUSE_MASK                          0xFFFFFF00

#define mmTPC0_EML_CFG_DBG_PADD_0                                    0x3040008

#define mmTPC0_EML_CFG_DBG_PADD_1                                    0x304000C

#define mmTPC0_EML_CFG_DBG_PADD_2                                    0x3040010

#define mmTPC0_EML_CFG_DBG_PADD_3                                    0x3040014

#define mmTPC0_EML_CFG_DBG_PADD_4                                    0x3040018

#define mmTPC0_EML_CFG_DBG_PADD_5                                    0x304001C

#define mmTPC0_EML_CFG_DBG_PADD_6                                    0x3040020

#define mmTPC0_EML_CFG_DBG_PADD_7                                    0x3040024
/* TPC0_EML_CFG_DBG_PADD */
#define TPC0_EML_CFG_DBG_PADD_ADDRESS_SHIFT                          0
#define TPC0_EML_CFG_DBG_PADD_ADDRESS_MASK                           0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_PADD_COUNT_0                              0x3040028

#define mmTPC0_EML_CFG_DBG_PADD_COUNT_1                              0x304002C

#define mmTPC0_EML_CFG_DBG_PADD_COUNT_2                              0x3040030

#define mmTPC0_EML_CFG_DBG_PADD_COUNT_3                              0x3040034

#define mmTPC0_EML_CFG_DBG_PADD_COUNT_4                              0x3040038

#define mmTPC0_EML_CFG_DBG_PADD_COUNT_5                              0x304003C

#define mmTPC0_EML_CFG_DBG_PADD_COUNT_6                              0x3040040

#define mmTPC0_EML_CFG_DBG_PADD_COUNT_7                              0x3040044
/* TPC0_EML_CFG_DBG_PADD_COUNT */
#define TPC0_EML_CFG_DBG_PADD_COUNT_COUNT_SHIFT                      0
#define TPC0_EML_CFG_DBG_PADD_COUNT_COUNT_MASK                       0xFF

#define mmTPC0_EML_CFG_DBG_PADD_COUNT_MATCH_0                        0x3040048

#define mmTPC0_EML_CFG_DBG_PADD_COUNT_MATCH_1                        0x304004C

#define mmTPC0_EML_CFG_DBG_PADD_COUNT_MATCH_2                        0x3040050

#define mmTPC0_EML_CFG_DBG_PADD_COUNT_MATCH_3                        0x3040054

#define mmTPC0_EML_CFG_DBG_PADD_COUNT_MATCH_4                        0x3040058

#define mmTPC0_EML_CFG_DBG_PADD_COUNT_MATCH_5                        0x304005C

#define mmTPC0_EML_CFG_DBG_PADD_COUNT_MATCH_6                        0x3040060

#define mmTPC0_EML_CFG_DBG_PADD_COUNT_MATCH_7                        0x3040064
/* TPC0_EML_CFG_DBG_PADD_COUNT_MATCH */
#define TPC0_EML_CFG_DBG_PADD_COUNT_MATCH_COUNT_SHIFT                0
#define TPC0_EML_CFG_DBG_PADD_COUNT_MATCH_COUNT_MASK                 0xFF

#define mmTPC0_EML_CFG_DBG_PADD_EN                                   0x3040068
/* TPC0_EML_CFG_DBG_PADD_EN */
#define TPC0_EML_CFG_DBG_PADD_EN_ENABLE0_SHIFT                       0
#define TPC0_EML_CFG_DBG_PADD_EN_ENABLE0_MASK                        0x1
#define TPC0_EML_CFG_DBG_PADD_EN_ENABLE1_SHIFT                       1
#define TPC0_EML_CFG_DBG_PADD_EN_ENABLE1_MASK                        0x2
#define TPC0_EML_CFG_DBG_PADD_EN_ENABLE2_SHIFT                       2
#define TPC0_EML_CFG_DBG_PADD_EN_ENABLE2_MASK                        0x4
#define TPC0_EML_CFG_DBG_PADD_EN_ENABLE3_SHIFT                       3
#define TPC0_EML_CFG_DBG_PADD_EN_ENABLE3_MASK                        0x8
#define TPC0_EML_CFG_DBG_PADD_EN_ENABLE4_SHIFT                       4
#define TPC0_EML_CFG_DBG_PADD_EN_ENABLE4_MASK                        0x10
#define TPC0_EML_CFG_DBG_PADD_EN_ENABLE5_SHIFT                       5
#define TPC0_EML_CFG_DBG_PADD_EN_ENABLE5_MASK                        0x20
#define TPC0_EML_CFG_DBG_PADD_EN_ENABLE6_SHIFT                       6
#define TPC0_EML_CFG_DBG_PADD_EN_ENABLE6_MASK                        0x40
#define TPC0_EML_CFG_DBG_PADD_EN_ENABLE7_SHIFT                       7
#define TPC0_EML_CFG_DBG_PADD_EN_ENABLE7_MASK                        0x80

#define mmTPC0_EML_CFG_DBG_VPADD_HIGH_0                              0x304006C

#define mmTPC0_EML_CFG_DBG_VPADD_HIGH_1                              0x3040070
/* TPC0_EML_CFG_DBG_VPADD_HIGH */
#define TPC0_EML_CFG_DBG_VPADD_HIGH_ADDRESS_SHIFT                    0
#define TPC0_EML_CFG_DBG_VPADD_HIGH_ADDRESS_MASK                     0x1FF

#define mmTPC0_EML_CFG_DBG_VPADD_LOW_0                               0x3040074

#define mmTPC0_EML_CFG_DBG_VPADD_LOW_1                               0x3040078
/* TPC0_EML_CFG_DBG_VPADD_LOW */
#define TPC0_EML_CFG_DBG_VPADD_LOW_ADDRESS_SHIFT                     0
#define TPC0_EML_CFG_DBG_VPADD_LOW_ADDRESS_MASK                      0x1FF

#define mmTPC0_EML_CFG_DBG_VPADD_COUNT_0                             0x304007C

#define mmTPC0_EML_CFG_DBG_VPADD_COUNT_1                             0x3040080
/* TPC0_EML_CFG_DBG_VPADD_COUNT */
#define TPC0_EML_CFG_DBG_VPADD_COUNT_COUNT_SHIFT                     0
#define TPC0_EML_CFG_DBG_VPADD_COUNT_COUNT_MASK                      0xFF

#define mmTPC0_EML_CFG_DBG_VPADD_COUNT_MATCH_0                       0x3040084

#define mmTPC0_EML_CFG_DBG_VPADD_COUNT_MATCH_1                       0x3040088
/* TPC0_EML_CFG_DBG_VPADD_COUNT_MATCH */
#define TPC0_EML_CFG_DBG_VPADD_COUNT_MATCH_COUNT_SHIFT               0
#define TPC0_EML_CFG_DBG_VPADD_COUNT_MATCH_COUNT_MASK                0xFF

#define mmTPC0_EML_CFG_DBG_VPADD_EN                                  0x304008C
/* TPC0_EML_CFG_DBG_VPADD_EN */
#define TPC0_EML_CFG_DBG_VPADD_EN_ENABLE0_SHIFT                      0
#define TPC0_EML_CFG_DBG_VPADD_EN_ENABLE0_MASK                       0x1
#define TPC0_EML_CFG_DBG_VPADD_EN_ENABLE1_SHIFT                      1
#define TPC0_EML_CFG_DBG_VPADD_EN_ENABLE1_MASK                       0x2
#define TPC0_EML_CFG_DBG_VPADD_EN_RW_N0_SHIFT                        2
#define TPC0_EML_CFG_DBG_VPADD_EN_RW_N0_MASK                         0x4
#define TPC0_EML_CFG_DBG_VPADD_EN_RW_N1_SHIFT                        3
#define TPC0_EML_CFG_DBG_VPADD_EN_RW_N1_MASK                         0x8

#define mmTPC0_EML_CFG_DBG_SPADD_HIGH_0                              0x3040090

#define mmTPC0_EML_CFG_DBG_SPADD_HIGH_1                              0x3040094
/* TPC0_EML_CFG_DBG_SPADD_HIGH */
#define TPC0_EML_CFG_DBG_SPADD_HIGH_ADDRESS_SHIFT                    0
#define TPC0_EML_CFG_DBG_SPADD_HIGH_ADDRESS_MASK                     0xFF

#define mmTPC0_EML_CFG_DBG_SPADD_LOW_0                               0x3040098

#define mmTPC0_EML_CFG_DBG_SPADD_LOW_1                               0x304009C
/* TPC0_EML_CFG_DBG_SPADD_LOW */
#define TPC0_EML_CFG_DBG_SPADD_LOW_ADDRESS_SHIFT                     0
#define TPC0_EML_CFG_DBG_SPADD_LOW_ADDRESS_MASK                      0xFF

#define mmTPC0_EML_CFG_DBG_SPADD_COUNT_0                             0x30400A0

#define mmTPC0_EML_CFG_DBG_SPADD_COUNT_1                             0x30400A4
/* TPC0_EML_CFG_DBG_SPADD_COUNT */
#define TPC0_EML_CFG_DBG_SPADD_COUNT_COUNT_SHIFT                     0
#define TPC0_EML_CFG_DBG_SPADD_COUNT_COUNT_MASK                      0xFF

#define mmTPC0_EML_CFG_DBG_SPADD_COUNT_MATCH_0                       0x30400A8

#define mmTPC0_EML_CFG_DBG_SPADD_COUNT_MATCH_1                       0x30400AC
/* TPC0_EML_CFG_DBG_SPADD_COUNT_MATCH */
#define TPC0_EML_CFG_DBG_SPADD_COUNT_MATCH_COUNT_SHIFT               0
#define TPC0_EML_CFG_DBG_SPADD_COUNT_MATCH_COUNT_MASK                0xFF

#define mmTPC0_EML_CFG_DBG_SPADD_EN                                  0x30400B0
/* TPC0_EML_CFG_DBG_SPADD_EN */
#define TPC0_EML_CFG_DBG_SPADD_EN_ENABLE0_SHIFT                      0
#define TPC0_EML_CFG_DBG_SPADD_EN_ENABLE0_MASK                       0x1
#define TPC0_EML_CFG_DBG_SPADD_EN_ENABLE1_SHIFT                      1
#define TPC0_EML_CFG_DBG_SPADD_EN_ENABLE1_MASK                       0x2
#define TPC0_EML_CFG_DBG_SPADD_EN_RW_N0_SHIFT                        2
#define TPC0_EML_CFG_DBG_SPADD_EN_RW_N0_MASK                         0x4
#define TPC0_EML_CFG_DBG_SPADD_EN_RW_N1_SHIFT                        3
#define TPC0_EML_CFG_DBG_SPADD_EN_RW_N1_MASK                         0x8

#define mmTPC0_EML_CFG_DBG_AGUADD_MSB_HIGH_0                         0x30400B4

#define mmTPC0_EML_CFG_DBG_AGUADD_MSB_HIGH_1                         0x30400B8
/* TPC0_EML_CFG_DBG_AGUADD_MSB_HIGH */
#define TPC0_EML_CFG_DBG_AGUADD_MSB_HIGH_ADDRESS_SHIFT               0
#define TPC0_EML_CFG_DBG_AGUADD_MSB_HIGH_ADDRESS_MASK                0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_AGUADD_MSB_LOW_0                          0x30400BC

#define mmTPC0_EML_CFG_DBG_AGUADD_MSB_LOW_1                          0x30400C0
/* TPC0_EML_CFG_DBG_AGUADD_MSB_LOW */
#define TPC0_EML_CFG_DBG_AGUADD_MSB_LOW_ADDRESS_SHIFT                0
#define TPC0_EML_CFG_DBG_AGUADD_MSB_LOW_ADDRESS_MASK                 0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_AGUADD_LSB_HIGH_0                         0x30400C4

#define mmTPC0_EML_CFG_DBG_AGUADD_LSB_HIGH_1                         0x30400C8
/* TPC0_EML_CFG_DBG_AGUADD_LSB_HIGH */
#define TPC0_EML_CFG_DBG_AGUADD_LSB_HIGH_ADDRESS_SHIFT               0
#define TPC0_EML_CFG_DBG_AGUADD_LSB_HIGH_ADDRESS_MASK                0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_AGUADD_LSB_LOW_0                          0x30400CC

#define mmTPC0_EML_CFG_DBG_AGUADD_LSB_LOW_1                          0x30400D0
/* TPC0_EML_CFG_DBG_AGUADD_LSB_LOW */
#define TPC0_EML_CFG_DBG_AGUADD_LSB_LOW_ADDRESS_SHIFT                0
#define TPC0_EML_CFG_DBG_AGUADD_LSB_LOW_ADDRESS_MASK                 0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_AGUADD_COUNT_0                            0x30400D4

#define mmTPC0_EML_CFG_DBG_AGUADD_COUNT_1                            0x30400D8
/* TPC0_EML_CFG_DBG_AGUADD_COUNT */
#define TPC0_EML_CFG_DBG_AGUADD_COUNT_COUNT_SHIFT                    0
#define TPC0_EML_CFG_DBG_AGUADD_COUNT_COUNT_MASK                     0xFF

#define mmTPC0_EML_CFG_DBG_AGUADD_COUNT_MATCH_0                      0x30400DC

#define mmTPC0_EML_CFG_DBG_AGUADD_COUNT_MATCH_1                      0x30400E0
/* TPC0_EML_CFG_DBG_AGUADD_COUNT_MATCH */
#define TPC0_EML_CFG_DBG_AGUADD_COUNT_MATCH_COUNT_SHIFT              0
#define TPC0_EML_CFG_DBG_AGUADD_COUNT_MATCH_COUNT_MASK               0xFF

#define mmTPC0_EML_CFG_DBG_AGUADD_EN                                 0x30400E4
/* TPC0_EML_CFG_DBG_AGUADD_EN */
#define TPC0_EML_CFG_DBG_AGUADD_EN_ENABLE0_SHIFT                     0
#define TPC0_EML_CFG_DBG_AGUADD_EN_ENABLE0_MASK                      0x1
#define TPC0_EML_CFG_DBG_AGUADD_EN_ENABLE1_SHIFT                     1
#define TPC0_EML_CFG_DBG_AGUADD_EN_ENABLE1_MASK                      0x2
#define TPC0_EML_CFG_DBG_AGUADD_EN_RW_N0_SHIFT                       2
#define TPC0_EML_CFG_DBG_AGUADD_EN_RW_N0_MASK                        0x4
#define TPC0_EML_CFG_DBG_AGUADD_EN_RW_N1_SHIFT                       3
#define TPC0_EML_CFG_DBG_AGUADD_EN_RW_N1_MASK                        0x8

#define mmTPC0_EML_CFG_DBG_AXIHBWADD_MSB_HIGH_0                      0x30400E8

#define mmTPC0_EML_CFG_DBG_AXIHBWADD_MSB_HIGH_1                      0x30400EC
/* TPC0_EML_CFG_DBG_AXIHBWADD_MSB_HIGH */
#define TPC0_EML_CFG_DBG_AXIHBWADD_MSB_HIGH_ADDRESS_SHIFT            0
#define TPC0_EML_CFG_DBG_AXIHBWADD_MSB_HIGH_ADDRESS_MASK             0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_AXIHBWADD_MSB_LOW_0                       0x30400F0

#define mmTPC0_EML_CFG_DBG_AXIHBWADD_MSB_LOW_1                       0x30400F4
/* TPC0_EML_CFG_DBG_AXIHBWADD_MSB_LOW */
#define TPC0_EML_CFG_DBG_AXIHBWADD_MSB_LOW_ADDRESS_SHIFT             0
#define TPC0_EML_CFG_DBG_AXIHBWADD_MSB_LOW_ADDRESS_MASK              0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_AXIHBWADD_LSB_HIGH_0                      0x30400F8

#define mmTPC0_EML_CFG_DBG_AXIHBWADD_LSB_HIGH_1                      0x30400FC
/* TPC0_EML_CFG_DBG_AXIHBWADD_LSB_HIGH */
#define TPC0_EML_CFG_DBG_AXIHBWADD_LSB_HIGH_ADDRESS_SHIFT            0
#define TPC0_EML_CFG_DBG_AXIHBWADD_LSB_HIGH_ADDRESS_MASK             0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_AXIHBWADD_LSB_LOW_0                       0x3040100

#define mmTPC0_EML_CFG_DBG_AXIHBWADD_LSB_LOW_1                       0x3040104
/* TPC0_EML_CFG_DBG_AXIHBWADD_LSB_LOW */
#define TPC0_EML_CFG_DBG_AXIHBWADD_LSB_LOW_ADDRESS_SHIFT             0
#define TPC0_EML_CFG_DBG_AXIHBWADD_LSB_LOW_ADDRESS_MASK              0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_AXIHBWADD_COUNT_0                         0x3040108

#define mmTPC0_EML_CFG_DBG_AXIHBWADD_COUNT_1                         0x304010C
/* TPC0_EML_CFG_DBG_AXIHBWADD_COUNT */
#define TPC0_EML_CFG_DBG_AXIHBWADD_COUNT_COUNT_SHIFT                 0
#define TPC0_EML_CFG_DBG_AXIHBWADD_COUNT_COUNT_MASK                  0xFF

#define mmTPC0_EML_CFG_DBG_AXIHBWADD_COUNT_MATCH_0                   0x3040110

#define mmTPC0_EML_CFG_DBG_AXIHBWADD_COUNT_MATCH_1                   0x3040114
/* TPC0_EML_CFG_DBG_AXIHBWADD_COUNT_MATCH */
#define TPC0_EML_CFG_DBG_AXIHBWADD_COUNT_MATCH_MATCH_SHIFT           0
#define TPC0_EML_CFG_DBG_AXIHBWADD_COUNT_MATCH_MATCH_MASK            0xFF

#define mmTPC0_EML_CFG_DBG_AXIHBWADD_EN                              0x3040118
/* TPC0_EML_CFG_DBG_AXIHBWADD_EN */
#define TPC0_EML_CFG_DBG_AXIHBWADD_EN_ENABLE0_SHIFT                  0
#define TPC0_EML_CFG_DBG_AXIHBWADD_EN_ENABLE0_MASK                   0x1
#define TPC0_EML_CFG_DBG_AXIHBWADD_EN_ENABLE1_SHIFT                  1
#define TPC0_EML_CFG_DBG_AXIHBWADD_EN_ENABLE1_MASK                   0x2
#define TPC0_EML_CFG_DBG_AXIHBWADD_EN_RW_N0_SHIFT                    2
#define TPC0_EML_CFG_DBG_AXIHBWADD_EN_RW_N0_MASK                     0x4
#define TPC0_EML_CFG_DBG_AXIHBWADD_EN_RW_N1_SHIFT                    3
#define TPC0_EML_CFG_DBG_AXIHBWADD_EN_RW_N1_MASK                     0x8

#define mmTPC0_EML_CFG_DBG_AXILBWADD_MSB_HIGH_0                      0x304011C

#define mmTPC0_EML_CFG_DBG_AXILBWADD_MSB_HIGH_1                      0x3040120
/* TPC0_EML_CFG_DBG_AXILBWADD_MSB_HIGH */
#define TPC0_EML_CFG_DBG_AXILBWADD_MSB_HIGH_ADDRESS_SHIFT            0
#define TPC0_EML_CFG_DBG_AXILBWADD_MSB_HIGH_ADDRESS_MASK             0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_AXILBWADD_MSB_LOW_0                       0x3040124

#define mmTPC0_EML_CFG_DBG_AXILBWADD_MSB_LOW_1                       0x3040128
/* TPC0_EML_CFG_DBG_AXILBWADD_MSB_LOW */
#define TPC0_EML_CFG_DBG_AXILBWADD_MSB_LOW_ADDRESS_SHIFT             0
#define TPC0_EML_CFG_DBG_AXILBWADD_MSB_LOW_ADDRESS_MASK              0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_AXILBWADD_LSB_HIGH_0                      0x304012C

#define mmTPC0_EML_CFG_DBG_AXILBWADD_LSB_HIGH_1                      0x3040130
/* TPC0_EML_CFG_DBG_AXILBWADD_LSB_HIGH */
#define TPC0_EML_CFG_DBG_AXILBWADD_LSB_HIGH_ADDRESS_SHIFT            0
#define TPC0_EML_CFG_DBG_AXILBWADD_LSB_HIGH_ADDRESS_MASK             0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_AXILBWADD_LSB_LOW_0                       0x3040134

#define mmTPC0_EML_CFG_DBG_AXILBWADD_LSB_LOW_1                       0x3040138
/* TPC0_EML_CFG_DBG_AXILBWADD_LSB_LOW */
#define TPC0_EML_CFG_DBG_AXILBWADD_LSB_LOW_ADDRESS_SHIFT             0
#define TPC0_EML_CFG_DBG_AXILBWADD_LSB_LOW_ADDRESS_MASK              0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_AXILBWADD_COUNT_0                         0x304013C

#define mmTPC0_EML_CFG_DBG_AXILBWADD_COUNT_1                         0x3040140
/* TPC0_EML_CFG_DBG_AXILBWADD_COUNT */
#define TPC0_EML_CFG_DBG_AXILBWADD_COUNT_COUNT_SHIFT                 0
#define TPC0_EML_CFG_DBG_AXILBWADD_COUNT_COUNT_MASK                  0xFF

#define mmTPC0_EML_CFG_DBG_AXILBWADD_COUNT_MATCH_0                   0x3040144

#define mmTPC0_EML_CFG_DBG_AXILBWADD_COUNT_MATCH_1                   0x3040148
/* TPC0_EML_CFG_DBG_AXILBWADD_COUNT_MATCH */
#define TPC0_EML_CFG_DBG_AXILBWADD_COUNT_MATCH_MATCH_SHIFT           0
#define TPC0_EML_CFG_DBG_AXILBWADD_COUNT_MATCH_MATCH_MASK            0xFF

#define mmTPC0_EML_CFG_DBG_AXILBWADD_EN                              0x304014C
/* TPC0_EML_CFG_DBG_AXILBWADD_EN */
#define TPC0_EML_CFG_DBG_AXILBWADD_EN_ENABLE0_SHIFT                  0
#define TPC0_EML_CFG_DBG_AXILBWADD_EN_ENABLE0_MASK                   0x1
#define TPC0_EML_CFG_DBG_AXILBWADD_EN_ENABLE1_SHIFT                  1
#define TPC0_EML_CFG_DBG_AXILBWADD_EN_ENABLE1_MASK                   0x2
#define TPC0_EML_CFG_DBG_AXILBWADD_EN_RW_N0_SHIFT                    2
#define TPC0_EML_CFG_DBG_AXILBWADD_EN_RW_N0_MASK                     0x4
#define TPC0_EML_CFG_DBG_AXILBWADD_EN_RW_N1_SHIFT                    3
#define TPC0_EML_CFG_DBG_AXILBWADD_EN_RW_N1_MASK                     0x8

#define mmTPC0_EML_CFG_DBG_SPDATA_0                                  0x3040150

#define mmTPC0_EML_CFG_DBG_SPDATA_1                                  0x3040154
/* TPC0_EML_CFG_DBG_SPDATA */
#define TPC0_EML_CFG_DBG_SPDATA_DATA_SHIFT                           0
#define TPC0_EML_CFG_DBG_SPDATA_DATA_MASK                            0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_SPDATA_COUNT_0                            0x3040158

#define mmTPC0_EML_CFG_DBG_SPDATA_COUNT_1                            0x304015C
/* TPC0_EML_CFG_DBG_SPDATA_COUNT */
#define TPC0_EML_CFG_DBG_SPDATA_COUNT_COUNT_SHIFT                    0
#define TPC0_EML_CFG_DBG_SPDATA_COUNT_COUNT_MASK                     0xFF

#define mmTPC0_EML_CFG_DBG_SPDATA_COUNT_MATCH_0                      0x3040160

#define mmTPC0_EML_CFG_DBG_SPDATA_COUNT_MATCH_1                      0x3040164
/* TPC0_EML_CFG_DBG_SPDATA_COUNT_MATCH */
#define TPC0_EML_CFG_DBG_SPDATA_COUNT_MATCH_MATCH_SHIFT              0
#define TPC0_EML_CFG_DBG_SPDATA_COUNT_MATCH_MATCH_MASK               0xFF

#define mmTPC0_EML_CFG_DBG_SPDATA_EN                                 0x3040168
/* TPC0_EML_CFG_DBG_SPDATA_EN */
#define TPC0_EML_CFG_DBG_SPDATA_EN_ENABLE0_SHIFT                     0
#define TPC0_EML_CFG_DBG_SPDATA_EN_ENABLE0_MASK                      0x1
#define TPC0_EML_CFG_DBG_SPDATA_EN_ENABLE1_SHIFT                     1
#define TPC0_EML_CFG_DBG_SPDATA_EN_ENABLE1_MASK                      0x2
#define TPC0_EML_CFG_DBG_SPDATA_EN_RW_N0_SHIFT                       2
#define TPC0_EML_CFG_DBG_SPDATA_EN_RW_N0_MASK                        0x4
#define TPC0_EML_CFG_DBG_SPDATA_EN_RW_N1_SHIFT                       3
#define TPC0_EML_CFG_DBG_SPDATA_EN_RW_N1_MASK                        0x8

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_0                              0x304016C

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_1                              0x3040170

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_2                              0x3040174

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_3                              0x3040178

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_4                              0x304017C

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_5                              0x3040180

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_6                              0x3040184

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_7                              0x3040188

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_8                              0x304018C

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_9                              0x3040190

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_10                             0x3040194

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_11                             0x3040198

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_12                             0x304019C

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_13                             0x30401A0

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_14                             0x30401A4

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_15                             0x30401A8

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_16                             0x30401AC

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_17                             0x30401B0

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_18                             0x30401B4

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_19                             0x30401B8

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_20                             0x30401BC

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_21                             0x30401C0

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_22                             0x30401C4

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_23                             0x30401C8

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_24                             0x30401CC

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_25                             0x30401D0

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_26                             0x30401D4

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_27                             0x30401D8

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_28                             0x30401DC

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_29                             0x30401E0

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_30                             0x30401E4

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_31                             0x30401E8
/* TPC0_EML_CFG_DBG_AXIHBWDATA */
#define TPC0_EML_CFG_DBG_AXIHBWDATA_DATA_SHIFT                       0
#define TPC0_EML_CFG_DBG_AXIHBWDATA_DATA_MASK                        0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_COUNT                          0x30401EC
/* TPC0_EML_CFG_DBG_AXIHBWDATA_COUNT */
#define TPC0_EML_CFG_DBG_AXIHBWDATA_COUNT_COUNT_SHIFT                0
#define TPC0_EML_CFG_DBG_AXIHBWDATA_COUNT_COUNT_MASK                 0xFF

#define mmTPC0_EML_CFG_DBG_AXIHBWDAT_COUNT_MATCH                     0x30401F0
/* TPC0_EML_CFG_DBG_AXIHBWDAT_COUNT_MATCH */
#define TPC0_EML_CFG_DBG_AXIHBWDAT_COUNT_MATCH_COUNT_SHIFT           0
#define TPC0_EML_CFG_DBG_AXIHBWDAT_COUNT_MATCH_COUNT_MASK            0xFF

#define mmTPC0_EML_CFG_DBG_AXIHBWDATA_EN                             0x30401F4
/* TPC0_EML_CFG_DBG_AXIHBWDATA_EN */
#define TPC0_EML_CFG_DBG_AXIHBWDATA_EN_ENABLE_SHIFT                  0
#define TPC0_EML_CFG_DBG_AXIHBWDATA_EN_ENABLE_MASK                   0x1
#define TPC0_EML_CFG_DBG_AXIHBWDATA_EN_RW_N_SHIFT                    1
#define TPC0_EML_CFG_DBG_AXIHBWDATA_EN_RW_N_MASK                     0x2

#define mmTPC0_EML_CFG_DBG_AXILBWDATA                                0x30401F8
/* TPC0_EML_CFG_DBG_AXILBWDATA */
#define TPC0_EML_CFG_DBG_AXILBWDATA_DATA_SHIFT                       0
#define TPC0_EML_CFG_DBG_AXILBWDATA_DATA_MASK                        0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_AXILBWDATA_COUNT                          0x30401FC
/* TPC0_EML_CFG_DBG_AXILBWDATA_COUNT */
#define TPC0_EML_CFG_DBG_AXILBWDATA_COUNT_COUNT_SHIFT                0
#define TPC0_EML_CFG_DBG_AXILBWDATA_COUNT_COUNT_MASK                 0xFF

#define mmTPC0_EML_CFG_DBG_AXILBWDAT_COUNT_MATCH                     0x3040200
/* TPC0_EML_CFG_DBG_AXILBWDAT_COUNT_MATCH */
#define TPC0_EML_CFG_DBG_AXILBWDAT_COUNT_MATCH_MATCH_SHIFT           0
#define TPC0_EML_CFG_DBG_AXILBWDAT_COUNT_MATCH_MATCH_MASK            0xFF

#define mmTPC0_EML_CFG_DBG_AXILBWDATA_EN                             0x3040204
/* TPC0_EML_CFG_DBG_AXILBWDATA_EN */
#define TPC0_EML_CFG_DBG_AXILBWDATA_EN_ENABLE_SHIFT                  0
#define TPC0_EML_CFG_DBG_AXILBWDATA_EN_ENABLE_MASK                   0x1
#define TPC0_EML_CFG_DBG_AXILBWDATA_EN_RW_N_SHIFT                    1
#define TPC0_EML_CFG_DBG_AXILBWDATA_EN_RW_N_MASK                     0x2

#define mmTPC0_EML_CFG_DBG_D0_PC                                     0x3040208
/* TPC0_EML_CFG_DBG_D0_PC */
#define TPC0_EML_CFG_DBG_D0_PC_PC_SHIFT                              0
#define TPC0_EML_CFG_DBG_D0_PC_PC_MASK                               0xFFFFFFFF

#define mmTPC0_EML_CFG_RTTCONFIG                                     0x3040300
/* TPC0_EML_CFG_RTTCONFIG */
#define TPC0_EML_CFG_RTTCONFIG_TR_EN_SHIFT                           0
#define TPC0_EML_CFG_RTTCONFIG_TR_EN_MASK                            0x1
#define TPC0_EML_CFG_RTTCONFIG_PRIO_SHIFT                            1
#define TPC0_EML_CFG_RTTCONFIG_PRIO_MASK                             0x2

#define mmTPC0_EML_CFG_RTTPREDICATE                                  0x3040304
/* TPC0_EML_CFG_RTTPREDICATE */
#define TPC0_EML_CFG_RTTPREDICATE_TR_EN_SHIFT                        0
#define TPC0_EML_CFG_RTTPREDICATE_TR_EN_MASK                         0x1
#define TPC0_EML_CFG_RTTPREDICATE_GEN_SHIFT                          1
#define TPC0_EML_CFG_RTTPREDICATE_GEN_MASK                           0x2
#define TPC0_EML_CFG_RTTPREDICATE_USE_INTERVAL_SHIFT                 2
#define TPC0_EML_CFG_RTTPREDICATE_USE_INTERVAL_MASK                  0x4
#define TPC0_EML_CFG_RTTPREDICATE_SPRF_MASK_SHIFT                    16
#define TPC0_EML_CFG_RTTPREDICATE_SPRF_MASK_MASK                     0xFFFF0000

#define mmTPC0_EML_CFG_RTTPREDICATE_INTV                             0x3040308
/* TPC0_EML_CFG_RTTPREDICATE_INTV */
#define TPC0_EML_CFG_RTTPREDICATE_INTV_INTERVAL_SHIFT                0
#define TPC0_EML_CFG_RTTPREDICATE_INTV_INTERVAL_MASK                 0xFFFFFFFF

#define mmTPC0_EML_CFG_RTTTS                                         0x304030C
/* TPC0_EML_CFG_RTTTS */
#define TPC0_EML_CFG_RTTTS_TR_EN_SHIFT                               0
#define TPC0_EML_CFG_RTTTS_TR_EN_MASK                                0x1
#define TPC0_EML_CFG_RTTTS_GEN_SHIFT                                 1
#define TPC0_EML_CFG_RTTTS_GEN_MASK                                  0x2
#define TPC0_EML_CFG_RTTTS_COMPRESS_EN_SHIFT                         2
#define TPC0_EML_CFG_RTTTS_COMPRESS_EN_MASK                          0x4

#define mmTPC0_EML_CFG_RTTTS_INTV                                    0x3040310
/* TPC0_EML_CFG_RTTTS_INTV */
#define TPC0_EML_CFG_RTTTS_INTV_INTERVAL_SHIFT                       0
#define TPC0_EML_CFG_RTTTS_INTV_INTERVAL_MASK                        0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_INST_INSERT_0                             0x3040314

#define mmTPC0_EML_CFG_DBG_INST_INSERT_1                             0x3040318

#define mmTPC0_EML_CFG_DBG_INST_INSERT_2                             0x304031C

#define mmTPC0_EML_CFG_DBG_INST_INSERT_3                             0x3040320

#define mmTPC0_EML_CFG_DBG_INST_INSERT_4                             0x3040324

#define mmTPC0_EML_CFG_DBG_INST_INSERT_5                             0x3040328

#define mmTPC0_EML_CFG_DBG_INST_INSERT_6                             0x304032C

#define mmTPC0_EML_CFG_DBG_INST_INSERT_7                             0x3040330
/* TPC0_EML_CFG_DBG_INST_INSERT */
#define TPC0_EML_CFG_DBG_INST_INSERT_INST_SHIFT                      0
#define TPC0_EML_CFG_DBG_INST_INSERT_INST_MASK                       0xFFFFFFFF

#define mmTPC0_EML_CFG_DBG_INST_INSERT_CTL                           0x3040334
/* TPC0_EML_CFG_DBG_INST_INSERT_CTL */
#define TPC0_EML_CFG_DBG_INST_INSERT_CTL_INSERT_SHIFT                0
#define TPC0_EML_CFG_DBG_INST_INSERT_CTL_INSERT_MASK                 0x1

#endif /* ASIC_REG_TPC0_EML_CFG_H_ */

