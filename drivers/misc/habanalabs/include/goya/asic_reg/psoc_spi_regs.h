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

#ifndef ASIC_REG_PSOC_SPI_H_
#define ASIC_REG_PSOC_SPI_H_

/*
 *****************************************
 *   PSOC_SPI (Prototype: SPI)
 *****************************************
 */

#define mmPSOC_SPI_CTRLR0                                            0xC43000
/* PSOC_SPI_CTRLR0 */
#define PSOC_SPI_CTRLR0_DFS_SHIFT                                    0
#define PSOC_SPI_CTRLR0_DFS_MASK                                     0xF
#define PSOC_SPI_CTRLR0_FRF_SHIFT                                    4
#define PSOC_SPI_CTRLR0_FRF_MASK                                     0x30
#define PSOC_SPI_CTRLR0_SCPH_SHIFT                                   6
#define PSOC_SPI_CTRLR0_SCPH_MASK                                    0x40
#define PSOC_SPI_CTRLR0_SCPOL_SHIFT                                  7
#define PSOC_SPI_CTRLR0_SCPOL_MASK                                   0x80
#define PSOC_SPI_CTRLR0_TMOD_SHIFT                                   8
#define PSOC_SPI_CTRLR0_TMOD_MASK                                    0x300
#define PSOC_SPI_CTRLR0_RSVD_SLV_OE_SHIFT                            10
#define PSOC_SPI_CTRLR0_RSVD_SLV_OE_MASK                             0x400
#define PSOC_SPI_CTRLR0_SRL_SHIFT                                    11
#define PSOC_SPI_CTRLR0_SRL_MASK                                     0x800
#define PSOC_SPI_CTRLR0_CFS_SHIFT                                    12
#define PSOC_SPI_CTRLR0_CFS_MASK                                     0xF000
#define PSOC_SPI_CTRLR0_DFS_32_SHIFT                                 16
#define PSOC_SPI_CTRLR0_DFS_32_MASK                                  0x1F0000
#define PSOC_SPI_CTRLR0_SPI_FRF_SHIFT                                21
#define PSOC_SPI_CTRLR0_SPI_FRF_MASK                                 0x600000
#define PSOC_SPI_CTRLR0_RSVD_CTRLR0_SHIFT                            23
#define PSOC_SPI_CTRLR0_RSVD_CTRLR0_MASK                             0xFF800000

#define mmPSOC_SPI_CTRLR1                                            0xC43004
/* PSOC_SPI_CTRLR1 */
#define PSOC_SPI_CTRLR1_NDF_SHIFT                                    0
#define PSOC_SPI_CTRLR1_NDF_MASK                                     0xFFFF
#define PSOC_SPI_CTRLR1_RSVD_CTRLR1_SHIFT                            16
#define PSOC_SPI_CTRLR1_RSVD_CTRLR1_MASK                             0xFFFF0000

#define mmPSOC_SPI_SSIENR                                            0xC43008
/* PSOC_SPI_SSIENR */
#define PSOC_SPI_SSIENR_SSI_EN_SHIFT                                 0
#define PSOC_SPI_SSIENR_SSI_EN_MASK                                  0x1
#define PSOC_SPI_SSIENR_RSVD_SSIENR_SHIFT                            1
#define PSOC_SPI_SSIENR_RSVD_SSIENR_MASK                             0xFFFFFFFE

#define mmPSOC_SPI_MWCR                                              0xC4300C
/* PSOC_SPI_MWCR */
#define PSOC_SPI_MWCR_MWMOD_SHIFT                                    0
#define PSOC_SPI_MWCR_MWMOD_MASK                                     0x1
#define PSOC_SPI_MWCR_MDD_SHIFT                                      1
#define PSOC_SPI_MWCR_MDD_MASK                                       0x2
#define PSOC_SPI_MWCR_MHS_SHIFT                                      2
#define PSOC_SPI_MWCR_MHS_MASK                                       0x4
#define PSOC_SPI_MWCR_RSVD_MWCR_SHIFT                                3
#define PSOC_SPI_MWCR_RSVD_MWCR_MASK                                 0xFFFFFFF8

#define mmPSOC_SPI_SER                                               0xC43010
/* PSOC_SPI_SER */
#define PSOC_SPI_SER_SER_SHIFT                                       0
#define PSOC_SPI_SER_SER_MASK                                        0x1
#define PSOC_SPI_SER_RSVD_SER_SHIFT                                  1
#define PSOC_SPI_SER_RSVD_SER_MASK                                   0xFFFFFFFE

#define mmPSOC_SPI_BAUDR                                             0xC43014
/* PSOC_SPI_BAUDR */
#define PSOC_SPI_BAUDR_SCKDV_SHIFT                                   0
#define PSOC_SPI_BAUDR_SCKDV_MASK                                    0xFFFF
#define PSOC_SPI_BAUDR_RSVD_BAUDR_SHIFT                              16
#define PSOC_SPI_BAUDR_RSVD_BAUDR_MASK                               0xFFFF0000

#define mmPSOC_SPI_TXFTLR                                            0xC43018
/* PSOC_SPI_TXFTLR */
#define PSOC_SPI_TXFTLR_TFT_SHIFT                                    0
#define PSOC_SPI_TXFTLR_TFT_MASK                                     0xF
#define PSOC_SPI_TXFTLR_RSVD_TXFTLR_SHIFT                            4
#define PSOC_SPI_TXFTLR_RSVD_TXFTLR_MASK                             0xFFFFFFF0

#define mmPSOC_SPI_RXFTLR                                            0xC4301C
/* PSOC_SPI_RXFTLR */
#define PSOC_SPI_RXFTLR_RFT_SHIFT                                    0
#define PSOC_SPI_RXFTLR_RFT_MASK                                     0xF
#define PSOC_SPI_RXFTLR_RSVD_RXFTLR_SHIFT                            4
#define PSOC_SPI_RXFTLR_RSVD_RXFTLR_MASK                             0xFFFFFFF0

#define mmPSOC_SPI_TXFLR                                             0xC43020
/* PSOC_SPI_TXFLR */
#define PSOC_SPI_TXFLR_TXTFL_SHIFT                                   0
#define PSOC_SPI_TXFLR_TXTFL_MASK                                    0x1F
#define PSOC_SPI_TXFLR_RSVD_TXFLR_SHIFT                              5
#define PSOC_SPI_TXFLR_RSVD_TXFLR_MASK                               0xFFFFFFE0

#define mmPSOC_SPI_RXFLR                                             0xC43024
/* PSOC_SPI_RXFLR */
#define PSOC_SPI_RXFLR_RXTFL_SHIFT                                   0
#define PSOC_SPI_RXFLR_RXTFL_MASK                                    0x1F
#define PSOC_SPI_RXFLR_RSVD_RXFLR_SHIFT                              5
#define PSOC_SPI_RXFLR_RSVD_RXFLR_MASK                               0xFFFFFFE0

#define mmPSOC_SPI_SR                                                0xC43028
/* PSOC_SPI_SR */
#define PSOC_SPI_SR_BUSY_SHIFT                                       0
#define PSOC_SPI_SR_BUSY_MASK                                        0x1
#define PSOC_SPI_SR_TFNF_SHIFT                                       1
#define PSOC_SPI_SR_TFNF_MASK                                        0x2
#define PSOC_SPI_SR_TFE_SHIFT                                        2
#define PSOC_SPI_SR_TFE_MASK                                         0x4
#define PSOC_SPI_SR_RFNE_SHIFT                                       3
#define PSOC_SPI_SR_RFNE_MASK                                        0x8
#define PSOC_SPI_SR_RFF_SHIFT                                        4
#define PSOC_SPI_SR_RFF_MASK                                         0x10
#define PSOC_SPI_SR_RSVD_TXE_SHIFT                                   5
#define PSOC_SPI_SR_RSVD_TXE_MASK                                    0x20
#define PSOC_SPI_SR_DCOL_SHIFT                                       6
#define PSOC_SPI_SR_DCOL_MASK                                        0x40
#define PSOC_SPI_SR_RSVD_SR_SHIFT                                    7
#define PSOC_SPI_SR_RSVD_SR_MASK                                     0xFFFFFF80

#define mmPSOC_SPI_IMR                                               0xC4302C
/* PSOC_SPI_IMR */
#define PSOC_SPI_IMR_TXEIM_SHIFT                                     0
#define PSOC_SPI_IMR_TXEIM_MASK                                      0x1
#define PSOC_SPI_IMR_TXOIM_SHIFT                                     1
#define PSOC_SPI_IMR_TXOIM_MASK                                      0x2
#define PSOC_SPI_IMR_RXUIM_SHIFT                                     2
#define PSOC_SPI_IMR_RXUIM_MASK                                      0x4
#define PSOC_SPI_IMR_RXOIM_SHIFT                                     3
#define PSOC_SPI_IMR_RXOIM_MASK                                      0x8
#define PSOC_SPI_IMR_RXFIM_SHIFT                                     4
#define PSOC_SPI_IMR_RXFIM_MASK                                      0x10
#define PSOC_SPI_IMR_MSTIM_SHIFT                                     5
#define PSOC_SPI_IMR_MSTIM_MASK                                      0x20
#define PSOC_SPI_IMR_RSVD_IMR_SHIFT                                  6
#define PSOC_SPI_IMR_RSVD_IMR_MASK                                   0xFFFFFFC0

#define mmPSOC_SPI_ISR                                               0xC43030
/* PSOC_SPI_ISR */
#define PSOC_SPI_ISR_TXEIS_SHIFT                                     0
#define PSOC_SPI_ISR_TXEIS_MASK                                      0x1
#define PSOC_SPI_ISR_TXOIS_SHIFT                                     1
#define PSOC_SPI_ISR_TXOIS_MASK                                      0x2
#define PSOC_SPI_ISR_RXUIS_SHIFT                                     2
#define PSOC_SPI_ISR_RXUIS_MASK                                      0x4
#define PSOC_SPI_ISR_RXOIS_SHIFT                                     3
#define PSOC_SPI_ISR_RXOIS_MASK                                      0x8
#define PSOC_SPI_ISR_RXFIS_SHIFT                                     4
#define PSOC_SPI_ISR_RXFIS_MASK                                      0x10
#define PSOC_SPI_ISR_MSTIS_SHIFT                                     5
#define PSOC_SPI_ISR_MSTIS_MASK                                      0x20
#define PSOC_SPI_ISR_RSVD_ISR_SHIFT                                  6
#define PSOC_SPI_ISR_RSVD_ISR_MASK                                   0xFFFFFFC0

#define mmPSOC_SPI_RISR                                              0xC43034
/* PSOC_SPI_RISR */
#define PSOC_SPI_RISR_TXEIR_SHIFT                                    0
#define PSOC_SPI_RISR_TXEIR_MASK                                     0x1
#define PSOC_SPI_RISR_TXOIR_SHIFT                                    1
#define PSOC_SPI_RISR_TXOIR_MASK                                     0x2
#define PSOC_SPI_RISR_RXUIR_SHIFT                                    2
#define PSOC_SPI_RISR_RXUIR_MASK                                     0x4
#define PSOC_SPI_RISR_RXOIR_SHIFT                                    3
#define PSOC_SPI_RISR_RXOIR_MASK                                     0x8
#define PSOC_SPI_RISR_RXFIR_SHIFT                                    4
#define PSOC_SPI_RISR_RXFIR_MASK                                     0x10
#define PSOC_SPI_RISR_MSTIR_SHIFT                                    5
#define PSOC_SPI_RISR_MSTIR_MASK                                     0x20
#define PSOC_SPI_RISR_RSVD_RISR_SHIFT                                6
#define PSOC_SPI_RISR_RSVD_RISR_MASK                                 0xFFFFFFC0

#define mmPSOC_SPI_TXOICR                                            0xC43038
/* PSOC_SPI_TXOICR */
#define PSOC_SPI_TXOICR_TXOICR_SHIFT                                 0
#define PSOC_SPI_TXOICR_TXOICR_MASK                                  0x1
#define PSOC_SPI_TXOICR_RSVD_TXOICR_SHIFT                            1
#define PSOC_SPI_TXOICR_RSVD_TXOICR_MASK                             0xFFFFFFFE

#define mmPSOC_SPI_RXOICR                                            0xC4303C
/* PSOC_SPI_RXOICR */
#define PSOC_SPI_RXOICR_RXOICR_SHIFT                                 0
#define PSOC_SPI_RXOICR_RXOICR_MASK                                  0x1
#define PSOC_SPI_RXOICR_RSVD_RXOICR_SHIFT                            1
#define PSOC_SPI_RXOICR_RSVD_RXOICR_MASK                             0xFFFFFFFE

#define mmPSOC_SPI_RXUICR                                            0xC43040
/* PSOC_SPI_RXUICR */
#define PSOC_SPI_RXUICR_RXUICR_SHIFT                                 0
#define PSOC_SPI_RXUICR_RXUICR_MASK                                  0x1
#define PSOC_SPI_RXUICR_RSVD_RXUICR_SHIFT                            1
#define PSOC_SPI_RXUICR_RSVD_RXUICR_MASK                             0xFFFFFFFE

#define mmPSOC_SPI_MSTICR                                            0xC43044
/* PSOC_SPI_MSTICR */
#define PSOC_SPI_MSTICR_MSTICR_SHIFT                                 0
#define PSOC_SPI_MSTICR_MSTICR_MASK                                  0x1
#define PSOC_SPI_MSTICR_RSVD_MSTICR_SHIFT                            1
#define PSOC_SPI_MSTICR_RSVD_MSTICR_MASK                             0xFFFFFFFE

#define mmPSOC_SPI_ICR                                               0xC43048
/* PSOC_SPI_ICR */
#define PSOC_SPI_ICR_ICR_SHIFT                                       0
#define PSOC_SPI_ICR_ICR_MASK                                        0x1
#define PSOC_SPI_ICR_RSVD_ICR_SHIFT                                  1
#define PSOC_SPI_ICR_RSVD_ICR_MASK                                   0xFFFFFFFE

#define mmPSOC_SPI_IDR                                               0xC43058
/* PSOC_SPI_IDR */
#define PSOC_SPI_IDR_IDCODE_SHIFT                                    0
#define PSOC_SPI_IDR_IDCODE_MASK                                     0xFFFFFFFF

#define mmPSOC_SPI_SSI_VERSION_ID                                    0xC4305C
/* PSOC_SPI_SSI_VERSION_ID */
#define PSOC_SPI_SSI_VERSION_ID_SSI_COMP_VERSION_SHIFT               0
#define PSOC_SPI_SSI_VERSION_ID_SSI_COMP_VERSION_MASK                0xFFFFFFFF

#define mmPSOC_SPI_DR0                                               0xC43060
/* PSOC_SPI_DR0 */
#define PSOC_SPI_DR0_DR0_SHIFT                                       0
#define PSOC_SPI_DR0_DR0_MASK                                        0xFFFFFFFF

#define mmPSOC_SPI_DR1                                               0xC43064
/* PSOC_SPI_DR1 */
#define PSOC_SPI_DR1_DR1_SHIFT                                       0
#define PSOC_SPI_DR1_DR1_MASK                                        0xFFFFFFFF

#define mmPSOC_SPI_DR2                                               0xC43068
/* PSOC_SPI_DR2 */
#define PSOC_SPI_DR2_DR2_SHIFT                                       0
#define PSOC_SPI_DR2_DR2_MASK                                        0xFFFFFFFF

#define mmPSOC_SPI_DR3                                               0xC4306C
/* PSOC_SPI_DR3 */
#define PSOC_SPI_DR3_DR3_SHIFT                                       0
#define PSOC_SPI_DR3_DR3_MASK                                        0xFFFFFFFF

#define mmPSOC_SPI_DR4                                               0xC43070
/* PSOC_SPI_DR4 */
#define PSOC_SPI_DR4_DR4_SHIFT                                       0
#define PSOC_SPI_DR4_DR4_MASK                                        0xFFFFFFFF

#define mmPSOC_SPI_DR5                                               0xC43074
/* PSOC_SPI_DR5 */
#define PSOC_SPI_DR5_DR5_SHIFT                                       0
#define PSOC_SPI_DR5_DR5_MASK                                        0xFFFFFFFF

#define mmPSOC_SPI_DR6                                               0xC43078
/* PSOC_SPI_DR6 */
#define PSOC_SPI_DR6_DR6_SHIFT                                       0
#define PSOC_SPI_DR6_DR6_MASK                                        0xFFFFFFFF

#define mmPSOC_SPI_DR7                                               0xC4307C
/* PSOC_SPI_DR7 */
#define PSOC_SPI_DR7_DR7_SHIFT                                       0
#define PSOC_SPI_DR7_DR7_MASK                                        0xFFFFFFFF

#define mmPSOC_SPI_DR8                                               0xC43080
/* PSOC_SPI_DR8 */
#define PSOC_SPI_DR8_DR8_SHIFT                                       0
#define PSOC_SPI_DR8_DR8_MASK                                        0xFFFFFFFF

#define mmPSOC_SPI_DR9                                               0xC43084
/* PSOC_SPI_DR9 */
#define PSOC_SPI_DR9_DR9_SHIFT                                       0
#define PSOC_SPI_DR9_DR9_MASK                                        0xFFFFFFFF

#define mmPSOC_SPI_DR10                                              0xC43088
/* PSOC_SPI_DR10 */
#define PSOC_SPI_DR10_DR10_SHIFT                                     0
#define PSOC_SPI_DR10_DR10_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR11                                              0xC4308C
/* PSOC_SPI_DR11 */
#define PSOC_SPI_DR11_DR11_SHIFT                                     0
#define PSOC_SPI_DR11_DR11_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR12                                              0xC43090
/* PSOC_SPI_DR12 */
#define PSOC_SPI_DR12_DR12_SHIFT                                     0
#define PSOC_SPI_DR12_DR12_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR13                                              0xC43094
/* PSOC_SPI_DR13 */
#define PSOC_SPI_DR13_DR13_SHIFT                                     0
#define PSOC_SPI_DR13_DR13_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR14                                              0xC43098
/* PSOC_SPI_DR14 */
#define PSOC_SPI_DR14_DR14_SHIFT                                     0
#define PSOC_SPI_DR14_DR14_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR15                                              0xC4309C
/* PSOC_SPI_DR15 */
#define PSOC_SPI_DR15_DR15_SHIFT                                     0
#define PSOC_SPI_DR15_DR15_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR16                                              0xC430A0
/* PSOC_SPI_DR16 */
#define PSOC_SPI_DR16_DR16_SHIFT                                     0
#define PSOC_SPI_DR16_DR16_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR17                                              0xC430A4
/* PSOC_SPI_DR17 */
#define PSOC_SPI_DR17_DR17_SHIFT                                     0
#define PSOC_SPI_DR17_DR17_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR18                                              0xC430A8
/* PSOC_SPI_DR18 */
#define PSOC_SPI_DR18_DR18_SHIFT                                     0
#define PSOC_SPI_DR18_DR18_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR19                                              0xC430AC
/* PSOC_SPI_DR19 */
#define PSOC_SPI_DR19_DR19_SHIFT                                     0
#define PSOC_SPI_DR19_DR19_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR20                                              0xC430B0
/* PSOC_SPI_DR20 */
#define PSOC_SPI_DR20_DR20_SHIFT                                     0
#define PSOC_SPI_DR20_DR20_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR21                                              0xC430B4
/* PSOC_SPI_DR21 */
#define PSOC_SPI_DR21_DR21_SHIFT                                     0
#define PSOC_SPI_DR21_DR21_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR22                                              0xC430B8
/* PSOC_SPI_DR22 */
#define PSOC_SPI_DR22_DR22_SHIFT                                     0
#define PSOC_SPI_DR22_DR22_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR23                                              0xC430BC
/* PSOC_SPI_DR23 */
#define PSOC_SPI_DR23_DR23_SHIFT                                     0
#define PSOC_SPI_DR23_DR23_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR24                                              0xC430C0
/* PSOC_SPI_DR24 */
#define PSOC_SPI_DR24_DR24_SHIFT                                     0
#define PSOC_SPI_DR24_DR24_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR25                                              0xC430C4
/* PSOC_SPI_DR25 */
#define PSOC_SPI_DR25_DR25_SHIFT                                     0
#define PSOC_SPI_DR25_DR25_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR26                                              0xC430C8
/* PSOC_SPI_DR26 */
#define PSOC_SPI_DR26_DR26_SHIFT                                     0
#define PSOC_SPI_DR26_DR26_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR27                                              0xC430CC
/* PSOC_SPI_DR27 */
#define PSOC_SPI_DR27_DR27_SHIFT                                     0
#define PSOC_SPI_DR27_DR27_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR28                                              0xC430D0
/* PSOC_SPI_DR28 */
#define PSOC_SPI_DR28_DR28_SHIFT                                     0
#define PSOC_SPI_DR28_DR28_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR29                                              0xC430D4
/* PSOC_SPI_DR29 */
#define PSOC_SPI_DR29_DR29_SHIFT                                     0
#define PSOC_SPI_DR29_DR29_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR30                                              0xC430D8
/* PSOC_SPI_DR30 */
#define PSOC_SPI_DR30_DR30_SHIFT                                     0
#define PSOC_SPI_DR30_DR30_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR31                                              0xC430DC
/* PSOC_SPI_DR31 */
#define PSOC_SPI_DR31_DR31_SHIFT                                     0
#define PSOC_SPI_DR31_DR31_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR32                                              0xC430E0
/* PSOC_SPI_DR32 */
#define PSOC_SPI_DR32_DR32_SHIFT                                     0
#define PSOC_SPI_DR32_DR32_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR33                                              0xC430E4
/* PSOC_SPI_DR33 */
#define PSOC_SPI_DR33_DR33_SHIFT                                     0
#define PSOC_SPI_DR33_DR33_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR34                                              0xC430E8
/* PSOC_SPI_DR34 */
#define PSOC_SPI_DR34_DR34_SHIFT                                     0
#define PSOC_SPI_DR34_DR34_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_DR35                                              0xC430EC
/* PSOC_SPI_DR35 */
#define PSOC_SPI_DR35_DR35_SHIFT                                     0
#define PSOC_SPI_DR35_DR35_MASK                                      0xFFFFFFFF

#define mmPSOC_SPI_RX_SAMPLE_DLY                                     0xC430F0
/* PSOC_SPI_RX_SAMPLE_DLY */
#define PSOC_SPI_RX_SAMPLE_DLY_RSD_SHIFT                             0
#define PSOC_SPI_RX_SAMPLE_DLY_RSD_MASK                              0xFF
#define PSOC_SPI_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY_SHIFT              8
#define PSOC_SPI_RX_SAMPLE_DLY_RSVD_RX_SAMPLE_DLY_MASK               0xFFFFFF00

#define mmPSOC_SPI_RSVD_1                                            0xC430F8
/* PSOC_SPI_RSVD_1 */
#define PSOC_SPI_RSVD_1_RSVD1_SHIFT                                  0
#define PSOC_SPI_RSVD_1_RSVD1_MASK                                   0xFFFFFFFF

#define mmPSOC_SPI_RSVD_2                                            0xC430FC
/* PSOC_SPI_RSVD_2 */
#define PSOC_SPI_RSVD_2_RSVD2_SHIFT                                  0
#define PSOC_SPI_RSVD_2_RSVD2_MASK                                   0xFFFFFFFF

#endif /* ASIC_REG_PSOC_SPI_H_ */

