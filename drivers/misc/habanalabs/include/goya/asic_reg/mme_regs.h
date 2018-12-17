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

#ifndef ASIC_REG_MME_H_
#define ASIC_REG_MME_H_

/*
 *****************************************
 *   MME (Prototype: MME)
 *****************************************
 */

#define mmMME_ARCH_STATUS                                            0xD0000
/* MME_ARCH_STATUS */
#define MME_ARCH_STATUS_A_SHIFT                                      0
#define MME_ARCH_STATUS_A_MASK                                       0x1
#define MME_ARCH_STATUS_B_SHIFT                                      1
#define MME_ARCH_STATUS_B_MASK                                       0x2
#define MME_ARCH_STATUS_CIN_SHIFT                                    2
#define MME_ARCH_STATUS_CIN_MASK                                     0x4
#define MME_ARCH_STATUS_COUT_SHIFT                                   3
#define MME_ARCH_STATUS_COUT_MASK                                    0x8
#define MME_ARCH_STATUS_TE_SHIFT                                     4
#define MME_ARCH_STATUS_TE_MASK                                      0x10
#define MME_ARCH_STATUS_LD_SHIFT                                     5
#define MME_ARCH_STATUS_LD_MASK                                      0x20
#define MME_ARCH_STATUS_ST_SHIFT                                     6
#define MME_ARCH_STATUS_ST_MASK                                      0x40
#define MME_ARCH_STATUS_SB_A_EMPTY_SHIFT                             7
#define MME_ARCH_STATUS_SB_A_EMPTY_MASK                              0x80
#define MME_ARCH_STATUS_SB_B_EMPTY_SHIFT                             8
#define MME_ARCH_STATUS_SB_B_EMPTY_MASK                              0x100
#define MME_ARCH_STATUS_SB_CIN_EMPTY_SHIFT                           9
#define MME_ARCH_STATUS_SB_CIN_EMPTY_MASK                            0x200
#define MME_ARCH_STATUS_SB_COUT_EMPTY_SHIFT                          10
#define MME_ARCH_STATUS_SB_COUT_EMPTY_MASK                           0x400
#define MME_ARCH_STATUS_SM_IDLE_SHIFT                                11
#define MME_ARCH_STATUS_SM_IDLE_MASK                                 0x800
#define MME_ARCH_STATUS_WBC_AXI_IDLE_SHIFT                           12
#define MME_ARCH_STATUS_WBC_AXI_IDLE_MASK                            0xF000
#define MME_ARCH_STATUS_SBC_AXI_IDLE_SHIFT                           16
#define MME_ARCH_STATUS_SBC_AXI_IDLE_MASK                            0x30000
#define MME_ARCH_STATUS_SBB_AXI_IDLE_SHIFT                           18
#define MME_ARCH_STATUS_SBB_AXI_IDLE_MASK                            0xC0000
#define MME_ARCH_STATUS_SBA_AXI_IDLE_SHIFT                           20
#define MME_ARCH_STATUS_SBA_AXI_IDLE_MASK                            0x300000
#define MME_ARCH_STATUS_FREE_ACCUMS_SHIFT                            22
#define MME_ARCH_STATUS_FREE_ACCUMS_MASK                             0x1C00000

#define mmMME_ARCH_A_BASE_ADDR_HIGH                                  0xD0008
/* MME_ARCH_A_BASE_ADDR_HIGH */
#define MME_ARCH_A_BASE_ADDR_HIGH_V_SHIFT                            0
#define MME_ARCH_A_BASE_ADDR_HIGH_V_MASK                             0xFFFFFFFF

#define mmMME_ARCH_B_BASE_ADDR_HIGH                                  0xD000C
/* MME_ARCH_B_BASE_ADDR_HIGH */
#define MME_ARCH_B_BASE_ADDR_HIGH_V_SHIFT                            0
#define MME_ARCH_B_BASE_ADDR_HIGH_V_MASK                             0xFFFFFFFF

#define mmMME_ARCH_CIN_BASE_ADDR_HIGH                                0xD0010
/* MME_ARCH_CIN_BASE_ADDR_HIGH */
#define MME_ARCH_CIN_BASE_ADDR_HIGH_V_SHIFT                          0
#define MME_ARCH_CIN_BASE_ADDR_HIGH_V_MASK                           0xFFFFFFFF

#define mmMME_ARCH_COUT_BASE_ADDR_HIGH                               0xD0014
/* MME_ARCH_COUT_BASE_ADDR_HIGH */
#define MME_ARCH_COUT_BASE_ADDR_HIGH_V_SHIFT                         0
#define MME_ARCH_COUT_BASE_ADDR_HIGH_V_MASK                          0xFFFFFFFF

#define mmMME_ARCH_BIAS_BASE_ADDR_HIGH                               0xD0018
/* MME_ARCH_BIAS_BASE_ADDR_HIGH */
#define MME_ARCH_BIAS_BASE_ADDR_HIGH_V_SHIFT                         0
#define MME_ARCH_BIAS_BASE_ADDR_HIGH_V_MASK                          0xFFFFFFFF

#define mmMME_ARCH_A_BASE_ADDR_LOW                                   0xD001C
/* MME_ARCH_A_BASE_ADDR_LOW */
#define MME_ARCH_A_BASE_ADDR_LOW_V_SHIFT                             0
#define MME_ARCH_A_BASE_ADDR_LOW_V_MASK                              0xFFFFFFFF

#define mmMME_ARCH_B_BASE_ADDR_LOW                                   0xD0020
/* MME_ARCH_B_BASE_ADDR_LOW */
#define MME_ARCH_B_BASE_ADDR_LOW_V_SHIFT                             0
#define MME_ARCH_B_BASE_ADDR_LOW_V_MASK                              0xFFFFFFFF

#define mmMME_ARCH_CIN_BASE_ADDR_LOW                                 0xD0024
/* MME_ARCH_CIN_BASE_ADDR_LOW */
#define MME_ARCH_CIN_BASE_ADDR_LOW_V_SHIFT                           0
#define MME_ARCH_CIN_BASE_ADDR_LOW_V_MASK                            0xFFFFFFFF

#define mmMME_ARCH_COUT_BASE_ADDR_LOW                                0xD0028
/* MME_ARCH_COUT_BASE_ADDR_LOW */
#define MME_ARCH_COUT_BASE_ADDR_LOW_V_SHIFT                          0
#define MME_ARCH_COUT_BASE_ADDR_LOW_V_MASK                           0xFFFFFFFF

#define mmMME_ARCH_BIAS_BASE_ADDR_LOW                                0xD002C
/* MME_ARCH_BIAS_BASE_ADDR_LOW */
#define MME_ARCH_BIAS_BASE_ADDR_LOW_V_SHIFT                          0
#define MME_ARCH_BIAS_BASE_ADDR_LOW_V_MASK                           0xFFFFFFFF

#define mmMME_ARCH_HEADER                                            0xD0030
/* MME_ARCH_HEADER */
#define MME_ARCH_HEADER_SIGNAL_MASK_SHIFT                            0
#define MME_ARCH_HEADER_SIGNAL_MASK_MASK                             0x1F
#define MME_ARCH_HEADER_SIGNAL_EN_SHIFT                              5
#define MME_ARCH_HEADER_SIGNAL_EN_MASK                               0x20
#define MME_ARCH_HEADER_TRANS_A_SHIFT                                6
#define MME_ARCH_HEADER_TRANS_A_MASK                                 0x40
#define MME_ARCH_HEADER_LOWER_A_SHIFT                                7
#define MME_ARCH_HEADER_LOWER_A_MASK                                 0x80
#define MME_ARCH_HEADER_ACCUM_MASK_SHIFT                             8
#define MME_ARCH_HEADER_ACCUM_MASK_MASK                              0xF00
#define MME_ARCH_HEADER_LOAD_BIAS_SHIFT                              12
#define MME_ARCH_HEADER_LOAD_BIAS_MASK                               0x1000
#define MME_ARCH_HEADER_LOAD_CIN_SHIFT                               13
#define MME_ARCH_HEADER_LOAD_CIN_MASK                                0x2000
#define MME_ARCH_HEADER_STORE_OUT_SHIFT                              15
#define MME_ARCH_HEADER_STORE_OUT_MASK                               0x8000
#define MME_ARCH_HEADER_ACC_LD_INC_DISABLE_SHIFT                     16
#define MME_ARCH_HEADER_ACC_LD_INC_DISABLE_MASK                      0x10000
#define MME_ARCH_HEADER_ADVANCE_A_SHIFT                              17
#define MME_ARCH_HEADER_ADVANCE_A_MASK                               0x20000
#define MME_ARCH_HEADER_ADVANCE_B_SHIFT                              18
#define MME_ARCH_HEADER_ADVANCE_B_MASK                               0x40000
#define MME_ARCH_HEADER_ADVANCE_CIN_SHIFT                            19
#define MME_ARCH_HEADER_ADVANCE_CIN_MASK                             0x80000
#define MME_ARCH_HEADER_ADVANCE_COUT_SHIFT                           20
#define MME_ARCH_HEADER_ADVANCE_COUT_MASK                            0x100000
#define MME_ARCH_HEADER_COMPRESSED_B_SHIFT                           21
#define MME_ARCH_HEADER_COMPRESSED_B_MASK                            0x200000
#define MME_ARCH_HEADER_MASK_CONV_END_SHIFT                          22
#define MME_ARCH_HEADER_MASK_CONV_END_MASK                           0x400000
#define MME_ARCH_HEADER_ACC_ST_INC_DISABLE_SHIFT                     23
#define MME_ARCH_HEADER_ACC_ST_INC_DISABLE_MASK                      0x800000
#define MME_ARCH_HEADER_AB_DATA_TYPE_SHIFT                           24
#define MME_ARCH_HEADER_AB_DATA_TYPE_MASK                            0x3000000
#define MME_ARCH_HEADER_CIN_DATA_TYPE_SHIFT                          26
#define MME_ARCH_HEADER_CIN_DATA_TYPE_MASK                           0x1C000000
#define MME_ARCH_HEADER_COUT_DATA_TYPE_SHIFT                         29
#define MME_ARCH_HEADER_COUT_DATA_TYPE_MASK                          0xE0000000

#define mmMME_ARCH_KERNEL_SIZE_MINUS_1                               0xD0034
/* MME_ARCH_KERNEL_SIZE_MINUS_1 */
#define MME_ARCH_KERNEL_SIZE_MINUS_1_DIM_0_SHIFT                     0
#define MME_ARCH_KERNEL_SIZE_MINUS_1_DIM_0_MASK                      0xFF
#define MME_ARCH_KERNEL_SIZE_MINUS_1_DIM_1_SHIFT                     8
#define MME_ARCH_KERNEL_SIZE_MINUS_1_DIM_1_MASK                      0xFF00
#define MME_ARCH_KERNEL_SIZE_MINUS_1_DIM_2_SHIFT                     16
#define MME_ARCH_KERNEL_SIZE_MINUS_1_DIM_2_MASK                      0xFF0000
#define MME_ARCH_KERNEL_SIZE_MINUS_1_DIM_3_SHIFT                     24
#define MME_ARCH_KERNEL_SIZE_MINUS_1_DIM_3_MASK                      0xFF000000

#define mmMME_ARCH_ASSOCIATED_DIMS_0                                 0xD0038

#define mmMME_ARCH_ASSOCIATED_DIMS_1                                 0xD003C
/* MME_ARCH_ASSOCIATED_DIMS */
#define MME_ARCH_ASSOCIATED_DIMS_A_0_SHIFT                           0
#define MME_ARCH_ASSOCIATED_DIMS_A_0_MASK                            0x7
#define MME_ARCH_ASSOCIATED_DIMS_B_0_SHIFT                           3
#define MME_ARCH_ASSOCIATED_DIMS_B_0_MASK                            0x38
#define MME_ARCH_ASSOCIATED_DIMS_CIN_0_SHIFT                         6
#define MME_ARCH_ASSOCIATED_DIMS_CIN_0_MASK                          0x1C0
#define MME_ARCH_ASSOCIATED_DIMS_COUT_0_SHIFT                        9
#define MME_ARCH_ASSOCIATED_DIMS_COUT_0_MASK                         0xE00
#define MME_ARCH_ASSOCIATED_DIMS_A_1_SHIFT                           16
#define MME_ARCH_ASSOCIATED_DIMS_A_1_MASK                            0x70000
#define MME_ARCH_ASSOCIATED_DIMS_B_1_SHIFT                           19
#define MME_ARCH_ASSOCIATED_DIMS_B_1_MASK                            0x380000
#define MME_ARCH_ASSOCIATED_DIMS_CIN_1_SHIFT                         22
#define MME_ARCH_ASSOCIATED_DIMS_CIN_1_MASK                          0x1C00000
#define MME_ARCH_ASSOCIATED_DIMS_COUT_1_SHIFT                        25
#define MME_ARCH_ASSOCIATED_DIMS_COUT_1_MASK                         0xE000000

#define mmMME_ARCH_COUT_SCALE                                        0xD0040
/* MME_ARCH_COUT_SCALE */
#define MME_ARCH_COUT_SCALE_V_SHIFT                                  0
#define MME_ARCH_COUT_SCALE_V_MASK                                   0xFFFFFFFF

#define mmMME_ARCH_CIN_SCALE                                         0xD0044
/* MME_ARCH_CIN_SCALE */
#define MME_ARCH_CIN_SCALE_V_SHIFT                                   0
#define MME_ARCH_CIN_SCALE_V_MASK                                    0xFFFFFFFF

#define mmMME_ARCH_GEMMLOWP_ZP                                       0xD0048
/* MME_ARCH_GEMMLOWP_ZP */
#define MME_ARCH_GEMMLOWP_ZP_ZP_CIN_SHIFT                            0
#define MME_ARCH_GEMMLOWP_ZP_ZP_CIN_MASK                             0x1FF
#define MME_ARCH_GEMMLOWP_ZP_ZP_COUT_SHIFT                           9
#define MME_ARCH_GEMMLOWP_ZP_ZP_COUT_MASK                            0x3FE00
#define MME_ARCH_GEMMLOWP_ZP_ZP_B_SHIFT                              18
#define MME_ARCH_GEMMLOWP_ZP_ZP_B_MASK                               0x7FC0000
#define MME_ARCH_GEMMLOWP_ZP_GEMMLOWP_EU_EN_SHIFT                    27
#define MME_ARCH_GEMMLOWP_ZP_GEMMLOWP_EU_EN_MASK                     0x8000000
#define MME_ARCH_GEMMLOWP_ZP_ACCUM_SHIFT                             28
#define MME_ARCH_GEMMLOWP_ZP_ACCUM_MASK                              0x10000000
#define MME_ARCH_GEMMLOWP_ZP_ACCUM_BIAS_SHIFT                        29
#define MME_ARCH_GEMMLOWP_ZP_ACCUM_BIAS_MASK                         0x20000000
#define MME_ARCH_GEMMLOWP_ZP_RELU_EN_SHIFT                           30
#define MME_ARCH_GEMMLOWP_ZP_RELU_EN_MASK                            0x40000000

#define mmMME_ARCH_GEMMLOWP_EXPONENT                                 0xD004C
/* MME_ARCH_GEMMLOWP_EXPONENT */
#define MME_ARCH_GEMMLOWP_EXPONENT_EXPONENT_CIN_SHIFT                0
#define MME_ARCH_GEMMLOWP_EXPONENT_EXPONENT_CIN_MASK                 0x3F
#define MME_ARCH_GEMMLOWP_EXPONENT_EXPONENT_COUT_SHIFT               8
#define MME_ARCH_GEMMLOWP_EXPONENT_EXPONENT_COUT_MASK                0x3F00
#define MME_ARCH_GEMMLOWP_EXPONENT_MUL_CIN_EN_SHIFT                  16
#define MME_ARCH_GEMMLOWP_EXPONENT_MUL_CIN_EN_MASK                   0x10000
#define MME_ARCH_GEMMLOWP_EXPONENT_MUL_COUT_EN_SHIFT                 17
#define MME_ARCH_GEMMLOWP_EXPONENT_MUL_COUT_EN_MASK                  0x20000

#define mmMME_ARCH_A_ROI_BASE_OFFSET_0                               0xD0050

#define mmMME_ARCH_A_ROI_BASE_OFFSET_1                               0xD0054

#define mmMME_ARCH_A_ROI_BASE_OFFSET_2                               0xD0058

#define mmMME_ARCH_A_ROI_BASE_OFFSET_3                               0xD005C

#define mmMME_ARCH_A_ROI_BASE_OFFSET_4                               0xD0060
/* MME_ARCH_A_ROI_BASE_OFFSET */
#define MME_ARCH_A_ROI_BASE_OFFSET_V_SHIFT                           0
#define MME_ARCH_A_ROI_BASE_OFFSET_V_MASK                            0xFFFFFFFF

#define mmMME_ARCH_A_VALID_ELEMENTS_0                                0xD0064

#define mmMME_ARCH_A_VALID_ELEMENTS_1                                0xD0068

#define mmMME_ARCH_A_VALID_ELEMENTS_2                                0xD006C

#define mmMME_ARCH_A_VALID_ELEMENTS_3                                0xD0070

#define mmMME_ARCH_A_VALID_ELEMENTS_4                                0xD0074
/* MME_ARCH_A_VALID_ELEMENTS */
#define MME_ARCH_A_VALID_ELEMENTS_V_SHIFT                            0
#define MME_ARCH_A_VALID_ELEMENTS_V_MASK                             0xFFFFFFFF

#define mmMME_ARCH_A_LOOP_STRIDE_0                                   0xD0078

#define mmMME_ARCH_A_LOOP_STRIDE_1                                   0xD007C

#define mmMME_ARCH_A_LOOP_STRIDE_2                                   0xD0080

#define mmMME_ARCH_A_LOOP_STRIDE_3                                   0xD0084

#define mmMME_ARCH_A_LOOP_STRIDE_4                                   0xD0088
/* MME_ARCH_A_LOOP_STRIDE */
#define MME_ARCH_A_LOOP_STRIDE_V_SHIFT                               0
#define MME_ARCH_A_LOOP_STRIDE_V_MASK                                0xFFFFFFFF

#define mmMME_ARCH_A_ROI_SIZE_0                                      0xD008C

#define mmMME_ARCH_A_ROI_SIZE_1                                      0xD0090

#define mmMME_ARCH_A_ROI_SIZE_2                                      0xD0094

#define mmMME_ARCH_A_ROI_SIZE_3                                      0xD0098
/* MME_ARCH_A_ROI_SIZE */
#define MME_ARCH_A_ROI_SIZE_V_SHIFT                                  0
#define MME_ARCH_A_ROI_SIZE_V_MASK                                   0xFFFFFFFF

#define mmMME_ARCH_A_SPATIAL_START_OFFSET_0                          0xD009C

#define mmMME_ARCH_A_SPATIAL_START_OFFSET_1                          0xD00A0

#define mmMME_ARCH_A_SPATIAL_START_OFFSET_2                          0xD00A4

#define mmMME_ARCH_A_SPATIAL_START_OFFSET_3                          0xD00A8
/* MME_ARCH_A_SPATIAL_START_OFFSET */
#define MME_ARCH_A_SPATIAL_START_OFFSET_V_SHIFT                      0
#define MME_ARCH_A_SPATIAL_START_OFFSET_V_MASK                       0xFFFFFFFF

#define mmMME_ARCH_A_SPATIAL_STRIDE_0                                0xD00AC

#define mmMME_ARCH_A_SPATIAL_STRIDE_1                                0xD00B0

#define mmMME_ARCH_A_SPATIAL_STRIDE_2                                0xD00B4

#define mmMME_ARCH_A_SPATIAL_STRIDE_3                                0xD00B8
/* MME_ARCH_A_SPATIAL_STRIDE */
#define MME_ARCH_A_SPATIAL_STRIDE_V_SHIFT                            0
#define MME_ARCH_A_SPATIAL_STRIDE_V_MASK                             0xFFFFFFFF

#define mmMME_ARCH_A_SPATIAL_SIZE_MINUS_1                            0xD00BC
/* MME_ARCH_A_SPATIAL_SIZE_MINUS_1 */
#define MME_ARCH_A_SPATIAL_SIZE_MINUS_1_V_SHIFT                      0
#define MME_ARCH_A_SPATIAL_SIZE_MINUS_1_V_MASK                       0xFFFFFFFF

#define mmMME_ARCH_B_ROI_BASE_OFFSET_0                               0xD00C0

#define mmMME_ARCH_B_ROI_BASE_OFFSET_1                               0xD00C4

#define mmMME_ARCH_B_ROI_BASE_OFFSET_2                               0xD00C8

#define mmMME_ARCH_B_ROI_BASE_OFFSET_3                               0xD00CC

#define mmMME_ARCH_B_ROI_BASE_OFFSET_4                               0xD00D0
/* MME_ARCH_B_ROI_BASE_OFFSET */
#define MME_ARCH_B_ROI_BASE_OFFSET_V_SHIFT                           0
#define MME_ARCH_B_ROI_BASE_OFFSET_V_MASK                            0xFFFFFFFF

#define mmMME_ARCH_B_VALID_ELEMENTS_0                                0xD00D4

#define mmMME_ARCH_B_VALID_ELEMENTS_1                                0xD00D8

#define mmMME_ARCH_B_VALID_ELEMENTS_2                                0xD00DC

#define mmMME_ARCH_B_VALID_ELEMENTS_3                                0xD00E0

#define mmMME_ARCH_B_VALID_ELEMENTS_4                                0xD00E4
/* MME_ARCH_B_VALID_ELEMENTS */
#define MME_ARCH_B_VALID_ELEMENTS_V_SHIFT                            0
#define MME_ARCH_B_VALID_ELEMENTS_V_MASK                             0xFFFFFFFF

#define mmMME_ARCH_B_LOOP_STRIDE_0                                   0xD00E8

#define mmMME_ARCH_B_LOOP_STRIDE_1                                   0xD00EC

#define mmMME_ARCH_B_LOOP_STRIDE_2                                   0xD00F0

#define mmMME_ARCH_B_LOOP_STRIDE_3                                   0xD00F4

#define mmMME_ARCH_B_LOOP_STRIDE_4                                   0xD00F8
/* MME_ARCH_B_LOOP_STRIDE */
#define MME_ARCH_B_LOOP_STRIDE_V_SHIFT                               0
#define MME_ARCH_B_LOOP_STRIDE_V_MASK                                0xFFFFFFFF

#define mmMME_ARCH_B_ROI_SIZE_0                                      0xD00FC

#define mmMME_ARCH_B_ROI_SIZE_1                                      0xD0100

#define mmMME_ARCH_B_ROI_SIZE_2                                      0xD0104

#define mmMME_ARCH_B_ROI_SIZE_3                                      0xD0108
/* MME_ARCH_B_ROI_SIZE */
#define MME_ARCH_B_ROI_SIZE_V_SHIFT                                  0
#define MME_ARCH_B_ROI_SIZE_V_MASK                                   0xFFFFFFFF

#define mmMME_ARCH_B_SPATIAL_START_OFFSET_0                          0xD010C

#define mmMME_ARCH_B_SPATIAL_START_OFFSET_1                          0xD0110

#define mmMME_ARCH_B_SPATIAL_START_OFFSET_2                          0xD0114

#define mmMME_ARCH_B_SPATIAL_START_OFFSET_3                          0xD0118
/* MME_ARCH_B_SPATIAL_START_OFFSET */
#define MME_ARCH_B_SPATIAL_START_OFFSET_V_SHIFT                      0
#define MME_ARCH_B_SPATIAL_START_OFFSET_V_MASK                       0xFFFFFFFF

#define mmMME_ARCH_B_SPATIAL_STRIDE_0                                0xD011C

#define mmMME_ARCH_B_SPATIAL_STRIDE_1                                0xD0120

#define mmMME_ARCH_B_SPATIAL_STRIDE_2                                0xD0124

#define mmMME_ARCH_B_SPATIAL_STRIDE_3                                0xD0128
/* MME_ARCH_B_SPATIAL_STRIDE */
#define MME_ARCH_B_SPATIAL_STRIDE_V_SHIFT                            0
#define MME_ARCH_B_SPATIAL_STRIDE_V_MASK                             0xFFFFFFFF

#define mmMME_ARCH_B_SPATIAL_SIZE_MINUS_1                            0xD012C
/* MME_ARCH_B_SPATIAL_SIZE_MINUS_1 */
#define MME_ARCH_B_SPATIAL_SIZE_MINUS_1_V_SHIFT                      0
#define MME_ARCH_B_SPATIAL_SIZE_MINUS_1_V_MASK                       0xFFFFFFFF

#define mmMME_ARCH_C_ROI_BASE_OFFSET_0                               0xD0130

#define mmMME_ARCH_C_ROI_BASE_OFFSET_1                               0xD0134

#define mmMME_ARCH_C_ROI_BASE_OFFSET_2                               0xD0138

#define mmMME_ARCH_C_ROI_BASE_OFFSET_3                               0xD013C

#define mmMME_ARCH_C_ROI_BASE_OFFSET_4                               0xD0140
/* MME_ARCH_C_ROI_BASE_OFFSET */
#define MME_ARCH_C_ROI_BASE_OFFSET_V_SHIFT                           0
#define MME_ARCH_C_ROI_BASE_OFFSET_V_MASK                            0xFFFFFFFF

#define mmMME_ARCH_C_VALID_ELEMENTS_0                                0xD0144

#define mmMME_ARCH_C_VALID_ELEMENTS_1                                0xD0148

#define mmMME_ARCH_C_VALID_ELEMENTS_2                                0xD014C

#define mmMME_ARCH_C_VALID_ELEMENTS_3                                0xD0150

#define mmMME_ARCH_C_VALID_ELEMENTS_4                                0xD0154
/* MME_ARCH_C_VALID_ELEMENTS */
#define MME_ARCH_C_VALID_ELEMENTS_V_SHIFT                            0
#define MME_ARCH_C_VALID_ELEMENTS_V_MASK                             0xFFFFFFFF

#define mmMME_ARCH_C_LOOP_STRIDE_0                                   0xD0158

#define mmMME_ARCH_C_LOOP_STRIDE_1                                   0xD015C

#define mmMME_ARCH_C_LOOP_STRIDE_2                                   0xD0160

#define mmMME_ARCH_C_LOOP_STRIDE_3                                   0xD0164

#define mmMME_ARCH_C_LOOP_STRIDE_4                                   0xD0168
/* MME_ARCH_C_LOOP_STRIDE */
#define MME_ARCH_C_LOOP_STRIDE_V_SHIFT                               0
#define MME_ARCH_C_LOOP_STRIDE_V_MASK                                0xFFFFFFFF

#define mmMME_ARCH_C_ROI_SIZE_0                                      0xD016C

#define mmMME_ARCH_C_ROI_SIZE_1                                      0xD0170

#define mmMME_ARCH_C_ROI_SIZE_2                                      0xD0174

#define mmMME_ARCH_C_ROI_SIZE_3                                      0xD0178
/* MME_ARCH_C_ROI_SIZE */
#define MME_ARCH_C_ROI_SIZE_V_SHIFT                                  0
#define MME_ARCH_C_ROI_SIZE_V_MASK                                   0xFFFFFFFF

#define mmMME_ARCH_C_SPATIAL_START_OFFSET_0                          0xD017C

#define mmMME_ARCH_C_SPATIAL_START_OFFSET_1                          0xD0180

#define mmMME_ARCH_C_SPATIAL_START_OFFSET_2                          0xD0184

#define mmMME_ARCH_C_SPATIAL_START_OFFSET_3                          0xD0188
/* MME_ARCH_C_SPATIAL_START_OFFSET */
#define MME_ARCH_C_SPATIAL_START_OFFSET_V_SHIFT                      0
#define MME_ARCH_C_SPATIAL_START_OFFSET_V_MASK                       0xFFFFFFFF

#define mmMME_ARCH_C_SPATIAL_STRIDE_0                                0xD018C

#define mmMME_ARCH_C_SPATIAL_STRIDE_1                                0xD0190

#define mmMME_ARCH_C_SPATIAL_STRIDE_2                                0xD0194

#define mmMME_ARCH_C_SPATIAL_STRIDE_3                                0xD0198
/* MME_ARCH_C_SPATIAL_STRIDE */
#define MME_ARCH_C_SPATIAL_STRIDE_V_SHIFT                            0
#define MME_ARCH_C_SPATIAL_STRIDE_V_MASK                             0xFFFFFFFF

#define mmMME_ARCH_C_SPATIAL_SIZE_MINUS_1                            0xD019C
/* MME_ARCH_C_SPATIAL_SIZE_MINUS_1 */
#define MME_ARCH_C_SPATIAL_SIZE_MINUS_1_V_SHIFT                      0
#define MME_ARCH_C_SPATIAL_SIZE_MINUS_1_V_MASK                       0xFFFFFFFF

#define mmMME_ARCH_SYNC_OBJECT_MESSAGE                               0xD01A0
/* MME_ARCH_SYNC_OBJECT_MESSAGE */
#define MME_ARCH_SYNC_OBJECT_MESSAGE_SO_WRITE_VALUE_SHIFT            0
#define MME_ARCH_SYNC_OBJECT_MESSAGE_SO_WRITE_VALUE_MASK             0xFFFF
#define MME_ARCH_SYNC_OBJECT_MESSAGE_SO_ADDRESS_OFFSET_SHIFT         16
#define MME_ARCH_SYNC_OBJECT_MESSAGE_SO_ADDRESS_OFFSET_MASK          0x7FFF0000
#define MME_ARCH_SYNC_OBJECT_MESSAGE_SO_OPERATION_SHIFT              31
#define MME_ARCH_SYNC_OBJECT_MESSAGE_SO_OPERATION_MASK               0x80000000

#define mmMME_ARCH_E_PADDING_VALUE_A                                 0xD01A4
/* MME_ARCH_E_PADDING_VALUE_A */
#define MME_ARCH_E_PADDING_VALUE_A_V_SHIFT                           0
#define MME_ARCH_E_PADDING_VALUE_A_V_MASK                            0xFFFF

#define mmMME_ARCH_E_NUM_ITERATION_MINUS_1                           0xD01A8
/* MME_ARCH_E_NUM_ITERATION_MINUS_1 */
#define MME_ARCH_E_NUM_ITERATION_MINUS_1_V_SHIFT                     0
#define MME_ARCH_E_NUM_ITERATION_MINUS_1_V_MASK                      0xFFFFFFFF

#define mmMME_ARCH_E_BUBBLES_PER_SPLIT                               0xD01AC
/* MME_ARCH_E_BUBBLES_PER_SPLIT */
#define MME_ARCH_E_BUBBLES_PER_SPLIT_A_SHIFT                         0
#define MME_ARCH_E_BUBBLES_PER_SPLIT_A_MASK                          0xFF
#define MME_ARCH_E_BUBBLES_PER_SPLIT_B_SHIFT                         8
#define MME_ARCH_E_BUBBLES_PER_SPLIT_B_MASK                          0xFF00
#define MME_ARCH_E_BUBBLES_PER_SPLIT_CIN_SHIFT                       16
#define MME_ARCH_E_BUBBLES_PER_SPLIT_CIN_MASK                        0xFF0000
#define MME_ARCH_E_BUBBLES_PER_SPLIT_ID_SHIFT                        24
#define MME_ARCH_E_BUBBLES_PER_SPLIT_ID_MASK                         0xFF000000

#define mmMME_CMD                                                    0xD0200
/* MME_CMD */
#define MME_CMD_EXECUTE_SHIFT                                        0
#define MME_CMD_EXECUTE_MASK                                         0x1

#define mmMME_DUMMY                                                  0xD0204
/* MME_DUMMY */
#define MME_DUMMY_V_SHIFT                                            0
#define MME_DUMMY_V_MASK                                             0xFFFFFFFF

#define mmMME_RESET                                                  0xD0208
/* MME_RESET */
#define MME_RESET_V_SHIFT                                            0
#define MME_RESET_V_MASK                                             0x1

#define mmMME_STALL                                                  0xD020C
/* MME_STALL */
#define MME_STALL_V_SHIFT                                            0
#define MME_STALL_V_MASK                                             0xFFFFFFFF

#define mmMME_SM_BASE_ADDRESS_LOW                                    0xD0210
/* MME_SM_BASE_ADDRESS_LOW */
#define MME_SM_BASE_ADDRESS_LOW_V_SHIFT                              0
#define MME_SM_BASE_ADDRESS_LOW_V_MASK                               0xFFFFFFFF

#define mmMME_SM_BASE_ADDRESS_HIGH                                   0xD0214
/* MME_SM_BASE_ADDRESS_HIGH */
#define MME_SM_BASE_ADDRESS_HIGH_V_SHIFT                             0
#define MME_SM_BASE_ADDRESS_HIGH_V_MASK                              0xFFFFFFFF

#define mmMME_DBGMEM_ADD                                             0xD0218
/* MME_DBGMEM_ADD */
#define MME_DBGMEM_ADD_V_SHIFT                                       0
#define MME_DBGMEM_ADD_V_MASK                                        0xFFFFFFFF

#define mmMME_DBGMEM_DATA_WR                                         0xD021C
/* MME_DBGMEM_DATA_WR */
#define MME_DBGMEM_DATA_WR_V_SHIFT                                   0
#define MME_DBGMEM_DATA_WR_V_MASK                                    0xFFFFFFFF

#define mmMME_DBGMEM_DATA_RD                                         0xD0220
/* MME_DBGMEM_DATA_RD */
#define MME_DBGMEM_DATA_RD_V_SHIFT                                   0
#define MME_DBGMEM_DATA_RD_V_MASK                                    0xFFFFFFFF

#define mmMME_DBGMEM_CTRL                                            0xD0224
/* MME_DBGMEM_CTRL */
#define MME_DBGMEM_CTRL_WR_NRD_SHIFT                                 0
#define MME_DBGMEM_CTRL_WR_NRD_MASK                                  0x1

#define mmMME_DBGMEM_RC                                              0xD0228
/* MME_DBGMEM_RC */
#define MME_DBGMEM_RC_VALID_SHIFT                                    0
#define MME_DBGMEM_RC_VALID_MASK                                     0x1
#define MME_DBGMEM_RC_FULL_SHIFT                                     1
#define MME_DBGMEM_RC_FULL_MASK                                      0x2

#define mmMME_LOG_SHADOW                                             0xD022C
/* MME_LOG_SHADOW */
#define MME_LOG_SHADOW_MASK_0_SHIFT                                  0
#define MME_LOG_SHADOW_MASK_0_MASK                                   0x7F
#define MME_LOG_SHADOW_MASK_1_SHIFT                                  8
#define MME_LOG_SHADOW_MASK_1_MASK                                   0x7F00
#define MME_LOG_SHADOW_MASK_2_SHIFT                                  16
#define MME_LOG_SHADOW_MASK_2_MASK                                   0x7F0000
#define MME_LOG_SHADOW_MASK_3_SHIFT                                  24
#define MME_LOG_SHADOW_MASK_3_MASK                                   0x7F000000

#define mmMME_STORE_MAX_CREDIT                                       0xD0300
/* MME_STORE_MAX_CREDIT */
#define MME_STORE_MAX_CREDIT_V_SHIFT                                 0
#define MME_STORE_MAX_CREDIT_V_MASK                                  0x3F

#define mmMME_AGU                                                    0xD0304
/* MME_AGU */
#define MME_AGU_SBA_MAX_CREDIT_SHIFT                                 0
#define MME_AGU_SBA_MAX_CREDIT_MASK                                  0x1F
#define MME_AGU_SBB_MAX_CREDIT_SHIFT                                 8
#define MME_AGU_SBB_MAX_CREDIT_MASK                                  0x1F00
#define MME_AGU_SBC_MAX_CREDIT_SHIFT                                 16
#define MME_AGU_SBC_MAX_CREDIT_MASK                                  0x1F0000
#define MME_AGU_WBC_MAX_CREDIT_SHIFT                                 24
#define MME_AGU_WBC_MAX_CREDIT_MASK                                  0x3F000000

#define mmMME_SBA                                                    0xD0308
/* MME_SBA */
#define MME_SBA_MAX_SIZE_SHIFT                                       0
#define MME_SBA_MAX_SIZE_MASK                                        0x3FF
#define MME_SBA_EU_MAX_CREDIT_SHIFT                                  16
#define MME_SBA_EU_MAX_CREDIT_MASK                                   0x1F0000

#define mmMME_SBB                                                    0xD030C
/* MME_SBB */
#define MME_SBB_MAX_SIZE_SHIFT                                       0
#define MME_SBB_MAX_SIZE_MASK                                        0x3FF
#define MME_SBB_EU_MAX_CREDIT_SHIFT                                  16
#define MME_SBB_EU_MAX_CREDIT_MASK                                   0x1F0000

#define mmMME_SBC                                                    0xD0310
/* MME_SBC */
#define MME_SBC_MAX_SIZE_SHIFT                                       0
#define MME_SBC_MAX_SIZE_MASK                                        0x3FF
#define MME_SBC_EU_MAX_CREDIT_SHIFT                                  16
#define MME_SBC_EU_MAX_CREDIT_MASK                                   0x1F0000

#define mmMME_WBC                                                    0xD0314
/* MME_WBC */
#define MME_WBC_MAX_OUTSTANDING_SHIFT                                0
#define MME_WBC_MAX_OUTSTANDING_MASK                                 0xFFF
#define MME_WBC_DISABLE_FAST_END_PE_SHIFT                            12
#define MME_WBC_DISABLE_FAST_END_PE_MASK                             0x1000
#define MME_WBC_LD_INSERT_BUBBLE_DIS_SHIFT                           13
#define MME_WBC_LD_INSERT_BUBBLE_DIS_MASK                            0x2000

#define mmMME_SBA_CONTROL_DATA                                       0xD0318
/* MME_SBA_CONTROL_DATA */
#define MME_SBA_CONTROL_DATA_ASID_SHIFT                              0
#define MME_SBA_CONTROL_DATA_ASID_MASK                               0x3FF
#define MME_SBA_CONTROL_DATA_MMBP_SHIFT                              10
#define MME_SBA_CONTROL_DATA_MMBP_MASK                               0x400

#define mmMME_SBB_CONTROL_DATA                                       0xD031C
/* MME_SBB_CONTROL_DATA */
#define MME_SBB_CONTROL_DATA_ASID_SHIFT                              0
#define MME_SBB_CONTROL_DATA_ASID_MASK                               0x3FF
#define MME_SBB_CONTROL_DATA_MMBP_SHIFT                              10
#define MME_SBB_CONTROL_DATA_MMBP_MASK                               0x400

#define mmMME_SBC_CONTROL_DATA                                       0xD0320
/* MME_SBC_CONTROL_DATA */
#define MME_SBC_CONTROL_DATA_ASID_SHIFT                              0
#define MME_SBC_CONTROL_DATA_ASID_MASK                               0x3FF
#define MME_SBC_CONTROL_DATA_MMBP_SHIFT                              10
#define MME_SBC_CONTROL_DATA_MMBP_MASK                               0x400

#define mmMME_WBC_CONTROL_DATA                                       0xD0324
/* MME_WBC_CONTROL_DATA */
#define MME_WBC_CONTROL_DATA_ASID_SHIFT                              0
#define MME_WBC_CONTROL_DATA_ASID_MASK                               0x3FF
#define MME_WBC_CONTROL_DATA_MMBP_SHIFT                              10
#define MME_WBC_CONTROL_DATA_MMBP_MASK                               0x400

#define mmMME_TE                                                     0xD0328
/* MME_TE */
#define MME_TE_MAX_CREDIT_SHIFT                                      0
#define MME_TE_MAX_CREDIT_MASK                                       0x1F
#define MME_TE_DESC_MAX_CREDIT_SHIFT                                 8
#define MME_TE_DESC_MAX_CREDIT_MASK                                  0x1F00

#define mmMME_TE2DEC                                                 0xD032C
/* MME_TE2DEC */
#define MME_TE2DEC_MAX_CREDIT_SHIFT                                  0
#define MME_TE2DEC_MAX_CREDIT_MASK                                   0x1F

#define mmMME_REI_STATUS                                             0xD0330
/* MME_REI_STATUS */
#define MME_REI_STATUS_V_SHIFT                                       0
#define MME_REI_STATUS_V_MASK                                        0xFFFFFFFF

#define mmMME_REI_MASK                                               0xD0334
/* MME_REI_MASK */
#define MME_REI_MASK_V_SHIFT                                         0
#define MME_REI_MASK_V_MASK                                          0xFFFFFFFF

#define mmMME_SEI_STATUS                                             0xD0338
/* MME_SEI_STATUS */
#define MME_SEI_STATUS_V_SHIFT                                       0
#define MME_SEI_STATUS_V_MASK                                        0xFFFFFFFF

#define mmMME_SEI_MASK                                               0xD033C
/* MME_SEI_MASK */
#define MME_SEI_MASK_V_SHIFT                                         0
#define MME_SEI_MASK_V_MASK                                          0xFFFFFFFF

#define mmMME_SPI_STATUS                                             0xD0340
/* MME_SPI_STATUS */
#define MME_SPI_STATUS_V_SHIFT                                       0
#define MME_SPI_STATUS_V_MASK                                        0xFFFFFFFF

#define mmMME_SPI_MASK                                               0xD0344
/* MME_SPI_MASK */
#define MME_SPI_MASK_V_SHIFT                                         0
#define MME_SPI_MASK_V_MASK                                          0xFFFFFFFF

#define mmMME_SHADOW_0_STATUS                                        0xD0400
/* MME_SHADOW_0_STATUS */
#define MME_SHADOW_0_STATUS_A_SHIFT                                  0
#define MME_SHADOW_0_STATUS_A_MASK                                   0x1
#define MME_SHADOW_0_STATUS_B_SHIFT                                  1
#define MME_SHADOW_0_STATUS_B_MASK                                   0x2
#define MME_SHADOW_0_STATUS_CIN_SHIFT                                2
#define MME_SHADOW_0_STATUS_CIN_MASK                                 0x4
#define MME_SHADOW_0_STATUS_COUT_SHIFT                               3
#define MME_SHADOW_0_STATUS_COUT_MASK                                0x8
#define MME_SHADOW_0_STATUS_TE_SHIFT                                 4
#define MME_SHADOW_0_STATUS_TE_MASK                                  0x10
#define MME_SHADOW_0_STATUS_LD_SHIFT                                 5
#define MME_SHADOW_0_STATUS_LD_MASK                                  0x20
#define MME_SHADOW_0_STATUS_ST_SHIFT                                 6
#define MME_SHADOW_0_STATUS_ST_MASK                                  0x40

#define mmMME_SHADOW_0_A_BASE_ADDR_HIGH                              0xD0408
/* MME_SHADOW_0_A_BASE_ADDR_HIGH */
#define MME_SHADOW_0_A_BASE_ADDR_HIGH_V_SHIFT                        0
#define MME_SHADOW_0_A_BASE_ADDR_HIGH_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_0_B_BASE_ADDR_HIGH                              0xD040C
/* MME_SHADOW_0_B_BASE_ADDR_HIGH */
#define MME_SHADOW_0_B_BASE_ADDR_HIGH_V_SHIFT                        0
#define MME_SHADOW_0_B_BASE_ADDR_HIGH_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_0_CIN_BASE_ADDR_HIGH                            0xD0410
/* MME_SHADOW_0_CIN_BASE_ADDR_HIGH */
#define MME_SHADOW_0_CIN_BASE_ADDR_HIGH_V_SHIFT                      0
#define MME_SHADOW_0_CIN_BASE_ADDR_HIGH_V_MASK                       0xFFFFFFFF

#define mmMME_SHADOW_0_COUT_BASE_ADDR_HIGH                           0xD0414
/* MME_SHADOW_0_COUT_BASE_ADDR_HIGH */
#define MME_SHADOW_0_COUT_BASE_ADDR_HIGH_V_SHIFT                     0
#define MME_SHADOW_0_COUT_BASE_ADDR_HIGH_V_MASK                      0xFFFFFFFF

#define mmMME_SHADOW_0_BIAS_BASE_ADDR_HIGH                           0xD0418
/* MME_SHADOW_0_BIAS_BASE_ADDR_HIGH */
#define MME_SHADOW_0_BIAS_BASE_ADDR_HIGH_V_SHIFT                     0
#define MME_SHADOW_0_BIAS_BASE_ADDR_HIGH_V_MASK                      0xFFFFFFFF

#define mmMME_SHADOW_0_A_BASE_ADDR_LOW                               0xD041C
/* MME_SHADOW_0_A_BASE_ADDR_LOW */
#define MME_SHADOW_0_A_BASE_ADDR_LOW_V_SHIFT                         0
#define MME_SHADOW_0_A_BASE_ADDR_LOW_V_MASK                          0xFFFFFFFF

#define mmMME_SHADOW_0_B_BASE_ADDR_LOW                               0xD0420
/* MME_SHADOW_0_B_BASE_ADDR_LOW */
#define MME_SHADOW_0_B_BASE_ADDR_LOW_V_SHIFT                         0
#define MME_SHADOW_0_B_BASE_ADDR_LOW_V_MASK                          0xFFFFFFFF

#define mmMME_SHADOW_0_CIN_BASE_ADDR_LOW                             0xD0424
/* MME_SHADOW_0_CIN_BASE_ADDR_LOW */
#define MME_SHADOW_0_CIN_BASE_ADDR_LOW_V_SHIFT                       0
#define MME_SHADOW_0_CIN_BASE_ADDR_LOW_V_MASK                        0xFFFFFFFF

#define mmMME_SHADOW_0_COUT_BASE_ADDR_LOW                            0xD0428
/* MME_SHADOW_0_COUT_BASE_ADDR_LOW */
#define MME_SHADOW_0_COUT_BASE_ADDR_LOW_V_SHIFT                      0
#define MME_SHADOW_0_COUT_BASE_ADDR_LOW_V_MASK                       0xFFFFFFFF

#define mmMME_SHADOW_0_BIAS_BASE_ADDR_LOW                            0xD042C
/* MME_SHADOW_0_BIAS_BASE_ADDR_LOW */
#define MME_SHADOW_0_BIAS_BASE_ADDR_LOW_V_SHIFT                      0
#define MME_SHADOW_0_BIAS_BASE_ADDR_LOW_V_MASK                       0xFFFFFFFF

#define mmMME_SHADOW_0_HEADER                                        0xD0430
/* MME_SHADOW_0_HEADER */
#define MME_SHADOW_0_HEADER_SIGNAL_MASK_SHIFT                        0
#define MME_SHADOW_0_HEADER_SIGNAL_MASK_MASK                         0x1F
#define MME_SHADOW_0_HEADER_SIGNAL_EN_SHIFT                          5
#define MME_SHADOW_0_HEADER_SIGNAL_EN_MASK                           0x20
#define MME_SHADOW_0_HEADER_TRANS_A_SHIFT                            6
#define MME_SHADOW_0_HEADER_TRANS_A_MASK                             0x40
#define MME_SHADOW_0_HEADER_LOWER_A_SHIFT                            7
#define MME_SHADOW_0_HEADER_LOWER_A_MASK                             0x80
#define MME_SHADOW_0_HEADER_ACCUM_MASK_SHIFT                         8
#define MME_SHADOW_0_HEADER_ACCUM_MASK_MASK                          0xF00
#define MME_SHADOW_0_HEADER_LOAD_BIAS_SHIFT                          12
#define MME_SHADOW_0_HEADER_LOAD_BIAS_MASK                           0x1000
#define MME_SHADOW_0_HEADER_LOAD_CIN_SHIFT                           13
#define MME_SHADOW_0_HEADER_LOAD_CIN_MASK                            0x2000
#define MME_SHADOW_0_HEADER_STORE_OUT_SHIFT                          15
#define MME_SHADOW_0_HEADER_STORE_OUT_MASK                           0x8000
#define MME_SHADOW_0_HEADER_ACC_LD_INC_DISABLE_SHIFT                 16
#define MME_SHADOW_0_HEADER_ACC_LD_INC_DISABLE_MASK                  0x10000
#define MME_SHADOW_0_HEADER_ADVANCE_A_SHIFT                          17
#define MME_SHADOW_0_HEADER_ADVANCE_A_MASK                           0x20000
#define MME_SHADOW_0_HEADER_ADVANCE_B_SHIFT                          18
#define MME_SHADOW_0_HEADER_ADVANCE_B_MASK                           0x40000
#define MME_SHADOW_0_HEADER_ADVANCE_CIN_SHIFT                        19
#define MME_SHADOW_0_HEADER_ADVANCE_CIN_MASK                         0x80000
#define MME_SHADOW_0_HEADER_ADVANCE_COUT_SHIFT                       20
#define MME_SHADOW_0_HEADER_ADVANCE_COUT_MASK                        0x100000
#define MME_SHADOW_0_HEADER_COMPRESSED_B_SHIFT                       21
#define MME_SHADOW_0_HEADER_COMPRESSED_B_MASK                        0x200000
#define MME_SHADOW_0_HEADER_MASK_CONV_END_SHIFT                      22
#define MME_SHADOW_0_HEADER_MASK_CONV_END_MASK                       0x400000
#define MME_SHADOW_0_HEADER_ACC_ST_INC_DISABLE_SHIFT                 23
#define MME_SHADOW_0_HEADER_ACC_ST_INC_DISABLE_MASK                  0x800000
#define MME_SHADOW_0_HEADER_AB_DATA_TYPE_SHIFT                       24
#define MME_SHADOW_0_HEADER_AB_DATA_TYPE_MASK                        0x3000000
#define MME_SHADOW_0_HEADER_CIN_DATA_TYPE_SHIFT                      26
#define MME_SHADOW_0_HEADER_CIN_DATA_TYPE_MASK                       0x1C000000
#define MME_SHADOW_0_HEADER_COUT_DATA_TYPE_SHIFT                     29
#define MME_SHADOW_0_HEADER_COUT_DATA_TYPE_MASK                      0xE0000000

#define mmMME_SHADOW_0_KERNEL_SIZE_MINUS_1                           0xD0434
/* MME_SHADOW_0_KERNEL_SIZE_MINUS_1 */
#define MME_SHADOW_0_KERNEL_SIZE_MINUS_1_DIM_0_SHIFT                 0
#define MME_SHADOW_0_KERNEL_SIZE_MINUS_1_DIM_0_MASK                  0xFF
#define MME_SHADOW_0_KERNEL_SIZE_MINUS_1_DIM_1_SHIFT                 8
#define MME_SHADOW_0_KERNEL_SIZE_MINUS_1_DIM_1_MASK                  0xFF00
#define MME_SHADOW_0_KERNEL_SIZE_MINUS_1_DIM_2_SHIFT                 16
#define MME_SHADOW_0_KERNEL_SIZE_MINUS_1_DIM_2_MASK                  0xFF0000
#define MME_SHADOW_0_KERNEL_SIZE_MINUS_1_DIM_3_SHIFT                 24
#define MME_SHADOW_0_KERNEL_SIZE_MINUS_1_DIM_3_MASK                  0xFF000000

#define mmMME_SHADOW_0_ASSOCIATED_DIMS_0                             0xD0438

#define mmMME_SHADOW_0_ASSOCIATED_DIMS_1                             0xD043C
/* MME_SHADOW_0_ASSOCIATED_DIMS */
#define MME_SHADOW_0_ASSOCIATED_DIMS_A_0_SHIFT                       0
#define MME_SHADOW_0_ASSOCIATED_DIMS_A_0_MASK                        0x7
#define MME_SHADOW_0_ASSOCIATED_DIMS_B_0_SHIFT                       3
#define MME_SHADOW_0_ASSOCIATED_DIMS_B_0_MASK                        0x38
#define MME_SHADOW_0_ASSOCIATED_DIMS_CIN_0_SHIFT                     6
#define MME_SHADOW_0_ASSOCIATED_DIMS_CIN_0_MASK                      0x1C0
#define MME_SHADOW_0_ASSOCIATED_DIMS_COUT_0_SHIFT                    9
#define MME_SHADOW_0_ASSOCIATED_DIMS_COUT_0_MASK                     0xE00
#define MME_SHADOW_0_ASSOCIATED_DIMS_A_1_SHIFT                       16
#define MME_SHADOW_0_ASSOCIATED_DIMS_A_1_MASK                        0x70000
#define MME_SHADOW_0_ASSOCIATED_DIMS_B_1_SHIFT                       19
#define MME_SHADOW_0_ASSOCIATED_DIMS_B_1_MASK                        0x380000
#define MME_SHADOW_0_ASSOCIATED_DIMS_CIN_1_SHIFT                     22
#define MME_SHADOW_0_ASSOCIATED_DIMS_CIN_1_MASK                      0x1C00000
#define MME_SHADOW_0_ASSOCIATED_DIMS_COUT_1_SHIFT                    25
#define MME_SHADOW_0_ASSOCIATED_DIMS_COUT_1_MASK                     0xE000000

#define mmMME_SHADOW_0_COUT_SCALE                                    0xD0440
/* MME_SHADOW_0_COUT_SCALE */
#define MME_SHADOW_0_COUT_SCALE_V_SHIFT                              0
#define MME_SHADOW_0_COUT_SCALE_V_MASK                               0xFFFFFFFF

#define mmMME_SHADOW_0_CIN_SCALE                                     0xD0444
/* MME_SHADOW_0_CIN_SCALE */
#define MME_SHADOW_0_CIN_SCALE_V_SHIFT                               0
#define MME_SHADOW_0_CIN_SCALE_V_MASK                                0xFFFFFFFF

#define mmMME_SHADOW_0_GEMMLOWP_ZP                                   0xD0448
/* MME_SHADOW_0_GEMMLOWP_ZP */
#define MME_SHADOW_0_GEMMLOWP_ZP_ZP_CIN_SHIFT                        0
#define MME_SHADOW_0_GEMMLOWP_ZP_ZP_CIN_MASK                         0x1FF
#define MME_SHADOW_0_GEMMLOWP_ZP_ZP_COUT_SHIFT                       9
#define MME_SHADOW_0_GEMMLOWP_ZP_ZP_COUT_MASK                        0x3FE00
#define MME_SHADOW_0_GEMMLOWP_ZP_ZP_B_SHIFT                          18
#define MME_SHADOW_0_GEMMLOWP_ZP_ZP_B_MASK                           0x7FC0000
#define MME_SHADOW_0_GEMMLOWP_ZP_GEMMLOWP_EU_EN_SHIFT                27
#define MME_SHADOW_0_GEMMLOWP_ZP_GEMMLOWP_EU_EN_MASK                 0x8000000
#define MME_SHADOW_0_GEMMLOWP_ZP_ACCUM_SHIFT                         28
#define MME_SHADOW_0_GEMMLOWP_ZP_ACCUM_MASK                          0x10000000
#define MME_SHADOW_0_GEMMLOWP_ZP_ACCUM_BIAS_SHIFT                    29
#define MME_SHADOW_0_GEMMLOWP_ZP_ACCUM_BIAS_MASK                     0x20000000
#define MME_SHADOW_0_GEMMLOWP_ZP_RELU_EN_SHIFT                       30
#define MME_SHADOW_0_GEMMLOWP_ZP_RELU_EN_MASK                        0x40000000

#define mmMME_SHADOW_0_GEMMLOWP_EXPONENT                             0xD044C
/* MME_SHADOW_0_GEMMLOWP_EXPONENT */
#define MME_SHADOW_0_GEMMLOWP_EXPONENT_EXPONENT_CIN_SHIFT            0
#define MME_SHADOW_0_GEMMLOWP_EXPONENT_EXPONENT_CIN_MASK             0x3F
#define MME_SHADOW_0_GEMMLOWP_EXPONENT_EXPONENT_COUT_SHIFT           8
#define MME_SHADOW_0_GEMMLOWP_EXPONENT_EXPONENT_COUT_MASK            0x3F00
#define MME_SHADOW_0_GEMMLOWP_EXPONENT_MUL_CIN_EN_SHIFT              16
#define MME_SHADOW_0_GEMMLOWP_EXPONENT_MUL_CIN_EN_MASK               0x10000
#define MME_SHADOW_0_GEMMLOWP_EXPONENT_MUL_COUT_EN_SHIFT             17
#define MME_SHADOW_0_GEMMLOWP_EXPONENT_MUL_COUT_EN_MASK              0x20000

#define mmMME_SHADOW_0_A_ROI_BASE_OFFSET_0                           0xD0450

#define mmMME_SHADOW_0_A_ROI_BASE_OFFSET_1                           0xD0454

#define mmMME_SHADOW_0_A_ROI_BASE_OFFSET_2                           0xD0458

#define mmMME_SHADOW_0_A_ROI_BASE_OFFSET_3                           0xD045C

#define mmMME_SHADOW_0_A_ROI_BASE_OFFSET_4                           0xD0460
/* MME_SHADOW_0_A_ROI_BASE_OFFSET */
#define MME_SHADOW_0_A_ROI_BASE_OFFSET_V_SHIFT                       0
#define MME_SHADOW_0_A_ROI_BASE_OFFSET_V_MASK                        0xFFFFFFFF

#define mmMME_SHADOW_0_A_VALID_ELEMENTS_0                            0xD0464

#define mmMME_SHADOW_0_A_VALID_ELEMENTS_1                            0xD0468

#define mmMME_SHADOW_0_A_VALID_ELEMENTS_2                            0xD046C

#define mmMME_SHADOW_0_A_VALID_ELEMENTS_3                            0xD0470

#define mmMME_SHADOW_0_A_VALID_ELEMENTS_4                            0xD0474
/* MME_SHADOW_0_A_VALID_ELEMENTS */
#define MME_SHADOW_0_A_VALID_ELEMENTS_V_SHIFT                        0
#define MME_SHADOW_0_A_VALID_ELEMENTS_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_0_A_LOOP_STRIDE_0                               0xD0478

#define mmMME_SHADOW_0_A_LOOP_STRIDE_1                               0xD047C

#define mmMME_SHADOW_0_A_LOOP_STRIDE_2                               0xD0480

#define mmMME_SHADOW_0_A_LOOP_STRIDE_3                               0xD0484

#define mmMME_SHADOW_0_A_LOOP_STRIDE_4                               0xD0488
/* MME_SHADOW_0_A_LOOP_STRIDE */
#define MME_SHADOW_0_A_LOOP_STRIDE_V_SHIFT                           0
#define MME_SHADOW_0_A_LOOP_STRIDE_V_MASK                            0xFFFFFFFF

#define mmMME_SHADOW_0_A_ROI_SIZE_0                                  0xD048C

#define mmMME_SHADOW_0_A_ROI_SIZE_1                                  0xD0490

#define mmMME_SHADOW_0_A_ROI_SIZE_2                                  0xD0494

#define mmMME_SHADOW_0_A_ROI_SIZE_3                                  0xD0498
/* MME_SHADOW_0_A_ROI_SIZE */
#define MME_SHADOW_0_A_ROI_SIZE_V_SHIFT                              0
#define MME_SHADOW_0_A_ROI_SIZE_V_MASK                               0xFFFFFFFF

#define mmMME_SHADOW_0_A_SPATIAL_START_OFFSET_0                      0xD049C

#define mmMME_SHADOW_0_A_SPATIAL_START_OFFSET_1                      0xD04A0

#define mmMME_SHADOW_0_A_SPATIAL_START_OFFSET_2                      0xD04A4

#define mmMME_SHADOW_0_A_SPATIAL_START_OFFSET_3                      0xD04A8
/* MME_SHADOW_0_A_SPATIAL_START_OFFSET */
#define MME_SHADOW_0_A_SPATIAL_START_OFFSET_V_SHIFT                  0
#define MME_SHADOW_0_A_SPATIAL_START_OFFSET_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_0_A_SPATIAL_STRIDE_0                            0xD04AC

#define mmMME_SHADOW_0_A_SPATIAL_STRIDE_1                            0xD04B0

#define mmMME_SHADOW_0_A_SPATIAL_STRIDE_2                            0xD04B4

#define mmMME_SHADOW_0_A_SPATIAL_STRIDE_3                            0xD04B8
/* MME_SHADOW_0_A_SPATIAL_STRIDE */
#define MME_SHADOW_0_A_SPATIAL_STRIDE_V_SHIFT                        0
#define MME_SHADOW_0_A_SPATIAL_STRIDE_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_0_A_SPATIAL_SIZE_MINUS_1                        0xD04BC
/* MME_SHADOW_0_A_SPATIAL_SIZE_MINUS_1 */
#define MME_SHADOW_0_A_SPATIAL_SIZE_MINUS_1_V_SHIFT                  0
#define MME_SHADOW_0_A_SPATIAL_SIZE_MINUS_1_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_0_B_ROI_BASE_OFFSET_0                           0xD04C0

#define mmMME_SHADOW_0_B_ROI_BASE_OFFSET_1                           0xD04C4

#define mmMME_SHADOW_0_B_ROI_BASE_OFFSET_2                           0xD04C8

#define mmMME_SHADOW_0_B_ROI_BASE_OFFSET_3                           0xD04CC

#define mmMME_SHADOW_0_B_ROI_BASE_OFFSET_4                           0xD04D0
/* MME_SHADOW_0_B_ROI_BASE_OFFSET */
#define MME_SHADOW_0_B_ROI_BASE_OFFSET_V_SHIFT                       0
#define MME_SHADOW_0_B_ROI_BASE_OFFSET_V_MASK                        0xFFFFFFFF

#define mmMME_SHADOW_0_B_VALID_ELEMENTS_0                            0xD04D4

#define mmMME_SHADOW_0_B_VALID_ELEMENTS_1                            0xD04D8

#define mmMME_SHADOW_0_B_VALID_ELEMENTS_2                            0xD04DC

#define mmMME_SHADOW_0_B_VALID_ELEMENTS_3                            0xD04E0

#define mmMME_SHADOW_0_B_VALID_ELEMENTS_4                            0xD04E4
/* MME_SHADOW_0_B_VALID_ELEMENTS */
#define MME_SHADOW_0_B_VALID_ELEMENTS_V_SHIFT                        0
#define MME_SHADOW_0_B_VALID_ELEMENTS_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_0_B_LOOP_STRIDE_0                               0xD04E8

#define mmMME_SHADOW_0_B_LOOP_STRIDE_1                               0xD04EC

#define mmMME_SHADOW_0_B_LOOP_STRIDE_2                               0xD04F0

#define mmMME_SHADOW_0_B_LOOP_STRIDE_3                               0xD04F4

#define mmMME_SHADOW_0_B_LOOP_STRIDE_4                               0xD04F8
/* MME_SHADOW_0_B_LOOP_STRIDE */
#define MME_SHADOW_0_B_LOOP_STRIDE_V_SHIFT                           0
#define MME_SHADOW_0_B_LOOP_STRIDE_V_MASK                            0xFFFFFFFF

#define mmMME_SHADOW_0_B_ROI_SIZE_0                                  0xD04FC

#define mmMME_SHADOW_0_B_ROI_SIZE_1                                  0xD0500

#define mmMME_SHADOW_0_B_ROI_SIZE_2                                  0xD0504

#define mmMME_SHADOW_0_B_ROI_SIZE_3                                  0xD0508
/* MME_SHADOW_0_B_ROI_SIZE */
#define MME_SHADOW_0_B_ROI_SIZE_V_SHIFT                              0
#define MME_SHADOW_0_B_ROI_SIZE_V_MASK                               0xFFFFFFFF

#define mmMME_SHADOW_0_B_SPATIAL_START_OFFSET_0                      0xD050C

#define mmMME_SHADOW_0_B_SPATIAL_START_OFFSET_1                      0xD0510

#define mmMME_SHADOW_0_B_SPATIAL_START_OFFSET_2                      0xD0514

#define mmMME_SHADOW_0_B_SPATIAL_START_OFFSET_3                      0xD0518
/* MME_SHADOW_0_B_SPATIAL_START_OFFSET */
#define MME_SHADOW_0_B_SPATIAL_START_OFFSET_V_SHIFT                  0
#define MME_SHADOW_0_B_SPATIAL_START_OFFSET_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_0_B_SPATIAL_STRIDE_0                            0xD051C

#define mmMME_SHADOW_0_B_SPATIAL_STRIDE_1                            0xD0520

#define mmMME_SHADOW_0_B_SPATIAL_STRIDE_2                            0xD0524

#define mmMME_SHADOW_0_B_SPATIAL_STRIDE_3                            0xD0528
/* MME_SHADOW_0_B_SPATIAL_STRIDE */
#define MME_SHADOW_0_B_SPATIAL_STRIDE_V_SHIFT                        0
#define MME_SHADOW_0_B_SPATIAL_STRIDE_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_0_B_SPATIAL_SIZE_MINUS_1                        0xD052C
/* MME_SHADOW_0_B_SPATIAL_SIZE_MINUS_1 */
#define MME_SHADOW_0_B_SPATIAL_SIZE_MINUS_1_V_SHIFT                  0
#define MME_SHADOW_0_B_SPATIAL_SIZE_MINUS_1_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_0_C_ROI_BASE_OFFSET_0                           0xD0530

#define mmMME_SHADOW_0_C_ROI_BASE_OFFSET_1                           0xD0534

#define mmMME_SHADOW_0_C_ROI_BASE_OFFSET_2                           0xD0538

#define mmMME_SHADOW_0_C_ROI_BASE_OFFSET_3                           0xD053C

#define mmMME_SHADOW_0_C_ROI_BASE_OFFSET_4                           0xD0540
/* MME_SHADOW_0_C_ROI_BASE_OFFSET */
#define MME_SHADOW_0_C_ROI_BASE_OFFSET_V_SHIFT                       0
#define MME_SHADOW_0_C_ROI_BASE_OFFSET_V_MASK                        0xFFFFFFFF

#define mmMME_SHADOW_0_C_VALID_ELEMENTS_0                            0xD0544

#define mmMME_SHADOW_0_C_VALID_ELEMENTS_1                            0xD0548

#define mmMME_SHADOW_0_C_VALID_ELEMENTS_2                            0xD054C

#define mmMME_SHADOW_0_C_VALID_ELEMENTS_3                            0xD0550

#define mmMME_SHADOW_0_C_VALID_ELEMENTS_4                            0xD0554
/* MME_SHADOW_0_C_VALID_ELEMENTS */
#define MME_SHADOW_0_C_VALID_ELEMENTS_V_SHIFT                        0
#define MME_SHADOW_0_C_VALID_ELEMENTS_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_0_C_LOOP_STRIDE_0                               0xD0558

#define mmMME_SHADOW_0_C_LOOP_STRIDE_1                               0xD055C

#define mmMME_SHADOW_0_C_LOOP_STRIDE_2                               0xD0560

#define mmMME_SHADOW_0_C_LOOP_STRIDE_3                               0xD0564

#define mmMME_SHADOW_0_C_LOOP_STRIDE_4                               0xD0568
/* MME_SHADOW_0_C_LOOP_STRIDE */
#define MME_SHADOW_0_C_LOOP_STRIDE_V_SHIFT                           0
#define MME_SHADOW_0_C_LOOP_STRIDE_V_MASK                            0xFFFFFFFF

#define mmMME_SHADOW_0_C_ROI_SIZE_0                                  0xD056C

#define mmMME_SHADOW_0_C_ROI_SIZE_1                                  0xD0570

#define mmMME_SHADOW_0_C_ROI_SIZE_2                                  0xD0574

#define mmMME_SHADOW_0_C_ROI_SIZE_3                                  0xD0578
/* MME_SHADOW_0_C_ROI_SIZE */
#define MME_SHADOW_0_C_ROI_SIZE_V_SHIFT                              0
#define MME_SHADOW_0_C_ROI_SIZE_V_MASK                               0xFFFFFFFF

#define mmMME_SHADOW_0_C_SPATIAL_START_OFFSET_0                      0xD057C

#define mmMME_SHADOW_0_C_SPATIAL_START_OFFSET_1                      0xD0580

#define mmMME_SHADOW_0_C_SPATIAL_START_OFFSET_2                      0xD0584

#define mmMME_SHADOW_0_C_SPATIAL_START_OFFSET_3                      0xD0588
/* MME_SHADOW_0_C_SPATIAL_START_OFFSET */
#define MME_SHADOW_0_C_SPATIAL_START_OFFSET_V_SHIFT                  0
#define MME_SHADOW_0_C_SPATIAL_START_OFFSET_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_0_C_SPATIAL_STRIDE_0                            0xD058C

#define mmMME_SHADOW_0_C_SPATIAL_STRIDE_1                            0xD0590

#define mmMME_SHADOW_0_C_SPATIAL_STRIDE_2                            0xD0594

#define mmMME_SHADOW_0_C_SPATIAL_STRIDE_3                            0xD0598
/* MME_SHADOW_0_C_SPATIAL_STRIDE */
#define MME_SHADOW_0_C_SPATIAL_STRIDE_V_SHIFT                        0
#define MME_SHADOW_0_C_SPATIAL_STRIDE_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_0_C_SPATIAL_SIZE_MINUS_1                        0xD059C
/* MME_SHADOW_0_C_SPATIAL_SIZE_MINUS_1 */
#define MME_SHADOW_0_C_SPATIAL_SIZE_MINUS_1_V_SHIFT                  0
#define MME_SHADOW_0_C_SPATIAL_SIZE_MINUS_1_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_0_SYNC_OBJECT_MESSAGE                           0xD05A0
/* MME_SHADOW_0_SYNC_OBJECT_MESSAGE */
#define MME_SHADOW_0_SYNC_OBJECT_MESSAGE_SO_WRITE_VALUE_SHIFT        0
#define MME_SHADOW_0_SYNC_OBJECT_MESSAGE_SO_WRITE_VALUE_MASK         0xFFFF
#define MME_SHADOW_0_SYNC_OBJECT_MESSAGE_SO_ADDRESS_OFFSET_SHIFT     16
#define MME_SHADOW_0_SYNC_OBJECT_MESSAGE_SO_ADDRESS_OFFSET_MASK      0x7FFF0000
#define MME_SHADOW_0_SYNC_OBJECT_MESSAGE_SO_OPERATION_SHIFT          31
#define MME_SHADOW_0_SYNC_OBJECT_MESSAGE_SO_OPERATION_MASK           0x80000000

#define mmMME_SHADOW_0_E_PADDING_VALUE_A                             0xD05A4
/* MME_SHADOW_0_E_PADDING_VALUE_A */
#define MME_SHADOW_0_E_PADDING_VALUE_A_V_SHIFT                       0
#define MME_SHADOW_0_E_PADDING_VALUE_A_V_MASK                        0xFFFF

#define mmMME_SHADOW_0_E_NUM_ITERATION_MINUS_1                       0xD05A8
/* MME_SHADOW_0_E_NUM_ITERATION_MINUS_1 */
#define MME_SHADOW_0_E_NUM_ITERATION_MINUS_1_V_SHIFT                 0
#define MME_SHADOW_0_E_NUM_ITERATION_MINUS_1_V_MASK                  0xFFFFFFFF

#define mmMME_SHADOW_0_E_BUBBLES_PER_SPLIT                           0xD05AC
/* MME_SHADOW_0_E_BUBBLES_PER_SPLIT */
#define MME_SHADOW_0_E_BUBBLES_PER_SPLIT_A_SHIFT                     0
#define MME_SHADOW_0_E_BUBBLES_PER_SPLIT_A_MASK                      0xFF
#define MME_SHADOW_0_E_BUBBLES_PER_SPLIT_B_SHIFT                     8
#define MME_SHADOW_0_E_BUBBLES_PER_SPLIT_B_MASK                      0xFF00
#define MME_SHADOW_0_E_BUBBLES_PER_SPLIT_CIN_SHIFT                   16
#define MME_SHADOW_0_E_BUBBLES_PER_SPLIT_CIN_MASK                    0xFF0000
#define MME_SHADOW_0_E_BUBBLES_PER_SPLIT_ID_SHIFT                    24
#define MME_SHADOW_0_E_BUBBLES_PER_SPLIT_ID_MASK                     0xFF000000

#define mmMME_SHADOW_1_STATUS                                        0xD0600
/* MME_SHADOW_1_STATUS */
#define MME_SHADOW_1_STATUS_A_SHIFT                                  0
#define MME_SHADOW_1_STATUS_A_MASK                                   0x1
#define MME_SHADOW_1_STATUS_B_SHIFT                                  1
#define MME_SHADOW_1_STATUS_B_MASK                                   0x2
#define MME_SHADOW_1_STATUS_CIN_SHIFT                                2
#define MME_SHADOW_1_STATUS_CIN_MASK                                 0x4
#define MME_SHADOW_1_STATUS_COUT_SHIFT                               3
#define MME_SHADOW_1_STATUS_COUT_MASK                                0x8
#define MME_SHADOW_1_STATUS_TE_SHIFT                                 4
#define MME_SHADOW_1_STATUS_TE_MASK                                  0x10
#define MME_SHADOW_1_STATUS_LD_SHIFT                                 5
#define MME_SHADOW_1_STATUS_LD_MASK                                  0x20
#define MME_SHADOW_1_STATUS_ST_SHIFT                                 6
#define MME_SHADOW_1_STATUS_ST_MASK                                  0x40

#define mmMME_SHADOW_1_A_BASE_ADDR_HIGH                              0xD0608
/* MME_SHADOW_1_A_BASE_ADDR_HIGH */
#define MME_SHADOW_1_A_BASE_ADDR_HIGH_V_SHIFT                        0
#define MME_SHADOW_1_A_BASE_ADDR_HIGH_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_1_B_BASE_ADDR_HIGH                              0xD060C
/* MME_SHADOW_1_B_BASE_ADDR_HIGH */
#define MME_SHADOW_1_B_BASE_ADDR_HIGH_V_SHIFT                        0
#define MME_SHADOW_1_B_BASE_ADDR_HIGH_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_1_CIN_BASE_ADDR_HIGH                            0xD0610
/* MME_SHADOW_1_CIN_BASE_ADDR_HIGH */
#define MME_SHADOW_1_CIN_BASE_ADDR_HIGH_V_SHIFT                      0
#define MME_SHADOW_1_CIN_BASE_ADDR_HIGH_V_MASK                       0xFFFFFFFF

#define mmMME_SHADOW_1_COUT_BASE_ADDR_HIGH                           0xD0614
/* MME_SHADOW_1_COUT_BASE_ADDR_HIGH */
#define MME_SHADOW_1_COUT_BASE_ADDR_HIGH_V_SHIFT                     0
#define MME_SHADOW_1_COUT_BASE_ADDR_HIGH_V_MASK                      0xFFFFFFFF

#define mmMME_SHADOW_1_BIAS_BASE_ADDR_HIGH                           0xD0618
/* MME_SHADOW_1_BIAS_BASE_ADDR_HIGH */
#define MME_SHADOW_1_BIAS_BASE_ADDR_HIGH_V_SHIFT                     0
#define MME_SHADOW_1_BIAS_BASE_ADDR_HIGH_V_MASK                      0xFFFFFFFF

#define mmMME_SHADOW_1_A_BASE_ADDR_LOW                               0xD061C
/* MME_SHADOW_1_A_BASE_ADDR_LOW */
#define MME_SHADOW_1_A_BASE_ADDR_LOW_V_SHIFT                         0
#define MME_SHADOW_1_A_BASE_ADDR_LOW_V_MASK                          0xFFFFFFFF

#define mmMME_SHADOW_1_B_BASE_ADDR_LOW                               0xD0620
/* MME_SHADOW_1_B_BASE_ADDR_LOW */
#define MME_SHADOW_1_B_BASE_ADDR_LOW_V_SHIFT                         0
#define MME_SHADOW_1_B_BASE_ADDR_LOW_V_MASK                          0xFFFFFFFF

#define mmMME_SHADOW_1_CIN_BASE_ADDR_LOW                             0xD0624
/* MME_SHADOW_1_CIN_BASE_ADDR_LOW */
#define MME_SHADOW_1_CIN_BASE_ADDR_LOW_V_SHIFT                       0
#define MME_SHADOW_1_CIN_BASE_ADDR_LOW_V_MASK                        0xFFFFFFFF

#define mmMME_SHADOW_1_COUT_BASE_ADDR_LOW                            0xD0628
/* MME_SHADOW_1_COUT_BASE_ADDR_LOW */
#define MME_SHADOW_1_COUT_BASE_ADDR_LOW_V_SHIFT                      0
#define MME_SHADOW_1_COUT_BASE_ADDR_LOW_V_MASK                       0xFFFFFFFF

#define mmMME_SHADOW_1_BIAS_BASE_ADDR_LOW                            0xD062C
/* MME_SHADOW_1_BIAS_BASE_ADDR_LOW */
#define MME_SHADOW_1_BIAS_BASE_ADDR_LOW_V_SHIFT                      0
#define MME_SHADOW_1_BIAS_BASE_ADDR_LOW_V_MASK                       0xFFFFFFFF

#define mmMME_SHADOW_1_HEADER                                        0xD0630
/* MME_SHADOW_1_HEADER */
#define MME_SHADOW_1_HEADER_SIGNAL_MASK_SHIFT                        0
#define MME_SHADOW_1_HEADER_SIGNAL_MASK_MASK                         0x1F
#define MME_SHADOW_1_HEADER_SIGNAL_EN_SHIFT                          5
#define MME_SHADOW_1_HEADER_SIGNAL_EN_MASK                           0x20
#define MME_SHADOW_1_HEADER_TRANS_A_SHIFT                            6
#define MME_SHADOW_1_HEADER_TRANS_A_MASK                             0x40
#define MME_SHADOW_1_HEADER_LOWER_A_SHIFT                            7
#define MME_SHADOW_1_HEADER_LOWER_A_MASK                             0x80
#define MME_SHADOW_1_HEADER_ACCUM_MASK_SHIFT                         8
#define MME_SHADOW_1_HEADER_ACCUM_MASK_MASK                          0xF00
#define MME_SHADOW_1_HEADER_LOAD_BIAS_SHIFT                          12
#define MME_SHADOW_1_HEADER_LOAD_BIAS_MASK                           0x1000
#define MME_SHADOW_1_HEADER_LOAD_CIN_SHIFT                           13
#define MME_SHADOW_1_HEADER_LOAD_CIN_MASK                            0x2000
#define MME_SHADOW_1_HEADER_STORE_OUT_SHIFT                          15
#define MME_SHADOW_1_HEADER_STORE_OUT_MASK                           0x8000
#define MME_SHADOW_1_HEADER_ACC_LD_INC_DISABLE_SHIFT                 16
#define MME_SHADOW_1_HEADER_ACC_LD_INC_DISABLE_MASK                  0x10000
#define MME_SHADOW_1_HEADER_ADVANCE_A_SHIFT                          17
#define MME_SHADOW_1_HEADER_ADVANCE_A_MASK                           0x20000
#define MME_SHADOW_1_HEADER_ADVANCE_B_SHIFT                          18
#define MME_SHADOW_1_HEADER_ADVANCE_B_MASK                           0x40000
#define MME_SHADOW_1_HEADER_ADVANCE_CIN_SHIFT                        19
#define MME_SHADOW_1_HEADER_ADVANCE_CIN_MASK                         0x80000
#define MME_SHADOW_1_HEADER_ADVANCE_COUT_SHIFT                       20
#define MME_SHADOW_1_HEADER_ADVANCE_COUT_MASK                        0x100000
#define MME_SHADOW_1_HEADER_COMPRESSED_B_SHIFT                       21
#define MME_SHADOW_1_HEADER_COMPRESSED_B_MASK                        0x200000
#define MME_SHADOW_1_HEADER_MASK_CONV_END_SHIFT                      22
#define MME_SHADOW_1_HEADER_MASK_CONV_END_MASK                       0x400000
#define MME_SHADOW_1_HEADER_ACC_ST_INC_DISABLE_SHIFT                 23
#define MME_SHADOW_1_HEADER_ACC_ST_INC_DISABLE_MASK                  0x800000
#define MME_SHADOW_1_HEADER_AB_DATA_TYPE_SHIFT                       24
#define MME_SHADOW_1_HEADER_AB_DATA_TYPE_MASK                        0x3000000
#define MME_SHADOW_1_HEADER_CIN_DATA_TYPE_SHIFT                      26
#define MME_SHADOW_1_HEADER_CIN_DATA_TYPE_MASK                       0x1C000000
#define MME_SHADOW_1_HEADER_COUT_DATA_TYPE_SHIFT                     29
#define MME_SHADOW_1_HEADER_COUT_DATA_TYPE_MASK                      0xE0000000

#define mmMME_SHADOW_1_KERNEL_SIZE_MINUS_1                           0xD0634
/* MME_SHADOW_1_KERNEL_SIZE_MINUS_1 */
#define MME_SHADOW_1_KERNEL_SIZE_MINUS_1_DIM_0_SHIFT                 0
#define MME_SHADOW_1_KERNEL_SIZE_MINUS_1_DIM_0_MASK                  0xFF
#define MME_SHADOW_1_KERNEL_SIZE_MINUS_1_DIM_1_SHIFT                 8
#define MME_SHADOW_1_KERNEL_SIZE_MINUS_1_DIM_1_MASK                  0xFF00
#define MME_SHADOW_1_KERNEL_SIZE_MINUS_1_DIM_2_SHIFT                 16
#define MME_SHADOW_1_KERNEL_SIZE_MINUS_1_DIM_2_MASK                  0xFF0000
#define MME_SHADOW_1_KERNEL_SIZE_MINUS_1_DIM_3_SHIFT                 24
#define MME_SHADOW_1_KERNEL_SIZE_MINUS_1_DIM_3_MASK                  0xFF000000

#define mmMME_SHADOW_1_ASSOCIATED_DIMS_0                             0xD0638

#define mmMME_SHADOW_1_ASSOCIATED_DIMS_1                             0xD063C
/* MME_SHADOW_1_ASSOCIATED_DIMS */
#define MME_SHADOW_1_ASSOCIATED_DIMS_A_0_SHIFT                       0
#define MME_SHADOW_1_ASSOCIATED_DIMS_A_0_MASK                        0x7
#define MME_SHADOW_1_ASSOCIATED_DIMS_B_0_SHIFT                       3
#define MME_SHADOW_1_ASSOCIATED_DIMS_B_0_MASK                        0x38
#define MME_SHADOW_1_ASSOCIATED_DIMS_CIN_0_SHIFT                     6
#define MME_SHADOW_1_ASSOCIATED_DIMS_CIN_0_MASK                      0x1C0
#define MME_SHADOW_1_ASSOCIATED_DIMS_COUT_0_SHIFT                    9
#define MME_SHADOW_1_ASSOCIATED_DIMS_COUT_0_MASK                     0xE00
#define MME_SHADOW_1_ASSOCIATED_DIMS_A_1_SHIFT                       16
#define MME_SHADOW_1_ASSOCIATED_DIMS_A_1_MASK                        0x70000
#define MME_SHADOW_1_ASSOCIATED_DIMS_B_1_SHIFT                       19
#define MME_SHADOW_1_ASSOCIATED_DIMS_B_1_MASK                        0x380000
#define MME_SHADOW_1_ASSOCIATED_DIMS_CIN_1_SHIFT                     22
#define MME_SHADOW_1_ASSOCIATED_DIMS_CIN_1_MASK                      0x1C00000
#define MME_SHADOW_1_ASSOCIATED_DIMS_COUT_1_SHIFT                    25
#define MME_SHADOW_1_ASSOCIATED_DIMS_COUT_1_MASK                     0xE000000

#define mmMME_SHADOW_1_COUT_SCALE                                    0xD0640
/* MME_SHADOW_1_COUT_SCALE */
#define MME_SHADOW_1_COUT_SCALE_V_SHIFT                              0
#define MME_SHADOW_1_COUT_SCALE_V_MASK                               0xFFFFFFFF

#define mmMME_SHADOW_1_CIN_SCALE                                     0xD0644
/* MME_SHADOW_1_CIN_SCALE */
#define MME_SHADOW_1_CIN_SCALE_V_SHIFT                               0
#define MME_SHADOW_1_CIN_SCALE_V_MASK                                0xFFFFFFFF

#define mmMME_SHADOW_1_GEMMLOWP_ZP                                   0xD0648
/* MME_SHADOW_1_GEMMLOWP_ZP */
#define MME_SHADOW_1_GEMMLOWP_ZP_ZP_CIN_SHIFT                        0
#define MME_SHADOW_1_GEMMLOWP_ZP_ZP_CIN_MASK                         0x1FF
#define MME_SHADOW_1_GEMMLOWP_ZP_ZP_COUT_SHIFT                       9
#define MME_SHADOW_1_GEMMLOWP_ZP_ZP_COUT_MASK                        0x3FE00
#define MME_SHADOW_1_GEMMLOWP_ZP_ZP_B_SHIFT                          18
#define MME_SHADOW_1_GEMMLOWP_ZP_ZP_B_MASK                           0x7FC0000
#define MME_SHADOW_1_GEMMLOWP_ZP_GEMMLOWP_EU_EN_SHIFT                27
#define MME_SHADOW_1_GEMMLOWP_ZP_GEMMLOWP_EU_EN_MASK                 0x8000000
#define MME_SHADOW_1_GEMMLOWP_ZP_ACCUM_SHIFT                         28
#define MME_SHADOW_1_GEMMLOWP_ZP_ACCUM_MASK                          0x10000000
#define MME_SHADOW_1_GEMMLOWP_ZP_ACCUM_BIAS_SHIFT                    29
#define MME_SHADOW_1_GEMMLOWP_ZP_ACCUM_BIAS_MASK                     0x20000000
#define MME_SHADOW_1_GEMMLOWP_ZP_RELU_EN_SHIFT                       30
#define MME_SHADOW_1_GEMMLOWP_ZP_RELU_EN_MASK                        0x40000000

#define mmMME_SHADOW_1_GEMMLOWP_EXPONENT                             0xD064C
/* MME_SHADOW_1_GEMMLOWP_EXPONENT */
#define MME_SHADOW_1_GEMMLOWP_EXPONENT_EXPONENT_CIN_SHIFT            0
#define MME_SHADOW_1_GEMMLOWP_EXPONENT_EXPONENT_CIN_MASK             0x3F
#define MME_SHADOW_1_GEMMLOWP_EXPONENT_EXPONENT_COUT_SHIFT           8
#define MME_SHADOW_1_GEMMLOWP_EXPONENT_EXPONENT_COUT_MASK            0x3F00
#define MME_SHADOW_1_GEMMLOWP_EXPONENT_MUL_CIN_EN_SHIFT              16
#define MME_SHADOW_1_GEMMLOWP_EXPONENT_MUL_CIN_EN_MASK               0x10000
#define MME_SHADOW_1_GEMMLOWP_EXPONENT_MUL_COUT_EN_SHIFT             17
#define MME_SHADOW_1_GEMMLOWP_EXPONENT_MUL_COUT_EN_MASK              0x20000

#define mmMME_SHADOW_1_A_ROI_BASE_OFFSET_0                           0xD0650

#define mmMME_SHADOW_1_A_ROI_BASE_OFFSET_1                           0xD0654

#define mmMME_SHADOW_1_A_ROI_BASE_OFFSET_2                           0xD0658

#define mmMME_SHADOW_1_A_ROI_BASE_OFFSET_3                           0xD065C

#define mmMME_SHADOW_1_A_ROI_BASE_OFFSET_4                           0xD0660
/* MME_SHADOW_1_A_ROI_BASE_OFFSET */
#define MME_SHADOW_1_A_ROI_BASE_OFFSET_V_SHIFT                       0
#define MME_SHADOW_1_A_ROI_BASE_OFFSET_V_MASK                        0xFFFFFFFF

#define mmMME_SHADOW_1_A_VALID_ELEMENTS_0                            0xD0664

#define mmMME_SHADOW_1_A_VALID_ELEMENTS_1                            0xD0668

#define mmMME_SHADOW_1_A_VALID_ELEMENTS_2                            0xD066C

#define mmMME_SHADOW_1_A_VALID_ELEMENTS_3                            0xD0670

#define mmMME_SHADOW_1_A_VALID_ELEMENTS_4                            0xD0674
/* MME_SHADOW_1_A_VALID_ELEMENTS */
#define MME_SHADOW_1_A_VALID_ELEMENTS_V_SHIFT                        0
#define MME_SHADOW_1_A_VALID_ELEMENTS_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_1_A_LOOP_STRIDE_0                               0xD0678

#define mmMME_SHADOW_1_A_LOOP_STRIDE_1                               0xD067C

#define mmMME_SHADOW_1_A_LOOP_STRIDE_2                               0xD0680

#define mmMME_SHADOW_1_A_LOOP_STRIDE_3                               0xD0684

#define mmMME_SHADOW_1_A_LOOP_STRIDE_4                               0xD0688
/* MME_SHADOW_1_A_LOOP_STRIDE */
#define MME_SHADOW_1_A_LOOP_STRIDE_V_SHIFT                           0
#define MME_SHADOW_1_A_LOOP_STRIDE_V_MASK                            0xFFFFFFFF

#define mmMME_SHADOW_1_A_ROI_SIZE_0                                  0xD068C

#define mmMME_SHADOW_1_A_ROI_SIZE_1                                  0xD0690

#define mmMME_SHADOW_1_A_ROI_SIZE_2                                  0xD0694

#define mmMME_SHADOW_1_A_ROI_SIZE_3                                  0xD0698
/* MME_SHADOW_1_A_ROI_SIZE */
#define MME_SHADOW_1_A_ROI_SIZE_V_SHIFT                              0
#define MME_SHADOW_1_A_ROI_SIZE_V_MASK                               0xFFFFFFFF

#define mmMME_SHADOW_1_A_SPATIAL_START_OFFSET_0                      0xD069C

#define mmMME_SHADOW_1_A_SPATIAL_START_OFFSET_1                      0xD06A0

#define mmMME_SHADOW_1_A_SPATIAL_START_OFFSET_2                      0xD06A4

#define mmMME_SHADOW_1_A_SPATIAL_START_OFFSET_3                      0xD06A8
/* MME_SHADOW_1_A_SPATIAL_START_OFFSET */
#define MME_SHADOW_1_A_SPATIAL_START_OFFSET_V_SHIFT                  0
#define MME_SHADOW_1_A_SPATIAL_START_OFFSET_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_1_A_SPATIAL_STRIDE_0                            0xD06AC

#define mmMME_SHADOW_1_A_SPATIAL_STRIDE_1                            0xD06B0

#define mmMME_SHADOW_1_A_SPATIAL_STRIDE_2                            0xD06B4

#define mmMME_SHADOW_1_A_SPATIAL_STRIDE_3                            0xD06B8
/* MME_SHADOW_1_A_SPATIAL_STRIDE */
#define MME_SHADOW_1_A_SPATIAL_STRIDE_V_SHIFT                        0
#define MME_SHADOW_1_A_SPATIAL_STRIDE_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_1_A_SPATIAL_SIZE_MINUS_1                        0xD06BC
/* MME_SHADOW_1_A_SPATIAL_SIZE_MINUS_1 */
#define MME_SHADOW_1_A_SPATIAL_SIZE_MINUS_1_V_SHIFT                  0
#define MME_SHADOW_1_A_SPATIAL_SIZE_MINUS_1_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_1_B_ROI_BASE_OFFSET_0                           0xD06C0

#define mmMME_SHADOW_1_B_ROI_BASE_OFFSET_1                           0xD06C4

#define mmMME_SHADOW_1_B_ROI_BASE_OFFSET_2                           0xD06C8

#define mmMME_SHADOW_1_B_ROI_BASE_OFFSET_3                           0xD06CC

#define mmMME_SHADOW_1_B_ROI_BASE_OFFSET_4                           0xD06D0
/* MME_SHADOW_1_B_ROI_BASE_OFFSET */
#define MME_SHADOW_1_B_ROI_BASE_OFFSET_V_SHIFT                       0
#define MME_SHADOW_1_B_ROI_BASE_OFFSET_V_MASK                        0xFFFFFFFF

#define mmMME_SHADOW_1_B_VALID_ELEMENTS_0                            0xD06D4

#define mmMME_SHADOW_1_B_VALID_ELEMENTS_1                            0xD06D8

#define mmMME_SHADOW_1_B_VALID_ELEMENTS_2                            0xD06DC

#define mmMME_SHADOW_1_B_VALID_ELEMENTS_3                            0xD06E0

#define mmMME_SHADOW_1_B_VALID_ELEMENTS_4                            0xD06E4
/* MME_SHADOW_1_B_VALID_ELEMENTS */
#define MME_SHADOW_1_B_VALID_ELEMENTS_V_SHIFT                        0
#define MME_SHADOW_1_B_VALID_ELEMENTS_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_1_B_LOOP_STRIDE_0                               0xD06E8

#define mmMME_SHADOW_1_B_LOOP_STRIDE_1                               0xD06EC

#define mmMME_SHADOW_1_B_LOOP_STRIDE_2                               0xD06F0

#define mmMME_SHADOW_1_B_LOOP_STRIDE_3                               0xD06F4

#define mmMME_SHADOW_1_B_LOOP_STRIDE_4                               0xD06F8
/* MME_SHADOW_1_B_LOOP_STRIDE */
#define MME_SHADOW_1_B_LOOP_STRIDE_V_SHIFT                           0
#define MME_SHADOW_1_B_LOOP_STRIDE_V_MASK                            0xFFFFFFFF

#define mmMME_SHADOW_1_B_ROI_SIZE_0                                  0xD06FC

#define mmMME_SHADOW_1_B_ROI_SIZE_1                                  0xD0700

#define mmMME_SHADOW_1_B_ROI_SIZE_2                                  0xD0704

#define mmMME_SHADOW_1_B_ROI_SIZE_3                                  0xD0708
/* MME_SHADOW_1_B_ROI_SIZE */
#define MME_SHADOW_1_B_ROI_SIZE_V_SHIFT                              0
#define MME_SHADOW_1_B_ROI_SIZE_V_MASK                               0xFFFFFFFF

#define mmMME_SHADOW_1_B_SPATIAL_START_OFFSET_0                      0xD070C

#define mmMME_SHADOW_1_B_SPATIAL_START_OFFSET_1                      0xD0710

#define mmMME_SHADOW_1_B_SPATIAL_START_OFFSET_2                      0xD0714

#define mmMME_SHADOW_1_B_SPATIAL_START_OFFSET_3                      0xD0718
/* MME_SHADOW_1_B_SPATIAL_START_OFFSET */
#define MME_SHADOW_1_B_SPATIAL_START_OFFSET_V_SHIFT                  0
#define MME_SHADOW_1_B_SPATIAL_START_OFFSET_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_1_B_SPATIAL_STRIDE_0                            0xD071C

#define mmMME_SHADOW_1_B_SPATIAL_STRIDE_1                            0xD0720

#define mmMME_SHADOW_1_B_SPATIAL_STRIDE_2                            0xD0724

#define mmMME_SHADOW_1_B_SPATIAL_STRIDE_3                            0xD0728
/* MME_SHADOW_1_B_SPATIAL_STRIDE */
#define MME_SHADOW_1_B_SPATIAL_STRIDE_V_SHIFT                        0
#define MME_SHADOW_1_B_SPATIAL_STRIDE_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_1_B_SPATIAL_SIZE_MINUS_1                        0xD072C
/* MME_SHADOW_1_B_SPATIAL_SIZE_MINUS_1 */
#define MME_SHADOW_1_B_SPATIAL_SIZE_MINUS_1_V_SHIFT                  0
#define MME_SHADOW_1_B_SPATIAL_SIZE_MINUS_1_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_1_C_ROI_BASE_OFFSET_0                           0xD0730

#define mmMME_SHADOW_1_C_ROI_BASE_OFFSET_1                           0xD0734

#define mmMME_SHADOW_1_C_ROI_BASE_OFFSET_2                           0xD0738

#define mmMME_SHADOW_1_C_ROI_BASE_OFFSET_3                           0xD073C

#define mmMME_SHADOW_1_C_ROI_BASE_OFFSET_4                           0xD0740
/* MME_SHADOW_1_C_ROI_BASE_OFFSET */
#define MME_SHADOW_1_C_ROI_BASE_OFFSET_V_SHIFT                       0
#define MME_SHADOW_1_C_ROI_BASE_OFFSET_V_MASK                        0xFFFFFFFF

#define mmMME_SHADOW_1_C_VALID_ELEMENTS_0                            0xD0744

#define mmMME_SHADOW_1_C_VALID_ELEMENTS_1                            0xD0748

#define mmMME_SHADOW_1_C_VALID_ELEMENTS_2                            0xD074C

#define mmMME_SHADOW_1_C_VALID_ELEMENTS_3                            0xD0750

#define mmMME_SHADOW_1_C_VALID_ELEMENTS_4                            0xD0754
/* MME_SHADOW_1_C_VALID_ELEMENTS */
#define MME_SHADOW_1_C_VALID_ELEMENTS_V_SHIFT                        0
#define MME_SHADOW_1_C_VALID_ELEMENTS_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_1_C_LOOP_STRIDE_0                               0xD0758

#define mmMME_SHADOW_1_C_LOOP_STRIDE_1                               0xD075C

#define mmMME_SHADOW_1_C_LOOP_STRIDE_2                               0xD0760

#define mmMME_SHADOW_1_C_LOOP_STRIDE_3                               0xD0764

#define mmMME_SHADOW_1_C_LOOP_STRIDE_4                               0xD0768
/* MME_SHADOW_1_C_LOOP_STRIDE */
#define MME_SHADOW_1_C_LOOP_STRIDE_V_SHIFT                           0
#define MME_SHADOW_1_C_LOOP_STRIDE_V_MASK                            0xFFFFFFFF

#define mmMME_SHADOW_1_C_ROI_SIZE_0                                  0xD076C

#define mmMME_SHADOW_1_C_ROI_SIZE_1                                  0xD0770

#define mmMME_SHADOW_1_C_ROI_SIZE_2                                  0xD0774

#define mmMME_SHADOW_1_C_ROI_SIZE_3                                  0xD0778
/* MME_SHADOW_1_C_ROI_SIZE */
#define MME_SHADOW_1_C_ROI_SIZE_V_SHIFT                              0
#define MME_SHADOW_1_C_ROI_SIZE_V_MASK                               0xFFFFFFFF

#define mmMME_SHADOW_1_C_SPATIAL_START_OFFSET_0                      0xD077C

#define mmMME_SHADOW_1_C_SPATIAL_START_OFFSET_1                      0xD0780

#define mmMME_SHADOW_1_C_SPATIAL_START_OFFSET_2                      0xD0784

#define mmMME_SHADOW_1_C_SPATIAL_START_OFFSET_3                      0xD0788
/* MME_SHADOW_1_C_SPATIAL_START_OFFSET */
#define MME_SHADOW_1_C_SPATIAL_START_OFFSET_V_SHIFT                  0
#define MME_SHADOW_1_C_SPATIAL_START_OFFSET_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_1_C_SPATIAL_STRIDE_0                            0xD078C

#define mmMME_SHADOW_1_C_SPATIAL_STRIDE_1                            0xD0790

#define mmMME_SHADOW_1_C_SPATIAL_STRIDE_2                            0xD0794

#define mmMME_SHADOW_1_C_SPATIAL_STRIDE_3                            0xD0798
/* MME_SHADOW_1_C_SPATIAL_STRIDE */
#define MME_SHADOW_1_C_SPATIAL_STRIDE_V_SHIFT                        0
#define MME_SHADOW_1_C_SPATIAL_STRIDE_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_1_C_SPATIAL_SIZE_MINUS_1                        0xD079C
/* MME_SHADOW_1_C_SPATIAL_SIZE_MINUS_1 */
#define MME_SHADOW_1_C_SPATIAL_SIZE_MINUS_1_V_SHIFT                  0
#define MME_SHADOW_1_C_SPATIAL_SIZE_MINUS_1_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_1_SYNC_OBJECT_MESSAGE                           0xD07A0
/* MME_SHADOW_1_SYNC_OBJECT_MESSAGE */
#define MME_SHADOW_1_SYNC_OBJECT_MESSAGE_SO_WRITE_VALUE_SHIFT        0
#define MME_SHADOW_1_SYNC_OBJECT_MESSAGE_SO_WRITE_VALUE_MASK         0xFFFF
#define MME_SHADOW_1_SYNC_OBJECT_MESSAGE_SO_ADDRESS_OFFSET_SHIFT     16
#define MME_SHADOW_1_SYNC_OBJECT_MESSAGE_SO_ADDRESS_OFFSET_MASK      0x7FFF0000
#define MME_SHADOW_1_SYNC_OBJECT_MESSAGE_SO_OPERATION_SHIFT          31
#define MME_SHADOW_1_SYNC_OBJECT_MESSAGE_SO_OPERATION_MASK           0x80000000

#define mmMME_SHADOW_1_E_PADDING_VALUE_A                             0xD07A4
/* MME_SHADOW_1_E_PADDING_VALUE_A */
#define MME_SHADOW_1_E_PADDING_VALUE_A_V_SHIFT                       0
#define MME_SHADOW_1_E_PADDING_VALUE_A_V_MASK                        0xFFFF

#define mmMME_SHADOW_1_E_NUM_ITERATION_MINUS_1                       0xD07A8
/* MME_SHADOW_1_E_NUM_ITERATION_MINUS_1 */
#define MME_SHADOW_1_E_NUM_ITERATION_MINUS_1_V_SHIFT                 0
#define MME_SHADOW_1_E_NUM_ITERATION_MINUS_1_V_MASK                  0xFFFFFFFF

#define mmMME_SHADOW_1_E_BUBBLES_PER_SPLIT                           0xD07AC
/* MME_SHADOW_1_E_BUBBLES_PER_SPLIT */
#define MME_SHADOW_1_E_BUBBLES_PER_SPLIT_A_SHIFT                     0
#define MME_SHADOW_1_E_BUBBLES_PER_SPLIT_A_MASK                      0xFF
#define MME_SHADOW_1_E_BUBBLES_PER_SPLIT_B_SHIFT                     8
#define MME_SHADOW_1_E_BUBBLES_PER_SPLIT_B_MASK                      0xFF00
#define MME_SHADOW_1_E_BUBBLES_PER_SPLIT_CIN_SHIFT                   16
#define MME_SHADOW_1_E_BUBBLES_PER_SPLIT_CIN_MASK                    0xFF0000
#define MME_SHADOW_1_E_BUBBLES_PER_SPLIT_ID_SHIFT                    24
#define MME_SHADOW_1_E_BUBBLES_PER_SPLIT_ID_MASK                     0xFF000000

#define mmMME_SHADOW_2_STATUS                                        0xD0800
/* MME_SHADOW_2_STATUS */
#define MME_SHADOW_2_STATUS_A_SHIFT                                  0
#define MME_SHADOW_2_STATUS_A_MASK                                   0x1
#define MME_SHADOW_2_STATUS_B_SHIFT                                  1
#define MME_SHADOW_2_STATUS_B_MASK                                   0x2
#define MME_SHADOW_2_STATUS_CIN_SHIFT                                2
#define MME_SHADOW_2_STATUS_CIN_MASK                                 0x4
#define MME_SHADOW_2_STATUS_COUT_SHIFT                               3
#define MME_SHADOW_2_STATUS_COUT_MASK                                0x8
#define MME_SHADOW_2_STATUS_TE_SHIFT                                 4
#define MME_SHADOW_2_STATUS_TE_MASK                                  0x10
#define MME_SHADOW_2_STATUS_LD_SHIFT                                 5
#define MME_SHADOW_2_STATUS_LD_MASK                                  0x20
#define MME_SHADOW_2_STATUS_ST_SHIFT                                 6
#define MME_SHADOW_2_STATUS_ST_MASK                                  0x40

#define mmMME_SHADOW_2_A_BASE_ADDR_HIGH                              0xD0808
/* MME_SHADOW_2_A_BASE_ADDR_HIGH */
#define MME_SHADOW_2_A_BASE_ADDR_HIGH_V_SHIFT                        0
#define MME_SHADOW_2_A_BASE_ADDR_HIGH_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_2_B_BASE_ADDR_HIGH                              0xD080C
/* MME_SHADOW_2_B_BASE_ADDR_HIGH */
#define MME_SHADOW_2_B_BASE_ADDR_HIGH_V_SHIFT                        0
#define MME_SHADOW_2_B_BASE_ADDR_HIGH_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_2_CIN_BASE_ADDR_HIGH                            0xD0810
/* MME_SHADOW_2_CIN_BASE_ADDR_HIGH */
#define MME_SHADOW_2_CIN_BASE_ADDR_HIGH_V_SHIFT                      0
#define MME_SHADOW_2_CIN_BASE_ADDR_HIGH_V_MASK                       0xFFFFFFFF

#define mmMME_SHADOW_2_COUT_BASE_ADDR_HIGH                           0xD0814
/* MME_SHADOW_2_COUT_BASE_ADDR_HIGH */
#define MME_SHADOW_2_COUT_BASE_ADDR_HIGH_V_SHIFT                     0
#define MME_SHADOW_2_COUT_BASE_ADDR_HIGH_V_MASK                      0xFFFFFFFF

#define mmMME_SHADOW_2_BIAS_BASE_ADDR_HIGH                           0xD0818
/* MME_SHADOW_2_BIAS_BASE_ADDR_HIGH */
#define MME_SHADOW_2_BIAS_BASE_ADDR_HIGH_V_SHIFT                     0
#define MME_SHADOW_2_BIAS_BASE_ADDR_HIGH_V_MASK                      0xFFFFFFFF

#define mmMME_SHADOW_2_A_BASE_ADDR_LOW                               0xD081C
/* MME_SHADOW_2_A_BASE_ADDR_LOW */
#define MME_SHADOW_2_A_BASE_ADDR_LOW_V_SHIFT                         0
#define MME_SHADOW_2_A_BASE_ADDR_LOW_V_MASK                          0xFFFFFFFF

#define mmMME_SHADOW_2_B_BASE_ADDR_LOW                               0xD0820
/* MME_SHADOW_2_B_BASE_ADDR_LOW */
#define MME_SHADOW_2_B_BASE_ADDR_LOW_V_SHIFT                         0
#define MME_SHADOW_2_B_BASE_ADDR_LOW_V_MASK                          0xFFFFFFFF

#define mmMME_SHADOW_2_CIN_BASE_ADDR_LOW                             0xD0824
/* MME_SHADOW_2_CIN_BASE_ADDR_LOW */
#define MME_SHADOW_2_CIN_BASE_ADDR_LOW_V_SHIFT                       0
#define MME_SHADOW_2_CIN_BASE_ADDR_LOW_V_MASK                        0xFFFFFFFF

#define mmMME_SHADOW_2_COUT_BASE_ADDR_LOW                            0xD0828
/* MME_SHADOW_2_COUT_BASE_ADDR_LOW */
#define MME_SHADOW_2_COUT_BASE_ADDR_LOW_V_SHIFT                      0
#define MME_SHADOW_2_COUT_BASE_ADDR_LOW_V_MASK                       0xFFFFFFFF

#define mmMME_SHADOW_2_BIAS_BASE_ADDR_LOW                            0xD082C
/* MME_SHADOW_2_BIAS_BASE_ADDR_LOW */
#define MME_SHADOW_2_BIAS_BASE_ADDR_LOW_V_SHIFT                      0
#define MME_SHADOW_2_BIAS_BASE_ADDR_LOW_V_MASK                       0xFFFFFFFF

#define mmMME_SHADOW_2_HEADER                                        0xD0830
/* MME_SHADOW_2_HEADER */
#define MME_SHADOW_2_HEADER_SIGNAL_MASK_SHIFT                        0
#define MME_SHADOW_2_HEADER_SIGNAL_MASK_MASK                         0x1F
#define MME_SHADOW_2_HEADER_SIGNAL_EN_SHIFT                          5
#define MME_SHADOW_2_HEADER_SIGNAL_EN_MASK                           0x20
#define MME_SHADOW_2_HEADER_TRANS_A_SHIFT                            6
#define MME_SHADOW_2_HEADER_TRANS_A_MASK                             0x40
#define MME_SHADOW_2_HEADER_LOWER_A_SHIFT                            7
#define MME_SHADOW_2_HEADER_LOWER_A_MASK                             0x80
#define MME_SHADOW_2_HEADER_ACCUM_MASK_SHIFT                         8
#define MME_SHADOW_2_HEADER_ACCUM_MASK_MASK                          0xF00
#define MME_SHADOW_2_HEADER_LOAD_BIAS_SHIFT                          12
#define MME_SHADOW_2_HEADER_LOAD_BIAS_MASK                           0x1000
#define MME_SHADOW_2_HEADER_LOAD_CIN_SHIFT                           13
#define MME_SHADOW_2_HEADER_LOAD_CIN_MASK                            0x2000
#define MME_SHADOW_2_HEADER_STORE_OUT_SHIFT                          15
#define MME_SHADOW_2_HEADER_STORE_OUT_MASK                           0x8000
#define MME_SHADOW_2_HEADER_ACC_LD_INC_DISABLE_SHIFT                 16
#define MME_SHADOW_2_HEADER_ACC_LD_INC_DISABLE_MASK                  0x10000
#define MME_SHADOW_2_HEADER_ADVANCE_A_SHIFT                          17
#define MME_SHADOW_2_HEADER_ADVANCE_A_MASK                           0x20000
#define MME_SHADOW_2_HEADER_ADVANCE_B_SHIFT                          18
#define MME_SHADOW_2_HEADER_ADVANCE_B_MASK                           0x40000
#define MME_SHADOW_2_HEADER_ADVANCE_CIN_SHIFT                        19
#define MME_SHADOW_2_HEADER_ADVANCE_CIN_MASK                         0x80000
#define MME_SHADOW_2_HEADER_ADVANCE_COUT_SHIFT                       20
#define MME_SHADOW_2_HEADER_ADVANCE_COUT_MASK                        0x100000
#define MME_SHADOW_2_HEADER_COMPRESSED_B_SHIFT                       21
#define MME_SHADOW_2_HEADER_COMPRESSED_B_MASK                        0x200000
#define MME_SHADOW_2_HEADER_MASK_CONV_END_SHIFT                      22
#define MME_SHADOW_2_HEADER_MASK_CONV_END_MASK                       0x400000
#define MME_SHADOW_2_HEADER_ACC_ST_INC_DISABLE_SHIFT                 23
#define MME_SHADOW_2_HEADER_ACC_ST_INC_DISABLE_MASK                  0x800000
#define MME_SHADOW_2_HEADER_AB_DATA_TYPE_SHIFT                       24
#define MME_SHADOW_2_HEADER_AB_DATA_TYPE_MASK                        0x3000000
#define MME_SHADOW_2_HEADER_CIN_DATA_TYPE_SHIFT                      26
#define MME_SHADOW_2_HEADER_CIN_DATA_TYPE_MASK                       0x1C000000
#define MME_SHADOW_2_HEADER_COUT_DATA_TYPE_SHIFT                     29
#define MME_SHADOW_2_HEADER_COUT_DATA_TYPE_MASK                      0xE0000000

#define mmMME_SHADOW_2_KERNEL_SIZE_MINUS_1                           0xD0834
/* MME_SHADOW_2_KERNEL_SIZE_MINUS_1 */
#define MME_SHADOW_2_KERNEL_SIZE_MINUS_1_DIM_0_SHIFT                 0
#define MME_SHADOW_2_KERNEL_SIZE_MINUS_1_DIM_0_MASK                  0xFF
#define MME_SHADOW_2_KERNEL_SIZE_MINUS_1_DIM_1_SHIFT                 8
#define MME_SHADOW_2_KERNEL_SIZE_MINUS_1_DIM_1_MASK                  0xFF00
#define MME_SHADOW_2_KERNEL_SIZE_MINUS_1_DIM_2_SHIFT                 16
#define MME_SHADOW_2_KERNEL_SIZE_MINUS_1_DIM_2_MASK                  0xFF0000
#define MME_SHADOW_2_KERNEL_SIZE_MINUS_1_DIM_3_SHIFT                 24
#define MME_SHADOW_2_KERNEL_SIZE_MINUS_1_DIM_3_MASK                  0xFF000000

#define mmMME_SHADOW_2_ASSOCIATED_DIMS_0                             0xD0838

#define mmMME_SHADOW_2_ASSOCIATED_DIMS_1                             0xD083C
/* MME_SHADOW_2_ASSOCIATED_DIMS */
#define MME_SHADOW_2_ASSOCIATED_DIMS_A_0_SHIFT                       0
#define MME_SHADOW_2_ASSOCIATED_DIMS_A_0_MASK                        0x7
#define MME_SHADOW_2_ASSOCIATED_DIMS_B_0_SHIFT                       3
#define MME_SHADOW_2_ASSOCIATED_DIMS_B_0_MASK                        0x38
#define MME_SHADOW_2_ASSOCIATED_DIMS_CIN_0_SHIFT                     6
#define MME_SHADOW_2_ASSOCIATED_DIMS_CIN_0_MASK                      0x1C0
#define MME_SHADOW_2_ASSOCIATED_DIMS_COUT_0_SHIFT                    9
#define MME_SHADOW_2_ASSOCIATED_DIMS_COUT_0_MASK                     0xE00
#define MME_SHADOW_2_ASSOCIATED_DIMS_A_1_SHIFT                       16
#define MME_SHADOW_2_ASSOCIATED_DIMS_A_1_MASK                        0x70000
#define MME_SHADOW_2_ASSOCIATED_DIMS_B_1_SHIFT                       19
#define MME_SHADOW_2_ASSOCIATED_DIMS_B_1_MASK                        0x380000
#define MME_SHADOW_2_ASSOCIATED_DIMS_CIN_1_SHIFT                     22
#define MME_SHADOW_2_ASSOCIATED_DIMS_CIN_1_MASK                      0x1C00000
#define MME_SHADOW_2_ASSOCIATED_DIMS_COUT_1_SHIFT                    25
#define MME_SHADOW_2_ASSOCIATED_DIMS_COUT_1_MASK                     0xE000000

#define mmMME_SHADOW_2_COUT_SCALE                                    0xD0840
/* MME_SHADOW_2_COUT_SCALE */
#define MME_SHADOW_2_COUT_SCALE_V_SHIFT                              0
#define MME_SHADOW_2_COUT_SCALE_V_MASK                               0xFFFFFFFF

#define mmMME_SHADOW_2_CIN_SCALE                                     0xD0844
/* MME_SHADOW_2_CIN_SCALE */
#define MME_SHADOW_2_CIN_SCALE_V_SHIFT                               0
#define MME_SHADOW_2_CIN_SCALE_V_MASK                                0xFFFFFFFF

#define mmMME_SHADOW_2_GEMMLOWP_ZP                                   0xD0848
/* MME_SHADOW_2_GEMMLOWP_ZP */
#define MME_SHADOW_2_GEMMLOWP_ZP_ZP_CIN_SHIFT                        0
#define MME_SHADOW_2_GEMMLOWP_ZP_ZP_CIN_MASK                         0x1FF
#define MME_SHADOW_2_GEMMLOWP_ZP_ZP_COUT_SHIFT                       9
#define MME_SHADOW_2_GEMMLOWP_ZP_ZP_COUT_MASK                        0x3FE00
#define MME_SHADOW_2_GEMMLOWP_ZP_ZP_B_SHIFT                          18
#define MME_SHADOW_2_GEMMLOWP_ZP_ZP_B_MASK                           0x7FC0000
#define MME_SHADOW_2_GEMMLOWP_ZP_GEMMLOWP_EU_EN_SHIFT                27
#define MME_SHADOW_2_GEMMLOWP_ZP_GEMMLOWP_EU_EN_MASK                 0x8000000
#define MME_SHADOW_2_GEMMLOWP_ZP_ACCUM_SHIFT                         28
#define MME_SHADOW_2_GEMMLOWP_ZP_ACCUM_MASK                          0x10000000
#define MME_SHADOW_2_GEMMLOWP_ZP_ACCUM_BIAS_SHIFT                    29
#define MME_SHADOW_2_GEMMLOWP_ZP_ACCUM_BIAS_MASK                     0x20000000
#define MME_SHADOW_2_GEMMLOWP_ZP_RELU_EN_SHIFT                       30
#define MME_SHADOW_2_GEMMLOWP_ZP_RELU_EN_MASK                        0x40000000

#define mmMME_SHADOW_2_GEMMLOWP_EXPONENT                             0xD084C
/* MME_SHADOW_2_GEMMLOWP_EXPONENT */
#define MME_SHADOW_2_GEMMLOWP_EXPONENT_EXPONENT_CIN_SHIFT            0
#define MME_SHADOW_2_GEMMLOWP_EXPONENT_EXPONENT_CIN_MASK             0x3F
#define MME_SHADOW_2_GEMMLOWP_EXPONENT_EXPONENT_COUT_SHIFT           8
#define MME_SHADOW_2_GEMMLOWP_EXPONENT_EXPONENT_COUT_MASK            0x3F00
#define MME_SHADOW_2_GEMMLOWP_EXPONENT_MUL_CIN_EN_SHIFT              16
#define MME_SHADOW_2_GEMMLOWP_EXPONENT_MUL_CIN_EN_MASK               0x10000
#define MME_SHADOW_2_GEMMLOWP_EXPONENT_MUL_COUT_EN_SHIFT             17
#define MME_SHADOW_2_GEMMLOWP_EXPONENT_MUL_COUT_EN_MASK              0x20000

#define mmMME_SHADOW_2_A_ROI_BASE_OFFSET_0                           0xD0850

#define mmMME_SHADOW_2_A_ROI_BASE_OFFSET_1                           0xD0854

#define mmMME_SHADOW_2_A_ROI_BASE_OFFSET_2                           0xD0858

#define mmMME_SHADOW_2_A_ROI_BASE_OFFSET_3                           0xD085C

#define mmMME_SHADOW_2_A_ROI_BASE_OFFSET_4                           0xD0860
/* MME_SHADOW_2_A_ROI_BASE_OFFSET */
#define MME_SHADOW_2_A_ROI_BASE_OFFSET_V_SHIFT                       0
#define MME_SHADOW_2_A_ROI_BASE_OFFSET_V_MASK                        0xFFFFFFFF

#define mmMME_SHADOW_2_A_VALID_ELEMENTS_0                            0xD0864

#define mmMME_SHADOW_2_A_VALID_ELEMENTS_1                            0xD0868

#define mmMME_SHADOW_2_A_VALID_ELEMENTS_2                            0xD086C

#define mmMME_SHADOW_2_A_VALID_ELEMENTS_3                            0xD0870

#define mmMME_SHADOW_2_A_VALID_ELEMENTS_4                            0xD0874
/* MME_SHADOW_2_A_VALID_ELEMENTS */
#define MME_SHADOW_2_A_VALID_ELEMENTS_V_SHIFT                        0
#define MME_SHADOW_2_A_VALID_ELEMENTS_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_2_A_LOOP_STRIDE_0                               0xD0878

#define mmMME_SHADOW_2_A_LOOP_STRIDE_1                               0xD087C

#define mmMME_SHADOW_2_A_LOOP_STRIDE_2                               0xD0880

#define mmMME_SHADOW_2_A_LOOP_STRIDE_3                               0xD0884

#define mmMME_SHADOW_2_A_LOOP_STRIDE_4                               0xD0888
/* MME_SHADOW_2_A_LOOP_STRIDE */
#define MME_SHADOW_2_A_LOOP_STRIDE_V_SHIFT                           0
#define MME_SHADOW_2_A_LOOP_STRIDE_V_MASK                            0xFFFFFFFF

#define mmMME_SHADOW_2_A_ROI_SIZE_0                                  0xD088C

#define mmMME_SHADOW_2_A_ROI_SIZE_1                                  0xD0890

#define mmMME_SHADOW_2_A_ROI_SIZE_2                                  0xD0894

#define mmMME_SHADOW_2_A_ROI_SIZE_3                                  0xD0898
/* MME_SHADOW_2_A_ROI_SIZE */
#define MME_SHADOW_2_A_ROI_SIZE_V_SHIFT                              0
#define MME_SHADOW_2_A_ROI_SIZE_V_MASK                               0xFFFFFFFF

#define mmMME_SHADOW_2_A_SPATIAL_START_OFFSET_0                      0xD089C

#define mmMME_SHADOW_2_A_SPATIAL_START_OFFSET_1                      0xD08A0

#define mmMME_SHADOW_2_A_SPATIAL_START_OFFSET_2                      0xD08A4

#define mmMME_SHADOW_2_A_SPATIAL_START_OFFSET_3                      0xD08A8
/* MME_SHADOW_2_A_SPATIAL_START_OFFSET */
#define MME_SHADOW_2_A_SPATIAL_START_OFFSET_V_SHIFT                  0
#define MME_SHADOW_2_A_SPATIAL_START_OFFSET_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_2_A_SPATIAL_STRIDE_0                            0xD08AC

#define mmMME_SHADOW_2_A_SPATIAL_STRIDE_1                            0xD08B0

#define mmMME_SHADOW_2_A_SPATIAL_STRIDE_2                            0xD08B4

#define mmMME_SHADOW_2_A_SPATIAL_STRIDE_3                            0xD08B8
/* MME_SHADOW_2_A_SPATIAL_STRIDE */
#define MME_SHADOW_2_A_SPATIAL_STRIDE_V_SHIFT                        0
#define MME_SHADOW_2_A_SPATIAL_STRIDE_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_2_A_SPATIAL_SIZE_MINUS_1                        0xD08BC
/* MME_SHADOW_2_A_SPATIAL_SIZE_MINUS_1 */
#define MME_SHADOW_2_A_SPATIAL_SIZE_MINUS_1_V_SHIFT                  0
#define MME_SHADOW_2_A_SPATIAL_SIZE_MINUS_1_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_2_B_ROI_BASE_OFFSET_0                           0xD08C0

#define mmMME_SHADOW_2_B_ROI_BASE_OFFSET_1                           0xD08C4

#define mmMME_SHADOW_2_B_ROI_BASE_OFFSET_2                           0xD08C8

#define mmMME_SHADOW_2_B_ROI_BASE_OFFSET_3                           0xD08CC

#define mmMME_SHADOW_2_B_ROI_BASE_OFFSET_4                           0xD08D0
/* MME_SHADOW_2_B_ROI_BASE_OFFSET */
#define MME_SHADOW_2_B_ROI_BASE_OFFSET_V_SHIFT                       0
#define MME_SHADOW_2_B_ROI_BASE_OFFSET_V_MASK                        0xFFFFFFFF

#define mmMME_SHADOW_2_B_VALID_ELEMENTS_0                            0xD08D4

#define mmMME_SHADOW_2_B_VALID_ELEMENTS_1                            0xD08D8

#define mmMME_SHADOW_2_B_VALID_ELEMENTS_2                            0xD08DC

#define mmMME_SHADOW_2_B_VALID_ELEMENTS_3                            0xD08E0

#define mmMME_SHADOW_2_B_VALID_ELEMENTS_4                            0xD08E4
/* MME_SHADOW_2_B_VALID_ELEMENTS */
#define MME_SHADOW_2_B_VALID_ELEMENTS_V_SHIFT                        0
#define MME_SHADOW_2_B_VALID_ELEMENTS_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_2_B_LOOP_STRIDE_0                               0xD08E8

#define mmMME_SHADOW_2_B_LOOP_STRIDE_1                               0xD08EC

#define mmMME_SHADOW_2_B_LOOP_STRIDE_2                               0xD08F0

#define mmMME_SHADOW_2_B_LOOP_STRIDE_3                               0xD08F4

#define mmMME_SHADOW_2_B_LOOP_STRIDE_4                               0xD08F8
/* MME_SHADOW_2_B_LOOP_STRIDE */
#define MME_SHADOW_2_B_LOOP_STRIDE_V_SHIFT                           0
#define MME_SHADOW_2_B_LOOP_STRIDE_V_MASK                            0xFFFFFFFF

#define mmMME_SHADOW_2_B_ROI_SIZE_0                                  0xD08FC

#define mmMME_SHADOW_2_B_ROI_SIZE_1                                  0xD0900

#define mmMME_SHADOW_2_B_ROI_SIZE_2                                  0xD0904

#define mmMME_SHADOW_2_B_ROI_SIZE_3                                  0xD0908
/* MME_SHADOW_2_B_ROI_SIZE */
#define MME_SHADOW_2_B_ROI_SIZE_V_SHIFT                              0
#define MME_SHADOW_2_B_ROI_SIZE_V_MASK                               0xFFFFFFFF

#define mmMME_SHADOW_2_B_SPATIAL_START_OFFSET_0                      0xD090C

#define mmMME_SHADOW_2_B_SPATIAL_START_OFFSET_1                      0xD0910

#define mmMME_SHADOW_2_B_SPATIAL_START_OFFSET_2                      0xD0914

#define mmMME_SHADOW_2_B_SPATIAL_START_OFFSET_3                      0xD0918
/* MME_SHADOW_2_B_SPATIAL_START_OFFSET */
#define MME_SHADOW_2_B_SPATIAL_START_OFFSET_V_SHIFT                  0
#define MME_SHADOW_2_B_SPATIAL_START_OFFSET_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_2_B_SPATIAL_STRIDE_0                            0xD091C

#define mmMME_SHADOW_2_B_SPATIAL_STRIDE_1                            0xD0920

#define mmMME_SHADOW_2_B_SPATIAL_STRIDE_2                            0xD0924

#define mmMME_SHADOW_2_B_SPATIAL_STRIDE_3                            0xD0928
/* MME_SHADOW_2_B_SPATIAL_STRIDE */
#define MME_SHADOW_2_B_SPATIAL_STRIDE_V_SHIFT                        0
#define MME_SHADOW_2_B_SPATIAL_STRIDE_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_2_B_SPATIAL_SIZE_MINUS_1                        0xD092C
/* MME_SHADOW_2_B_SPATIAL_SIZE_MINUS_1 */
#define MME_SHADOW_2_B_SPATIAL_SIZE_MINUS_1_V_SHIFT                  0
#define MME_SHADOW_2_B_SPATIAL_SIZE_MINUS_1_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_2_C_ROI_BASE_OFFSET_0                           0xD0930

#define mmMME_SHADOW_2_C_ROI_BASE_OFFSET_1                           0xD0934

#define mmMME_SHADOW_2_C_ROI_BASE_OFFSET_2                           0xD0938

#define mmMME_SHADOW_2_C_ROI_BASE_OFFSET_3                           0xD093C

#define mmMME_SHADOW_2_C_ROI_BASE_OFFSET_4                           0xD0940
/* MME_SHADOW_2_C_ROI_BASE_OFFSET */
#define MME_SHADOW_2_C_ROI_BASE_OFFSET_V_SHIFT                       0
#define MME_SHADOW_2_C_ROI_BASE_OFFSET_V_MASK                        0xFFFFFFFF

#define mmMME_SHADOW_2_C_VALID_ELEMENTS_0                            0xD0944

#define mmMME_SHADOW_2_C_VALID_ELEMENTS_1                            0xD0948

#define mmMME_SHADOW_2_C_VALID_ELEMENTS_2                            0xD094C

#define mmMME_SHADOW_2_C_VALID_ELEMENTS_3                            0xD0950

#define mmMME_SHADOW_2_C_VALID_ELEMENTS_4                            0xD0954
/* MME_SHADOW_2_C_VALID_ELEMENTS */
#define MME_SHADOW_2_C_VALID_ELEMENTS_V_SHIFT                        0
#define MME_SHADOW_2_C_VALID_ELEMENTS_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_2_C_LOOP_STRIDE_0                               0xD0958

#define mmMME_SHADOW_2_C_LOOP_STRIDE_1                               0xD095C

#define mmMME_SHADOW_2_C_LOOP_STRIDE_2                               0xD0960

#define mmMME_SHADOW_2_C_LOOP_STRIDE_3                               0xD0964

#define mmMME_SHADOW_2_C_LOOP_STRIDE_4                               0xD0968
/* MME_SHADOW_2_C_LOOP_STRIDE */
#define MME_SHADOW_2_C_LOOP_STRIDE_V_SHIFT                           0
#define MME_SHADOW_2_C_LOOP_STRIDE_V_MASK                            0xFFFFFFFF

#define mmMME_SHADOW_2_C_ROI_SIZE_0                                  0xD096C

#define mmMME_SHADOW_2_C_ROI_SIZE_1                                  0xD0970

#define mmMME_SHADOW_2_C_ROI_SIZE_2                                  0xD0974

#define mmMME_SHADOW_2_C_ROI_SIZE_3                                  0xD0978
/* MME_SHADOW_2_C_ROI_SIZE */
#define MME_SHADOW_2_C_ROI_SIZE_V_SHIFT                              0
#define MME_SHADOW_2_C_ROI_SIZE_V_MASK                               0xFFFFFFFF

#define mmMME_SHADOW_2_C_SPATIAL_START_OFFSET_0                      0xD097C

#define mmMME_SHADOW_2_C_SPATIAL_START_OFFSET_1                      0xD0980

#define mmMME_SHADOW_2_C_SPATIAL_START_OFFSET_2                      0xD0984

#define mmMME_SHADOW_2_C_SPATIAL_START_OFFSET_3                      0xD0988
/* MME_SHADOW_2_C_SPATIAL_START_OFFSET */
#define MME_SHADOW_2_C_SPATIAL_START_OFFSET_V_SHIFT                  0
#define MME_SHADOW_2_C_SPATIAL_START_OFFSET_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_2_C_SPATIAL_STRIDE_0                            0xD098C

#define mmMME_SHADOW_2_C_SPATIAL_STRIDE_1                            0xD0990

#define mmMME_SHADOW_2_C_SPATIAL_STRIDE_2                            0xD0994

#define mmMME_SHADOW_2_C_SPATIAL_STRIDE_3                            0xD0998
/* MME_SHADOW_2_C_SPATIAL_STRIDE */
#define MME_SHADOW_2_C_SPATIAL_STRIDE_V_SHIFT                        0
#define MME_SHADOW_2_C_SPATIAL_STRIDE_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_2_C_SPATIAL_SIZE_MINUS_1                        0xD099C
/* MME_SHADOW_2_C_SPATIAL_SIZE_MINUS_1 */
#define MME_SHADOW_2_C_SPATIAL_SIZE_MINUS_1_V_SHIFT                  0
#define MME_SHADOW_2_C_SPATIAL_SIZE_MINUS_1_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_2_SYNC_OBJECT_MESSAGE                           0xD09A0
/* MME_SHADOW_2_SYNC_OBJECT_MESSAGE */
#define MME_SHADOW_2_SYNC_OBJECT_MESSAGE_SO_WRITE_VALUE_SHIFT        0
#define MME_SHADOW_2_SYNC_OBJECT_MESSAGE_SO_WRITE_VALUE_MASK         0xFFFF
#define MME_SHADOW_2_SYNC_OBJECT_MESSAGE_SO_ADDRESS_OFFSET_SHIFT     16
#define MME_SHADOW_2_SYNC_OBJECT_MESSAGE_SO_ADDRESS_OFFSET_MASK      0x7FFF0000
#define MME_SHADOW_2_SYNC_OBJECT_MESSAGE_SO_OPERATION_SHIFT          31
#define MME_SHADOW_2_SYNC_OBJECT_MESSAGE_SO_OPERATION_MASK           0x80000000

#define mmMME_SHADOW_2_E_PADDING_VALUE_A                             0xD09A4
/* MME_SHADOW_2_E_PADDING_VALUE_A */
#define MME_SHADOW_2_E_PADDING_VALUE_A_V_SHIFT                       0
#define MME_SHADOW_2_E_PADDING_VALUE_A_V_MASK                        0xFFFF

#define mmMME_SHADOW_2_E_NUM_ITERATION_MINUS_1                       0xD09A8
/* MME_SHADOW_2_E_NUM_ITERATION_MINUS_1 */
#define MME_SHADOW_2_E_NUM_ITERATION_MINUS_1_V_SHIFT                 0
#define MME_SHADOW_2_E_NUM_ITERATION_MINUS_1_V_MASK                  0xFFFFFFFF

#define mmMME_SHADOW_2_E_BUBBLES_PER_SPLIT                           0xD09AC
/* MME_SHADOW_2_E_BUBBLES_PER_SPLIT */
#define MME_SHADOW_2_E_BUBBLES_PER_SPLIT_A_SHIFT                     0
#define MME_SHADOW_2_E_BUBBLES_PER_SPLIT_A_MASK                      0xFF
#define MME_SHADOW_2_E_BUBBLES_PER_SPLIT_B_SHIFT                     8
#define MME_SHADOW_2_E_BUBBLES_PER_SPLIT_B_MASK                      0xFF00
#define MME_SHADOW_2_E_BUBBLES_PER_SPLIT_CIN_SHIFT                   16
#define MME_SHADOW_2_E_BUBBLES_PER_SPLIT_CIN_MASK                    0xFF0000
#define MME_SHADOW_2_E_BUBBLES_PER_SPLIT_ID_SHIFT                    24
#define MME_SHADOW_2_E_BUBBLES_PER_SPLIT_ID_MASK                     0xFF000000

#define mmMME_SHADOW_3_STATUS                                        0xD0A00
/* MME_SHADOW_3_STATUS */
#define MME_SHADOW_3_STATUS_A_SHIFT                                  0
#define MME_SHADOW_3_STATUS_A_MASK                                   0x1
#define MME_SHADOW_3_STATUS_B_SHIFT                                  1
#define MME_SHADOW_3_STATUS_B_MASK                                   0x2
#define MME_SHADOW_3_STATUS_CIN_SHIFT                                2
#define MME_SHADOW_3_STATUS_CIN_MASK                                 0x4
#define MME_SHADOW_3_STATUS_COUT_SHIFT                               3
#define MME_SHADOW_3_STATUS_COUT_MASK                                0x8
#define MME_SHADOW_3_STATUS_TE_SHIFT                                 4
#define MME_SHADOW_3_STATUS_TE_MASK                                  0x10
#define MME_SHADOW_3_STATUS_LD_SHIFT                                 5
#define MME_SHADOW_3_STATUS_LD_MASK                                  0x20
#define MME_SHADOW_3_STATUS_ST_SHIFT                                 6
#define MME_SHADOW_3_STATUS_ST_MASK                                  0x40

#define mmMME_SHADOW_3_A_BASE_ADDR_HIGH                              0xD0A08
/* MME_SHADOW_3_A_BASE_ADDR_HIGH */
#define MME_SHADOW_3_A_BASE_ADDR_HIGH_V_SHIFT                        0
#define MME_SHADOW_3_A_BASE_ADDR_HIGH_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_3_B_BASE_ADDR_HIGH                              0xD0A0C
/* MME_SHADOW_3_B_BASE_ADDR_HIGH */
#define MME_SHADOW_3_B_BASE_ADDR_HIGH_V_SHIFT                        0
#define MME_SHADOW_3_B_BASE_ADDR_HIGH_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_3_CIN_BASE_ADDR_HIGH                            0xD0A10
/* MME_SHADOW_3_CIN_BASE_ADDR_HIGH */
#define MME_SHADOW_3_CIN_BASE_ADDR_HIGH_V_SHIFT                      0
#define MME_SHADOW_3_CIN_BASE_ADDR_HIGH_V_MASK                       0xFFFFFFFF

#define mmMME_SHADOW_3_COUT_BASE_ADDR_HIGH                           0xD0A14
/* MME_SHADOW_3_COUT_BASE_ADDR_HIGH */
#define MME_SHADOW_3_COUT_BASE_ADDR_HIGH_V_SHIFT                     0
#define MME_SHADOW_3_COUT_BASE_ADDR_HIGH_V_MASK                      0xFFFFFFFF

#define mmMME_SHADOW_3_BIAS_BASE_ADDR_HIGH                           0xD0A18
/* MME_SHADOW_3_BIAS_BASE_ADDR_HIGH */
#define MME_SHADOW_3_BIAS_BASE_ADDR_HIGH_V_SHIFT                     0
#define MME_SHADOW_3_BIAS_BASE_ADDR_HIGH_V_MASK                      0xFFFFFFFF

#define mmMME_SHADOW_3_A_BASE_ADDR_LOW                               0xD0A1C
/* MME_SHADOW_3_A_BASE_ADDR_LOW */
#define MME_SHADOW_3_A_BASE_ADDR_LOW_V_SHIFT                         0
#define MME_SHADOW_3_A_BASE_ADDR_LOW_V_MASK                          0xFFFFFFFF

#define mmMME_SHADOW_3_B_BASE_ADDR_LOW                               0xD0A20
/* MME_SHADOW_3_B_BASE_ADDR_LOW */
#define MME_SHADOW_3_B_BASE_ADDR_LOW_V_SHIFT                         0
#define MME_SHADOW_3_B_BASE_ADDR_LOW_V_MASK                          0xFFFFFFFF

#define mmMME_SHADOW_3_CIN_BASE_ADDR_LOW                             0xD0A24
/* MME_SHADOW_3_CIN_BASE_ADDR_LOW */
#define MME_SHADOW_3_CIN_BASE_ADDR_LOW_V_SHIFT                       0
#define MME_SHADOW_3_CIN_BASE_ADDR_LOW_V_MASK                        0xFFFFFFFF

#define mmMME_SHADOW_3_COUT_BASE_ADDR_LOW                            0xD0A28
/* MME_SHADOW_3_COUT_BASE_ADDR_LOW */
#define MME_SHADOW_3_COUT_BASE_ADDR_LOW_V_SHIFT                      0
#define MME_SHADOW_3_COUT_BASE_ADDR_LOW_V_MASK                       0xFFFFFFFF

#define mmMME_SHADOW_3_BIAS_BASE_ADDR_LOW                            0xD0A2C
/* MME_SHADOW_3_BIAS_BASE_ADDR_LOW */
#define MME_SHADOW_3_BIAS_BASE_ADDR_LOW_V_SHIFT                      0
#define MME_SHADOW_3_BIAS_BASE_ADDR_LOW_V_MASK                       0xFFFFFFFF

#define mmMME_SHADOW_3_HEADER                                        0xD0A30
/* MME_SHADOW_3_HEADER */
#define MME_SHADOW_3_HEADER_SIGNAL_MASK_SHIFT                        0
#define MME_SHADOW_3_HEADER_SIGNAL_MASK_MASK                         0x1F
#define MME_SHADOW_3_HEADER_SIGNAL_EN_SHIFT                          5
#define MME_SHADOW_3_HEADER_SIGNAL_EN_MASK                           0x20
#define MME_SHADOW_3_HEADER_TRANS_A_SHIFT                            6
#define MME_SHADOW_3_HEADER_TRANS_A_MASK                             0x40
#define MME_SHADOW_3_HEADER_LOWER_A_SHIFT                            7
#define MME_SHADOW_3_HEADER_LOWER_A_MASK                             0x80
#define MME_SHADOW_3_HEADER_ACCUM_MASK_SHIFT                         8
#define MME_SHADOW_3_HEADER_ACCUM_MASK_MASK                          0xF00
#define MME_SHADOW_3_HEADER_LOAD_BIAS_SHIFT                          12
#define MME_SHADOW_3_HEADER_LOAD_BIAS_MASK                           0x1000
#define MME_SHADOW_3_HEADER_LOAD_CIN_SHIFT                           13
#define MME_SHADOW_3_HEADER_LOAD_CIN_MASK                            0x2000
#define MME_SHADOW_3_HEADER_STORE_OUT_SHIFT                          15
#define MME_SHADOW_3_HEADER_STORE_OUT_MASK                           0x8000
#define MME_SHADOW_3_HEADER_ACC_LD_INC_DISABLE_SHIFT                 16
#define MME_SHADOW_3_HEADER_ACC_LD_INC_DISABLE_MASK                  0x10000
#define MME_SHADOW_3_HEADER_ADVANCE_A_SHIFT                          17
#define MME_SHADOW_3_HEADER_ADVANCE_A_MASK                           0x20000
#define MME_SHADOW_3_HEADER_ADVANCE_B_SHIFT                          18
#define MME_SHADOW_3_HEADER_ADVANCE_B_MASK                           0x40000
#define MME_SHADOW_3_HEADER_ADVANCE_CIN_SHIFT                        19
#define MME_SHADOW_3_HEADER_ADVANCE_CIN_MASK                         0x80000
#define MME_SHADOW_3_HEADER_ADVANCE_COUT_SHIFT                       20
#define MME_SHADOW_3_HEADER_ADVANCE_COUT_MASK                        0x100000
#define MME_SHADOW_3_HEADER_COMPRESSED_B_SHIFT                       21
#define MME_SHADOW_3_HEADER_COMPRESSED_B_MASK                        0x200000
#define MME_SHADOW_3_HEADER_MASK_CONV_END_SHIFT                      22
#define MME_SHADOW_3_HEADER_MASK_CONV_END_MASK                       0x400000
#define MME_SHADOW_3_HEADER_ACC_ST_INC_DISABLE_SHIFT                 23
#define MME_SHADOW_3_HEADER_ACC_ST_INC_DISABLE_MASK                  0x800000
#define MME_SHADOW_3_HEADER_AB_DATA_TYPE_SHIFT                       24
#define MME_SHADOW_3_HEADER_AB_DATA_TYPE_MASK                        0x3000000
#define MME_SHADOW_3_HEADER_CIN_DATA_TYPE_SHIFT                      26
#define MME_SHADOW_3_HEADER_CIN_DATA_TYPE_MASK                       0x1C000000
#define MME_SHADOW_3_HEADER_COUT_DATA_TYPE_SHIFT                     29
#define MME_SHADOW_3_HEADER_COUT_DATA_TYPE_MASK                      0xE0000000

#define mmMME_SHADOW_3_KERNEL_SIZE_MINUS_1                           0xD0A34
/* MME_SHADOW_3_KERNEL_SIZE_MINUS_1 */
#define MME_SHADOW_3_KERNEL_SIZE_MINUS_1_DIM_0_SHIFT                 0
#define MME_SHADOW_3_KERNEL_SIZE_MINUS_1_DIM_0_MASK                  0xFF
#define MME_SHADOW_3_KERNEL_SIZE_MINUS_1_DIM_1_SHIFT                 8
#define MME_SHADOW_3_KERNEL_SIZE_MINUS_1_DIM_1_MASK                  0xFF00
#define MME_SHADOW_3_KERNEL_SIZE_MINUS_1_DIM_2_SHIFT                 16
#define MME_SHADOW_3_KERNEL_SIZE_MINUS_1_DIM_2_MASK                  0xFF0000
#define MME_SHADOW_3_KERNEL_SIZE_MINUS_1_DIM_3_SHIFT                 24
#define MME_SHADOW_3_KERNEL_SIZE_MINUS_1_DIM_3_MASK                  0xFF000000

#define mmMME_SHADOW_3_ASSOCIATED_DIMS_0                             0xD0A38

#define mmMME_SHADOW_3_ASSOCIATED_DIMS_1                             0xD0A3C
/* MME_SHADOW_3_ASSOCIATED_DIMS */
#define MME_SHADOW_3_ASSOCIATED_DIMS_A_0_SHIFT                       0
#define MME_SHADOW_3_ASSOCIATED_DIMS_A_0_MASK                        0x7
#define MME_SHADOW_3_ASSOCIATED_DIMS_B_0_SHIFT                       3
#define MME_SHADOW_3_ASSOCIATED_DIMS_B_0_MASK                        0x38
#define MME_SHADOW_3_ASSOCIATED_DIMS_CIN_0_SHIFT                     6
#define MME_SHADOW_3_ASSOCIATED_DIMS_CIN_0_MASK                      0x1C0
#define MME_SHADOW_3_ASSOCIATED_DIMS_COUT_0_SHIFT                    9
#define MME_SHADOW_3_ASSOCIATED_DIMS_COUT_0_MASK                     0xE00
#define MME_SHADOW_3_ASSOCIATED_DIMS_A_1_SHIFT                       16
#define MME_SHADOW_3_ASSOCIATED_DIMS_A_1_MASK                        0x70000
#define MME_SHADOW_3_ASSOCIATED_DIMS_B_1_SHIFT                       19
#define MME_SHADOW_3_ASSOCIATED_DIMS_B_1_MASK                        0x380000
#define MME_SHADOW_3_ASSOCIATED_DIMS_CIN_1_SHIFT                     22
#define MME_SHADOW_3_ASSOCIATED_DIMS_CIN_1_MASK                      0x1C00000
#define MME_SHADOW_3_ASSOCIATED_DIMS_COUT_1_SHIFT                    25
#define MME_SHADOW_3_ASSOCIATED_DIMS_COUT_1_MASK                     0xE000000

#define mmMME_SHADOW_3_COUT_SCALE                                    0xD0A40
/* MME_SHADOW_3_COUT_SCALE */
#define MME_SHADOW_3_COUT_SCALE_V_SHIFT                              0
#define MME_SHADOW_3_COUT_SCALE_V_MASK                               0xFFFFFFFF

#define mmMME_SHADOW_3_CIN_SCALE                                     0xD0A44
/* MME_SHADOW_3_CIN_SCALE */
#define MME_SHADOW_3_CIN_SCALE_V_SHIFT                               0
#define MME_SHADOW_3_CIN_SCALE_V_MASK                                0xFFFFFFFF

#define mmMME_SHADOW_3_GEMMLOWP_ZP                                   0xD0A48
/* MME_SHADOW_3_GEMMLOWP_ZP */
#define MME_SHADOW_3_GEMMLOWP_ZP_ZP_CIN_SHIFT                        0
#define MME_SHADOW_3_GEMMLOWP_ZP_ZP_CIN_MASK                         0x1FF
#define MME_SHADOW_3_GEMMLOWP_ZP_ZP_COUT_SHIFT                       9
#define MME_SHADOW_3_GEMMLOWP_ZP_ZP_COUT_MASK                        0x3FE00
#define MME_SHADOW_3_GEMMLOWP_ZP_ZP_B_SHIFT                          18
#define MME_SHADOW_3_GEMMLOWP_ZP_ZP_B_MASK                           0x7FC0000
#define MME_SHADOW_3_GEMMLOWP_ZP_GEMMLOWP_EU_EN_SHIFT                27
#define MME_SHADOW_3_GEMMLOWP_ZP_GEMMLOWP_EU_EN_MASK                 0x8000000
#define MME_SHADOW_3_GEMMLOWP_ZP_ACCUM_SHIFT                         28
#define MME_SHADOW_3_GEMMLOWP_ZP_ACCUM_MASK                          0x10000000
#define MME_SHADOW_3_GEMMLOWP_ZP_ACCUM_BIAS_SHIFT                    29
#define MME_SHADOW_3_GEMMLOWP_ZP_ACCUM_BIAS_MASK                     0x20000000
#define MME_SHADOW_3_GEMMLOWP_ZP_RELU_EN_SHIFT                       30
#define MME_SHADOW_3_GEMMLOWP_ZP_RELU_EN_MASK                        0x40000000

#define mmMME_SHADOW_3_GEMMLOWP_EXPONENT                             0xD0A4C
/* MME_SHADOW_3_GEMMLOWP_EXPONENT */
#define MME_SHADOW_3_GEMMLOWP_EXPONENT_EXPONENT_CIN_SHIFT            0
#define MME_SHADOW_3_GEMMLOWP_EXPONENT_EXPONENT_CIN_MASK             0x3F
#define MME_SHADOW_3_GEMMLOWP_EXPONENT_EXPONENT_COUT_SHIFT           8
#define MME_SHADOW_3_GEMMLOWP_EXPONENT_EXPONENT_COUT_MASK            0x3F00
#define MME_SHADOW_3_GEMMLOWP_EXPONENT_MUL_CIN_EN_SHIFT              16
#define MME_SHADOW_3_GEMMLOWP_EXPONENT_MUL_CIN_EN_MASK               0x10000
#define MME_SHADOW_3_GEMMLOWP_EXPONENT_MUL_COUT_EN_SHIFT             17
#define MME_SHADOW_3_GEMMLOWP_EXPONENT_MUL_COUT_EN_MASK              0x20000

#define mmMME_SHADOW_3_A_ROI_BASE_OFFSET_0                           0xD0A50

#define mmMME_SHADOW_3_A_ROI_BASE_OFFSET_1                           0xD0A54

#define mmMME_SHADOW_3_A_ROI_BASE_OFFSET_2                           0xD0A58

#define mmMME_SHADOW_3_A_ROI_BASE_OFFSET_3                           0xD0A5C

#define mmMME_SHADOW_3_A_ROI_BASE_OFFSET_4                           0xD0A60
/* MME_SHADOW_3_A_ROI_BASE_OFFSET */
#define MME_SHADOW_3_A_ROI_BASE_OFFSET_V_SHIFT                       0
#define MME_SHADOW_3_A_ROI_BASE_OFFSET_V_MASK                        0xFFFFFFFF

#define mmMME_SHADOW_3_A_VALID_ELEMENTS_0                            0xD0A64

#define mmMME_SHADOW_3_A_VALID_ELEMENTS_1                            0xD0A68

#define mmMME_SHADOW_3_A_VALID_ELEMENTS_2                            0xD0A6C

#define mmMME_SHADOW_3_A_VALID_ELEMENTS_3                            0xD0A70

#define mmMME_SHADOW_3_A_VALID_ELEMENTS_4                            0xD0A74
/* MME_SHADOW_3_A_VALID_ELEMENTS */
#define MME_SHADOW_3_A_VALID_ELEMENTS_V_SHIFT                        0
#define MME_SHADOW_3_A_VALID_ELEMENTS_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_3_A_LOOP_STRIDE_0                               0xD0A78

#define mmMME_SHADOW_3_A_LOOP_STRIDE_1                               0xD0A7C

#define mmMME_SHADOW_3_A_LOOP_STRIDE_2                               0xD0A80

#define mmMME_SHADOW_3_A_LOOP_STRIDE_3                               0xD0A84

#define mmMME_SHADOW_3_A_LOOP_STRIDE_4                               0xD0A88
/* MME_SHADOW_3_A_LOOP_STRIDE */
#define MME_SHADOW_3_A_LOOP_STRIDE_V_SHIFT                           0
#define MME_SHADOW_3_A_LOOP_STRIDE_V_MASK                            0xFFFFFFFF

#define mmMME_SHADOW_3_A_ROI_SIZE_0                                  0xD0A8C

#define mmMME_SHADOW_3_A_ROI_SIZE_1                                  0xD0A90

#define mmMME_SHADOW_3_A_ROI_SIZE_2                                  0xD0A94

#define mmMME_SHADOW_3_A_ROI_SIZE_3                                  0xD0A98
/* MME_SHADOW_3_A_ROI_SIZE */
#define MME_SHADOW_3_A_ROI_SIZE_V_SHIFT                              0
#define MME_SHADOW_3_A_ROI_SIZE_V_MASK                               0xFFFFFFFF

#define mmMME_SHADOW_3_A_SPATIAL_START_OFFSET_0                      0xD0A9C

#define mmMME_SHADOW_3_A_SPATIAL_START_OFFSET_1                      0xD0AA0

#define mmMME_SHADOW_3_A_SPATIAL_START_OFFSET_2                      0xD0AA4

#define mmMME_SHADOW_3_A_SPATIAL_START_OFFSET_3                      0xD0AA8
/* MME_SHADOW_3_A_SPATIAL_START_OFFSET */
#define MME_SHADOW_3_A_SPATIAL_START_OFFSET_V_SHIFT                  0
#define MME_SHADOW_3_A_SPATIAL_START_OFFSET_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_3_A_SPATIAL_STRIDE_0                            0xD0AAC

#define mmMME_SHADOW_3_A_SPATIAL_STRIDE_1                            0xD0AB0

#define mmMME_SHADOW_3_A_SPATIAL_STRIDE_2                            0xD0AB4

#define mmMME_SHADOW_3_A_SPATIAL_STRIDE_3                            0xD0AB8
/* MME_SHADOW_3_A_SPATIAL_STRIDE */
#define MME_SHADOW_3_A_SPATIAL_STRIDE_V_SHIFT                        0
#define MME_SHADOW_3_A_SPATIAL_STRIDE_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_3_A_SPATIAL_SIZE_MINUS_1                        0xD0ABC
/* MME_SHADOW_3_A_SPATIAL_SIZE_MINUS_1 */
#define MME_SHADOW_3_A_SPATIAL_SIZE_MINUS_1_V_SHIFT                  0
#define MME_SHADOW_3_A_SPATIAL_SIZE_MINUS_1_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_3_B_ROI_BASE_OFFSET_0                           0xD0AC0

#define mmMME_SHADOW_3_B_ROI_BASE_OFFSET_1                           0xD0AC4

#define mmMME_SHADOW_3_B_ROI_BASE_OFFSET_2                           0xD0AC8

#define mmMME_SHADOW_3_B_ROI_BASE_OFFSET_3                           0xD0ACC

#define mmMME_SHADOW_3_B_ROI_BASE_OFFSET_4                           0xD0AD0
/* MME_SHADOW_3_B_ROI_BASE_OFFSET */
#define MME_SHADOW_3_B_ROI_BASE_OFFSET_V_SHIFT                       0
#define MME_SHADOW_3_B_ROI_BASE_OFFSET_V_MASK                        0xFFFFFFFF

#define mmMME_SHADOW_3_B_VALID_ELEMENTS_0                            0xD0AD4

#define mmMME_SHADOW_3_B_VALID_ELEMENTS_1                            0xD0AD8

#define mmMME_SHADOW_3_B_VALID_ELEMENTS_2                            0xD0ADC

#define mmMME_SHADOW_3_B_VALID_ELEMENTS_3                            0xD0AE0

#define mmMME_SHADOW_3_B_VALID_ELEMENTS_4                            0xD0AE4
/* MME_SHADOW_3_B_VALID_ELEMENTS */
#define MME_SHADOW_3_B_VALID_ELEMENTS_V_SHIFT                        0
#define MME_SHADOW_3_B_VALID_ELEMENTS_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_3_B_LOOP_STRIDE_0                               0xD0AE8

#define mmMME_SHADOW_3_B_LOOP_STRIDE_1                               0xD0AEC

#define mmMME_SHADOW_3_B_LOOP_STRIDE_2                               0xD0AF0

#define mmMME_SHADOW_3_B_LOOP_STRIDE_3                               0xD0AF4

#define mmMME_SHADOW_3_B_LOOP_STRIDE_4                               0xD0AF8
/* MME_SHADOW_3_B_LOOP_STRIDE */
#define MME_SHADOW_3_B_LOOP_STRIDE_V_SHIFT                           0
#define MME_SHADOW_3_B_LOOP_STRIDE_V_MASK                            0xFFFFFFFF

#define mmMME_SHADOW_3_B_ROI_SIZE_0                                  0xD0AFC

#define mmMME_SHADOW_3_B_ROI_SIZE_1                                  0xD0B00

#define mmMME_SHADOW_3_B_ROI_SIZE_2                                  0xD0B04

#define mmMME_SHADOW_3_B_ROI_SIZE_3                                  0xD0B08
/* MME_SHADOW_3_B_ROI_SIZE */
#define MME_SHADOW_3_B_ROI_SIZE_V_SHIFT                              0
#define MME_SHADOW_3_B_ROI_SIZE_V_MASK                               0xFFFFFFFF

#define mmMME_SHADOW_3_B_SPATIAL_START_OFFSET_0                      0xD0B0C

#define mmMME_SHADOW_3_B_SPATIAL_START_OFFSET_1                      0xD0B10

#define mmMME_SHADOW_3_B_SPATIAL_START_OFFSET_2                      0xD0B14

#define mmMME_SHADOW_3_B_SPATIAL_START_OFFSET_3                      0xD0B18
/* MME_SHADOW_3_B_SPATIAL_START_OFFSET */
#define MME_SHADOW_3_B_SPATIAL_START_OFFSET_V_SHIFT                  0
#define MME_SHADOW_3_B_SPATIAL_START_OFFSET_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_3_B_SPATIAL_STRIDE_0                            0xD0B1C

#define mmMME_SHADOW_3_B_SPATIAL_STRIDE_1                            0xD0B20

#define mmMME_SHADOW_3_B_SPATIAL_STRIDE_2                            0xD0B24

#define mmMME_SHADOW_3_B_SPATIAL_STRIDE_3                            0xD0B28
/* MME_SHADOW_3_B_SPATIAL_STRIDE */
#define MME_SHADOW_3_B_SPATIAL_STRIDE_V_SHIFT                        0
#define MME_SHADOW_3_B_SPATIAL_STRIDE_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_3_B_SPATIAL_SIZE_MINUS_1                        0xD0B2C
/* MME_SHADOW_3_B_SPATIAL_SIZE_MINUS_1 */
#define MME_SHADOW_3_B_SPATIAL_SIZE_MINUS_1_V_SHIFT                  0
#define MME_SHADOW_3_B_SPATIAL_SIZE_MINUS_1_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_3_C_ROI_BASE_OFFSET_0                           0xD0B30

#define mmMME_SHADOW_3_C_ROI_BASE_OFFSET_1                           0xD0B34

#define mmMME_SHADOW_3_C_ROI_BASE_OFFSET_2                           0xD0B38

#define mmMME_SHADOW_3_C_ROI_BASE_OFFSET_3                           0xD0B3C

#define mmMME_SHADOW_3_C_ROI_BASE_OFFSET_4                           0xD0B40
/* MME_SHADOW_3_C_ROI_BASE_OFFSET */
#define MME_SHADOW_3_C_ROI_BASE_OFFSET_V_SHIFT                       0
#define MME_SHADOW_3_C_ROI_BASE_OFFSET_V_MASK                        0xFFFFFFFF

#define mmMME_SHADOW_3_C_VALID_ELEMENTS_0                            0xD0B44

#define mmMME_SHADOW_3_C_VALID_ELEMENTS_1                            0xD0B48

#define mmMME_SHADOW_3_C_VALID_ELEMENTS_2                            0xD0B4C

#define mmMME_SHADOW_3_C_VALID_ELEMENTS_3                            0xD0B50

#define mmMME_SHADOW_3_C_VALID_ELEMENTS_4                            0xD0B54
/* MME_SHADOW_3_C_VALID_ELEMENTS */
#define MME_SHADOW_3_C_VALID_ELEMENTS_V_SHIFT                        0
#define MME_SHADOW_3_C_VALID_ELEMENTS_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_3_C_LOOP_STRIDE_0                               0xD0B58

#define mmMME_SHADOW_3_C_LOOP_STRIDE_1                               0xD0B5C

#define mmMME_SHADOW_3_C_LOOP_STRIDE_2                               0xD0B60

#define mmMME_SHADOW_3_C_LOOP_STRIDE_3                               0xD0B64

#define mmMME_SHADOW_3_C_LOOP_STRIDE_4                               0xD0B68
/* MME_SHADOW_3_C_LOOP_STRIDE */
#define MME_SHADOW_3_C_LOOP_STRIDE_V_SHIFT                           0
#define MME_SHADOW_3_C_LOOP_STRIDE_V_MASK                            0xFFFFFFFF

#define mmMME_SHADOW_3_C_ROI_SIZE_0                                  0xD0B6C

#define mmMME_SHADOW_3_C_ROI_SIZE_1                                  0xD0B70

#define mmMME_SHADOW_3_C_ROI_SIZE_2                                  0xD0B74

#define mmMME_SHADOW_3_C_ROI_SIZE_3                                  0xD0B78
/* MME_SHADOW_3_C_ROI_SIZE */
#define MME_SHADOW_3_C_ROI_SIZE_V_SHIFT                              0
#define MME_SHADOW_3_C_ROI_SIZE_V_MASK                               0xFFFFFFFF

#define mmMME_SHADOW_3_C_SPATIAL_START_OFFSET_0                      0xD0B7C

#define mmMME_SHADOW_3_C_SPATIAL_START_OFFSET_1                      0xD0B80

#define mmMME_SHADOW_3_C_SPATIAL_START_OFFSET_2                      0xD0B84

#define mmMME_SHADOW_3_C_SPATIAL_START_OFFSET_3                      0xD0B88
/* MME_SHADOW_3_C_SPATIAL_START_OFFSET */
#define MME_SHADOW_3_C_SPATIAL_START_OFFSET_V_SHIFT                  0
#define MME_SHADOW_3_C_SPATIAL_START_OFFSET_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_3_C_SPATIAL_STRIDE_0                            0xD0B8C

#define mmMME_SHADOW_3_C_SPATIAL_STRIDE_1                            0xD0B90

#define mmMME_SHADOW_3_C_SPATIAL_STRIDE_2                            0xD0B94

#define mmMME_SHADOW_3_C_SPATIAL_STRIDE_3                            0xD0B98
/* MME_SHADOW_3_C_SPATIAL_STRIDE */
#define MME_SHADOW_3_C_SPATIAL_STRIDE_V_SHIFT                        0
#define MME_SHADOW_3_C_SPATIAL_STRIDE_V_MASK                         0xFFFFFFFF

#define mmMME_SHADOW_3_C_SPATIAL_SIZE_MINUS_1                        0xD0B9C
/* MME_SHADOW_3_C_SPATIAL_SIZE_MINUS_1 */
#define MME_SHADOW_3_C_SPATIAL_SIZE_MINUS_1_V_SHIFT                  0
#define MME_SHADOW_3_C_SPATIAL_SIZE_MINUS_1_V_MASK                   0xFFFFFFFF

#define mmMME_SHADOW_3_SYNC_OBJECT_MESSAGE                           0xD0BA0
/* MME_SHADOW_3_SYNC_OBJECT_MESSAGE */
#define MME_SHADOW_3_SYNC_OBJECT_MESSAGE_SO_WRITE_VALUE_SHIFT        0
#define MME_SHADOW_3_SYNC_OBJECT_MESSAGE_SO_WRITE_VALUE_MASK         0xFFFF
#define MME_SHADOW_3_SYNC_OBJECT_MESSAGE_SO_ADDRESS_OFFSET_SHIFT     16
#define MME_SHADOW_3_SYNC_OBJECT_MESSAGE_SO_ADDRESS_OFFSET_MASK      0x7FFF0000
#define MME_SHADOW_3_SYNC_OBJECT_MESSAGE_SO_OPERATION_SHIFT          31
#define MME_SHADOW_3_SYNC_OBJECT_MESSAGE_SO_OPERATION_MASK           0x80000000

#define mmMME_SHADOW_3_E_PADDING_VALUE_A                             0xD0BA4
/* MME_SHADOW_3_E_PADDING_VALUE_A */
#define MME_SHADOW_3_E_PADDING_VALUE_A_V_SHIFT                       0
#define MME_SHADOW_3_E_PADDING_VALUE_A_V_MASK                        0xFFFF

#define mmMME_SHADOW_3_E_NUM_ITERATION_MINUS_1                       0xD0BA8
/* MME_SHADOW_3_E_NUM_ITERATION_MINUS_1 */
#define MME_SHADOW_3_E_NUM_ITERATION_MINUS_1_V_SHIFT                 0
#define MME_SHADOW_3_E_NUM_ITERATION_MINUS_1_V_MASK                  0xFFFFFFFF

#define mmMME_SHADOW_3_E_BUBBLES_PER_SPLIT                           0xD0BAC
/* MME_SHADOW_3_E_BUBBLES_PER_SPLIT */
#define MME_SHADOW_3_E_BUBBLES_PER_SPLIT_A_SHIFT                     0
#define MME_SHADOW_3_E_BUBBLES_PER_SPLIT_A_MASK                      0xFF
#define MME_SHADOW_3_E_BUBBLES_PER_SPLIT_B_SHIFT                     8
#define MME_SHADOW_3_E_BUBBLES_PER_SPLIT_B_MASK                      0xFF00
#define MME_SHADOW_3_E_BUBBLES_PER_SPLIT_CIN_SHIFT                   16
#define MME_SHADOW_3_E_BUBBLES_PER_SPLIT_CIN_MASK                    0xFF0000
#define MME_SHADOW_3_E_BUBBLES_PER_SPLIT_ID_SHIFT                    24
#define MME_SHADOW_3_E_BUBBLES_PER_SPLIT_ID_MASK                     0xFF000000

#endif /* ASIC_REG_MME_H_ */

