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

#ifndef ASIC_REG_PCIE_AUX_H_
#define ASIC_REG_PCIE_AUX_H_

/*
 *****************************************
 *   PCIE_AUX (Prototype: PCIE_AUX)
 *****************************************
 */

#define mmPCIE_AUX_APB_TIMEOUT                                       0xC07004
/* PCIE_AUX_APB_TIMEOUT */
#define PCIE_AUX_APB_TIMEOUT_BYPASS_SHIFT                            0
#define PCIE_AUX_APB_TIMEOUT_BYPASS_MASK                             0x1

#define mmPCIE_AUX_PHY_INIT                                          0xC07100
/* PCIE_AUX_PHY_INIT */
#define PCIE_AUX_PHY_INIT_IND_SHIFT                                  0
#define PCIE_AUX_PHY_INIT_IND_MASK                                   0x1

#define mmPCIE_AUX_LTR_MAX_LATENCY                                   0xC07138
/* PCIE_AUX_LTR_MAX_LATENCY */
#define PCIE_AUX_LTR_MAX_LATENCY_VAL_SHIFT                           0
#define PCIE_AUX_LTR_MAX_LATENCY_VAL_MASK                            0xFFFFFFFF

#define mmPCIE_AUX_BAR0_START_L                                      0xC07160
/* PCIE_AUX_BAR0_START_L */
#define PCIE_AUX_BAR0_START_L_VAL_SHIFT                              0
#define PCIE_AUX_BAR0_START_L_VAL_MASK                               0xFFFFFFFF

#define mmPCIE_AUX_BAR0_START_H                                      0xC07164
/* PCIE_AUX_BAR0_START_H */
#define PCIE_AUX_BAR0_START_H_VAL_SHIFT                              0
#define PCIE_AUX_BAR0_START_H_VAL_MASK                               0xFFFFFFFF

#define mmPCIE_AUX_BAR1_START                                        0xC07168
/* PCIE_AUX_BAR1_START */
#define PCIE_AUX_BAR1_START_VAL_SHIFT                                0
#define PCIE_AUX_BAR1_START_VAL_MASK                                 0xFFFFFFFF

#define mmPCIE_AUX_BAR2_START_L                                      0xC0716C
/* PCIE_AUX_BAR2_START_L */
#define PCIE_AUX_BAR2_START_L_VAL_SHIFT                              0
#define PCIE_AUX_BAR2_START_L_VAL_MASK                               0xFFFFFFFF

#define mmPCIE_AUX_BAR2_START_H                                      0xC07170
/* PCIE_AUX_BAR2_START_H */
#define PCIE_AUX_BAR2_START_H_VAL_SHIFT                              0
#define PCIE_AUX_BAR2_START_H_VAL_MASK                               0xFFFFFFFF

#define mmPCIE_AUX_BAR3_START                                        0xC07174
/* PCIE_AUX_BAR3_START */
#define PCIE_AUX_BAR3_START_VAL_SHIFT                                0
#define PCIE_AUX_BAR3_START_VAL_MASK                                 0xFFFFFFFF

#define mmPCIE_AUX_BAR4_START_L                                      0xC07178
/* PCIE_AUX_BAR4_START_L */
#define PCIE_AUX_BAR4_START_L_VAL_SHIFT                              0
#define PCIE_AUX_BAR4_START_L_VAL_MASK                               0xFFFFFFFF

#define mmPCIE_AUX_BAR4_START_H                                      0xC0717C
/* PCIE_AUX_BAR4_START_H */
#define PCIE_AUX_BAR4_START_H_VAL_SHIFT                              0
#define PCIE_AUX_BAR4_START_H_VAL_MASK                               0xFFFFFFFF

#define mmPCIE_AUX_BAR5_START                                        0xC07180
/* PCIE_AUX_BAR5_START */
#define PCIE_AUX_BAR5_START_VAL_SHIFT                                0
#define PCIE_AUX_BAR5_START_VAL_MASK                                 0xFFFFFFFF

#define mmPCIE_AUX_BAR0_LIMIT_L                                      0xC07184
/* PCIE_AUX_BAR0_LIMIT_L */
#define PCIE_AUX_BAR0_LIMIT_L_VAL_SHIFT                              0
#define PCIE_AUX_BAR0_LIMIT_L_VAL_MASK                               0xFFFFFFFF

#define mmPCIE_AUX_BAR0_LIMIT_H                                      0xC07188
/* PCIE_AUX_BAR0_LIMIT_H */
#define PCIE_AUX_BAR0_LIMIT_H_VAL_SHIFT                              0
#define PCIE_AUX_BAR0_LIMIT_H_VAL_MASK                               0xFFFFFFFF

#define mmPCIE_AUX_BAR1_LIMIT                                        0xC0718C
/* PCIE_AUX_BAR1_LIMIT */
#define PCIE_AUX_BAR1_LIMIT_VAL_SHIFT                                0
#define PCIE_AUX_BAR1_LIMIT_VAL_MASK                                 0xFFFFFFFF

#define mmPCIE_AUX_BAR2_LIMIT_L                                      0xC07190
/* PCIE_AUX_BAR2_LIMIT_L */
#define PCIE_AUX_BAR2_LIMIT_L_VAL_SHIFT                              0
#define PCIE_AUX_BAR2_LIMIT_L_VAL_MASK                               0xFFFFFFFF

#define mmPCIE_AUX_BAR2_LIMIT_H                                      0xC07194
/* PCIE_AUX_BAR2_LIMIT_H */
#define PCIE_AUX_BAR2_LIMIT_H_VAL_SHIFT                              0
#define PCIE_AUX_BAR2_LIMIT_H_VAL_MASK                               0xFFFFFFFF

#define mmPCIE_AUX_BAR3_LIMIT                                        0xC07198
/* PCIE_AUX_BAR3_LIMIT */
#define PCIE_AUX_BAR3_LIMIT_VAL_SHIFT                                0
#define PCIE_AUX_BAR3_LIMIT_VAL_MASK                                 0xFFFFFFFF

#define mmPCIE_AUX_BAR4_LIMIT_L                                      0xC0719C
/* PCIE_AUX_BAR4_LIMIT_L */
#define PCIE_AUX_BAR4_LIMIT_L_VAL_SHIFT                              0
#define PCIE_AUX_BAR4_LIMIT_L_VAL_MASK                               0xFFFFFFFF

#define mmPCIE_AUX_BAR4_LIMIT_H                                      0xC07200
/* PCIE_AUX_BAR4_LIMIT_H */
#define PCIE_AUX_BAR4_LIMIT_H_VAL_SHIFT                              0
#define PCIE_AUX_BAR4_LIMIT_H_VAL_MASK                               0xFFFFFFFF

#define mmPCIE_AUX_BAR5_LIMIT                                        0xC07204
/* PCIE_AUX_BAR5_LIMIT */
#define PCIE_AUX_BAR5_LIMIT_VAL_SHIFT                                0
#define PCIE_AUX_BAR5_LIMIT_VAL_MASK                                 0xFFFFFFFF

#define mmPCIE_AUX_BUS_MASTER_EN                                     0xC07208
/* PCIE_AUX_BUS_MASTER_EN */
#define PCIE_AUX_BUS_MASTER_EN_VAL_SHIFT                             0
#define PCIE_AUX_BUS_MASTER_EN_VAL_MASK                              0x1

#define mmPCIE_AUX_MEM_SPACE_EN                                      0xC0720C
/* PCIE_AUX_MEM_SPACE_EN */
#define PCIE_AUX_MEM_SPACE_EN_VAL_SHIFT                              0
#define PCIE_AUX_MEM_SPACE_EN_VAL_MASK                               0x1

#define mmPCIE_AUX_MAX_RD_REQ_SIZE                                   0xC07210
/* PCIE_AUX_MAX_RD_REQ_SIZE */
#define PCIE_AUX_MAX_RD_REQ_SIZE_VAL_SHIFT                           0
#define PCIE_AUX_MAX_RD_REQ_SIZE_VAL_MASK                            0x7

#define mmPCIE_AUX_MAX_PAYLOAD_SIZE                                  0xC07214
/* PCIE_AUX_MAX_PAYLOAD_SIZE */
#define PCIE_AUX_MAX_PAYLOAD_SIZE_VAL_SHIFT                          0
#define PCIE_AUX_MAX_PAYLOAD_SIZE_VAL_MASK                           0x7

#define mmPCIE_AUX_EXT_TAG_EN                                        0xC07218
/* PCIE_AUX_EXT_TAG_EN */
#define PCIE_AUX_EXT_TAG_EN_VAL_SHIFT                                0
#define PCIE_AUX_EXT_TAG_EN_VAL_MASK                                 0x1

#define mmPCIE_AUX_RCB                                               0xC0721C
/* PCIE_AUX_RCB */
#define PCIE_AUX_RCB_VAL_SHIFT                                       0
#define PCIE_AUX_RCB_VAL_MASK                                        0x1

#define mmPCIE_AUX_PM_NO_SOFT_RST                                    0xC07220
/* PCIE_AUX_PM_NO_SOFT_RST */
#define PCIE_AUX_PM_NO_SOFT_RST_VAL_SHIFT                            0
#define PCIE_AUX_PM_NO_SOFT_RST_VAL_MASK                             0x1

#define mmPCIE_AUX_PBUS_NUM                                          0xC07224
/* PCIE_AUX_PBUS_NUM */
#define PCIE_AUX_PBUS_NUM_VAL_SHIFT                                  0
#define PCIE_AUX_PBUS_NUM_VAL_MASK                                   0xFF

#define mmPCIE_AUX_PBUS_DEV_NUM                                      0xC07228
/* PCIE_AUX_PBUS_DEV_NUM */
#define PCIE_AUX_PBUS_DEV_NUM_VAL_SHIFT                              0
#define PCIE_AUX_PBUS_DEV_NUM_VAL_MASK                               0x1F

#define mmPCIE_AUX_NO_SNOOP_EN                                       0xC0722C
/* PCIE_AUX_NO_SNOOP_EN */
#define PCIE_AUX_NO_SNOOP_EN_VAL_SHIFT                               0
#define PCIE_AUX_NO_SNOOP_EN_VAL_MASK                                0x1

#define mmPCIE_AUX_RELAX_ORDER_EN                                    0xC07230
/* PCIE_AUX_RELAX_ORDER_EN */
#define PCIE_AUX_RELAX_ORDER_EN_VAL_SHIFT                            0
#define PCIE_AUX_RELAX_ORDER_EN_VAL_MASK                             0x1

#define mmPCIE_AUX_HP_SLOT_CTRL_ACCESS                               0xC07234
/* PCIE_AUX_HP_SLOT_CTRL_ACCESS */
#define PCIE_AUX_HP_SLOT_CTRL_ACCESS_VAL_SHIFT                       0
#define PCIE_AUX_HP_SLOT_CTRL_ACCESS_VAL_MASK                        0x1

#define mmPCIE_AUX_DLL_STATE_CHGED_EN                                0xC07238
/* PCIE_AUX_DLL_STATE_CHGED_EN */
#define PCIE_AUX_DLL_STATE_CHGED_EN_VAL_SHIFT                        0
#define PCIE_AUX_DLL_STATE_CHGED_EN_VAL_MASK                         0x1

#define mmPCIE_AUX_CMP_CPLED_INT_EN                                  0xC0723C
/* PCIE_AUX_CMP_CPLED_INT_EN */
#define PCIE_AUX_CMP_CPLED_INT_EN_VAL_SHIFT                          0
#define PCIE_AUX_CMP_CPLED_INT_EN_VAL_MASK                           0x1

#define mmPCIE_AUX_HP_INT_EN                                         0xC07340
/* PCIE_AUX_HP_INT_EN */
#define PCIE_AUX_HP_INT_EN_VAL_SHIFT                                 0
#define PCIE_AUX_HP_INT_EN_VAL_MASK                                  0x1

#define mmPCIE_AUX_PRE_DET_CHGEN_EN                                  0xC07344
/* PCIE_AUX_PRE_DET_CHGEN_EN */
#define PCIE_AUX_PRE_DET_CHGEN_EN_VAL_SHIFT                          0
#define PCIE_AUX_PRE_DET_CHGEN_EN_VAL_MASK                           0x1

#define mmPCIE_AUX_MRL_SENSOR_CHGED_EN                               0xC07348
/* PCIE_AUX_MRL_SENSOR_CHGED_EN */
#define PCIE_AUX_MRL_SENSOR_CHGED_EN_VAL_SHIFT                       0
#define PCIE_AUX_MRL_SENSOR_CHGED_EN_VAL_MASK                        0x1

#define mmPCIE_AUX_PWR_FAULT_DET_EN                                  0xC0734C
/* PCIE_AUX_PWR_FAULT_DET_EN */
#define PCIE_AUX_PWR_FAULT_DET_EN_VAL_SHIFT                          0
#define PCIE_AUX_PWR_FAULT_DET_EN_VAL_MASK                           0x1

#define mmPCIE_AUX_ATTEN_BUTTON_PRESSED_EN                           0xC07350
/* PCIE_AUX_ATTEN_BUTTON_PRESSED_EN */
#define PCIE_AUX_ATTEN_BUTTON_PRESSED_EN_VAL_SHIFT                   0
#define PCIE_AUX_ATTEN_BUTTON_PRESSED_EN_VAL_MASK                    0x1

#define mmPCIE_AUX_PF_FLR_ACTIVE                                     0xC07360
/* PCIE_AUX_PF_FLR_ACTIVE */
#define PCIE_AUX_PF_FLR_ACTIVE_IDX_SHIFT                             0
#define PCIE_AUX_PF_FLR_ACTIVE_IDX_MASK                              0x1

#define mmPCIE_AUX_PF_FLR_DONE                                       0xC07364
/* PCIE_AUX_PF_FLR_DONE */
#define PCIE_AUX_PF_FLR_DONE_IDX_SHIFT                               0
#define PCIE_AUX_PF_FLR_DONE_IDX_MASK                                0x1

#define mmPCIE_AUX_FLR_INT                                           0xC07390
/* PCIE_AUX_FLR_INT */
#define PCIE_AUX_FLR_INT_IND_SHIFT                                   0
#define PCIE_AUX_FLR_INT_IND_MASK                                    0x1

#define mmPCIE_AUX_LTR_M_EN                                          0xC073B0
/* PCIE_AUX_LTR_M_EN */
#define PCIE_AUX_LTR_M_EN_VAL_SHIFT                                  0
#define PCIE_AUX_LTR_M_EN_VAL_MASK                                   0x1

#define mmPCIE_AUX_LTSSM_EN                                          0xC07428
/* PCIE_AUX_LTSSM_EN */
#define PCIE_AUX_LTSSM_EN_IND_SHIFT                                  0
#define PCIE_AUX_LTSSM_EN_IND_MASK                                   0x1

#define mmPCIE_AUX_SYS_INTR                                          0xC07440
/* PCIE_AUX_SYS_INTR */
#define PCIE_AUX_SYS_INTR_IND_SHIFT                                  0
#define PCIE_AUX_SYS_INTR_IND_MASK                                   0x1

#define mmPCIE_AUX_INT_DISABLE                                       0xC07444
/* PCIE_AUX_INT_DISABLE */
#define PCIE_AUX_INT_DISABLE_IND_SHIFT                               0
#define PCIE_AUX_INT_DISABLE_IND_MASK                                0x1

#define mmPCIE_AUX_SMLH_LINK_UP                                      0xC07448
/* PCIE_AUX_SMLH_LINK_UP */
#define PCIE_AUX_SMLH_LINK_UP_IND_SHIFT                              0
#define PCIE_AUX_SMLH_LINK_UP_IND_MASK                               0x1

#define mmPCIE_AUX_PM_CURR_STATE                                     0xC07450
/* PCIE_AUX_PM_CURR_STATE */
#define PCIE_AUX_PM_CURR_STATE_VAL_SHIFT                             0
#define PCIE_AUX_PM_CURR_STATE_VAL_MASK                              0x7

#define mmPCIE_AUX_RDLH_LINK_UP                                      0xC07458
/* PCIE_AUX_RDLH_LINK_UP */
#define PCIE_AUX_RDLH_LINK_UP_IND_SHIFT                              0
#define PCIE_AUX_RDLH_LINK_UP_IND_MASK                               0x1

#define mmPCIE_AUX_BRDG_SLV_XFER_PENDING                             0xC0745C
/* PCIE_AUX_BRDG_SLV_XFER_PENDING */
#define PCIE_AUX_BRDG_SLV_XFER_PENDING_IND_SHIFT                     0
#define PCIE_AUX_BRDG_SLV_XFER_PENDING_IND_MASK                      0x1

#define mmPCIE_AUX_BRDG_DBI_XFER_PENDING                             0xC07460
/* PCIE_AUX_BRDG_DBI_XFER_PENDING */
#define PCIE_AUX_BRDG_DBI_XFER_PENDING_IND_SHIFT                     0
#define PCIE_AUX_BRDG_DBI_XFER_PENDING_IND_MASK                      0x1

#define mmPCIE_AUX_AUTO_SP_DIS                                       0xC07478
/* PCIE_AUX_AUTO_SP_DIS */
#define PCIE_AUX_AUTO_SP_DIS_IND_SHIFT                               0
#define PCIE_AUX_AUTO_SP_DIS_IND_MASK                                0x1

#define mmPCIE_AUX_DBI                                               0xC07490
/* PCIE_AUX_DBI */
#define PCIE_AUX_DBI_IO_SHIFT                                        12
#define PCIE_AUX_DBI_IO_MASK                                         0x1000
#define PCIE_AUX_DBI_BAR_SHIFT                                       13
#define PCIE_AUX_DBI_BAR_MASK                                        0xE000
#define PCIE_AUX_DBI_PF_NUM_SHIFT                                    16
#define PCIE_AUX_DBI_PF_NUM_MASK                                     0x1F0000
#define PCIE_AUX_DBI_VF_ACTIVE_SHIFT                                 21
#define PCIE_AUX_DBI_VF_ACTIVE_MASK                                  0x200000
#define PCIE_AUX_DBI_VF_NUM_SHIFT                                    22
#define PCIE_AUX_DBI_VF_NUM_MASK                                     0x3FC00000
#define PCIE_AUX_DBI_ROM_SHIFT                                       30
#define PCIE_AUX_DBI_ROM_MASK                                        0x40000000
#define PCIE_AUX_DBI_CS2_SHIFT                                       31
#define PCIE_AUX_DBI_CS2_MASK                                        0x80000000

#define mmPCIE_AUX_DBI_32                                            0xC07494
/* PCIE_AUX_DBI_32 */
#define PCIE_AUX_DBI_32_IND_SHIFT                                    0
#define PCIE_AUX_DBI_32_IND_MASK                                     0x1

#define mmPCIE_AUX_DIAG_STATUS_BUS_0                                 0xC074A4

#define mmPCIE_AUX_DIAG_STATUS_BUS_1                                 0xC074A8

#define mmPCIE_AUX_DIAG_STATUS_BUS_2                                 0xC074AC

#define mmPCIE_AUX_DIAG_STATUS_BUS_3                                 0xC074B0

#define mmPCIE_AUX_DIAG_STATUS_BUS_4                                 0xC074B4

#define mmPCIE_AUX_DIAG_STATUS_BUS_5                                 0xC074B8

#define mmPCIE_AUX_DIAG_STATUS_BUS_6                                 0xC074BC

#define mmPCIE_AUX_DIAG_STATUS_BUS_7                                 0xC074C0

#define mmPCIE_AUX_DIAG_STATUS_BUS_8                                 0xC074C4

#define mmPCIE_AUX_DIAG_STATUS_BUS_9                                 0xC074C8

#define mmPCIE_AUX_DIAG_STATUS_BUS_10                                0xC074CC

#define mmPCIE_AUX_DIAG_STATUS_BUS_11                                0xC074D0

#define mmPCIE_AUX_DIAG_STATUS_BUS_12                                0xC074D4

#define mmPCIE_AUX_DIAG_STATUS_BUS_13                                0xC074D8

#define mmPCIE_AUX_DIAG_STATUS_BUS_14                                0xC074DC

#define mmPCIE_AUX_DIAG_STATUS_BUS_15                                0xC074E0

#define mmPCIE_AUX_DIAG_STATUS_BUS_16                                0xC074E4

#define mmPCIE_AUX_DIAG_STATUS_BUS_17                                0xC074E8

#define mmPCIE_AUX_DIAG_STATUS_BUS_18                                0xC074EC

#define mmPCIE_AUX_DIAG_STATUS_BUS_19                                0xC074F0

#define mmPCIE_AUX_DIAG_STATUS_BUS_20                                0xC074F4

#define mmPCIE_AUX_DIAG_STATUS_BUS_21                                0xC074F8

#define mmPCIE_AUX_DIAG_STATUS_BUS_22                                0xC074FC

#define mmPCIE_AUX_DIAG_STATUS_BUS_23                                0xC07500

#define mmPCIE_AUX_DIAG_STATUS_BUS_24                                0xC07504

#define mmPCIE_AUX_DIAG_STATUS_BUS_25                                0xC07508

#define mmPCIE_AUX_DIAG_STATUS_BUS_26                                0xC0750C

#define mmPCIE_AUX_DIAG_STATUS_BUS_27                                0xC07510

#define mmPCIE_AUX_DIAG_STATUS_BUS_28                                0xC07514
/* PCIE_AUX_DIAG_STATUS_BUS */
#define PCIE_AUX_DIAG_STATUS_BUS_VAL_SHIFT                           0
#define PCIE_AUX_DIAG_STATUS_BUS_VAL_MASK                            0xFFFFFFFF

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_0                             0xC07640

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_1                             0xC07644

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_2                             0xC07648

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_3                             0xC0764C

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_4                             0xC07650

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_5                             0xC07654

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_6                             0xC07658

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_7                             0xC0765C
/* PCIE_AUX_CDM_RAS_DES_EC_INFO */
#define PCIE_AUX_CDM_RAS_DES_EC_INFO_VAL_SHIFT                       0
#define PCIE_AUX_CDM_RAS_DES_EC_INFO_VAL_MASK                        0x3F

#define mmPCIE_AUX_CDM_RAS_DES_SD_COMMON_0                           0xC07744

#define mmPCIE_AUX_CDM_RAS_DES_SD_COMMON_1                           0xC07748

#define mmPCIE_AUX_CDM_RAS_DES_SD_COMMON_2                           0xC0774C
/* PCIE_AUX_CDM_RAS_DES_SD_COMMON */
#define PCIE_AUX_CDM_RAS_DES_SD_COMMON_VAL_SHIFT                     0
#define PCIE_AUX_CDM_RAS_DES_SD_COMMON_VAL_MASK                      0xFFFFFFFF

#define mmPCIE_AUX_APP_RAS_DES_TBA_CTRL                              0xC07774
/* PCIE_AUX_APP_RAS_DES_TBA_CTRL */
#define PCIE_AUX_APP_RAS_DES_TBA_CTRL_VAL_SHIFT                      0
#define PCIE_AUX_APP_RAS_DES_TBA_CTRL_VAL_MASK                       0x3

#define mmPCIE_AUX_PM_DSTATE                                         0xC07840
/* PCIE_AUX_PM_DSTATE */
#define PCIE_AUX_PM_DSTATE_VAL_SHIFT                                 0
#define PCIE_AUX_PM_DSTATE_VAL_MASK                                  0x7

#define mmPCIE_AUX_PM_PME_EN                                         0xC07844
/* PCIE_AUX_PM_PME_EN */
#define PCIE_AUX_PM_PME_EN_VAL_SHIFT                                 0
#define PCIE_AUX_PM_PME_EN_VAL_MASK                                  0x1

#define mmPCIE_AUX_PM_LINKST_IN_L0S                                  0xC07848
/* PCIE_AUX_PM_LINKST_IN_L0S */
#define PCIE_AUX_PM_LINKST_IN_L0S_VAL_SHIFT                          0
#define PCIE_AUX_PM_LINKST_IN_L0S_VAL_MASK                           0x1

#define mmPCIE_AUX_PM_LINKST_IN_L1                                   0xC0784C
/* PCIE_AUX_PM_LINKST_IN_L1 */
#define PCIE_AUX_PM_LINKST_IN_L1_VAL_SHIFT                           0
#define PCIE_AUX_PM_LINKST_IN_L1_VAL_MASK                            0x1

#define mmPCIE_AUX_PM_LINKST_IN_L2                                   0xC07850
/* PCIE_AUX_PM_LINKST_IN_L2 */
#define PCIE_AUX_PM_LINKST_IN_L2_VAL_SHIFT                           0
#define PCIE_AUX_PM_LINKST_IN_L2_VAL_MASK                            0x1

#define mmPCIE_AUX_PM_LINKST_L2_EXIT                                 0xC07854
/* PCIE_AUX_PM_LINKST_L2_EXIT */
#define PCIE_AUX_PM_LINKST_L2_EXIT_VAL_SHIFT                         0
#define PCIE_AUX_PM_LINKST_L2_EXIT_VAL_MASK                          0x1

#define mmPCIE_AUX_PM_STATUS                                         0xC07858
/* PCIE_AUX_PM_STATUS */
#define PCIE_AUX_PM_STATUS_VAL_SHIFT                                 0
#define PCIE_AUX_PM_STATUS_VAL_MASK                                  0x1

#define mmPCIE_AUX_APP_READY_ENTER_L23                               0xC0785C
/* PCIE_AUX_APP_READY_ENTER_L23 */
#define PCIE_AUX_APP_READY_ENTER_L23_IND_SHIFT                       0
#define PCIE_AUX_APP_READY_ENTER_L23_IND_MASK                        0x1

#define mmPCIE_AUX_APP_XFER_PENDING                                  0xC07860
/* PCIE_AUX_APP_XFER_PENDING */
#define PCIE_AUX_APP_XFER_PENDING_IND_SHIFT                          0
#define PCIE_AUX_APP_XFER_PENDING_IND_MASK                           0x1

#define mmPCIE_AUX_APP_REQ_L1                                        0xC07930
/* PCIE_AUX_APP_REQ_L1 */
#define PCIE_AUX_APP_REQ_L1_ENTER_SHIFT                              0
#define PCIE_AUX_APP_REQ_L1_ENTER_MASK                               0x1
#define PCIE_AUX_APP_REQ_L1_EXIT_SHIFT                               1
#define PCIE_AUX_APP_REQ_L1_EXIT_MASK                                0x2

#define mmPCIE_AUX_AUX_PM_EN                                         0xC07934
/* PCIE_AUX_AUX_PM_EN */
#define PCIE_AUX_AUX_PM_EN_VAL_SHIFT                                 0
#define PCIE_AUX_AUX_PM_EN_VAL_MASK                                  0x1

#define mmPCIE_AUX_APPS_PM_XMT_PME                                   0xC07938
/* PCIE_AUX_APPS_PM_XMT_PME */
#define PCIE_AUX_APPS_PM_XMT_PME_IND_SHIFT                           0
#define PCIE_AUX_APPS_PM_XMT_PME_IND_MASK                            0x1

#define mmPCIE_AUX_OUTBAND_PWRUP_CMD                                 0xC07940
/* PCIE_AUX_OUTBAND_PWRUP_CMD */
#define PCIE_AUX_OUTBAND_PWRUP_CMD_IND_SHIFT                         0
#define PCIE_AUX_OUTBAND_PWRUP_CMD_IND_MASK                          0x1

#define mmPCIE_AUX_PERST                                             0xC079B8
/* PCIE_AUX_PERST */
#define PCIE_AUX_PERST_INTR_SHIFT                                    0
#define PCIE_AUX_PERST_INTR_MASK                                     0x1

#endif /* ASIC_REG_PCIE_AUX_H_ */

