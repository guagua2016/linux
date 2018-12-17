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

#ifndef ASIC_REG_DDR_MC_CH1_H_
#define ASIC_REG_DDR_MC_CH1_H_

/*
 *****************************************
 *   DDR_MC_CH1 (Prototype: DDR_MC)
 *****************************************
 */

#define mmDDR_MC_CH1_MSTR                                            0x740000
/* DDR_MC_CH1_MSTR */
#define DDR_MC_CH1_MSTR_DDR3_SHIFT                                   0
#define DDR_MC_CH1_MSTR_DDR3_MASK                                    0x1
#define DDR_MC_CH1_MSTR_DDR4_SHIFT                                   4
#define DDR_MC_CH1_MSTR_DDR4_MASK                                    0x10
#define DDR_MC_CH1_MSTR_BURSTCHOP_SHIFT                              9
#define DDR_MC_CH1_MSTR_BURSTCHOP_MASK                               0x200
#define DDR_MC_CH1_MSTR_EN_2T_TIMING_MODE_SHIFT                      10
#define DDR_MC_CH1_MSTR_EN_2T_TIMING_MODE_MASK                       0x400
#define DDR_MC_CH1_MSTR_GEARDOWN_MODE_SHIFT                          11
#define DDR_MC_CH1_MSTR_GEARDOWN_MODE_MASK                           0x800
#define DDR_MC_CH1_MSTR_DATA_BUS_WIDTH_SHIFT                         12
#define DDR_MC_CH1_MSTR_DATA_BUS_WIDTH_MASK                          0x3000
#define DDR_MC_CH1_MSTR_DLL_OFF_MODE_SHIFT                           15
#define DDR_MC_CH1_MSTR_DLL_OFF_MODE_MASK                            0x8000
#define DDR_MC_CH1_MSTR_BURST_RDWR_SHIFT                             16
#define DDR_MC_CH1_MSTR_BURST_RDWR_MASK                              0xF0000
#define DDR_MC_CH1_MSTR_ACTIVE_RANKS_SHIFT                           24
#define DDR_MC_CH1_MSTR_ACTIVE_RANKS_MASK                            0x3000000
#define DDR_MC_CH1_MSTR_RSVD_SHIFT                                   26
#define DDR_MC_CH1_MSTR_RSVD_MASK                                    0xC000000
#define DDR_MC_CH1_MSTR_DEVICE_CONFIG_SHIFT                          30
#define DDR_MC_CH1_MSTR_DEVICE_CONFIG_MASK                           0xC0000000

#define mmDDR_MC_CH1_STAT                                            0x740004
/* DDR_MC_CH1_STAT */
#define DDR_MC_CH1_STAT_OPERATING_MODE_SHIFT                         0
#define DDR_MC_CH1_STAT_OPERATING_MODE_MASK                          0x7
#define DDR_MC_CH1_STAT_SELFREF_TYPE_SHIFT                           4
#define DDR_MC_CH1_STAT_SELFREF_TYPE_MASK                            0x30
#define DDR_MC_CH1_STAT_SELFREF_CAM_NOT_EMPTY_SHIFT                  12
#define DDR_MC_CH1_STAT_SELFREF_CAM_NOT_EMPTY_MASK                   0x1000

#define mmDDR_MC_CH1_MRCTRL0                                         0x740010
/* DDR_MC_CH1_MRCTRL0 */
#define DDR_MC_CH1_MRCTRL0_MR_TYPE_SHIFT                             0
#define DDR_MC_CH1_MRCTRL0_MR_TYPE_MASK                              0x1
#define DDR_MC_CH1_MRCTRL0_MPR_EN_SHIFT                              1
#define DDR_MC_CH1_MRCTRL0_MPR_EN_MASK                               0x2
#define DDR_MC_CH1_MRCTRL0_PDA_EN_SHIFT                              2
#define DDR_MC_CH1_MRCTRL0_PDA_EN_MASK                               0x4
#define DDR_MC_CH1_MRCTRL0_SW_INIT_INT_SHIFT                         3
#define DDR_MC_CH1_MRCTRL0_SW_INIT_INT_MASK                          0x8
#define DDR_MC_CH1_MRCTRL0_MR_RANK_SHIFT                             4
#define DDR_MC_CH1_MRCTRL0_MR_RANK_MASK                              0x30
#define DDR_MC_CH1_MRCTRL0_RSVD_SHIFT                                6
#define DDR_MC_CH1_MRCTRL0_RSVD_MASK                                 0xC0
#define DDR_MC_CH1_MRCTRL0_MR_ADDR_SHIFT                             12
#define DDR_MC_CH1_MRCTRL0_MR_ADDR_MASK                              0xF000
#define DDR_MC_CH1_MRCTRL0_PBA_MODE_SHIFT                            30
#define DDR_MC_CH1_MRCTRL0_PBA_MODE_MASK                             0x40000000
#define DDR_MC_CH1_MRCTRL0_MR_WR_SHIFT                               31
#define DDR_MC_CH1_MRCTRL0_MR_WR_MASK                                0x80000000

#define mmDDR_MC_CH1_MRCTRL1                                         0x740014
/* DDR_MC_CH1_MRCTRL1 */
#define DDR_MC_CH1_MRCTRL1_MR_DATA_SHIFT                             0
#define DDR_MC_CH1_MRCTRL1_MR_DATA_MASK                              0x3FFFF

#define mmDDR_MC_CH1_MRSTAT                                          0x740018
/* DDR_MC_CH1_MRSTAT */
#define DDR_MC_CH1_MRSTAT_MR_WR_BUSY_SHIFT                           0
#define DDR_MC_CH1_MRSTAT_MR_WR_BUSY_MASK                            0x1
#define DDR_MC_CH1_MRSTAT_PDA_DONE_SHIFT                             8
#define DDR_MC_CH1_MRSTAT_PDA_DONE_MASK                              0x100

#define mmDDR_MC_CH1_MRCTRL2                                         0x74001C
/* DDR_MC_CH1_MRCTRL2 */
#define DDR_MC_CH1_MRCTRL2_MR_DEVICE_SEL_SHIFT                       0
#define DDR_MC_CH1_MRCTRL2_MR_DEVICE_SEL_MASK                        0xFFFFFFFF

#define mmDDR_MC_CH1_PWRCTL                                          0x740030
/* DDR_MC_CH1_PWRCTL */
#define DDR_MC_CH1_PWRCTL_SELFREF_EN_SHIFT                           0
#define DDR_MC_CH1_PWRCTL_SELFREF_EN_MASK                            0x1
#define DDR_MC_CH1_PWRCTL_POWERDOWN_EN_SHIFT                         1
#define DDR_MC_CH1_PWRCTL_POWERDOWN_EN_MASK                          0x2
#define DDR_MC_CH1_PWRCTL_EN_DFI_DRAM_CLK_DISABLE_SHIFT              3
#define DDR_MC_CH1_PWRCTL_EN_DFI_DRAM_CLK_DISABLE_MASK               0x8
#define DDR_MC_CH1_PWRCTL_MPSM_EN_SHIFT                              4
#define DDR_MC_CH1_PWRCTL_MPSM_EN_MASK                               0x10
#define DDR_MC_CH1_PWRCTL_SELFREF_SW_SHIFT                           5
#define DDR_MC_CH1_PWRCTL_SELFREF_SW_MASK                            0x20
#define DDR_MC_CH1_PWRCTL_DIS_CAM_DRAIN_SELFREF_SHIFT                7
#define DDR_MC_CH1_PWRCTL_DIS_CAM_DRAIN_SELFREF_MASK                 0x80

#define mmDDR_MC_CH1_PWRTMG                                          0x740034
/* DDR_MC_CH1_PWRTMG */
#define DDR_MC_CH1_PWRTMG_POWERDOWN_TO_X32_SHIFT                     0
#define DDR_MC_CH1_PWRTMG_POWERDOWN_TO_X32_MASK                      0x1F
#define DDR_MC_CH1_PWRTMG_SELFREF_TO_X32_SHIFT                       16
#define DDR_MC_CH1_PWRTMG_SELFREF_TO_X32_MASK                        0xFF0000

#define mmDDR_MC_CH1_HWLPCTL                                         0x740038
/* DDR_MC_CH1_HWLPCTL */
#define DDR_MC_CH1_HWLPCTL_HW_LP_EN_SHIFT                            0
#define DDR_MC_CH1_HWLPCTL_HW_LP_EN_MASK                             0x1
#define DDR_MC_CH1_HWLPCTL_HW_LP_EXIT_IDLE_EN_SHIFT                  1
#define DDR_MC_CH1_HWLPCTL_HW_LP_EXIT_IDLE_EN_MASK                   0x2
#define DDR_MC_CH1_HWLPCTL_HW_LP_IDLE_X32_SHIFT                      16
#define DDR_MC_CH1_HWLPCTL_HW_LP_IDLE_X32_MASK                       0xFFF0000

#define mmDDR_MC_CH1_RFSHCTL0                                        0x740050
/* DDR_MC_CH1_RFSHCTL0 */
#define DDR_MC_CH1_RFSHCTL0_REFRESH_BURST_SHIFT                      4
#define DDR_MC_CH1_RFSHCTL0_REFRESH_BURST_MASK                       0x3F0
#define DDR_MC_CH1_RFSHCTL0_REFRESH_TO_X1_X32_SHIFT                  12
#define DDR_MC_CH1_RFSHCTL0_REFRESH_TO_X1_X32_MASK                   0x1F000
#define DDR_MC_CH1_RFSHCTL0_REFRESH_MARGIN_SHIFT                     20
#define DDR_MC_CH1_RFSHCTL0_REFRESH_MARGIN_MASK                      0xF00000

#define mmDDR_MC_CH1_RFSHCTL1                                        0x740054
/* DDR_MC_CH1_RFSHCTL1 */
#define DDR_MC_CH1_RFSHCTL1_REFRESH_TIMER0_START_VALUE_X32_SHIFT     0
#define DDR_MC_CH1_RFSHCTL1_REFRESH_TIMER0_START_VALUE_X32_MASK      0xFFF
#define DDR_MC_CH1_RFSHCTL1_REFRESH_TIMER1_START_VALUE_X32_SHIFT     16
#define DDR_MC_CH1_RFSHCTL1_REFRESH_TIMER1_START_VALUE_X32_MASK      0xFFF0000

#define mmDDR_MC_CH1_RFSHCTL3                                        0x740060
/* DDR_MC_CH1_RFSHCTL3 */
#define DDR_MC_CH1_RFSHCTL3_DIS_AUTO_REFRESH_SHIFT                   0
#define DDR_MC_CH1_RFSHCTL3_DIS_AUTO_REFRESH_MASK                    0x1
#define DDR_MC_CH1_RFSHCTL3_REFRESH_UPDATE_LEVEL_SHIFT               1
#define DDR_MC_CH1_RFSHCTL3_REFRESH_UPDATE_LEVEL_MASK                0x2
#define DDR_MC_CH1_RFSHCTL3_REFRESH_MODE_SHIFT                       4
#define DDR_MC_CH1_RFSHCTL3_REFRESH_MODE_MASK                        0x70

#define mmDDR_MC_CH1_RFSHTMG                                         0x740064
/* DDR_MC_CH1_RFSHTMG */
#define DDR_MC_CH1_RFSHTMG_T_RFC_MIN_SHIFT                           0
#define DDR_MC_CH1_RFSHTMG_T_RFC_MIN_MASK                            0x3FF
#define DDR_MC_CH1_RFSHTMG_T_RFC_NOM_X1_X32_SHIFT                    16
#define DDR_MC_CH1_RFSHTMG_T_RFC_NOM_X1_X32_MASK                     0xFFF0000

#define mmDDR_MC_CH1_ECCCFG0                                         0x740070
/* DDR_MC_CH1_ECCCFG0 */
#define DDR_MC_CH1_ECCCFG0_ECC_MODE_SHIFT                            0
#define DDR_MC_CH1_ECCCFG0_ECC_MODE_MASK                             0x7
#define DDR_MC_CH1_ECCCFG0_DIS_SCRUB_SHIFT                           4
#define DDR_MC_CH1_ECCCFG0_DIS_SCRUB_MASK                            0x10

#define mmDDR_MC_CH1_ECCCFG1                                         0x740074
/* DDR_MC_CH1_ECCCFG1 */
#define DDR_MC_CH1_ECCCFG1_DATA_POISON_EN_SHIFT                      0
#define DDR_MC_CH1_ECCCFG1_DATA_POISON_EN_MASK                       0x1
#define DDR_MC_CH1_ECCCFG1_DATA_POISON_BIT_SHIFT                     1
#define DDR_MC_CH1_ECCCFG1_DATA_POISON_BIT_MASK                      0x2

#define mmDDR_MC_CH1_ECCSTAT                                         0x740078
/* DDR_MC_CH1_ECCSTAT */
#define DDR_MC_CH1_ECCSTAT_ECC_CORRECTED_BIT_NUM_SHIFT               0
#define DDR_MC_CH1_ECCSTAT_ECC_CORRECTED_BIT_NUM_MASK                0x7F
#define DDR_MC_CH1_ECCSTAT_ECC_CORRECTED_ERR_SHIFT                   8
#define DDR_MC_CH1_ECCSTAT_ECC_CORRECTED_ERR_MASK                    0xF00
#define DDR_MC_CH1_ECCSTAT_ECC_UNCORRECTED_ERR_SHIFT                 16
#define DDR_MC_CH1_ECCSTAT_ECC_UNCORRECTED_ERR_MASK                  0xF0000

#define mmDDR_MC_CH1_ECCCTL                                          0x74007C
/* DDR_MC_CH1_ECCCTL */
#define DDR_MC_CH1_ECCCTL_ECC_CORRECTED_ERR_CLR_SHIFT                0
#define DDR_MC_CH1_ECCCTL_ECC_CORRECTED_ERR_CLR_MASK                 0x1
#define DDR_MC_CH1_ECCCTL_ECC_UNCORRECTED_ERR_CLR_SHIFT              1
#define DDR_MC_CH1_ECCCTL_ECC_UNCORRECTED_ERR_CLR_MASK               0x2
#define DDR_MC_CH1_ECCCTL_ECC_CORR_ERR_CNT_CLR_SHIFT                 2
#define DDR_MC_CH1_ECCCTL_ECC_CORR_ERR_CNT_CLR_MASK                  0x4
#define DDR_MC_CH1_ECCCTL_ECC_UNCORR_ERR_CNT_CLR_SHIFT               3
#define DDR_MC_CH1_ECCCTL_ECC_UNCORR_ERR_CNT_CLR_MASK                0x8
#define DDR_MC_CH1_ECCCTL_ECC_CORRECTED_ERR_INTR_EN_SHIFT            8
#define DDR_MC_CH1_ECCCTL_ECC_CORRECTED_ERR_INTR_EN_MASK             0x100
#define DDR_MC_CH1_ECCCTL_ECC_UNCORRECTED_ERR_INTR_EN_SHIFT          9
#define DDR_MC_CH1_ECCCTL_ECC_UNCORRECTED_ERR_INTR_EN_MASK           0x200
#define DDR_MC_CH1_ECCCTL_ECC_CORRECTED_ERR_INTR_FORCE_SHIFT         16
#define DDR_MC_CH1_ECCCTL_ECC_CORRECTED_ERR_INTR_FORCE_MASK          0x10000
#define DDR_MC_CH1_ECCCTL_ECC_UNCORRECTED_ERR_INTR_FORCE_SHIFT       17
#define DDR_MC_CH1_ECCCTL_ECC_UNCORRECTED_ERR_INTR_FORCE_MASK        0x20000

#define mmDDR_MC_CH1_ECCERRCNT                                       0x740080
/* DDR_MC_CH1_ECCERRCNT */
#define DDR_MC_CH1_ECCERRCNT_ECC_CORR_ERR_CNT_SHIFT                  0
#define DDR_MC_CH1_ECCERRCNT_ECC_CORR_ERR_CNT_MASK                   0xFFFF
#define DDR_MC_CH1_ECCERRCNT_ECC_UNCORR_ERR_CNT_SHIFT                16
#define DDR_MC_CH1_ECCERRCNT_ECC_UNCORR_ERR_CNT_MASK                 0xFFFF0000

#define mmDDR_MC_CH1_ECCCADDR0                                       0x740084
/* DDR_MC_CH1_ECCCADDR0 */
#define DDR_MC_CH1_ECCCADDR0_ECC_CORR_ROW_SHIFT                      0
#define DDR_MC_CH1_ECCCADDR0_ECC_CORR_ROW_MASK                       0x3FFFF
#define DDR_MC_CH1_ECCCADDR0_ECC_CORR_RANK_SHIFT                     24
#define DDR_MC_CH1_ECCCADDR0_ECC_CORR_RANK_MASK                      0x1000000

#define mmDDR_MC_CH1_ECCCADDR1                                       0x740088
/* DDR_MC_CH1_ECCCADDR1 */
#define DDR_MC_CH1_ECCCADDR1_ECC_CORR_COL_SHIFT                      0
#define DDR_MC_CH1_ECCCADDR1_ECC_CORR_COL_MASK                       0xFFF
#define DDR_MC_CH1_ECCCADDR1_ECC_CORR_BANK_SHIFT                     16
#define DDR_MC_CH1_ECCCADDR1_ECC_CORR_BANK_MASK                      0x70000
#define DDR_MC_CH1_ECCCADDR1_ECC_CORR_BG_SHIFT                       24
#define DDR_MC_CH1_ECCCADDR1_ECC_CORR_BG_MASK                        0x3000000

#define mmDDR_MC_CH1_ECCCSYN0                                        0x74008C
/* DDR_MC_CH1_ECCCSYN0 */
#define DDR_MC_CH1_ECCCSYN0_ECC_CORR_SYNDROMES_31_0_SHIFT            0
#define DDR_MC_CH1_ECCCSYN0_ECC_CORR_SYNDROMES_31_0_MASK             0xFFFFFFFF

#define mmDDR_MC_CH1_ECCCSYN1                                        0x740090
/* DDR_MC_CH1_ECCCSYN1 */
#define DDR_MC_CH1_ECCCSYN1_ECC_CORR_SYNDROMES_63_32_SHIFT           0
#define DDR_MC_CH1_ECCCSYN1_ECC_CORR_SYNDROMES_63_32_MASK            0xFFFFFFFF

#define mmDDR_MC_CH1_ECCCSYN2                                        0x740094
/* DDR_MC_CH1_ECCCSYN2 */
#define DDR_MC_CH1_ECCCSYN2_ECC_CORR_SYNDROMES_71_64_SHIFT           0
#define DDR_MC_CH1_ECCCSYN2_ECC_CORR_SYNDROMES_71_64_MASK            0xFF

#define mmDDR_MC_CH1_ECCBITMASK0                                     0x740098
/* DDR_MC_CH1_ECCBITMASK0 */
#define DDR_MC_CH1_ECCBITMASK0_ECC_CORR_BIT_MASK_31_0_SHIFT          0
#define DDR_MC_CH1_ECCBITMASK0_ECC_CORR_BIT_MASK_31_0_MASK           0xFFFFFFFF

#define mmDDR_MC_CH1_ECCBITMASK1                                     0x74009C
/* DDR_MC_CH1_ECCBITMASK1 */
#define DDR_MC_CH1_ECCBITMASK1_ECC_CORR_BIT_MASK_63_32_SHIFT         0
#define DDR_MC_CH1_ECCBITMASK1_ECC_CORR_BIT_MASK_63_32_MASK          0xFFFFFFFF

#define mmDDR_MC_CH1_ECCBITMASK2                                     0x7400A0
/* DDR_MC_CH1_ECCBITMASK2 */
#define DDR_MC_CH1_ECCBITMASK2_ECC_CORR_BIT_MASK_71_64_SHIFT         0
#define DDR_MC_CH1_ECCBITMASK2_ECC_CORR_BIT_MASK_71_64_MASK          0xFF

#define mmDDR_MC_CH1_ECCUADDR0                                       0x7400A4
/* DDR_MC_CH1_ECCUADDR0 */
#define DDR_MC_CH1_ECCUADDR0_ECC_UNCORR_ROW_SHIFT                    0
#define DDR_MC_CH1_ECCUADDR0_ECC_UNCORR_ROW_MASK                     0x3FFFF
#define DDR_MC_CH1_ECCUADDR0_ECC_UNCORR_RANK_SHIFT                   24
#define DDR_MC_CH1_ECCUADDR0_ECC_UNCORR_RANK_MASK                    0x1000000

#define mmDDR_MC_CH1_ECCUADDR1                                       0x7400A8
/* DDR_MC_CH1_ECCUADDR1 */
#define DDR_MC_CH1_ECCUADDR1_ECC_UNCORR_COL_SHIFT                    0
#define DDR_MC_CH1_ECCUADDR1_ECC_UNCORR_COL_MASK                     0xFFF
#define DDR_MC_CH1_ECCUADDR1_ECC_UNCORR_BANK_SHIFT                   16
#define DDR_MC_CH1_ECCUADDR1_ECC_UNCORR_BANK_MASK                    0x70000
#define DDR_MC_CH1_ECCUADDR1_ECC_UNCORR_BG_SHIFT                     24
#define DDR_MC_CH1_ECCUADDR1_ECC_UNCORR_BG_MASK                      0x3000000

#define mmDDR_MC_CH1_ECCUSYN0                                        0x7400AC
/* DDR_MC_CH1_ECCUSYN0 */
#define DDR_MC_CH1_ECCUSYN0_ECC_UNCORR_SYNDROMES_31_0_SHIFT          0
#define DDR_MC_CH1_ECCUSYN0_ECC_UNCORR_SYNDROMES_31_0_MASK           0xFFFFFFFF

#define mmDDR_MC_CH1_ECCUSYN1                                        0x7400B0
/* DDR_MC_CH1_ECCUSYN1 */
#define DDR_MC_CH1_ECCUSYN1_ECC_UNCORR_SYNDROMES_63_32_SHIFT         0
#define DDR_MC_CH1_ECCUSYN1_ECC_UNCORR_SYNDROMES_63_32_MASK          0xFFFFFFFF

#define mmDDR_MC_CH1_ECCUSYN2                                        0x7400B4
/* DDR_MC_CH1_ECCUSYN2 */
#define DDR_MC_CH1_ECCUSYN2_ECC_UNCORR_SYNDROMES_71_64_SHIFT         0
#define DDR_MC_CH1_ECCUSYN2_ECC_UNCORR_SYNDROMES_71_64_MASK          0xFF

#define mmDDR_MC_CH1_ECCPOISONADDR0                                  0x7400B8
/* DDR_MC_CH1_ECCPOISONADDR0 */
#define DDR_MC_CH1_ECCPOISONADDR0_ECC_POISON_COL_SHIFT               0
#define DDR_MC_CH1_ECCPOISONADDR0_ECC_POISON_COL_MASK                0xFFF
#define DDR_MC_CH1_ECCPOISONADDR0_ECC_POISON_RANK_SHIFT              24
#define DDR_MC_CH1_ECCPOISONADDR0_ECC_POISON_RANK_MASK               0x1000000
#define DDR_MC_CH1_ECCPOISONADDR0_RSVD_SHIFT                         25
#define DDR_MC_CH1_ECCPOISONADDR0_RSVD_MASK                          0x2000000

#define mmDDR_MC_CH1_ECCPOISONADDR1                                  0x7400BC
/* DDR_MC_CH1_ECCPOISONADDR1 */
#define DDR_MC_CH1_ECCPOISONADDR1_ECC_POISON_ROW_SHIFT               0
#define DDR_MC_CH1_ECCPOISONADDR1_ECC_POISON_ROW_MASK                0x3FFFF
#define DDR_MC_CH1_ECCPOISONADDR1_ECC_POISON_BANK_SHIFT              24
#define DDR_MC_CH1_ECCPOISONADDR1_ECC_POISON_BANK_MASK               0x7000000
#define DDR_MC_CH1_ECCPOISONADDR1_ECC_POISON_BG_SHIFT                28
#define DDR_MC_CH1_ECCPOISONADDR1_ECC_POISON_BG_MASK                 0x30000000

#define mmDDR_MC_CH1_CRCPARCTL0                                      0x7400C0
/* DDR_MC_CH1_CRCPARCTL0 */
#define DDR_MC_CH1_CRCPARCTL0_DFI_ALERT_ERR_INT_EN_SHIFT             0
#define DDR_MC_CH1_CRCPARCTL0_DFI_ALERT_ERR_INT_EN_MASK              0x1
#define DDR_MC_CH1_CRCPARCTL0_DFI_ALERT_ERR_INT_CLR_SHIFT            1
#define DDR_MC_CH1_CRCPARCTL0_DFI_ALERT_ERR_INT_CLR_MASK             0x2
#define DDR_MC_CH1_CRCPARCTL0_DFI_ALERT_ERR_CNT_CLR_SHIFT            2
#define DDR_MC_CH1_CRCPARCTL0_DFI_ALERT_ERR_CNT_CLR_MASK             0x4
#define DDR_MC_CH1_CRCPARCTL0_DFI_ALERT_ERR_FATL_INT_CLR_SHIFT       4
#define DDR_MC_CH1_CRCPARCTL0_DFI_ALERT_ERR_FATL_INT_CLR_MASK        0x10
#define DDR_MC_CH1_CRCPARCTL0_DFI_ALERT_ERR_MAX_REACHED_INT_CLR_SHIFT 8
#define DDR_MC_CH1_CRCPARCTL0_DFI_ALERT_ERR_MAX_REACHED_INT_CLR_MASK 0x100
#define DDR_MC_CH1_CRCPARCTL0_RETRY_CTRLUPD_ENABLE_SHIFT             15
#define DDR_MC_CH1_CRCPARCTL0_RETRY_CTRLUPD_ENABLE_MASK              0x8000
#define DDR_MC_CH1_CRCPARCTL0_RETRY_CTRLUPD_WAIT_SHIFT               16
#define DDR_MC_CH1_CRCPARCTL0_RETRY_CTRLUPD_WAIT_MASK                0x70000

#define mmDDR_MC_CH1_CRCPARCTL1                                      0x7400C4
/* DDR_MC_CH1_CRCPARCTL1 */
#define DDR_MC_CH1_CRCPARCTL1_PARITY_ENABLE_SHIFT                    0
#define DDR_MC_CH1_CRCPARCTL1_PARITY_ENABLE_MASK                     0x1
#define DDR_MC_CH1_CRCPARCTL1_CRC_ENABLE_SHIFT                       4
#define DDR_MC_CH1_CRCPARCTL1_CRC_ENABLE_MASK                        0x10
#define DDR_MC_CH1_CRCPARCTL1_CRC_INC_DM_SHIFT                       7
#define DDR_MC_CH1_CRCPARCTL1_CRC_INC_DM_MASK                        0x80
#define DDR_MC_CH1_CRCPARCTL1_CRC_PARITY_RETRY_ENABLE_SHIFT          8
#define DDR_MC_CH1_CRCPARCTL1_CRC_PARITY_RETRY_ENABLE_MASK           0x100
#define DDR_MC_CH1_CRCPARCTL1_ALERT_WAIT_FOR_SW_SHIFT                9
#define DDR_MC_CH1_CRCPARCTL1_ALERT_WAIT_FOR_SW_MASK                 0x200
#define DDR_MC_CH1_CRCPARCTL1_CAPARITY_DISABLE_BEFORE_SR_SHIFT       12
#define DDR_MC_CH1_CRCPARCTL1_CAPARITY_DISABLE_BEFORE_SR_MASK        0x1000
#define DDR_MC_CH1_CRCPARCTL1_RETRY_ADD_RD_LAT_EN_SHIFT              15
#define DDR_MC_CH1_CRCPARCTL1_RETRY_ADD_RD_LAT_EN_MASK               0x8000
#define DDR_MC_CH1_CRCPARCTL1_RETRY_ADD_RD_LAT_SHIFT                 16
#define DDR_MC_CH1_CRCPARCTL1_RETRY_ADD_RD_LAT_MASK                  0xF0000
#define DDR_MC_CH1_CRCPARCTL1_DFI_T_PHY_RDLAT_SHIFT                  24
#define DDR_MC_CH1_CRCPARCTL1_DFI_T_PHY_RDLAT_MASK                   0x7F000000

#define mmDDR_MC_CH1_CRCPARCTL2                                      0x7400C8
/* DDR_MC_CH1_CRCPARCTL2 */
#define DDR_MC_CH1_CRCPARCTL2_RETRY_FIFO_MAX_HOLD_TIMER_X4_SHIFT     0
#define DDR_MC_CH1_CRCPARCTL2_RETRY_FIFO_MAX_HOLD_TIMER_X4_MASK      0x3F
#define DDR_MC_CH1_CRCPARCTL2_T_CRC_ALERT_PW_MAX_SHIFT               8
#define DDR_MC_CH1_CRCPARCTL2_T_CRC_ALERT_PW_MAX_MASK                0x1F00
#define DDR_MC_CH1_CRCPARCTL2_T_PAR_ALERT_PW_MAX_SHIFT               16
#define DDR_MC_CH1_CRCPARCTL2_T_PAR_ALERT_PW_MAX_MASK                0x1FF0000

#define mmDDR_MC_CH1_CRCPARSTAT                                      0x7400CC
/* DDR_MC_CH1_CRCPARSTAT */
#define DDR_MC_CH1_CRCPARSTAT_DFI_ALERT_ERR_CNT_SHIFT                0
#define DDR_MC_CH1_CRCPARSTAT_DFI_ALERT_ERR_CNT_MASK                 0xFFFF
#define DDR_MC_CH1_CRCPARSTAT_DFI_ALERT_ERR_INT_SHIFT                16
#define DDR_MC_CH1_CRCPARSTAT_DFI_ALERT_ERR_INT_MASK                 0x10000
#define DDR_MC_CH1_CRCPARSTAT_DFI_ALERT_ERR_FATL_INT_SHIFT           17
#define DDR_MC_CH1_CRCPARSTAT_DFI_ALERT_ERR_FATL_INT_MASK            0x20000
#define DDR_MC_CH1_CRCPARSTAT_DFI_ALERT_ERR_MAX_REACHED_INT_SHIFT    18
#define DDR_MC_CH1_CRCPARSTAT_DFI_ALERT_ERR_MAX_REACHED_INT_MASK     0x40000
#define DDR_MC_CH1_CRCPARSTAT_DFI_ALERT_ERR_NO_SW_SHIFT              19
#define DDR_MC_CH1_CRCPARSTAT_DFI_ALERT_ERR_NO_SW_MASK               0x80000
#define DDR_MC_CH1_CRCPARSTAT_DFI_ALERT_ERR_FATL_CODE_SHIFT          20
#define DDR_MC_CH1_CRCPARSTAT_DFI_ALERT_ERR_FATL_CODE_MASK           0x700000
#define DDR_MC_CH1_CRCPARSTAT_RETRY_CURRENT_STATE_SHIFT              24
#define DDR_MC_CH1_CRCPARSTAT_RETRY_CURRENT_STATE_MASK               0xF000000
#define DDR_MC_CH1_CRCPARSTAT_RETRY_OPERATING_MODE_SHIFT             28
#define DDR_MC_CH1_CRCPARSTAT_RETRY_OPERATING_MODE_MASK              0x10000000
#define DDR_MC_CH1_CRCPARSTAT_CMD_IN_ERR_WINDOW_SHIFT                29
#define DDR_MC_CH1_CRCPARSTAT_CMD_IN_ERR_WINDOW_MASK                 0x20000000

#define mmDDR_MC_CH1_INIT0                                           0x7400D0
/* DDR_MC_CH1_INIT0 */
#define DDR_MC_CH1_INIT0_PRE_CKE_X1024_SHIFT                         0
#define DDR_MC_CH1_INIT0_PRE_CKE_X1024_MASK                          0xFFF
#define DDR_MC_CH1_INIT0_POST_CKE_X1024_SHIFT                        16
#define DDR_MC_CH1_INIT0_POST_CKE_X1024_MASK                         0x3FF0000
#define DDR_MC_CH1_INIT0_SKIP_DRAM_INIT_SHIFT                        30
#define DDR_MC_CH1_INIT0_SKIP_DRAM_INIT_MASK                         0xC0000000

#define mmDDR_MC_CH1_INIT1                                           0x7400D4
/* DDR_MC_CH1_INIT1 */
#define DDR_MC_CH1_INIT1_PRE_OCD_X32_SHIFT                           0
#define DDR_MC_CH1_INIT1_PRE_OCD_X32_MASK                            0xF
#define DDR_MC_CH1_INIT1_DRAM_RSTN_X1024_SHIFT                       16
#define DDR_MC_CH1_INIT1_DRAM_RSTN_X1024_MASK                        0x1FF0000

#define mmDDR_MC_CH1_INIT3                                           0x7400DC
/* DDR_MC_CH1_INIT3 */
#define DDR_MC_CH1_INIT3_EMR_SHIFT                                   0
#define DDR_MC_CH1_INIT3_EMR_MASK                                    0xFFFF
#define DDR_MC_CH1_INIT3_MR_SHIFT                                    16
#define DDR_MC_CH1_INIT3_MR_MASK                                     0xFFFF0000

#define mmDDR_MC_CH1_INIT4                                           0x7400E0
/* DDR_MC_CH1_INIT4 */
#define DDR_MC_CH1_INIT4_EMR3_SHIFT                                  0
#define DDR_MC_CH1_INIT4_EMR3_MASK                                   0xFFFF
#define DDR_MC_CH1_INIT4_EMR2_SHIFT                                  16
#define DDR_MC_CH1_INIT4_EMR2_MASK                                   0xFFFF0000

#define mmDDR_MC_CH1_INIT5                                           0x7400E4
/* DDR_MC_CH1_INIT5 */
#define DDR_MC_CH1_INIT5_DEV_ZQINIT_X32_SHIFT                        16
#define DDR_MC_CH1_INIT5_DEV_ZQINIT_X32_MASK                         0xFF0000

#define mmDDR_MC_CH1_INIT6                                           0x7400E8
/* DDR_MC_CH1_INIT6 */
#define DDR_MC_CH1_INIT6_MR5_SHIFT                                   0
#define DDR_MC_CH1_INIT6_MR5_MASK                                    0xFFFF
#define DDR_MC_CH1_INIT6_MR4_SHIFT                                   16
#define DDR_MC_CH1_INIT6_MR4_MASK                                    0xFFFF0000

#define mmDDR_MC_CH1_INIT7                                           0x7400EC
/* DDR_MC_CH1_INIT7 */
#define DDR_MC_CH1_INIT7_MR6_SHIFT                                   0
#define DDR_MC_CH1_INIT7_MR6_MASK                                    0xFFFF

#define mmDDR_MC_CH1_DIMMCTL                                         0x7400F0
/* DDR_MC_CH1_DIMMCTL */
#define DDR_MC_CH1_DIMMCTL_DIMM_STAGGER_CS_EN_SHIFT                  0
#define DDR_MC_CH1_DIMMCTL_DIMM_STAGGER_CS_EN_MASK                   0x1
#define DDR_MC_CH1_DIMMCTL_DIMM_ADDR_MIRR_EN_SHIFT                   1
#define DDR_MC_CH1_DIMMCTL_DIMM_ADDR_MIRR_EN_MASK                    0x2
#define DDR_MC_CH1_DIMMCTL_DIMM_OUTPUT_INV_EN_SHIFT                  2
#define DDR_MC_CH1_DIMMCTL_DIMM_OUTPUT_INV_EN_MASK                   0x4
#define DDR_MC_CH1_DIMMCTL_MRS_A17_EN_SHIFT                          3
#define DDR_MC_CH1_DIMMCTL_MRS_A17_EN_MASK                           0x8
#define DDR_MC_CH1_DIMMCTL_MRS_BG1_EN_SHIFT                          4
#define DDR_MC_CH1_DIMMCTL_MRS_BG1_EN_MASK                           0x10
#define DDR_MC_CH1_DIMMCTL_DIMM_DIS_BG_MIRRORING_SHIFT               5
#define DDR_MC_CH1_DIMMCTL_DIMM_DIS_BG_MIRRORING_MASK                0x20
#define DDR_MC_CH1_DIMMCTL_LRDIMM_BCOM_CMD_PROT_SHIFT                6
#define DDR_MC_CH1_DIMMCTL_LRDIMM_BCOM_CMD_PROT_MASK                 0x40
#define DDR_MC_CH1_DIMMCTL_RCD_WEAK_DRIVE_SHIFT                      12
#define DDR_MC_CH1_DIMMCTL_RCD_WEAK_DRIVE_MASK                       0x1000
#define DDR_MC_CH1_DIMMCTL_RCD_A_OUTPUT_DISABLED_SHIFT               13
#define DDR_MC_CH1_DIMMCTL_RCD_A_OUTPUT_DISABLED_MASK                0x2000
#define DDR_MC_CH1_DIMMCTL_RCD_B_OUTPUT_DISABLED_SHIFT               14
#define DDR_MC_CH1_DIMMCTL_RCD_B_OUTPUT_DISABLED_MASK                0x4000

#define mmDDR_MC_CH1_RANKCTL                                         0x7400F4
/* DDR_MC_CH1_RANKCTL */
#define DDR_MC_CH1_RANKCTL_MAX_RANK_RD_SHIFT                         0
#define DDR_MC_CH1_RANKCTL_MAX_RANK_RD_MASK                          0xF
#define DDR_MC_CH1_RANKCTL_DIFF_RANK_RD_GAP_SHIFT                    4
#define DDR_MC_CH1_RANKCTL_DIFF_RANK_RD_GAP_MASK                     0xF0
#define DDR_MC_CH1_RANKCTL_DIFF_RANK_WR_GAP_SHIFT                    8
#define DDR_MC_CH1_RANKCTL_DIFF_RANK_WR_GAP_MASK                     0xF00

#define mmDDR_MC_CH1_DRAMTMG0                                        0x740100
/* DDR_MC_CH1_DRAMTMG0 */
#define DDR_MC_CH1_DRAMTMG0_T_RAS_MIN_SHIFT                          0
#define DDR_MC_CH1_DRAMTMG0_T_RAS_MIN_MASK                           0x3F
#define DDR_MC_CH1_DRAMTMG0_T_RAS_MAX_SHIFT                          8
#define DDR_MC_CH1_DRAMTMG0_T_RAS_MAX_MASK                           0x7F00
#define DDR_MC_CH1_DRAMTMG0_T_FAW_SHIFT                              16
#define DDR_MC_CH1_DRAMTMG0_T_FAW_MASK                               0x3F0000
#define DDR_MC_CH1_DRAMTMG0_WR2PRE_SHIFT                             24
#define DDR_MC_CH1_DRAMTMG0_WR2PRE_MASK                              0x7F000000

#define mmDDR_MC_CH1_DRAMTMG1                                        0x740104
/* DDR_MC_CH1_DRAMTMG1 */
#define DDR_MC_CH1_DRAMTMG1_T_RC_SHIFT                               0
#define DDR_MC_CH1_DRAMTMG1_T_RC_MASK                                0x7F
#define DDR_MC_CH1_DRAMTMG1_RD2PRE_SHIFT                             8
#define DDR_MC_CH1_DRAMTMG1_RD2PRE_MASK                              0x3F00
#define DDR_MC_CH1_DRAMTMG1_T_XP_SHIFT                               16
#define DDR_MC_CH1_DRAMTMG1_T_XP_MASK                                0x1F0000

#define mmDDR_MC_CH1_DRAMTMG2                                        0x740108
/* DDR_MC_CH1_DRAMTMG2 */
#define DDR_MC_CH1_DRAMTMG2_WR2RD_SHIFT                              0
#define DDR_MC_CH1_DRAMTMG2_WR2RD_MASK                               0x3F
#define DDR_MC_CH1_DRAMTMG2_RD2WR_SHIFT                              8
#define DDR_MC_CH1_DRAMTMG2_RD2WR_MASK                               0x3F00
#define DDR_MC_CH1_DRAMTMG2_READ_LATENCY_SHIFT                       16
#define DDR_MC_CH1_DRAMTMG2_READ_LATENCY_MASK                        0x3F0000
#define DDR_MC_CH1_DRAMTMG2_WRITE_LATENCY_SHIFT                      24
#define DDR_MC_CH1_DRAMTMG2_WRITE_LATENCY_MASK                       0x3F000000

#define mmDDR_MC_CH1_DRAMTMG3                                        0x74010C
/* DDR_MC_CH1_DRAMTMG3 */
#define DDR_MC_CH1_DRAMTMG3_T_MOD_SHIFT                              0
#define DDR_MC_CH1_DRAMTMG3_T_MOD_MASK                               0x3FF
#define DDR_MC_CH1_DRAMTMG3_T_MRD_SHIFT                              12
#define DDR_MC_CH1_DRAMTMG3_T_MRD_MASK                               0x3F000

#define mmDDR_MC_CH1_DRAMTMG4                                        0x740110
/* DDR_MC_CH1_DRAMTMG4 */
#define DDR_MC_CH1_DRAMTMG4_T_RP_SHIFT                               0
#define DDR_MC_CH1_DRAMTMG4_T_RP_MASK                                0x1F
#define DDR_MC_CH1_DRAMTMG4_T_RRD_SHIFT                              8
#define DDR_MC_CH1_DRAMTMG4_T_RRD_MASK                               0xF00
#define DDR_MC_CH1_DRAMTMG4_T_CCD_SHIFT                              16
#define DDR_MC_CH1_DRAMTMG4_T_CCD_MASK                               0xF0000
#define DDR_MC_CH1_DRAMTMG4_T_RCD_SHIFT                              24
#define DDR_MC_CH1_DRAMTMG4_T_RCD_MASK                               0x1F000000

#define mmDDR_MC_CH1_DRAMTMG5                                        0x740114
/* DDR_MC_CH1_DRAMTMG5 */
#define DDR_MC_CH1_DRAMTMG5_T_CKE_SHIFT                              0
#define DDR_MC_CH1_DRAMTMG5_T_CKE_MASK                               0x1F
#define DDR_MC_CH1_DRAMTMG5_T_CKESR_SHIFT                            8
#define DDR_MC_CH1_DRAMTMG5_T_CKESR_MASK                             0x3F00
#define DDR_MC_CH1_DRAMTMG5_T_CKSRE_SHIFT                            16
#define DDR_MC_CH1_DRAMTMG5_T_CKSRE_MASK                             0xF0000
#define DDR_MC_CH1_DRAMTMG5_T_CKSRX_SHIFT                            24
#define DDR_MC_CH1_DRAMTMG5_T_CKSRX_MASK                             0xF000000

#define mmDDR_MC_CH1_DRAMTMG8                                        0x740120
/* DDR_MC_CH1_DRAMTMG8 */
#define DDR_MC_CH1_DRAMTMG8_T_XS_X32_SHIFT                           0
#define DDR_MC_CH1_DRAMTMG8_T_XS_X32_MASK                            0x7F
#define DDR_MC_CH1_DRAMTMG8_T_XS_DLL_X32_SHIFT                       8
#define DDR_MC_CH1_DRAMTMG8_T_XS_DLL_X32_MASK                        0x7F00
#define DDR_MC_CH1_DRAMTMG8_T_XS_ABORT_X32_SHIFT                     16
#define DDR_MC_CH1_DRAMTMG8_T_XS_ABORT_X32_MASK                      0x7F0000
#define DDR_MC_CH1_DRAMTMG8_T_XS_FAST_X32_SHIFT                      24
#define DDR_MC_CH1_DRAMTMG8_T_XS_FAST_X32_MASK                       0x7F000000

#define mmDDR_MC_CH1_DRAMTMG9                                        0x740124
/* DDR_MC_CH1_DRAMTMG9 */
#define DDR_MC_CH1_DRAMTMG9_WR2RD_S_SHIFT                            0
#define DDR_MC_CH1_DRAMTMG9_WR2RD_S_MASK                             0x3F
#define DDR_MC_CH1_DRAMTMG9_T_RRD_S_SHIFT                            8
#define DDR_MC_CH1_DRAMTMG9_T_RRD_S_MASK                             0xF00
#define DDR_MC_CH1_DRAMTMG9_T_CCD_S_SHIFT                            16
#define DDR_MC_CH1_DRAMTMG9_T_CCD_S_MASK                             0x70000
#define DDR_MC_CH1_DRAMTMG9_DDR4_WR_PREAMBLE_SHIFT                   30
#define DDR_MC_CH1_DRAMTMG9_DDR4_WR_PREAMBLE_MASK                    0x40000000

#define mmDDR_MC_CH1_DRAMTMG10                                       0x740128
/* DDR_MC_CH1_DRAMTMG10 */
#define DDR_MC_CH1_DRAMTMG10_T_GEAR_HOLD_SHIFT                       0
#define DDR_MC_CH1_DRAMTMG10_T_GEAR_HOLD_MASK                        0x3
#define DDR_MC_CH1_DRAMTMG10_T_GEAR_SETUP_SHIFT                      2
#define DDR_MC_CH1_DRAMTMG10_T_GEAR_SETUP_MASK                       0xC
#define DDR_MC_CH1_DRAMTMG10_T_CMD_GEAR_SHIFT                        8
#define DDR_MC_CH1_DRAMTMG10_T_CMD_GEAR_MASK                         0x1F00
#define DDR_MC_CH1_DRAMTMG10_T_SYNC_GEAR_SHIFT                       16
#define DDR_MC_CH1_DRAMTMG10_T_SYNC_GEAR_MASK                        0x1F0000

#define mmDDR_MC_CH1_DRAMTMG11                                       0x74012C
/* DDR_MC_CH1_DRAMTMG11 */
#define DDR_MC_CH1_DRAMTMG11_T_CKMPE_SHIFT                           0
#define DDR_MC_CH1_DRAMTMG11_T_CKMPE_MASK                            0x1F
#define DDR_MC_CH1_DRAMTMG11_T_MPX_S_SHIFT                           8
#define DDR_MC_CH1_DRAMTMG11_T_MPX_S_MASK                            0x300
#define DDR_MC_CH1_DRAMTMG11_T_MPX_LH_SHIFT                          16
#define DDR_MC_CH1_DRAMTMG11_T_MPX_LH_MASK                           0x1F0000
#define DDR_MC_CH1_DRAMTMG11_POST_MPSM_GAP_X32_SHIFT                 24
#define DDR_MC_CH1_DRAMTMG11_POST_MPSM_GAP_X32_MASK                  0x7F000000

#define mmDDR_MC_CH1_DRAMTMG12                                       0x740130
/* DDR_MC_CH1_DRAMTMG12 */
#define DDR_MC_CH1_DRAMTMG12_T_MRD_PDA_SHIFT                         0
#define DDR_MC_CH1_DRAMTMG12_T_MRD_PDA_MASK                          0x1F

#define mmDDR_MC_CH1_DRAMTMG15                                       0x74013C
/* DDR_MC_CH1_DRAMTMG15 */
#define DDR_MC_CH1_DRAMTMG15_T_STAB_X32_SHIFT                        0
#define DDR_MC_CH1_DRAMTMG15_T_STAB_X32_MASK                         0xFF
#define DDR_MC_CH1_DRAMTMG15_EN_DFI_LP_T_STAB_SHIFT                  31
#define DDR_MC_CH1_DRAMTMG15_EN_DFI_LP_T_STAB_MASK                   0x80000000

#define mmDDR_MC_CH1_ZQCTL0                                          0x740180
/* DDR_MC_CH1_ZQCTL0 */
#define DDR_MC_CH1_ZQCTL0_T_ZQ_SHORT_NOP_SHIFT                       0
#define DDR_MC_CH1_ZQCTL0_T_ZQ_SHORT_NOP_MASK                        0x3FF
#define DDR_MC_CH1_ZQCTL0_T_ZQ_LONG_NOP_SHIFT                        16
#define DDR_MC_CH1_ZQCTL0_T_ZQ_LONG_NOP_MASK                         0x7FF0000
#define DDR_MC_CH1_ZQCTL0_DIS_MPSMX_ZQCL_SHIFT                       28
#define DDR_MC_CH1_ZQCTL0_DIS_MPSMX_ZQCL_MASK                        0x10000000
#define DDR_MC_CH1_ZQCTL0_ZQ_RESISTOR_SHARED_SHIFT                   29
#define DDR_MC_CH1_ZQCTL0_ZQ_RESISTOR_SHARED_MASK                    0x20000000
#define DDR_MC_CH1_ZQCTL0_DIS_SRX_ZQCL_SHIFT                         30
#define DDR_MC_CH1_ZQCTL0_DIS_SRX_ZQCL_MASK                          0x40000000
#define DDR_MC_CH1_ZQCTL0_DIS_AUTO_ZQ_SHIFT                          31
#define DDR_MC_CH1_ZQCTL0_DIS_AUTO_ZQ_MASK                           0x80000000

#define mmDDR_MC_CH1_ZQCTL1                                          0x740184
/* DDR_MC_CH1_ZQCTL1 */
#define DDR_MC_CH1_ZQCTL1_T_ZQ_SHORT_INTERVAL_X1024_SHIFT            0
#define DDR_MC_CH1_ZQCTL1_T_ZQ_SHORT_INTERVAL_X1024_MASK             0xFFFFF

#define mmDDR_MC_CH1_DFITMG0                                         0x740190
/* DDR_MC_CH1_DFITMG0 */
#define DDR_MC_CH1_DFITMG0_DFI_TPHY_WRLAT_SHIFT                      0
#define DDR_MC_CH1_DFITMG0_DFI_TPHY_WRLAT_MASK                       0x3F
#define DDR_MC_CH1_DFITMG0_DFI_TPHY_WRDATA_SHIFT                     8
#define DDR_MC_CH1_DFITMG0_DFI_TPHY_WRDATA_MASK                      0x3F00
#define DDR_MC_CH1_DFITMG0_DFI_WRDATA_USE_DFI_PHY_CLK_SHIFT          15
#define DDR_MC_CH1_DFITMG0_DFI_WRDATA_USE_DFI_PHY_CLK_MASK           0x8000
#define DDR_MC_CH1_DFITMG0_DFI_T_RDDATA_EN_SHIFT                     16
#define DDR_MC_CH1_DFITMG0_DFI_T_RDDATA_EN_MASK                      0x7F0000
#define DDR_MC_CH1_DFITMG0_DFI_RDDATA_USE_DFI_PHY_CLK_SHIFT          23
#define DDR_MC_CH1_DFITMG0_DFI_RDDATA_USE_DFI_PHY_CLK_MASK           0x800000
#define DDR_MC_CH1_DFITMG0_DFI_T_CTRL_DELAY_SHIFT                    24
#define DDR_MC_CH1_DFITMG0_DFI_T_CTRL_DELAY_MASK                     0x1F000000

#define mmDDR_MC_CH1_DFITMG1                                         0x740194
/* DDR_MC_CH1_DFITMG1 */
#define DDR_MC_CH1_DFITMG1_DFI_T_DRAM_CLK_ENABLE_SHIFT               0
#define DDR_MC_CH1_DFITMG1_DFI_T_DRAM_CLK_ENABLE_MASK                0x1F
#define DDR_MC_CH1_DFITMG1_DFI_T_DRAM_CLK_DISABLE_SHIFT              8
#define DDR_MC_CH1_DFITMG1_DFI_T_DRAM_CLK_DISABLE_MASK               0x1F00
#define DDR_MC_CH1_DFITMG1_DFI_T_WRDATA_DELAY_SHIFT                  16
#define DDR_MC_CH1_DFITMG1_DFI_T_WRDATA_DELAY_MASK                   0x1F0000
#define DDR_MC_CH1_DFITMG1_DFI_T_PARIN_LAT_SHIFT                     24
#define DDR_MC_CH1_DFITMG1_DFI_T_PARIN_LAT_MASK                      0x3000000
#define DDR_MC_CH1_DFITMG1_DFI_T_CMD_LAT_SHIFT                       28
#define DDR_MC_CH1_DFITMG1_DFI_T_CMD_LAT_MASK                        0xF0000000

#define mmDDR_MC_CH1_DFILPCFG0                                       0x740198
/* DDR_MC_CH1_DFILPCFG0 */
#define DDR_MC_CH1_DFILPCFG0_DFI_LP_EN_PD_SHIFT                      0
#define DDR_MC_CH1_DFILPCFG0_DFI_LP_EN_PD_MASK                       0x1
#define DDR_MC_CH1_DFILPCFG0_DFI_LP_WAKEUP_PD_SHIFT                  4
#define DDR_MC_CH1_DFILPCFG0_DFI_LP_WAKEUP_PD_MASK                   0xF0
#define DDR_MC_CH1_DFILPCFG0_DFI_LP_EN_SR_SHIFT                      8
#define DDR_MC_CH1_DFILPCFG0_DFI_LP_EN_SR_MASK                       0x100
#define DDR_MC_CH1_DFILPCFG0_DFI_LP_WAKEUP_SR_SHIFT                  12
#define DDR_MC_CH1_DFILPCFG0_DFI_LP_WAKEUP_SR_MASK                   0xF000
#define DDR_MC_CH1_DFILPCFG0_DFI_TLP_RESP_SHIFT                      24
#define DDR_MC_CH1_DFILPCFG0_DFI_TLP_RESP_MASK                       0x1F000000

#define mmDDR_MC_CH1_DFILPCFG1                                       0x74019C
/* DDR_MC_CH1_DFILPCFG1 */
#define DDR_MC_CH1_DFILPCFG1_DFI_LP_EN_MPSM_SHIFT                    0
#define DDR_MC_CH1_DFILPCFG1_DFI_LP_EN_MPSM_MASK                     0x1
#define DDR_MC_CH1_DFILPCFG1_DFI_LP_WAKEUP_MPSM_SHIFT                4
#define DDR_MC_CH1_DFILPCFG1_DFI_LP_WAKEUP_MPSM_MASK                 0xF0

#define mmDDR_MC_CH1_DFIUPD0                                         0x7401A0
/* DDR_MC_CH1_DFIUPD0 */
#define DDR_MC_CH1_DFIUPD0_DFI_T_CTRLUP_MIN_SHIFT                    0
#define DDR_MC_CH1_DFIUPD0_DFI_T_CTRLUP_MIN_MASK                     0x3FF
#define DDR_MC_CH1_DFIUPD0_DFI_T_CTRLUP_MAX_SHIFT                    16
#define DDR_MC_CH1_DFIUPD0_DFI_T_CTRLUP_MAX_MASK                     0x3FF0000
#define DDR_MC_CH1_DFIUPD0_CTRLUPD_PRE_SRX_SHIFT                     29
#define DDR_MC_CH1_DFIUPD0_CTRLUPD_PRE_SRX_MASK                      0x20000000
#define DDR_MC_CH1_DFIUPD0_DIS_AUTO_CTRLUPD_SRX_SHIFT                30
#define DDR_MC_CH1_DFIUPD0_DIS_AUTO_CTRLUPD_SRX_MASK                 0x40000000
#define DDR_MC_CH1_DFIUPD0_DIS_AUTO_CTRLUPD_SHIFT                    31
#define DDR_MC_CH1_DFIUPD0_DIS_AUTO_CTRLUPD_MASK                     0x80000000

#define mmDDR_MC_CH1_DFIUPD1                                         0x7401A4
/* DDR_MC_CH1_DFIUPD1 */
#define DDR_MC_CH1_DFIUPD1_DFI_T_CTRLUPD_INTERVAL_MAX_X1024_SHIFT    0
#define DDR_MC_CH1_DFIUPD1_DFI_T_CTRLUPD_INTERVAL_MAX_X1024_MASK     0xFF
#define DDR_MC_CH1_DFIUPD1_DFI_T_CTRLUPD_INTERVAL_MIN_X1024_SHIFT    16
#define DDR_MC_CH1_DFIUPD1_DFI_T_CTRLUPD_INTERVAL_MIN_X1024_MASK     0xFF0000

#define mmDDR_MC_CH1_DFIUPD2                                         0x7401A8
/* DDR_MC_CH1_DFIUPD2 */
#define DDR_MC_CH1_DFIUPD2_DFI_PHYUPD_EN_SHIFT                       31
#define DDR_MC_CH1_DFIUPD2_DFI_PHYUPD_EN_MASK                        0x80000000

#define mmDDR_MC_CH1_DFIMISC                                         0x7401B0
/* DDR_MC_CH1_DFIMISC */
#define DDR_MC_CH1_DFIMISC_DFI_INIT_COMPLETE_EN_SHIFT                0
#define DDR_MC_CH1_DFIMISC_DFI_INIT_COMPLETE_EN_MASK                 0x1
#define DDR_MC_CH1_DFIMISC_PHY_DBI_MODE_SHIFT                        1
#define DDR_MC_CH1_DFIMISC_PHY_DBI_MODE_MASK                         0x2
#define DDR_MC_CH1_DFIMISC_DFI_DATA_CS_POLARITY_SHIFT                2
#define DDR_MC_CH1_DFIMISC_DFI_DATA_CS_POLARITY_MASK                 0x4
#define DDR_MC_CH1_DFIMISC_CTL_IDLE_EN_SHIFT                         4
#define DDR_MC_CH1_DFIMISC_CTL_IDLE_EN_MASK                          0x10
#define DDR_MC_CH1_DFIMISC_DFI_INIT_START_SHIFT                      5
#define DDR_MC_CH1_DFIMISC_DFI_INIT_START_MASK                       0x20
#define DDR_MC_CH1_DFIMISC_DIS_DYN_ADR_TRI_SHIFT                     6
#define DDR_MC_CH1_DFIMISC_DIS_DYN_ADR_TRI_MASK                      0x40
#define DDR_MC_CH1_DFIMISC_DFI_FREQUENCY_SHIFT                       8
#define DDR_MC_CH1_DFIMISC_DFI_FREQUENCY_MASK                        0x1F00

#define mmDDR_MC_CH1_DFITMG2                                         0x7401B4
/* DDR_MC_CH1_DFITMG2 */
#define DDR_MC_CH1_DFITMG2_DFI_TPHY_WRCSLAT_SHIFT                    0
#define DDR_MC_CH1_DFITMG2_DFI_TPHY_WRCSLAT_MASK                     0x3F
#define DDR_MC_CH1_DFITMG2_DFI_TPHY_RDCSLAT_SHIFT                    8
#define DDR_MC_CH1_DFITMG2_DFI_TPHY_RDCSLAT_MASK                     0x7F00

#define mmDDR_MC_CH1_DFITMG3                                         0x7401B8
/* DDR_MC_CH1_DFITMG3 */
#define DDR_MC_CH1_DFITMG3_DFI_T_GEARDOWN_DELAY_SHIFT                0
#define DDR_MC_CH1_DFITMG3_DFI_T_GEARDOWN_DELAY_MASK                 0x1F

#define mmDDR_MC_CH1_DFISTAT                                         0x7401BC
/* DDR_MC_CH1_DFISTAT */
#define DDR_MC_CH1_DFISTAT_DFI_INIT_COMPLETE_SHIFT                   0
#define DDR_MC_CH1_DFISTAT_DFI_INIT_COMPLETE_MASK                    0x1
#define DDR_MC_CH1_DFISTAT_DFI_LP_ACK_SHIFT                          1
#define DDR_MC_CH1_DFISTAT_DFI_LP_ACK_MASK                           0x2

#define mmDDR_MC_CH1_DBICTL                                          0x7401C0
/* DDR_MC_CH1_DBICTL */
#define DDR_MC_CH1_DBICTL_DM_EN_SHIFT                                0
#define DDR_MC_CH1_DBICTL_DM_EN_MASK                                 0x1
#define DDR_MC_CH1_DBICTL_WR_DBI_EN_SHIFT                            1
#define DDR_MC_CH1_DBICTL_WR_DBI_EN_MASK                             0x2
#define DDR_MC_CH1_DBICTL_RD_DBI_EN_SHIFT                            2
#define DDR_MC_CH1_DBICTL_RD_DBI_EN_MASK                             0x4

#define mmDDR_MC_CH1_DFIPHYMSTR                                      0x7401C4
/* DDR_MC_CH1_DFIPHYMSTR */
#define DDR_MC_CH1_DFIPHYMSTR_DFI_PHYMSTR_EN_SHIFT                   0
#define DDR_MC_CH1_DFIPHYMSTR_DFI_PHYMSTR_EN_MASK                    0x1

#define mmDDR_MC_CH1_ADDRMAP0                                        0x740200
/* DDR_MC_CH1_ADDRMAP0 */
#define DDR_MC_CH1_ADDRMAP0_ADDRMAP_CS_BIT0_SHIFT                    0
#define DDR_MC_CH1_ADDRMAP0_ADDRMAP_CS_BIT0_MASK                     0x1F
#define DDR_MC_CH1_ADDRMAP0_RSVD_SHIFT                               8
#define DDR_MC_CH1_ADDRMAP0_RSVD_MASK                                0x1F00

#define mmDDR_MC_CH1_ADDRMAP1                                        0x740204
/* DDR_MC_CH1_ADDRMAP1 */
#define DDR_MC_CH1_ADDRMAP1_ADDRMAP_BANK_B0_SHIFT                    0
#define DDR_MC_CH1_ADDRMAP1_ADDRMAP_BANK_B0_MASK                     0x3F
#define DDR_MC_CH1_ADDRMAP1_ADDRMAP_BANK_B1_SHIFT                    8
#define DDR_MC_CH1_ADDRMAP1_ADDRMAP_BANK_B1_MASK                     0x3F00
#define DDR_MC_CH1_ADDRMAP1_ADDRMAP_BANK_B2_SHIFT                    16
#define DDR_MC_CH1_ADDRMAP1_ADDRMAP_BANK_B2_MASK                     0x3F0000

#define mmDDR_MC_CH1_ADDRMAP2                                        0x740208
/* DDR_MC_CH1_ADDRMAP2 */
#define DDR_MC_CH1_ADDRMAP2_ADDRMAP_COL_B2_SHIFT                     0
#define DDR_MC_CH1_ADDRMAP2_ADDRMAP_COL_B2_MASK                      0xF
#define DDR_MC_CH1_ADDRMAP2_ADDRMAP_COL_B3_SHIFT                     8
#define DDR_MC_CH1_ADDRMAP2_ADDRMAP_COL_B3_MASK                      0x1F00
#define DDR_MC_CH1_ADDRMAP2_ADDRMAP_COL_B4_SHIFT                     16
#define DDR_MC_CH1_ADDRMAP2_ADDRMAP_COL_B4_MASK                      0xF0000
#define DDR_MC_CH1_ADDRMAP2_ADDRMAP_COL_B5_SHIFT                     24
#define DDR_MC_CH1_ADDRMAP2_ADDRMAP_COL_B5_MASK                      0xF000000

#define mmDDR_MC_CH1_ADDRMAP3                                        0x74020C
/* DDR_MC_CH1_ADDRMAP3 */
#define DDR_MC_CH1_ADDRMAP3_ADDRMAP_COL_B6_SHIFT                     0
#define DDR_MC_CH1_ADDRMAP3_ADDRMAP_COL_B6_MASK                      0x1F
#define DDR_MC_CH1_ADDRMAP3_ADDRMAP_COL_B7_SHIFT                     8
#define DDR_MC_CH1_ADDRMAP3_ADDRMAP_COL_B7_MASK                      0x1F00
#define DDR_MC_CH1_ADDRMAP3_ADDRMAP_COL_B8_SHIFT                     16
#define DDR_MC_CH1_ADDRMAP3_ADDRMAP_COL_B8_MASK                      0x1F0000
#define DDR_MC_CH1_ADDRMAP3_ADDRMAP_COL_B9_SHIFT                     24
#define DDR_MC_CH1_ADDRMAP3_ADDRMAP_COL_B9_MASK                      0x1F000000

#define mmDDR_MC_CH1_ADDRMAP4                                        0x740210
/* DDR_MC_CH1_ADDRMAP4 */
#define DDR_MC_CH1_ADDRMAP4_ADDRMAP_COL_B10_SHIFT                    0
#define DDR_MC_CH1_ADDRMAP4_ADDRMAP_COL_B10_MASK                     0x1F
#define DDR_MC_CH1_ADDRMAP4_ADDRMAP_COL_B11_SHIFT                    8
#define DDR_MC_CH1_ADDRMAP4_ADDRMAP_COL_B11_MASK                     0x1F00

#define mmDDR_MC_CH1_ADDRMAP5                                        0x740214
/* DDR_MC_CH1_ADDRMAP5 */
#define DDR_MC_CH1_ADDRMAP5_ADDRMAP_ROW_B0_SHIFT                     0
#define DDR_MC_CH1_ADDRMAP5_ADDRMAP_ROW_B0_MASK                      0xF
#define DDR_MC_CH1_ADDRMAP5_ADDRMAP_ROW_B1_SHIFT                     8
#define DDR_MC_CH1_ADDRMAP5_ADDRMAP_ROW_B1_MASK                      0xF00
#define DDR_MC_CH1_ADDRMAP5_ADDRMAP_ROW_B2_10_SHIFT                  16
#define DDR_MC_CH1_ADDRMAP5_ADDRMAP_ROW_B2_10_MASK                   0xF0000
#define DDR_MC_CH1_ADDRMAP5_ADDRMAP_ROW_B11_SHIFT                    24
#define DDR_MC_CH1_ADDRMAP5_ADDRMAP_ROW_B11_MASK                     0xF000000

#define mmDDR_MC_CH1_ADDRMAP6                                        0x740218
/* DDR_MC_CH1_ADDRMAP6 */
#define DDR_MC_CH1_ADDRMAP6_ADDRMAP_ROW_B12_SHIFT                    0
#define DDR_MC_CH1_ADDRMAP6_ADDRMAP_ROW_B12_MASK                     0xF
#define DDR_MC_CH1_ADDRMAP6_ADDRMAP_ROW_B13_SHIFT                    8
#define DDR_MC_CH1_ADDRMAP6_ADDRMAP_ROW_B13_MASK                     0xF00
#define DDR_MC_CH1_ADDRMAP6_ADDRMAP_ROW_B14_SHIFT                    16
#define DDR_MC_CH1_ADDRMAP6_ADDRMAP_ROW_B14_MASK                     0xF0000
#define DDR_MC_CH1_ADDRMAP6_ADDRMAP_ROW_B15_SHIFT                    24
#define DDR_MC_CH1_ADDRMAP6_ADDRMAP_ROW_B15_MASK                     0xF000000

#define mmDDR_MC_CH1_ADDRMAP7                                        0x74021C
/* DDR_MC_CH1_ADDRMAP7 */
#define DDR_MC_CH1_ADDRMAP7_ADDRMAP_ROW_B16_SHIFT                    0
#define DDR_MC_CH1_ADDRMAP7_ADDRMAP_ROW_B16_MASK                     0xF
#define DDR_MC_CH1_ADDRMAP7_ADDRMAP_ROW_B17_SHIFT                    8
#define DDR_MC_CH1_ADDRMAP7_ADDRMAP_ROW_B17_MASK                     0xF00

#define mmDDR_MC_CH1_ADDRMAP8                                        0x740220
/* DDR_MC_CH1_ADDRMAP8 */
#define DDR_MC_CH1_ADDRMAP8_ADDRMAP_BG_B0_SHIFT                      0
#define DDR_MC_CH1_ADDRMAP8_ADDRMAP_BG_B0_MASK                       0x3F
#define DDR_MC_CH1_ADDRMAP8_ADDRMAP_BG_B1_SHIFT                      8
#define DDR_MC_CH1_ADDRMAP8_ADDRMAP_BG_B1_MASK                       0x3F00

#define mmDDR_MC_CH1_ADDRMAP9                                        0x740224
/* DDR_MC_CH1_ADDRMAP9 */
#define DDR_MC_CH1_ADDRMAP9_ADDRMAP_ROW_B2_SHIFT                     0
#define DDR_MC_CH1_ADDRMAP9_ADDRMAP_ROW_B2_MASK                      0xF
#define DDR_MC_CH1_ADDRMAP9_ADDRMAP_ROW_B3_SHIFT                     8
#define DDR_MC_CH1_ADDRMAP9_ADDRMAP_ROW_B3_MASK                      0xF00
#define DDR_MC_CH1_ADDRMAP9_ADDRMAP_ROW_B4_SHIFT                     16
#define DDR_MC_CH1_ADDRMAP9_ADDRMAP_ROW_B4_MASK                      0xF0000
#define DDR_MC_CH1_ADDRMAP9_ADDRMAP_ROW_B5_SHIFT                     24
#define DDR_MC_CH1_ADDRMAP9_ADDRMAP_ROW_B5_MASK                      0xF000000

#define mmDDR_MC_CH1_ADDRMAP10                                       0x740228
/* DDR_MC_CH1_ADDRMAP10 */
#define DDR_MC_CH1_ADDRMAP10_ADDRMAP_ROW_B6_SHIFT                    0
#define DDR_MC_CH1_ADDRMAP10_ADDRMAP_ROW_B6_MASK                     0xF
#define DDR_MC_CH1_ADDRMAP10_ADDRMAP_ROW_B7_SHIFT                    8
#define DDR_MC_CH1_ADDRMAP10_ADDRMAP_ROW_B7_MASK                     0xF00
#define DDR_MC_CH1_ADDRMAP10_ADDRMAP_ROW_B8_SHIFT                    16
#define DDR_MC_CH1_ADDRMAP10_ADDRMAP_ROW_B8_MASK                     0xF0000
#define DDR_MC_CH1_ADDRMAP10_ADDRMAP_ROW_B9_SHIFT                    24
#define DDR_MC_CH1_ADDRMAP10_ADDRMAP_ROW_B9_MASK                     0xF000000

#define mmDDR_MC_CH1_ADDRMAP11                                       0x74022C
/* DDR_MC_CH1_ADDRMAP11 */
#define DDR_MC_CH1_ADDRMAP11_ADDRMAP_ROW_B10_SHIFT                   0
#define DDR_MC_CH1_ADDRMAP11_ADDRMAP_ROW_B10_MASK                    0xF

#define mmDDR_MC_CH1_ODTCFG                                          0x740240
/* DDR_MC_CH1_ODTCFG */
#define DDR_MC_CH1_ODTCFG_RD_ODT_DELAY_SHIFT                         2
#define DDR_MC_CH1_ODTCFG_RD_ODT_DELAY_MASK                          0x7C
#define DDR_MC_CH1_ODTCFG_RD_ODT_HOLD_SHIFT                          8
#define DDR_MC_CH1_ODTCFG_RD_ODT_HOLD_MASK                           0xF00
#define DDR_MC_CH1_ODTCFG_WR_ODT_DELAY_SHIFT                         16
#define DDR_MC_CH1_ODTCFG_WR_ODT_DELAY_MASK                          0x1F0000
#define DDR_MC_CH1_ODTCFG_WR_ODT_HOLD_SHIFT                          24
#define DDR_MC_CH1_ODTCFG_WR_ODT_HOLD_MASK                           0xF000000

#define mmDDR_MC_CH1_ODTMAP                                          0x740244
/* DDR_MC_CH1_ODTMAP */
#define DDR_MC_CH1_ODTMAP_RANK0_WR_ODT_SHIFT                         0
#define DDR_MC_CH1_ODTMAP_RANK0_WR_ODT_MASK                          0x3
#define DDR_MC_CH1_ODTMAP_RSVD_1_SHIFT                               2
#define DDR_MC_CH1_ODTMAP_RSVD_1_MASK                                0xC
#define DDR_MC_CH1_ODTMAP_RANK0_RD_ODT_SHIFT                         4
#define DDR_MC_CH1_ODTMAP_RANK0_RD_ODT_MASK                          0x30
#define DDR_MC_CH1_ODTMAP_RSVD_2_SHIFT                               6
#define DDR_MC_CH1_ODTMAP_RSVD_2_MASK                                0xC0
#define DDR_MC_CH1_ODTMAP_RANK1_WR_ODT_SHIFT                         8
#define DDR_MC_CH1_ODTMAP_RANK1_WR_ODT_MASK                          0x300
#define DDR_MC_CH1_ODTMAP_RSVD_3_SHIFT                               10
#define DDR_MC_CH1_ODTMAP_RSVD_3_MASK                                0xC00
#define DDR_MC_CH1_ODTMAP_RANK1_RD_ODT_SHIFT                         12
#define DDR_MC_CH1_ODTMAP_RANK1_RD_ODT_MASK                          0x3000
#define DDR_MC_CH1_ODTMAP_RSVD_4_SHIFT                               14
#define DDR_MC_CH1_ODTMAP_RSVD_4_MASK                                0xC000
#define DDR_MC_CH1_ODTMAP_RSVD_5_SHIFT                               16
#define DDR_MC_CH1_ODTMAP_RSVD_5_MASK                                0xF0000
#define DDR_MC_CH1_ODTMAP_RSVD_6_SHIFT                               20
#define DDR_MC_CH1_ODTMAP_RSVD_6_MASK                                0xF00000
#define DDR_MC_CH1_ODTMAP_RSVD_7_SHIFT                               24
#define DDR_MC_CH1_ODTMAP_RSVD_7_MASK                                0xF000000

#define mmDDR_MC_CH1_SCHED                                           0x740250
/* DDR_MC_CH1_SCHED */
#define DDR_MC_CH1_SCHED_FORCE_LOW_PRI_N_SHIFT                       0
#define DDR_MC_CH1_SCHED_FORCE_LOW_PRI_N_MASK                        0x1
#define DDR_MC_CH1_SCHED_PREFER_WRITE_SHIFT                          1
#define DDR_MC_CH1_SCHED_PREFER_WRITE_MASK                           0x2
#define DDR_MC_CH1_SCHED_PAGECLOSE_SHIFT                             2
#define DDR_MC_CH1_SCHED_PAGECLOSE_MASK                              0x4
#define DDR_MC_CH1_SCHED_LPR_NUM_ENTRIES_SHIFT                       8
#define DDR_MC_CH1_SCHED_LPR_NUM_ENTRIES_MASK                        0x3F00
#define DDR_MC_CH1_SCHED_GO2CRITICAL_HYSTERESIS_SHIFT                16
#define DDR_MC_CH1_SCHED_GO2CRITICAL_HYSTERESIS_MASK                 0xFF0000
#define DDR_MC_CH1_SCHED_RDWR_IDLE_GAP_SHIFT                         24
#define DDR_MC_CH1_SCHED_RDWR_IDLE_GAP_MASK                          0x7F000000

#define mmDDR_MC_CH1_SCHED1                                          0x740254
/* DDR_MC_CH1_SCHED1 */
#define DDR_MC_CH1_SCHED1_PAGECLOSE_TIMER_SHIFT                      0
#define DDR_MC_CH1_SCHED1_PAGECLOSE_TIMER_MASK                       0xFF

#define mmDDR_MC_CH1_PERFHPR1                                        0x74025C
/* DDR_MC_CH1_PERFHPR1 */
#define DDR_MC_CH1_PERFHPR1_HPR_MAX_STARVE_SHIFT                     0
#define DDR_MC_CH1_PERFHPR1_HPR_MAX_STARVE_MASK                      0xFFFF
#define DDR_MC_CH1_PERFHPR1_HPR_XACT_RUN_LENGTH_SHIFT                24
#define DDR_MC_CH1_PERFHPR1_HPR_XACT_RUN_LENGTH_MASK                 0xFF000000

#define mmDDR_MC_CH1_PERFLPR1                                        0x740264
/* DDR_MC_CH1_PERFLPR1 */
#define DDR_MC_CH1_PERFLPR1_LPR_MAX_STARVE_SHIFT                     0
#define DDR_MC_CH1_PERFLPR1_LPR_MAX_STARVE_MASK                      0xFFFF
#define DDR_MC_CH1_PERFLPR1_LPR_XACT_RUN_LENGTH_SHIFT                24
#define DDR_MC_CH1_PERFLPR1_LPR_XACT_RUN_LENGTH_MASK                 0xFF000000

#define mmDDR_MC_CH1_PERFWR1                                         0x74026C
/* DDR_MC_CH1_PERFWR1 */
#define DDR_MC_CH1_PERFWR1_W_MAX_STARVE_SHIFT                        0
#define DDR_MC_CH1_PERFWR1_W_MAX_STARVE_MASK                         0xFFFF
#define DDR_MC_CH1_PERFWR1_W_XACT_RUN_LENGTH_SHIFT                   24
#define DDR_MC_CH1_PERFWR1_W_XACT_RUN_LENGTH_MASK                    0xFF000000

#define mmDDR_MC_CH1_DQMAP0                                          0x740280
/* DDR_MC_CH1_DQMAP0 */
#define DDR_MC_CH1_DQMAP0_DQ_NIBBLE_MAP_0_3_SHIFT                    0
#define DDR_MC_CH1_DQMAP0_DQ_NIBBLE_MAP_0_3_MASK                     0xFF
#define DDR_MC_CH1_DQMAP0_DQ_NIBBLE_MAP_4_7_SHIFT                    8
#define DDR_MC_CH1_DQMAP0_DQ_NIBBLE_MAP_4_7_MASK                     0xFF00
#define DDR_MC_CH1_DQMAP0_DQ_NIBBLE_MAP_8_11_SHIFT                   16
#define DDR_MC_CH1_DQMAP0_DQ_NIBBLE_MAP_8_11_MASK                    0xFF0000
#define DDR_MC_CH1_DQMAP0_DQ_NIBBLE_MAP_12_15_SHIFT                  24
#define DDR_MC_CH1_DQMAP0_DQ_NIBBLE_MAP_12_15_MASK                   0xFF000000

#define mmDDR_MC_CH1_DQMAP1                                          0x740284
/* DDR_MC_CH1_DQMAP1 */
#define DDR_MC_CH1_DQMAP1_DQ_NIBBLE_MAP_16_19_SHIFT                  0
#define DDR_MC_CH1_DQMAP1_DQ_NIBBLE_MAP_16_19_MASK                   0xFF
#define DDR_MC_CH1_DQMAP1_DQ_NIBBLE_MAP_20_23_SHIFT                  8
#define DDR_MC_CH1_DQMAP1_DQ_NIBBLE_MAP_20_23_MASK                   0xFF00
#define DDR_MC_CH1_DQMAP1_DQ_NIBBLE_MAP_24_27_SHIFT                  16
#define DDR_MC_CH1_DQMAP1_DQ_NIBBLE_MAP_24_27_MASK                   0xFF0000
#define DDR_MC_CH1_DQMAP1_DQ_NIBBLE_MAP_28_31_SHIFT                  24
#define DDR_MC_CH1_DQMAP1_DQ_NIBBLE_MAP_28_31_MASK                   0xFF000000

#define mmDDR_MC_CH1_DQMAP2                                          0x740288
/* DDR_MC_CH1_DQMAP2 */
#define DDR_MC_CH1_DQMAP2_DQ_NIBBLE_MAP_32_35_SHIFT                  0
#define DDR_MC_CH1_DQMAP2_DQ_NIBBLE_MAP_32_35_MASK                   0xFF
#define DDR_MC_CH1_DQMAP2_DQ_NIBBLE_MAP_36_39_SHIFT                  8
#define DDR_MC_CH1_DQMAP2_DQ_NIBBLE_MAP_36_39_MASK                   0xFF00
#define DDR_MC_CH1_DQMAP2_DQ_NIBBLE_MAP_40_43_SHIFT                  16
#define DDR_MC_CH1_DQMAP2_DQ_NIBBLE_MAP_40_43_MASK                   0xFF0000
#define DDR_MC_CH1_DQMAP2_DQ_NIBBLE_MAP_44_47_SHIFT                  24
#define DDR_MC_CH1_DQMAP2_DQ_NIBBLE_MAP_44_47_MASK                   0xFF000000

#define mmDDR_MC_CH1_DQMAP3                                          0x74028C
/* DDR_MC_CH1_DQMAP3 */
#define DDR_MC_CH1_DQMAP3_DQ_NIBBLE_MAP_48_51_SHIFT                  0
#define DDR_MC_CH1_DQMAP3_DQ_NIBBLE_MAP_48_51_MASK                   0xFF
#define DDR_MC_CH1_DQMAP3_DQ_NIBBLE_MAP_52_55_SHIFT                  8
#define DDR_MC_CH1_DQMAP3_DQ_NIBBLE_MAP_52_55_MASK                   0xFF00
#define DDR_MC_CH1_DQMAP3_DQ_NIBBLE_MAP_56_59_SHIFT                  16
#define DDR_MC_CH1_DQMAP3_DQ_NIBBLE_MAP_56_59_MASK                   0xFF0000
#define DDR_MC_CH1_DQMAP3_DQ_NIBBLE_MAP_60_63_SHIFT                  24
#define DDR_MC_CH1_DQMAP3_DQ_NIBBLE_MAP_60_63_MASK                   0xFF000000

#define mmDDR_MC_CH1_DQMAP4                                          0x740290
/* DDR_MC_CH1_DQMAP4 */
#define DDR_MC_CH1_DQMAP4_DQ_NIBBLE_MAP_CB_0_3_SHIFT                 0
#define DDR_MC_CH1_DQMAP4_DQ_NIBBLE_MAP_CB_0_3_MASK                  0xFF
#define DDR_MC_CH1_DQMAP4_DQ_NIBBLE_MAP_CB_4_7_SHIFT                 8
#define DDR_MC_CH1_DQMAP4_DQ_NIBBLE_MAP_CB_4_7_MASK                  0xFF00

#define mmDDR_MC_CH1_DQMAP5                                          0x740294
/* DDR_MC_CH1_DQMAP5 */
#define DDR_MC_CH1_DQMAP5_DIS_DQ_RANK_SWAP_SHIFT                     0
#define DDR_MC_CH1_DQMAP5_DIS_DQ_RANK_SWAP_MASK                      0x1

#define mmDDR_MC_CH1_DBG0                                            0x740300
/* DDR_MC_CH1_DBG0 */
#define DDR_MC_CH1_DBG0_DIS_WC_SHIFT                                 0
#define DDR_MC_CH1_DBG0_DIS_WC_MASK                                  0x1
#define DDR_MC_CH1_DBG0_DIS_COLLISION_PAGE_OPT_SHIFT                 4
#define DDR_MC_CH1_DBG0_DIS_COLLISION_PAGE_OPT_MASK                  0x10

#define mmDDR_MC_CH1_DBG1                                            0x740304
/* DDR_MC_CH1_DBG1 */
#define DDR_MC_CH1_DBG1_DIS_DQ_SHIFT                                 0
#define DDR_MC_CH1_DBG1_DIS_DQ_MASK                                  0x1
#define DDR_MC_CH1_DBG1_DIS_HIF_SHIFT                                1
#define DDR_MC_CH1_DBG1_DIS_HIF_MASK                                 0x2

#define mmDDR_MC_CH1_DBGCAM                                          0x740308
/* DDR_MC_CH1_DBGCAM */
#define DDR_MC_CH1_DBGCAM_DBG_HPR_Q_DEPTH_SHIFT                      0
#define DDR_MC_CH1_DBGCAM_DBG_HPR_Q_DEPTH_MASK                       0x7F
#define DDR_MC_CH1_DBGCAM_DBG_LPR_Q_DEPTH_SHIFT                      8
#define DDR_MC_CH1_DBGCAM_DBG_LPR_Q_DEPTH_MASK                       0x7F00
#define DDR_MC_CH1_DBGCAM_DBG_W_Q_DEPTH_SHIFT                        16
#define DDR_MC_CH1_DBGCAM_DBG_W_Q_DEPTH_MASK                         0x7F0000
#define DDR_MC_CH1_DBGCAM_DBG_STALL_SHIFT                            24
#define DDR_MC_CH1_DBGCAM_DBG_STALL_MASK                             0x1000000
#define DDR_MC_CH1_DBGCAM_DBG_RD_Q_EMPTY_SHIFT                       25
#define DDR_MC_CH1_DBGCAM_DBG_RD_Q_EMPTY_MASK                        0x2000000
#define DDR_MC_CH1_DBGCAM_DBG_WR_Q_EMPTY_SHIFT                       26
#define DDR_MC_CH1_DBGCAM_DBG_WR_Q_EMPTY_MASK                        0x4000000
#define DDR_MC_CH1_DBGCAM_RD_DATA_PIPELINE_EMPTY_SHIFT               28
#define DDR_MC_CH1_DBGCAM_RD_DATA_PIPELINE_EMPTY_MASK                0x10000000
#define DDR_MC_CH1_DBGCAM_WR_DATA_PIPELINE_EMPTY_SHIFT               29
#define DDR_MC_CH1_DBGCAM_WR_DATA_PIPELINE_EMPTY_MASK                0x20000000
#define DDR_MC_CH1_DBGCAM_DBG_STALL_WR_SHIFT                         30
#define DDR_MC_CH1_DBGCAM_DBG_STALL_WR_MASK                          0x40000000
#define DDR_MC_CH1_DBGCAM_DBG_STALL_RD_SHIFT                         31
#define DDR_MC_CH1_DBGCAM_DBG_STALL_RD_MASK                          0x80000000

#define mmDDR_MC_CH1_DBGCMD                                          0x74030C
/* DDR_MC_CH1_DBGCMD */
#define DDR_MC_CH1_DBGCMD_RANK0_REFRESH_SHIFT                        0
#define DDR_MC_CH1_DBGCMD_RANK0_REFRESH_MASK                         0x1
#define DDR_MC_CH1_DBGCMD_RANK1_REFRESH_SHIFT                        1
#define DDR_MC_CH1_DBGCMD_RANK1_REFRESH_MASK                         0x2
#define DDR_MC_CH1_DBGCMD_ZQ_CALIB_SHORT_SHIFT                       4
#define DDR_MC_CH1_DBGCMD_ZQ_CALIB_SHORT_MASK                        0x10
#define DDR_MC_CH1_DBGCMD_CTRLUPD_SHIFT                              5
#define DDR_MC_CH1_DBGCMD_CTRLUPD_MASK                               0x20

#define mmDDR_MC_CH1_DBGSTAT                                         0x740310
/* DDR_MC_CH1_DBGSTAT */
#define DDR_MC_CH1_DBGSTAT_RANK0_REFRESH_BUSY_SHIFT                  0
#define DDR_MC_CH1_DBGSTAT_RANK0_REFRESH_BUSY_MASK                   0x1
#define DDR_MC_CH1_DBGSTAT_RANK1_REFRESH_BUSY_SHIFT                  1
#define DDR_MC_CH1_DBGSTAT_RANK1_REFRESH_BUSY_MASK                   0x2
#define DDR_MC_CH1_DBGSTAT_ZQ_CALIB_SHORT_BUSY_SHIFT                 4
#define DDR_MC_CH1_DBGSTAT_ZQ_CALIB_SHORT_BUSY_MASK                  0x10
#define DDR_MC_CH1_DBGSTAT_CTRLUPD_BUSY_SHIFT                        5
#define DDR_MC_CH1_DBGSTAT_CTRLUPD_BUSY_MASK                         0x20

#define mmDDR_MC_CH1_SWCTL                                           0x740320
/* DDR_MC_CH1_SWCTL */
#define DDR_MC_CH1_SWCTL_SW_DONE_SHIFT                               0
#define DDR_MC_CH1_SWCTL_SW_DONE_MASK                                0x1

#define mmDDR_MC_CH1_SWSTAT                                          0x740324
/* DDR_MC_CH1_SWSTAT */
#define DDR_MC_CH1_SWSTAT_SW_DONE_ACK_SHIFT                          0
#define DDR_MC_CH1_SWSTAT_SW_DONE_ACK_MASK                           0x1

#define mmDDR_MC_CH1_POISONCFG                                       0x74036C
/* DDR_MC_CH1_POISONCFG */
#define DDR_MC_CH1_POISONCFG_WR_POISON_SLVERR_EN_SHIFT               0
#define DDR_MC_CH1_POISONCFG_WR_POISON_SLVERR_EN_MASK                0x1
#define DDR_MC_CH1_POISONCFG_WR_POISON_INTR_EN_SHIFT                 4
#define DDR_MC_CH1_POISONCFG_WR_POISON_INTR_EN_MASK                  0x10
#define DDR_MC_CH1_POISONCFG_WR_POISON_INTR_CLR_SHIFT                8
#define DDR_MC_CH1_POISONCFG_WR_POISON_INTR_CLR_MASK                 0x100
#define DDR_MC_CH1_POISONCFG_RD_POISON_SLVERR_EN_SHIFT               16
#define DDR_MC_CH1_POISONCFG_RD_POISON_SLVERR_EN_MASK                0x10000
#define DDR_MC_CH1_POISONCFG_RD_POISON_INTR_EN_SHIFT                 20
#define DDR_MC_CH1_POISONCFG_RD_POISON_INTR_EN_MASK                  0x100000
#define DDR_MC_CH1_POISONCFG_RD_POISON_INTR_CLR_SHIFT                24
#define DDR_MC_CH1_POISONCFG_RD_POISON_INTR_CLR_MASK                 0x1000000

#define mmDDR_MC_CH1_POISONSTAT                                      0x740370
/* DDR_MC_CH1_POISONSTAT */
#define DDR_MC_CH1_POISONSTAT_WR_POISON_INTR_0_SHIFT                 0
#define DDR_MC_CH1_POISONSTAT_WR_POISON_INTR_0_MASK                  0x1
#define DDR_MC_CH1_POISONSTAT_RD_POISON_INTR_0_SHIFT                 16
#define DDR_MC_CH1_POISONSTAT_RD_POISON_INTR_0_MASK                  0x10000

#define mmDDR_MC_CH1_ADVECCINDEX                                     0x740374
/* DDR_MC_CH1_ADVECCINDEX */
#define DDR_MC_CH1_ADVECCINDEX_ECC_SYNDROME_SEL_SHIFT                0
#define DDR_MC_CH1_ADVECCINDEX_ECC_SYNDROME_SEL_MASK                 0x7
#define DDR_MC_CH1_ADVECCINDEX_ECC_ERR_SYMBOL_SEL_SHIFT              3
#define DDR_MC_CH1_ADVECCINDEX_ECC_ERR_SYMBOL_SEL_MASK               0x18
#define DDR_MC_CH1_ADVECCINDEX_ECC_POISON_BEATS_SEL_SHIFT            5
#define DDR_MC_CH1_ADVECCINDEX_ECC_POISON_BEATS_SEL_MASK             0x1E0

#define mmDDR_MC_CH1_ECCPOISONPAT0                                   0x74037C
/* DDR_MC_CH1_ECCPOISONPAT0 */
#define DDR_MC_CH1_ECCPOISONPAT0_ECC_POISON_DATA_31_0_SHIFT          0
#define DDR_MC_CH1_ECCPOISONPAT0_ECC_POISON_DATA_31_0_MASK           0xFFFFFFFF

#define mmDDR_MC_CH1_ECCPOISONPAT1                                   0x740380
/* DDR_MC_CH1_ECCPOISONPAT1 */
#define DDR_MC_CH1_ECCPOISONPAT1_ECC_POISON_DATA_63_32_SHIFT         0
#define DDR_MC_CH1_ECCPOISONPAT1_ECC_POISON_DATA_63_32_MASK          0xFFFFFFFF

#define mmDDR_MC_CH1_ECCPOISONPAT2                                   0x740384
/* DDR_MC_CH1_ECCPOISONPAT2 */
#define DDR_MC_CH1_ECCPOISONPAT2_ECC_POISON_DATA_71_64_SHIFT         0
#define DDR_MC_CH1_ECCPOISONPAT2_ECC_POISON_DATA_71_64_MASK          0xFF

#define mmDDR_MC_CH1_CAPARPOISONCTL                                  0x7403A0
/* DDR_MC_CH1_CAPARPOISONCTL */
#define DDR_MC_CH1_CAPARPOISONCTL_CAPAR_POISON_INJECT_EN_SHIFT       0
#define DDR_MC_CH1_CAPARPOISONCTL_CAPAR_POISON_INJECT_EN_MASK        0x1
#define DDR_MC_CH1_CAPARPOISONCTL_CAPAR_POISON_CMDTYPE_SHIFT         8
#define DDR_MC_CH1_CAPARPOISONCTL_CAPAR_POISON_CMDTYPE_MASK          0x300

#define mmDDR_MC_CH1_CAPARPOISONSTAT                                 0x7403A4
/* DDR_MC_CH1_CAPARPOISONSTAT */
#define DDR_MC_CH1_CAPARPOISONSTAT_CAPAR_POISON_COMPLETE_SHIFT       0
#define DDR_MC_CH1_CAPARPOISONSTAT_CAPAR_POISON_COMPLETE_MASK        0x1

#define mmDDR_MC_CH1_PSTAT                                           0x7403FC
/* DDR_MC_CH1_PSTAT */
#define DDR_MC_CH1_PSTAT_RD_PORT_BUSY_0_SHIFT                        0
#define DDR_MC_CH1_PSTAT_RD_PORT_BUSY_0_MASK                         0x1
#define DDR_MC_CH1_PSTAT_WR_PORT_BUSY_0_SHIFT                        16
#define DDR_MC_CH1_PSTAT_WR_PORT_BUSY_0_MASK                         0x10000

#define mmDDR_MC_CH1_PCCFG                                           0x740400
/* DDR_MC_CH1_PCCFG */
#define DDR_MC_CH1_PCCFG_GO2CRITICAL_EN_SHIFT                        0
#define DDR_MC_CH1_PCCFG_GO2CRITICAL_EN_MASK                         0x1
#define DDR_MC_CH1_PCCFG_PAGEMATCH_LIMIT_SHIFT                       4
#define DDR_MC_CH1_PCCFG_PAGEMATCH_LIMIT_MASK                        0x10
#define DDR_MC_CH1_PCCFG_BL_EXP_MODE_SHIFT                           8
#define DDR_MC_CH1_PCCFG_BL_EXP_MODE_MASK                            0x100

#define mmDDR_MC_CH1_PCFGR_0                                         0x740404
/* DDR_MC_CH1_PCFGR_0 */
#define DDR_MC_CH1_PCFGR_0_RD_PORT_PRIORITY_SHIFT                    0
#define DDR_MC_CH1_PCFGR_0_RD_PORT_PRIORITY_MASK                     0x3FF
#define DDR_MC_CH1_PCFGR_0_RD_PORT_AGING_EN_SHIFT                    12
#define DDR_MC_CH1_PCFGR_0_RD_PORT_AGING_EN_MASK                     0x1000
#define DDR_MC_CH1_PCFGR_0_RD_PORT_URGENT_EN_SHIFT                   13
#define DDR_MC_CH1_PCFGR_0_RD_PORT_URGENT_EN_MASK                    0x2000
#define DDR_MC_CH1_PCFGR_0_RD_PORT_PAGEMATCH_EN_SHIFT                14
#define DDR_MC_CH1_PCFGR_0_RD_PORT_PAGEMATCH_EN_MASK                 0x4000

#define mmDDR_MC_CH1_PCFGW_0                                         0x740408
/* DDR_MC_CH1_PCFGW_0 */
#define DDR_MC_CH1_PCFGW_0_WR_PORT_PRIORITY_SHIFT                    0
#define DDR_MC_CH1_PCFGW_0_WR_PORT_PRIORITY_MASK                     0x3FF
#define DDR_MC_CH1_PCFGW_0_WR_PORT_AGING_EN_SHIFT                    12
#define DDR_MC_CH1_PCFGW_0_WR_PORT_AGING_EN_MASK                     0x1000
#define DDR_MC_CH1_PCFGW_0_WR_PORT_URGENT_EN_SHIFT                   13
#define DDR_MC_CH1_PCFGW_0_WR_PORT_URGENT_EN_MASK                    0x2000
#define DDR_MC_CH1_PCFGW_0_WR_PORT_PAGEMATCH_EN_SHIFT                14
#define DDR_MC_CH1_PCFGW_0_WR_PORT_PAGEMATCH_EN_MASK                 0x4000

#define mmDDR_MC_CH1_PCTRL_0                                         0x740490
/* DDR_MC_CH1_PCTRL_0 */
#define DDR_MC_CH1_PCTRL_0_PORT_EN_SHIFT                             0
#define DDR_MC_CH1_PCTRL_0_PORT_EN_MASK                              0x1

#define mmDDR_MC_CH1_PCFGQOS0_0                                      0x740494
/* DDR_MC_CH1_PCFGQOS0_0 */
#define DDR_MC_CH1_PCFGQOS0_0_RQOS_MAP_LEVEL1_SHIFT                  0
#define DDR_MC_CH1_PCFGQOS0_0_RQOS_MAP_LEVEL1_MASK                   0xF
#define DDR_MC_CH1_PCFGQOS0_0_RQOS_MAP_REGION0_SHIFT                 16
#define DDR_MC_CH1_PCFGQOS0_0_RQOS_MAP_REGION0_MASK                  0x30000
#define DDR_MC_CH1_PCFGQOS0_0_RQOS_MAP_REGION1_SHIFT                 20
#define DDR_MC_CH1_PCFGQOS0_0_RQOS_MAP_REGION1_MASK                  0x300000

#define mmDDR_MC_CH1_SBRCTL                                          0x740F24
/* DDR_MC_CH1_SBRCTL */
#define DDR_MC_CH1_SBRCTL_SCRUB_EN_SHIFT                             0
#define DDR_MC_CH1_SBRCTL_SCRUB_EN_MASK                              0x1
#define DDR_MC_CH1_SBRCTL_SCRUB_DURING_LOWPOWER_SHIFT                1
#define DDR_MC_CH1_SBRCTL_SCRUB_DURING_LOWPOWER_MASK                 0x2
#define DDR_MC_CH1_SBRCTL_SCRUB_MODE_SHIFT                           2
#define DDR_MC_CH1_SBRCTL_SCRUB_MODE_MASK                            0x4
#define DDR_MC_CH1_SBRCTL_SCRUB_BURST_SHIFT                          4
#define DDR_MC_CH1_SBRCTL_SCRUB_BURST_MASK                           0x70
#define DDR_MC_CH1_SBRCTL_SCRUB_INTERVAL_SHIFT                       8
#define DDR_MC_CH1_SBRCTL_SCRUB_INTERVAL_MASK                        0x1FFF00

#define mmDDR_MC_CH1_SBRSTAT                                         0x740F28
/* DDR_MC_CH1_SBRSTAT */
#define DDR_MC_CH1_SBRSTAT_SCRUB_BUSY_SHIFT                          0
#define DDR_MC_CH1_SBRSTAT_SCRUB_BUSY_MASK                           0x1
#define DDR_MC_CH1_SBRSTAT_SCRUB_DONE_SHIFT                          1
#define DDR_MC_CH1_SBRSTAT_SCRUB_DONE_MASK                           0x2

#define mmDDR_MC_CH1_SBRWDATA0                                       0x740F2C
/* DDR_MC_CH1_SBRWDATA0 */
#define DDR_MC_CH1_SBRWDATA0_SCRUB_PATTERN0_SHIFT                    0
#define DDR_MC_CH1_SBRWDATA0_SCRUB_PATTERN0_MASK                     0xFFFFFFFF

#define mmDDR_MC_CH1_SBRWDATA1                                       0x740F30
/* DDR_MC_CH1_SBRWDATA1 */
#define DDR_MC_CH1_SBRWDATA1_SCRUB_PATTERN1_SHIFT                    0
#define DDR_MC_CH1_SBRWDATA1_SCRUB_PATTERN1_MASK                     0xFFFFFFFF

#endif /* ASIC_REG_DDR_MC_CH1_H_ */

