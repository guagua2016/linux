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

#ifndef ASIC_REG_SYNC_MNGR_H_
#define ASIC_REG_SYNC_MNGR_H_

/*
 *****************************************
 *   SYNC_MNGR (Prototype: SYNC_MNGR)
 *****************************************
 */

#define mmSYNC_MNGR_SM_SEI_MASK                                      0x110100
/* SYNC_MNGR_SM_SEI_MASK */
#define SYNC_MNGR_SM_SEI_MASK_SO_OVERFLOW_SHIFT                      0
#define SYNC_MNGR_SM_SEI_MASK_SO_OVERFLOW_MASK                       0x1
#define SYNC_MNGR_SM_SEI_MASK_MST_UNALIGN4B_SHIFT                    1
#define SYNC_MNGR_SM_SEI_MASK_MST_UNALIGN4B_MASK                     0x2
#define SYNC_MNGR_SM_SEI_MASK_MST_RSP_ERR_SHIFT                      2
#define SYNC_MNGR_SM_SEI_MASK_MST_RSP_ERR_MASK                       0x4

#define mmSYNC_MNGR_SM_SEI_CAUSE                                     0x110104
/* SYNC_MNGR_SM_SEI_CAUSE */
#define SYNC_MNGR_SM_SEI_CAUSE_CAUSE_SHIFT                           0
#define SYNC_MNGR_SM_SEI_CAUSE_CAUSE_MASK                            0x7
#define SYNC_MNGR_SM_SEI_CAUSE_LOG_SHIFT                             16
#define SYNC_MNGR_SM_SEI_CAUSE_LOG_MASK                              0xFFFF0000

#define mmSYNC_MNGR_SM_SEC_0                                         0x111000

#define mmSYNC_MNGR_SM_SEC_1                                         0x111004

#define mmSYNC_MNGR_SM_SEC_2                                         0x111008

#define mmSYNC_MNGR_SM_SEC_3                                         0x11100C

#define mmSYNC_MNGR_SM_SEC_4                                         0x111010

#define mmSYNC_MNGR_SM_SEC_5                                         0x111014

#define mmSYNC_MNGR_SM_SEC_6                                         0x111018

#define mmSYNC_MNGR_SM_SEC_7                                         0x11101C

#define mmSYNC_MNGR_SM_SEC_8                                         0x111020

#define mmSYNC_MNGR_SM_SEC_9                                         0x111024

#define mmSYNC_MNGR_SM_SEC_10                                        0x111028

#define mmSYNC_MNGR_SM_SEC_11                                        0x11102C

#define mmSYNC_MNGR_SM_SEC_12                                        0x111030

#define mmSYNC_MNGR_SM_SEC_13                                        0x111034

#define mmSYNC_MNGR_SM_SEC_14                                        0x111038

#define mmSYNC_MNGR_SM_SEC_15                                        0x11103C

#define mmSYNC_MNGR_SM_SEC_16                                        0x111040

#define mmSYNC_MNGR_SM_SEC_17                                        0x111044

#define mmSYNC_MNGR_SM_SEC_18                                        0x111048

#define mmSYNC_MNGR_SM_SEC_19                                        0x11104C

#define mmSYNC_MNGR_SM_SEC_20                                        0x111050

#define mmSYNC_MNGR_SM_SEC_21                                        0x111054

#define mmSYNC_MNGR_SM_SEC_22                                        0x111058

#define mmSYNC_MNGR_SM_SEC_23                                        0x11105C

#define mmSYNC_MNGR_SM_SEC_24                                        0x111060

#define mmSYNC_MNGR_SM_SEC_25                                        0x111064

#define mmSYNC_MNGR_SM_SEC_26                                        0x111068

#define mmSYNC_MNGR_SM_SEC_27                                        0x11106C

#define mmSYNC_MNGR_SM_SEC_28                                        0x111070

#define mmSYNC_MNGR_SM_SEC_29                                        0x111074

#define mmSYNC_MNGR_SM_SEC_30                                        0x111078

#define mmSYNC_MNGR_SM_SEC_31                                        0x11107C

#define mmSYNC_MNGR_SM_SEC_32                                        0x111080

#define mmSYNC_MNGR_SM_SEC_33                                        0x111084

#define mmSYNC_MNGR_SM_SEC_34                                        0x111088

#define mmSYNC_MNGR_SM_SEC_35                                        0x11108C

#define mmSYNC_MNGR_SM_SEC_36                                        0x111090

#define mmSYNC_MNGR_SM_SEC_37                                        0x111094

#define mmSYNC_MNGR_SM_SEC_38                                        0x111098

#define mmSYNC_MNGR_SM_SEC_39                                        0x11109C

#define mmSYNC_MNGR_SM_SEC_40                                        0x1110A0

#define mmSYNC_MNGR_SM_SEC_41                                        0x1110A4

#define mmSYNC_MNGR_SM_SEC_42                                        0x1110A8

#define mmSYNC_MNGR_SM_SEC_43                                        0x1110AC

#define mmSYNC_MNGR_SM_SEC_44                                        0x1110B0

#define mmSYNC_MNGR_SM_SEC_45                                        0x1110B4

#define mmSYNC_MNGR_SM_SEC_46                                        0x1110B8

#define mmSYNC_MNGR_SM_SEC_47                                        0x1110BC

#define mmSYNC_MNGR_SM_SEC_48                                        0x1110C0

#define mmSYNC_MNGR_SM_SEC_49                                        0x1110C4

#define mmSYNC_MNGR_SM_SEC_50                                        0x1110C8

#define mmSYNC_MNGR_SM_SEC_51                                        0x1110CC

#define mmSYNC_MNGR_SM_SEC_52                                        0x1110D0

#define mmSYNC_MNGR_SM_SEC_53                                        0x1110D4

#define mmSYNC_MNGR_SM_SEC_54                                        0x1110D8

#define mmSYNC_MNGR_SM_SEC_55                                        0x1110DC

#define mmSYNC_MNGR_SM_SEC_56                                        0x1110E0

#define mmSYNC_MNGR_SM_SEC_57                                        0x1110E4

#define mmSYNC_MNGR_SM_SEC_58                                        0x1110E8

#define mmSYNC_MNGR_SM_SEC_59                                        0x1110EC

#define mmSYNC_MNGR_SM_SEC_60                                        0x1110F0

#define mmSYNC_MNGR_SM_SEC_61                                        0x1110F4

#define mmSYNC_MNGR_SM_SEC_62                                        0x1110F8

#define mmSYNC_MNGR_SM_SEC_63                                        0x1110FC

#define mmSYNC_MNGR_SM_SEC_64                                        0x111100

#define mmSYNC_MNGR_SM_SEC_65                                        0x111104

#define mmSYNC_MNGR_SM_SEC_66                                        0x111108

#define mmSYNC_MNGR_SM_SEC_67                                        0x11110C

#define mmSYNC_MNGR_SM_SEC_68                                        0x111110

#define mmSYNC_MNGR_SM_SEC_69                                        0x111114

#define mmSYNC_MNGR_SM_SEC_70                                        0x111118

#define mmSYNC_MNGR_SM_SEC_71                                        0x11111C

#define mmSYNC_MNGR_SM_SEC_72                                        0x111120

#define mmSYNC_MNGR_SM_SEC_73                                        0x111124

#define mmSYNC_MNGR_SM_SEC_74                                        0x111128

#define mmSYNC_MNGR_SM_SEC_75                                        0x11112C

#define mmSYNC_MNGR_SM_SEC_76                                        0x111130

#define mmSYNC_MNGR_SM_SEC_77                                        0x111134

#define mmSYNC_MNGR_SM_SEC_78                                        0x111138

#define mmSYNC_MNGR_SM_SEC_79                                        0x11113C

#define mmSYNC_MNGR_SM_SEC_80                                        0x111140

#define mmSYNC_MNGR_SM_SEC_81                                        0x111144

#define mmSYNC_MNGR_SM_SEC_82                                        0x111148

#define mmSYNC_MNGR_SM_SEC_83                                        0x11114C

#define mmSYNC_MNGR_SM_SEC_84                                        0x111150

#define mmSYNC_MNGR_SM_SEC_85                                        0x111154

#define mmSYNC_MNGR_SM_SEC_86                                        0x111158

#define mmSYNC_MNGR_SM_SEC_87                                        0x11115C

#define mmSYNC_MNGR_SM_SEC_88                                        0x111160

#define mmSYNC_MNGR_SM_SEC_89                                        0x111164

#define mmSYNC_MNGR_SM_SEC_90                                        0x111168

#define mmSYNC_MNGR_SM_SEC_91                                        0x11116C

#define mmSYNC_MNGR_SM_SEC_92                                        0x111170

#define mmSYNC_MNGR_SM_SEC_93                                        0x111174

#define mmSYNC_MNGR_SM_SEC_94                                        0x111178

#define mmSYNC_MNGR_SM_SEC_95                                        0x11117C

#define mmSYNC_MNGR_SM_SEC_96                                        0x111180

#define mmSYNC_MNGR_SM_SEC_97                                        0x111184

#define mmSYNC_MNGR_SM_SEC_98                                        0x111188

#define mmSYNC_MNGR_SM_SEC_99                                        0x11118C

#define mmSYNC_MNGR_SM_SEC_100                                       0x111190

#define mmSYNC_MNGR_SM_SEC_101                                       0x111194

#define mmSYNC_MNGR_SM_SEC_102                                       0x111198

#define mmSYNC_MNGR_SM_SEC_103                                       0x11119C

#define mmSYNC_MNGR_SM_SEC_104                                       0x1111A0

#define mmSYNC_MNGR_SM_SEC_105                                       0x1111A4

#define mmSYNC_MNGR_SM_SEC_106                                       0x1111A8

#define mmSYNC_MNGR_SM_SEC_107                                       0x1111AC

#define mmSYNC_MNGR_SM_SEC_108                                       0x1111B0

#define mmSYNC_MNGR_SM_SEC_109                                       0x1111B4

#define mmSYNC_MNGR_SM_SEC_110                                       0x1111B8

#define mmSYNC_MNGR_SM_SEC_111                                       0x1111BC

#define mmSYNC_MNGR_SM_SEC_112                                       0x1111C0

#define mmSYNC_MNGR_SM_SEC_113                                       0x1111C4

#define mmSYNC_MNGR_SM_SEC_114                                       0x1111C8

#define mmSYNC_MNGR_SM_SEC_115                                       0x1111CC

#define mmSYNC_MNGR_SM_SEC_116                                       0x1111D0

#define mmSYNC_MNGR_SM_SEC_117                                       0x1111D4

#define mmSYNC_MNGR_SM_SEC_118                                       0x1111D8

#define mmSYNC_MNGR_SM_SEC_119                                       0x1111DC

#define mmSYNC_MNGR_SM_SEC_120                                       0x1111E0

#define mmSYNC_MNGR_SM_SEC_121                                       0x1111E4

#define mmSYNC_MNGR_SM_SEC_122                                       0x1111E8

#define mmSYNC_MNGR_SM_SEC_123                                       0x1111EC

#define mmSYNC_MNGR_SM_SEC_124                                       0x1111F0

#define mmSYNC_MNGR_SM_SEC_125                                       0x1111F4

#define mmSYNC_MNGR_SM_SEC_126                                       0x1111F8

#define mmSYNC_MNGR_SM_SEC_127                                       0x1111FC
/* SYNC_MNGR_SM_SEC */
#define SYNC_MNGR_SM_SEC_SEC_VEC_SHIFT                               0
#define SYNC_MNGR_SM_SEC_SEC_VEC_MASK                                0xFFFFFFFF

#define mmSYNC_MNGR_SOB_OBJ_0                                        0x112000

#define mmSYNC_MNGR_SOB_OBJ_1                                        0x112004

#define mmSYNC_MNGR_SOB_OBJ_2                                        0x112008

#define mmSYNC_MNGR_SOB_OBJ_3                                        0x11200C

#define mmSYNC_MNGR_SOB_OBJ_4                                        0x112010

#define mmSYNC_MNGR_SOB_OBJ_5                                        0x112014

#define mmSYNC_MNGR_SOB_OBJ_6                                        0x112018

#define mmSYNC_MNGR_SOB_OBJ_7                                        0x11201C

#define mmSYNC_MNGR_SOB_OBJ_8                                        0x112020

#define mmSYNC_MNGR_SOB_OBJ_9                                        0x112024

#define mmSYNC_MNGR_SOB_OBJ_10                                       0x112028

#define mmSYNC_MNGR_SOB_OBJ_11                                       0x11202C

#define mmSYNC_MNGR_SOB_OBJ_12                                       0x112030

#define mmSYNC_MNGR_SOB_OBJ_13                                       0x112034

#define mmSYNC_MNGR_SOB_OBJ_14                                       0x112038

#define mmSYNC_MNGR_SOB_OBJ_15                                       0x11203C

#define mmSYNC_MNGR_SOB_OBJ_16                                       0x112040

#define mmSYNC_MNGR_SOB_OBJ_17                                       0x112044

#define mmSYNC_MNGR_SOB_OBJ_18                                       0x112048

#define mmSYNC_MNGR_SOB_OBJ_19                                       0x11204C

#define mmSYNC_MNGR_SOB_OBJ_20                                       0x112050

#define mmSYNC_MNGR_SOB_OBJ_21                                       0x112054

#define mmSYNC_MNGR_SOB_OBJ_22                                       0x112058

#define mmSYNC_MNGR_SOB_OBJ_23                                       0x11205C

#define mmSYNC_MNGR_SOB_OBJ_24                                       0x112060

#define mmSYNC_MNGR_SOB_OBJ_25                                       0x112064

#define mmSYNC_MNGR_SOB_OBJ_26                                       0x112068

#define mmSYNC_MNGR_SOB_OBJ_27                                       0x11206C

#define mmSYNC_MNGR_SOB_OBJ_28                                       0x112070

#define mmSYNC_MNGR_SOB_OBJ_29                                       0x112074

#define mmSYNC_MNGR_SOB_OBJ_30                                       0x112078

#define mmSYNC_MNGR_SOB_OBJ_31                                       0x11207C

#define mmSYNC_MNGR_SOB_OBJ_32                                       0x112080

#define mmSYNC_MNGR_SOB_OBJ_33                                       0x112084

#define mmSYNC_MNGR_SOB_OBJ_34                                       0x112088

#define mmSYNC_MNGR_SOB_OBJ_35                                       0x11208C

#define mmSYNC_MNGR_SOB_OBJ_36                                       0x112090

#define mmSYNC_MNGR_SOB_OBJ_37                                       0x112094

#define mmSYNC_MNGR_SOB_OBJ_38                                       0x112098

#define mmSYNC_MNGR_SOB_OBJ_39                                       0x11209C

#define mmSYNC_MNGR_SOB_OBJ_40                                       0x1120A0

#define mmSYNC_MNGR_SOB_OBJ_41                                       0x1120A4

#define mmSYNC_MNGR_SOB_OBJ_42                                       0x1120A8

#define mmSYNC_MNGR_SOB_OBJ_43                                       0x1120AC

#define mmSYNC_MNGR_SOB_OBJ_44                                       0x1120B0

#define mmSYNC_MNGR_SOB_OBJ_45                                       0x1120B4

#define mmSYNC_MNGR_SOB_OBJ_46                                       0x1120B8

#define mmSYNC_MNGR_SOB_OBJ_47                                       0x1120BC

#define mmSYNC_MNGR_SOB_OBJ_48                                       0x1120C0

#define mmSYNC_MNGR_SOB_OBJ_49                                       0x1120C4

#define mmSYNC_MNGR_SOB_OBJ_50                                       0x1120C8

#define mmSYNC_MNGR_SOB_OBJ_51                                       0x1120CC

#define mmSYNC_MNGR_SOB_OBJ_52                                       0x1120D0

#define mmSYNC_MNGR_SOB_OBJ_53                                       0x1120D4

#define mmSYNC_MNGR_SOB_OBJ_54                                       0x1120D8

#define mmSYNC_MNGR_SOB_OBJ_55                                       0x1120DC

#define mmSYNC_MNGR_SOB_OBJ_56                                       0x1120E0

#define mmSYNC_MNGR_SOB_OBJ_57                                       0x1120E4

#define mmSYNC_MNGR_SOB_OBJ_58                                       0x1120E8

#define mmSYNC_MNGR_SOB_OBJ_59                                       0x1120EC

#define mmSYNC_MNGR_SOB_OBJ_60                                       0x1120F0

#define mmSYNC_MNGR_SOB_OBJ_61                                       0x1120F4

#define mmSYNC_MNGR_SOB_OBJ_62                                       0x1120F8

#define mmSYNC_MNGR_SOB_OBJ_63                                       0x1120FC

#define mmSYNC_MNGR_SOB_OBJ_64                                       0x112100

#define mmSYNC_MNGR_SOB_OBJ_65                                       0x112104

#define mmSYNC_MNGR_SOB_OBJ_66                                       0x112108

#define mmSYNC_MNGR_SOB_OBJ_67                                       0x11210C

#define mmSYNC_MNGR_SOB_OBJ_68                                       0x112110

#define mmSYNC_MNGR_SOB_OBJ_69                                       0x112114

#define mmSYNC_MNGR_SOB_OBJ_70                                       0x112118

#define mmSYNC_MNGR_SOB_OBJ_71                                       0x11211C

#define mmSYNC_MNGR_SOB_OBJ_72                                       0x112120

#define mmSYNC_MNGR_SOB_OBJ_73                                       0x112124

#define mmSYNC_MNGR_SOB_OBJ_74                                       0x112128

#define mmSYNC_MNGR_SOB_OBJ_75                                       0x11212C

#define mmSYNC_MNGR_SOB_OBJ_76                                       0x112130

#define mmSYNC_MNGR_SOB_OBJ_77                                       0x112134

#define mmSYNC_MNGR_SOB_OBJ_78                                       0x112138

#define mmSYNC_MNGR_SOB_OBJ_79                                       0x11213C

#define mmSYNC_MNGR_SOB_OBJ_80                                       0x112140

#define mmSYNC_MNGR_SOB_OBJ_81                                       0x112144

#define mmSYNC_MNGR_SOB_OBJ_82                                       0x112148

#define mmSYNC_MNGR_SOB_OBJ_83                                       0x11214C

#define mmSYNC_MNGR_SOB_OBJ_84                                       0x112150

#define mmSYNC_MNGR_SOB_OBJ_85                                       0x112154

#define mmSYNC_MNGR_SOB_OBJ_86                                       0x112158

#define mmSYNC_MNGR_SOB_OBJ_87                                       0x11215C

#define mmSYNC_MNGR_SOB_OBJ_88                                       0x112160

#define mmSYNC_MNGR_SOB_OBJ_89                                       0x112164

#define mmSYNC_MNGR_SOB_OBJ_90                                       0x112168

#define mmSYNC_MNGR_SOB_OBJ_91                                       0x11216C

#define mmSYNC_MNGR_SOB_OBJ_92                                       0x112170

#define mmSYNC_MNGR_SOB_OBJ_93                                       0x112174

#define mmSYNC_MNGR_SOB_OBJ_94                                       0x112178

#define mmSYNC_MNGR_SOB_OBJ_95                                       0x11217C

#define mmSYNC_MNGR_SOB_OBJ_96                                       0x112180

#define mmSYNC_MNGR_SOB_OBJ_97                                       0x112184

#define mmSYNC_MNGR_SOB_OBJ_98                                       0x112188

#define mmSYNC_MNGR_SOB_OBJ_99                                       0x11218C

#define mmSYNC_MNGR_SOB_OBJ_100                                      0x112190

#define mmSYNC_MNGR_SOB_OBJ_101                                      0x112194

#define mmSYNC_MNGR_SOB_OBJ_102                                      0x112198

#define mmSYNC_MNGR_SOB_OBJ_103                                      0x11219C

#define mmSYNC_MNGR_SOB_OBJ_104                                      0x1121A0

#define mmSYNC_MNGR_SOB_OBJ_105                                      0x1121A4

#define mmSYNC_MNGR_SOB_OBJ_106                                      0x1121A8

#define mmSYNC_MNGR_SOB_OBJ_107                                      0x1121AC

#define mmSYNC_MNGR_SOB_OBJ_108                                      0x1121B0

#define mmSYNC_MNGR_SOB_OBJ_109                                      0x1121B4

#define mmSYNC_MNGR_SOB_OBJ_110                                      0x1121B8

#define mmSYNC_MNGR_SOB_OBJ_111                                      0x1121BC

#define mmSYNC_MNGR_SOB_OBJ_112                                      0x1121C0

#define mmSYNC_MNGR_SOB_OBJ_113                                      0x1121C4

#define mmSYNC_MNGR_SOB_OBJ_114                                      0x1121C8

#define mmSYNC_MNGR_SOB_OBJ_115                                      0x1121CC

#define mmSYNC_MNGR_SOB_OBJ_116                                      0x1121D0

#define mmSYNC_MNGR_SOB_OBJ_117                                      0x1121D4

#define mmSYNC_MNGR_SOB_OBJ_118                                      0x1121D8

#define mmSYNC_MNGR_SOB_OBJ_119                                      0x1121DC

#define mmSYNC_MNGR_SOB_OBJ_120                                      0x1121E0

#define mmSYNC_MNGR_SOB_OBJ_121                                      0x1121E4

#define mmSYNC_MNGR_SOB_OBJ_122                                      0x1121E8

#define mmSYNC_MNGR_SOB_OBJ_123                                      0x1121EC

#define mmSYNC_MNGR_SOB_OBJ_124                                      0x1121F0

#define mmSYNC_MNGR_SOB_OBJ_125                                      0x1121F4

#define mmSYNC_MNGR_SOB_OBJ_126                                      0x1121F8

#define mmSYNC_MNGR_SOB_OBJ_127                                      0x1121FC

#define mmSYNC_MNGR_SOB_OBJ_128                                      0x112200

#define mmSYNC_MNGR_SOB_OBJ_129                                      0x112204

#define mmSYNC_MNGR_SOB_OBJ_130                                      0x112208

#define mmSYNC_MNGR_SOB_OBJ_131                                      0x11220C

#define mmSYNC_MNGR_SOB_OBJ_132                                      0x112210

#define mmSYNC_MNGR_SOB_OBJ_133                                      0x112214

#define mmSYNC_MNGR_SOB_OBJ_134                                      0x112218

#define mmSYNC_MNGR_SOB_OBJ_135                                      0x11221C

#define mmSYNC_MNGR_SOB_OBJ_136                                      0x112220

#define mmSYNC_MNGR_SOB_OBJ_137                                      0x112224

#define mmSYNC_MNGR_SOB_OBJ_138                                      0x112228

#define mmSYNC_MNGR_SOB_OBJ_139                                      0x11222C

#define mmSYNC_MNGR_SOB_OBJ_140                                      0x112230

#define mmSYNC_MNGR_SOB_OBJ_141                                      0x112234

#define mmSYNC_MNGR_SOB_OBJ_142                                      0x112238

#define mmSYNC_MNGR_SOB_OBJ_143                                      0x11223C

#define mmSYNC_MNGR_SOB_OBJ_144                                      0x112240

#define mmSYNC_MNGR_SOB_OBJ_145                                      0x112244

#define mmSYNC_MNGR_SOB_OBJ_146                                      0x112248

#define mmSYNC_MNGR_SOB_OBJ_147                                      0x11224C

#define mmSYNC_MNGR_SOB_OBJ_148                                      0x112250

#define mmSYNC_MNGR_SOB_OBJ_149                                      0x112254

#define mmSYNC_MNGR_SOB_OBJ_150                                      0x112258

#define mmSYNC_MNGR_SOB_OBJ_151                                      0x11225C

#define mmSYNC_MNGR_SOB_OBJ_152                                      0x112260

#define mmSYNC_MNGR_SOB_OBJ_153                                      0x112264

#define mmSYNC_MNGR_SOB_OBJ_154                                      0x112268

#define mmSYNC_MNGR_SOB_OBJ_155                                      0x11226C

#define mmSYNC_MNGR_SOB_OBJ_156                                      0x112270

#define mmSYNC_MNGR_SOB_OBJ_157                                      0x112274

#define mmSYNC_MNGR_SOB_OBJ_158                                      0x112278

#define mmSYNC_MNGR_SOB_OBJ_159                                      0x11227C

#define mmSYNC_MNGR_SOB_OBJ_160                                      0x112280

#define mmSYNC_MNGR_SOB_OBJ_161                                      0x112284

#define mmSYNC_MNGR_SOB_OBJ_162                                      0x112288

#define mmSYNC_MNGR_SOB_OBJ_163                                      0x11228C

#define mmSYNC_MNGR_SOB_OBJ_164                                      0x112290

#define mmSYNC_MNGR_SOB_OBJ_165                                      0x112294

#define mmSYNC_MNGR_SOB_OBJ_166                                      0x112298

#define mmSYNC_MNGR_SOB_OBJ_167                                      0x11229C

#define mmSYNC_MNGR_SOB_OBJ_168                                      0x1122A0

#define mmSYNC_MNGR_SOB_OBJ_169                                      0x1122A4

#define mmSYNC_MNGR_SOB_OBJ_170                                      0x1122A8

#define mmSYNC_MNGR_SOB_OBJ_171                                      0x1122AC

#define mmSYNC_MNGR_SOB_OBJ_172                                      0x1122B0

#define mmSYNC_MNGR_SOB_OBJ_173                                      0x1122B4

#define mmSYNC_MNGR_SOB_OBJ_174                                      0x1122B8

#define mmSYNC_MNGR_SOB_OBJ_175                                      0x1122BC

#define mmSYNC_MNGR_SOB_OBJ_176                                      0x1122C0

#define mmSYNC_MNGR_SOB_OBJ_177                                      0x1122C4

#define mmSYNC_MNGR_SOB_OBJ_178                                      0x1122C8

#define mmSYNC_MNGR_SOB_OBJ_179                                      0x1122CC

#define mmSYNC_MNGR_SOB_OBJ_180                                      0x1122D0

#define mmSYNC_MNGR_SOB_OBJ_181                                      0x1122D4

#define mmSYNC_MNGR_SOB_OBJ_182                                      0x1122D8

#define mmSYNC_MNGR_SOB_OBJ_183                                      0x1122DC

#define mmSYNC_MNGR_SOB_OBJ_184                                      0x1122E0

#define mmSYNC_MNGR_SOB_OBJ_185                                      0x1122E4

#define mmSYNC_MNGR_SOB_OBJ_186                                      0x1122E8

#define mmSYNC_MNGR_SOB_OBJ_187                                      0x1122EC

#define mmSYNC_MNGR_SOB_OBJ_188                                      0x1122F0

#define mmSYNC_MNGR_SOB_OBJ_189                                      0x1122F4

#define mmSYNC_MNGR_SOB_OBJ_190                                      0x1122F8

#define mmSYNC_MNGR_SOB_OBJ_191                                      0x1122FC

#define mmSYNC_MNGR_SOB_OBJ_192                                      0x112300

#define mmSYNC_MNGR_SOB_OBJ_193                                      0x112304

#define mmSYNC_MNGR_SOB_OBJ_194                                      0x112308

#define mmSYNC_MNGR_SOB_OBJ_195                                      0x11230C

#define mmSYNC_MNGR_SOB_OBJ_196                                      0x112310

#define mmSYNC_MNGR_SOB_OBJ_197                                      0x112314

#define mmSYNC_MNGR_SOB_OBJ_198                                      0x112318

#define mmSYNC_MNGR_SOB_OBJ_199                                      0x11231C

#define mmSYNC_MNGR_SOB_OBJ_200                                      0x112320

#define mmSYNC_MNGR_SOB_OBJ_201                                      0x112324

#define mmSYNC_MNGR_SOB_OBJ_202                                      0x112328

#define mmSYNC_MNGR_SOB_OBJ_203                                      0x11232C

#define mmSYNC_MNGR_SOB_OBJ_204                                      0x112330

#define mmSYNC_MNGR_SOB_OBJ_205                                      0x112334

#define mmSYNC_MNGR_SOB_OBJ_206                                      0x112338

#define mmSYNC_MNGR_SOB_OBJ_207                                      0x11233C

#define mmSYNC_MNGR_SOB_OBJ_208                                      0x112340

#define mmSYNC_MNGR_SOB_OBJ_209                                      0x112344

#define mmSYNC_MNGR_SOB_OBJ_210                                      0x112348

#define mmSYNC_MNGR_SOB_OBJ_211                                      0x11234C

#define mmSYNC_MNGR_SOB_OBJ_212                                      0x112350

#define mmSYNC_MNGR_SOB_OBJ_213                                      0x112354

#define mmSYNC_MNGR_SOB_OBJ_214                                      0x112358

#define mmSYNC_MNGR_SOB_OBJ_215                                      0x11235C

#define mmSYNC_MNGR_SOB_OBJ_216                                      0x112360

#define mmSYNC_MNGR_SOB_OBJ_217                                      0x112364

#define mmSYNC_MNGR_SOB_OBJ_218                                      0x112368

#define mmSYNC_MNGR_SOB_OBJ_219                                      0x11236C

#define mmSYNC_MNGR_SOB_OBJ_220                                      0x112370

#define mmSYNC_MNGR_SOB_OBJ_221                                      0x112374

#define mmSYNC_MNGR_SOB_OBJ_222                                      0x112378

#define mmSYNC_MNGR_SOB_OBJ_223                                      0x11237C

#define mmSYNC_MNGR_SOB_OBJ_224                                      0x112380

#define mmSYNC_MNGR_SOB_OBJ_225                                      0x112384

#define mmSYNC_MNGR_SOB_OBJ_226                                      0x112388

#define mmSYNC_MNGR_SOB_OBJ_227                                      0x11238C

#define mmSYNC_MNGR_SOB_OBJ_228                                      0x112390

#define mmSYNC_MNGR_SOB_OBJ_229                                      0x112394

#define mmSYNC_MNGR_SOB_OBJ_230                                      0x112398

#define mmSYNC_MNGR_SOB_OBJ_231                                      0x11239C

#define mmSYNC_MNGR_SOB_OBJ_232                                      0x1123A0

#define mmSYNC_MNGR_SOB_OBJ_233                                      0x1123A4

#define mmSYNC_MNGR_SOB_OBJ_234                                      0x1123A8

#define mmSYNC_MNGR_SOB_OBJ_235                                      0x1123AC

#define mmSYNC_MNGR_SOB_OBJ_236                                      0x1123B0

#define mmSYNC_MNGR_SOB_OBJ_237                                      0x1123B4

#define mmSYNC_MNGR_SOB_OBJ_238                                      0x1123B8

#define mmSYNC_MNGR_SOB_OBJ_239                                      0x1123BC

#define mmSYNC_MNGR_SOB_OBJ_240                                      0x1123C0

#define mmSYNC_MNGR_SOB_OBJ_241                                      0x1123C4

#define mmSYNC_MNGR_SOB_OBJ_242                                      0x1123C8

#define mmSYNC_MNGR_SOB_OBJ_243                                      0x1123CC

#define mmSYNC_MNGR_SOB_OBJ_244                                      0x1123D0

#define mmSYNC_MNGR_SOB_OBJ_245                                      0x1123D4

#define mmSYNC_MNGR_SOB_OBJ_246                                      0x1123D8

#define mmSYNC_MNGR_SOB_OBJ_247                                      0x1123DC

#define mmSYNC_MNGR_SOB_OBJ_248                                      0x1123E0

#define mmSYNC_MNGR_SOB_OBJ_249                                      0x1123E4

#define mmSYNC_MNGR_SOB_OBJ_250                                      0x1123E8

#define mmSYNC_MNGR_SOB_OBJ_251                                      0x1123EC

#define mmSYNC_MNGR_SOB_OBJ_252                                      0x1123F0

#define mmSYNC_MNGR_SOB_OBJ_253                                      0x1123F4

#define mmSYNC_MNGR_SOB_OBJ_254                                      0x1123F8

#define mmSYNC_MNGR_SOB_OBJ_255                                      0x1123FC

#define mmSYNC_MNGR_SOB_OBJ_256                                      0x112400

#define mmSYNC_MNGR_SOB_OBJ_257                                      0x112404

#define mmSYNC_MNGR_SOB_OBJ_258                                      0x112408

#define mmSYNC_MNGR_SOB_OBJ_259                                      0x11240C

#define mmSYNC_MNGR_SOB_OBJ_260                                      0x112410

#define mmSYNC_MNGR_SOB_OBJ_261                                      0x112414

#define mmSYNC_MNGR_SOB_OBJ_262                                      0x112418

#define mmSYNC_MNGR_SOB_OBJ_263                                      0x11241C

#define mmSYNC_MNGR_SOB_OBJ_264                                      0x112420

#define mmSYNC_MNGR_SOB_OBJ_265                                      0x112424

#define mmSYNC_MNGR_SOB_OBJ_266                                      0x112428

#define mmSYNC_MNGR_SOB_OBJ_267                                      0x11242C

#define mmSYNC_MNGR_SOB_OBJ_268                                      0x112430

#define mmSYNC_MNGR_SOB_OBJ_269                                      0x112434

#define mmSYNC_MNGR_SOB_OBJ_270                                      0x112438

#define mmSYNC_MNGR_SOB_OBJ_271                                      0x11243C

#define mmSYNC_MNGR_SOB_OBJ_272                                      0x112440

#define mmSYNC_MNGR_SOB_OBJ_273                                      0x112444

#define mmSYNC_MNGR_SOB_OBJ_274                                      0x112448

#define mmSYNC_MNGR_SOB_OBJ_275                                      0x11244C

#define mmSYNC_MNGR_SOB_OBJ_276                                      0x112450

#define mmSYNC_MNGR_SOB_OBJ_277                                      0x112454

#define mmSYNC_MNGR_SOB_OBJ_278                                      0x112458

#define mmSYNC_MNGR_SOB_OBJ_279                                      0x11245C

#define mmSYNC_MNGR_SOB_OBJ_280                                      0x112460

#define mmSYNC_MNGR_SOB_OBJ_281                                      0x112464

#define mmSYNC_MNGR_SOB_OBJ_282                                      0x112468

#define mmSYNC_MNGR_SOB_OBJ_283                                      0x11246C

#define mmSYNC_MNGR_SOB_OBJ_284                                      0x112470

#define mmSYNC_MNGR_SOB_OBJ_285                                      0x112474

#define mmSYNC_MNGR_SOB_OBJ_286                                      0x112478

#define mmSYNC_MNGR_SOB_OBJ_287                                      0x11247C

#define mmSYNC_MNGR_SOB_OBJ_288                                      0x112480

#define mmSYNC_MNGR_SOB_OBJ_289                                      0x112484

#define mmSYNC_MNGR_SOB_OBJ_290                                      0x112488

#define mmSYNC_MNGR_SOB_OBJ_291                                      0x11248C

#define mmSYNC_MNGR_SOB_OBJ_292                                      0x112490

#define mmSYNC_MNGR_SOB_OBJ_293                                      0x112494

#define mmSYNC_MNGR_SOB_OBJ_294                                      0x112498

#define mmSYNC_MNGR_SOB_OBJ_295                                      0x11249C

#define mmSYNC_MNGR_SOB_OBJ_296                                      0x1124A0

#define mmSYNC_MNGR_SOB_OBJ_297                                      0x1124A4

#define mmSYNC_MNGR_SOB_OBJ_298                                      0x1124A8

#define mmSYNC_MNGR_SOB_OBJ_299                                      0x1124AC

#define mmSYNC_MNGR_SOB_OBJ_300                                      0x1124B0

#define mmSYNC_MNGR_SOB_OBJ_301                                      0x1124B4

#define mmSYNC_MNGR_SOB_OBJ_302                                      0x1124B8

#define mmSYNC_MNGR_SOB_OBJ_303                                      0x1124BC

#define mmSYNC_MNGR_SOB_OBJ_304                                      0x1124C0

#define mmSYNC_MNGR_SOB_OBJ_305                                      0x1124C4

#define mmSYNC_MNGR_SOB_OBJ_306                                      0x1124C8

#define mmSYNC_MNGR_SOB_OBJ_307                                      0x1124CC

#define mmSYNC_MNGR_SOB_OBJ_308                                      0x1124D0

#define mmSYNC_MNGR_SOB_OBJ_309                                      0x1124D4

#define mmSYNC_MNGR_SOB_OBJ_310                                      0x1124D8

#define mmSYNC_MNGR_SOB_OBJ_311                                      0x1124DC

#define mmSYNC_MNGR_SOB_OBJ_312                                      0x1124E0

#define mmSYNC_MNGR_SOB_OBJ_313                                      0x1124E4

#define mmSYNC_MNGR_SOB_OBJ_314                                      0x1124E8

#define mmSYNC_MNGR_SOB_OBJ_315                                      0x1124EC

#define mmSYNC_MNGR_SOB_OBJ_316                                      0x1124F0

#define mmSYNC_MNGR_SOB_OBJ_317                                      0x1124F4

#define mmSYNC_MNGR_SOB_OBJ_318                                      0x1124F8

#define mmSYNC_MNGR_SOB_OBJ_319                                      0x1124FC

#define mmSYNC_MNGR_SOB_OBJ_320                                      0x112500

#define mmSYNC_MNGR_SOB_OBJ_321                                      0x112504

#define mmSYNC_MNGR_SOB_OBJ_322                                      0x112508

#define mmSYNC_MNGR_SOB_OBJ_323                                      0x11250C

#define mmSYNC_MNGR_SOB_OBJ_324                                      0x112510

#define mmSYNC_MNGR_SOB_OBJ_325                                      0x112514

#define mmSYNC_MNGR_SOB_OBJ_326                                      0x112518

#define mmSYNC_MNGR_SOB_OBJ_327                                      0x11251C

#define mmSYNC_MNGR_SOB_OBJ_328                                      0x112520

#define mmSYNC_MNGR_SOB_OBJ_329                                      0x112524

#define mmSYNC_MNGR_SOB_OBJ_330                                      0x112528

#define mmSYNC_MNGR_SOB_OBJ_331                                      0x11252C

#define mmSYNC_MNGR_SOB_OBJ_332                                      0x112530

#define mmSYNC_MNGR_SOB_OBJ_333                                      0x112534

#define mmSYNC_MNGR_SOB_OBJ_334                                      0x112538

#define mmSYNC_MNGR_SOB_OBJ_335                                      0x11253C

#define mmSYNC_MNGR_SOB_OBJ_336                                      0x112540

#define mmSYNC_MNGR_SOB_OBJ_337                                      0x112544

#define mmSYNC_MNGR_SOB_OBJ_338                                      0x112548

#define mmSYNC_MNGR_SOB_OBJ_339                                      0x11254C

#define mmSYNC_MNGR_SOB_OBJ_340                                      0x112550

#define mmSYNC_MNGR_SOB_OBJ_341                                      0x112554

#define mmSYNC_MNGR_SOB_OBJ_342                                      0x112558

#define mmSYNC_MNGR_SOB_OBJ_343                                      0x11255C

#define mmSYNC_MNGR_SOB_OBJ_344                                      0x112560

#define mmSYNC_MNGR_SOB_OBJ_345                                      0x112564

#define mmSYNC_MNGR_SOB_OBJ_346                                      0x112568

#define mmSYNC_MNGR_SOB_OBJ_347                                      0x11256C

#define mmSYNC_MNGR_SOB_OBJ_348                                      0x112570

#define mmSYNC_MNGR_SOB_OBJ_349                                      0x112574

#define mmSYNC_MNGR_SOB_OBJ_350                                      0x112578

#define mmSYNC_MNGR_SOB_OBJ_351                                      0x11257C

#define mmSYNC_MNGR_SOB_OBJ_352                                      0x112580

#define mmSYNC_MNGR_SOB_OBJ_353                                      0x112584

#define mmSYNC_MNGR_SOB_OBJ_354                                      0x112588

#define mmSYNC_MNGR_SOB_OBJ_355                                      0x11258C

#define mmSYNC_MNGR_SOB_OBJ_356                                      0x112590

#define mmSYNC_MNGR_SOB_OBJ_357                                      0x112594

#define mmSYNC_MNGR_SOB_OBJ_358                                      0x112598

#define mmSYNC_MNGR_SOB_OBJ_359                                      0x11259C

#define mmSYNC_MNGR_SOB_OBJ_360                                      0x1125A0

#define mmSYNC_MNGR_SOB_OBJ_361                                      0x1125A4

#define mmSYNC_MNGR_SOB_OBJ_362                                      0x1125A8

#define mmSYNC_MNGR_SOB_OBJ_363                                      0x1125AC

#define mmSYNC_MNGR_SOB_OBJ_364                                      0x1125B0

#define mmSYNC_MNGR_SOB_OBJ_365                                      0x1125B4

#define mmSYNC_MNGR_SOB_OBJ_366                                      0x1125B8

#define mmSYNC_MNGR_SOB_OBJ_367                                      0x1125BC

#define mmSYNC_MNGR_SOB_OBJ_368                                      0x1125C0

#define mmSYNC_MNGR_SOB_OBJ_369                                      0x1125C4

#define mmSYNC_MNGR_SOB_OBJ_370                                      0x1125C8

#define mmSYNC_MNGR_SOB_OBJ_371                                      0x1125CC

#define mmSYNC_MNGR_SOB_OBJ_372                                      0x1125D0

#define mmSYNC_MNGR_SOB_OBJ_373                                      0x1125D4

#define mmSYNC_MNGR_SOB_OBJ_374                                      0x1125D8

#define mmSYNC_MNGR_SOB_OBJ_375                                      0x1125DC

#define mmSYNC_MNGR_SOB_OBJ_376                                      0x1125E0

#define mmSYNC_MNGR_SOB_OBJ_377                                      0x1125E4

#define mmSYNC_MNGR_SOB_OBJ_378                                      0x1125E8

#define mmSYNC_MNGR_SOB_OBJ_379                                      0x1125EC

#define mmSYNC_MNGR_SOB_OBJ_380                                      0x1125F0

#define mmSYNC_MNGR_SOB_OBJ_381                                      0x1125F4

#define mmSYNC_MNGR_SOB_OBJ_382                                      0x1125F8

#define mmSYNC_MNGR_SOB_OBJ_383                                      0x1125FC

#define mmSYNC_MNGR_SOB_OBJ_384                                      0x112600

#define mmSYNC_MNGR_SOB_OBJ_385                                      0x112604

#define mmSYNC_MNGR_SOB_OBJ_386                                      0x112608

#define mmSYNC_MNGR_SOB_OBJ_387                                      0x11260C

#define mmSYNC_MNGR_SOB_OBJ_388                                      0x112610

#define mmSYNC_MNGR_SOB_OBJ_389                                      0x112614

#define mmSYNC_MNGR_SOB_OBJ_390                                      0x112618

#define mmSYNC_MNGR_SOB_OBJ_391                                      0x11261C

#define mmSYNC_MNGR_SOB_OBJ_392                                      0x112620

#define mmSYNC_MNGR_SOB_OBJ_393                                      0x112624

#define mmSYNC_MNGR_SOB_OBJ_394                                      0x112628

#define mmSYNC_MNGR_SOB_OBJ_395                                      0x11262C

#define mmSYNC_MNGR_SOB_OBJ_396                                      0x112630

#define mmSYNC_MNGR_SOB_OBJ_397                                      0x112634

#define mmSYNC_MNGR_SOB_OBJ_398                                      0x112638

#define mmSYNC_MNGR_SOB_OBJ_399                                      0x11263C

#define mmSYNC_MNGR_SOB_OBJ_400                                      0x112640

#define mmSYNC_MNGR_SOB_OBJ_401                                      0x112644

#define mmSYNC_MNGR_SOB_OBJ_402                                      0x112648

#define mmSYNC_MNGR_SOB_OBJ_403                                      0x11264C

#define mmSYNC_MNGR_SOB_OBJ_404                                      0x112650

#define mmSYNC_MNGR_SOB_OBJ_405                                      0x112654

#define mmSYNC_MNGR_SOB_OBJ_406                                      0x112658

#define mmSYNC_MNGR_SOB_OBJ_407                                      0x11265C

#define mmSYNC_MNGR_SOB_OBJ_408                                      0x112660

#define mmSYNC_MNGR_SOB_OBJ_409                                      0x112664

#define mmSYNC_MNGR_SOB_OBJ_410                                      0x112668

#define mmSYNC_MNGR_SOB_OBJ_411                                      0x11266C

#define mmSYNC_MNGR_SOB_OBJ_412                                      0x112670

#define mmSYNC_MNGR_SOB_OBJ_413                                      0x112674

#define mmSYNC_MNGR_SOB_OBJ_414                                      0x112678

#define mmSYNC_MNGR_SOB_OBJ_415                                      0x11267C

#define mmSYNC_MNGR_SOB_OBJ_416                                      0x112680

#define mmSYNC_MNGR_SOB_OBJ_417                                      0x112684

#define mmSYNC_MNGR_SOB_OBJ_418                                      0x112688

#define mmSYNC_MNGR_SOB_OBJ_419                                      0x11268C

#define mmSYNC_MNGR_SOB_OBJ_420                                      0x112690

#define mmSYNC_MNGR_SOB_OBJ_421                                      0x112694

#define mmSYNC_MNGR_SOB_OBJ_422                                      0x112698

#define mmSYNC_MNGR_SOB_OBJ_423                                      0x11269C

#define mmSYNC_MNGR_SOB_OBJ_424                                      0x1126A0

#define mmSYNC_MNGR_SOB_OBJ_425                                      0x1126A4

#define mmSYNC_MNGR_SOB_OBJ_426                                      0x1126A8

#define mmSYNC_MNGR_SOB_OBJ_427                                      0x1126AC

#define mmSYNC_MNGR_SOB_OBJ_428                                      0x1126B0

#define mmSYNC_MNGR_SOB_OBJ_429                                      0x1126B4

#define mmSYNC_MNGR_SOB_OBJ_430                                      0x1126B8

#define mmSYNC_MNGR_SOB_OBJ_431                                      0x1126BC

#define mmSYNC_MNGR_SOB_OBJ_432                                      0x1126C0

#define mmSYNC_MNGR_SOB_OBJ_433                                      0x1126C4

#define mmSYNC_MNGR_SOB_OBJ_434                                      0x1126C8

#define mmSYNC_MNGR_SOB_OBJ_435                                      0x1126CC

#define mmSYNC_MNGR_SOB_OBJ_436                                      0x1126D0

#define mmSYNC_MNGR_SOB_OBJ_437                                      0x1126D4

#define mmSYNC_MNGR_SOB_OBJ_438                                      0x1126D8

#define mmSYNC_MNGR_SOB_OBJ_439                                      0x1126DC

#define mmSYNC_MNGR_SOB_OBJ_440                                      0x1126E0

#define mmSYNC_MNGR_SOB_OBJ_441                                      0x1126E4

#define mmSYNC_MNGR_SOB_OBJ_442                                      0x1126E8

#define mmSYNC_MNGR_SOB_OBJ_443                                      0x1126EC

#define mmSYNC_MNGR_SOB_OBJ_444                                      0x1126F0

#define mmSYNC_MNGR_SOB_OBJ_445                                      0x1126F4

#define mmSYNC_MNGR_SOB_OBJ_446                                      0x1126F8

#define mmSYNC_MNGR_SOB_OBJ_447                                      0x1126FC

#define mmSYNC_MNGR_SOB_OBJ_448                                      0x112700

#define mmSYNC_MNGR_SOB_OBJ_449                                      0x112704

#define mmSYNC_MNGR_SOB_OBJ_450                                      0x112708

#define mmSYNC_MNGR_SOB_OBJ_451                                      0x11270C

#define mmSYNC_MNGR_SOB_OBJ_452                                      0x112710

#define mmSYNC_MNGR_SOB_OBJ_453                                      0x112714

#define mmSYNC_MNGR_SOB_OBJ_454                                      0x112718

#define mmSYNC_MNGR_SOB_OBJ_455                                      0x11271C

#define mmSYNC_MNGR_SOB_OBJ_456                                      0x112720

#define mmSYNC_MNGR_SOB_OBJ_457                                      0x112724

#define mmSYNC_MNGR_SOB_OBJ_458                                      0x112728

#define mmSYNC_MNGR_SOB_OBJ_459                                      0x11272C

#define mmSYNC_MNGR_SOB_OBJ_460                                      0x112730

#define mmSYNC_MNGR_SOB_OBJ_461                                      0x112734

#define mmSYNC_MNGR_SOB_OBJ_462                                      0x112738

#define mmSYNC_MNGR_SOB_OBJ_463                                      0x11273C

#define mmSYNC_MNGR_SOB_OBJ_464                                      0x112740

#define mmSYNC_MNGR_SOB_OBJ_465                                      0x112744

#define mmSYNC_MNGR_SOB_OBJ_466                                      0x112748

#define mmSYNC_MNGR_SOB_OBJ_467                                      0x11274C

#define mmSYNC_MNGR_SOB_OBJ_468                                      0x112750

#define mmSYNC_MNGR_SOB_OBJ_469                                      0x112754

#define mmSYNC_MNGR_SOB_OBJ_470                                      0x112758

#define mmSYNC_MNGR_SOB_OBJ_471                                      0x11275C

#define mmSYNC_MNGR_SOB_OBJ_472                                      0x112760

#define mmSYNC_MNGR_SOB_OBJ_473                                      0x112764

#define mmSYNC_MNGR_SOB_OBJ_474                                      0x112768

#define mmSYNC_MNGR_SOB_OBJ_475                                      0x11276C

#define mmSYNC_MNGR_SOB_OBJ_476                                      0x112770

#define mmSYNC_MNGR_SOB_OBJ_477                                      0x112774

#define mmSYNC_MNGR_SOB_OBJ_478                                      0x112778

#define mmSYNC_MNGR_SOB_OBJ_479                                      0x11277C

#define mmSYNC_MNGR_SOB_OBJ_480                                      0x112780

#define mmSYNC_MNGR_SOB_OBJ_481                                      0x112784

#define mmSYNC_MNGR_SOB_OBJ_482                                      0x112788

#define mmSYNC_MNGR_SOB_OBJ_483                                      0x11278C

#define mmSYNC_MNGR_SOB_OBJ_484                                      0x112790

#define mmSYNC_MNGR_SOB_OBJ_485                                      0x112794

#define mmSYNC_MNGR_SOB_OBJ_486                                      0x112798

#define mmSYNC_MNGR_SOB_OBJ_487                                      0x11279C

#define mmSYNC_MNGR_SOB_OBJ_488                                      0x1127A0

#define mmSYNC_MNGR_SOB_OBJ_489                                      0x1127A4

#define mmSYNC_MNGR_SOB_OBJ_490                                      0x1127A8

#define mmSYNC_MNGR_SOB_OBJ_491                                      0x1127AC

#define mmSYNC_MNGR_SOB_OBJ_492                                      0x1127B0

#define mmSYNC_MNGR_SOB_OBJ_493                                      0x1127B4

#define mmSYNC_MNGR_SOB_OBJ_494                                      0x1127B8

#define mmSYNC_MNGR_SOB_OBJ_495                                      0x1127BC

#define mmSYNC_MNGR_SOB_OBJ_496                                      0x1127C0

#define mmSYNC_MNGR_SOB_OBJ_497                                      0x1127C4

#define mmSYNC_MNGR_SOB_OBJ_498                                      0x1127C8

#define mmSYNC_MNGR_SOB_OBJ_499                                      0x1127CC

#define mmSYNC_MNGR_SOB_OBJ_500                                      0x1127D0

#define mmSYNC_MNGR_SOB_OBJ_501                                      0x1127D4

#define mmSYNC_MNGR_SOB_OBJ_502                                      0x1127D8

#define mmSYNC_MNGR_SOB_OBJ_503                                      0x1127DC

#define mmSYNC_MNGR_SOB_OBJ_504                                      0x1127E0

#define mmSYNC_MNGR_SOB_OBJ_505                                      0x1127E4

#define mmSYNC_MNGR_SOB_OBJ_506                                      0x1127E8

#define mmSYNC_MNGR_SOB_OBJ_507                                      0x1127EC

#define mmSYNC_MNGR_SOB_OBJ_508                                      0x1127F0

#define mmSYNC_MNGR_SOB_OBJ_509                                      0x1127F4

#define mmSYNC_MNGR_SOB_OBJ_510                                      0x1127F8

#define mmSYNC_MNGR_SOB_OBJ_511                                      0x1127FC

#define mmSYNC_MNGR_SOB_OBJ_512                                      0x112800

#define mmSYNC_MNGR_SOB_OBJ_513                                      0x112804

#define mmSYNC_MNGR_SOB_OBJ_514                                      0x112808

#define mmSYNC_MNGR_SOB_OBJ_515                                      0x11280C

#define mmSYNC_MNGR_SOB_OBJ_516                                      0x112810

#define mmSYNC_MNGR_SOB_OBJ_517                                      0x112814

#define mmSYNC_MNGR_SOB_OBJ_518                                      0x112818

#define mmSYNC_MNGR_SOB_OBJ_519                                      0x11281C

#define mmSYNC_MNGR_SOB_OBJ_520                                      0x112820

#define mmSYNC_MNGR_SOB_OBJ_521                                      0x112824

#define mmSYNC_MNGR_SOB_OBJ_522                                      0x112828

#define mmSYNC_MNGR_SOB_OBJ_523                                      0x11282C

#define mmSYNC_MNGR_SOB_OBJ_524                                      0x112830

#define mmSYNC_MNGR_SOB_OBJ_525                                      0x112834

#define mmSYNC_MNGR_SOB_OBJ_526                                      0x112838

#define mmSYNC_MNGR_SOB_OBJ_527                                      0x11283C

#define mmSYNC_MNGR_SOB_OBJ_528                                      0x112840

#define mmSYNC_MNGR_SOB_OBJ_529                                      0x112844

#define mmSYNC_MNGR_SOB_OBJ_530                                      0x112848

#define mmSYNC_MNGR_SOB_OBJ_531                                      0x11284C

#define mmSYNC_MNGR_SOB_OBJ_532                                      0x112850

#define mmSYNC_MNGR_SOB_OBJ_533                                      0x112854

#define mmSYNC_MNGR_SOB_OBJ_534                                      0x112858

#define mmSYNC_MNGR_SOB_OBJ_535                                      0x11285C

#define mmSYNC_MNGR_SOB_OBJ_536                                      0x112860

#define mmSYNC_MNGR_SOB_OBJ_537                                      0x112864

#define mmSYNC_MNGR_SOB_OBJ_538                                      0x112868

#define mmSYNC_MNGR_SOB_OBJ_539                                      0x11286C

#define mmSYNC_MNGR_SOB_OBJ_540                                      0x112870

#define mmSYNC_MNGR_SOB_OBJ_541                                      0x112874

#define mmSYNC_MNGR_SOB_OBJ_542                                      0x112878

#define mmSYNC_MNGR_SOB_OBJ_543                                      0x11287C

#define mmSYNC_MNGR_SOB_OBJ_544                                      0x112880

#define mmSYNC_MNGR_SOB_OBJ_545                                      0x112884

#define mmSYNC_MNGR_SOB_OBJ_546                                      0x112888

#define mmSYNC_MNGR_SOB_OBJ_547                                      0x11288C

#define mmSYNC_MNGR_SOB_OBJ_548                                      0x112890

#define mmSYNC_MNGR_SOB_OBJ_549                                      0x112894

#define mmSYNC_MNGR_SOB_OBJ_550                                      0x112898

#define mmSYNC_MNGR_SOB_OBJ_551                                      0x11289C

#define mmSYNC_MNGR_SOB_OBJ_552                                      0x1128A0

#define mmSYNC_MNGR_SOB_OBJ_553                                      0x1128A4

#define mmSYNC_MNGR_SOB_OBJ_554                                      0x1128A8

#define mmSYNC_MNGR_SOB_OBJ_555                                      0x1128AC

#define mmSYNC_MNGR_SOB_OBJ_556                                      0x1128B0

#define mmSYNC_MNGR_SOB_OBJ_557                                      0x1128B4

#define mmSYNC_MNGR_SOB_OBJ_558                                      0x1128B8

#define mmSYNC_MNGR_SOB_OBJ_559                                      0x1128BC

#define mmSYNC_MNGR_SOB_OBJ_560                                      0x1128C0

#define mmSYNC_MNGR_SOB_OBJ_561                                      0x1128C4

#define mmSYNC_MNGR_SOB_OBJ_562                                      0x1128C8

#define mmSYNC_MNGR_SOB_OBJ_563                                      0x1128CC

#define mmSYNC_MNGR_SOB_OBJ_564                                      0x1128D0

#define mmSYNC_MNGR_SOB_OBJ_565                                      0x1128D4

#define mmSYNC_MNGR_SOB_OBJ_566                                      0x1128D8

#define mmSYNC_MNGR_SOB_OBJ_567                                      0x1128DC

#define mmSYNC_MNGR_SOB_OBJ_568                                      0x1128E0

#define mmSYNC_MNGR_SOB_OBJ_569                                      0x1128E4

#define mmSYNC_MNGR_SOB_OBJ_570                                      0x1128E8

#define mmSYNC_MNGR_SOB_OBJ_571                                      0x1128EC

#define mmSYNC_MNGR_SOB_OBJ_572                                      0x1128F0

#define mmSYNC_MNGR_SOB_OBJ_573                                      0x1128F4

#define mmSYNC_MNGR_SOB_OBJ_574                                      0x1128F8

#define mmSYNC_MNGR_SOB_OBJ_575                                      0x1128FC

#define mmSYNC_MNGR_SOB_OBJ_576                                      0x112900

#define mmSYNC_MNGR_SOB_OBJ_577                                      0x112904

#define mmSYNC_MNGR_SOB_OBJ_578                                      0x112908

#define mmSYNC_MNGR_SOB_OBJ_579                                      0x11290C

#define mmSYNC_MNGR_SOB_OBJ_580                                      0x112910

#define mmSYNC_MNGR_SOB_OBJ_581                                      0x112914

#define mmSYNC_MNGR_SOB_OBJ_582                                      0x112918

#define mmSYNC_MNGR_SOB_OBJ_583                                      0x11291C

#define mmSYNC_MNGR_SOB_OBJ_584                                      0x112920

#define mmSYNC_MNGR_SOB_OBJ_585                                      0x112924

#define mmSYNC_MNGR_SOB_OBJ_586                                      0x112928

#define mmSYNC_MNGR_SOB_OBJ_587                                      0x11292C

#define mmSYNC_MNGR_SOB_OBJ_588                                      0x112930

#define mmSYNC_MNGR_SOB_OBJ_589                                      0x112934

#define mmSYNC_MNGR_SOB_OBJ_590                                      0x112938

#define mmSYNC_MNGR_SOB_OBJ_591                                      0x11293C

#define mmSYNC_MNGR_SOB_OBJ_592                                      0x112940

#define mmSYNC_MNGR_SOB_OBJ_593                                      0x112944

#define mmSYNC_MNGR_SOB_OBJ_594                                      0x112948

#define mmSYNC_MNGR_SOB_OBJ_595                                      0x11294C

#define mmSYNC_MNGR_SOB_OBJ_596                                      0x112950

#define mmSYNC_MNGR_SOB_OBJ_597                                      0x112954

#define mmSYNC_MNGR_SOB_OBJ_598                                      0x112958

#define mmSYNC_MNGR_SOB_OBJ_599                                      0x11295C

#define mmSYNC_MNGR_SOB_OBJ_600                                      0x112960

#define mmSYNC_MNGR_SOB_OBJ_601                                      0x112964

#define mmSYNC_MNGR_SOB_OBJ_602                                      0x112968

#define mmSYNC_MNGR_SOB_OBJ_603                                      0x11296C

#define mmSYNC_MNGR_SOB_OBJ_604                                      0x112970

#define mmSYNC_MNGR_SOB_OBJ_605                                      0x112974

#define mmSYNC_MNGR_SOB_OBJ_606                                      0x112978

#define mmSYNC_MNGR_SOB_OBJ_607                                      0x11297C

#define mmSYNC_MNGR_SOB_OBJ_608                                      0x112980

#define mmSYNC_MNGR_SOB_OBJ_609                                      0x112984

#define mmSYNC_MNGR_SOB_OBJ_610                                      0x112988

#define mmSYNC_MNGR_SOB_OBJ_611                                      0x11298C

#define mmSYNC_MNGR_SOB_OBJ_612                                      0x112990

#define mmSYNC_MNGR_SOB_OBJ_613                                      0x112994

#define mmSYNC_MNGR_SOB_OBJ_614                                      0x112998

#define mmSYNC_MNGR_SOB_OBJ_615                                      0x11299C

#define mmSYNC_MNGR_SOB_OBJ_616                                      0x1129A0

#define mmSYNC_MNGR_SOB_OBJ_617                                      0x1129A4

#define mmSYNC_MNGR_SOB_OBJ_618                                      0x1129A8

#define mmSYNC_MNGR_SOB_OBJ_619                                      0x1129AC

#define mmSYNC_MNGR_SOB_OBJ_620                                      0x1129B0

#define mmSYNC_MNGR_SOB_OBJ_621                                      0x1129B4

#define mmSYNC_MNGR_SOB_OBJ_622                                      0x1129B8

#define mmSYNC_MNGR_SOB_OBJ_623                                      0x1129BC

#define mmSYNC_MNGR_SOB_OBJ_624                                      0x1129C0

#define mmSYNC_MNGR_SOB_OBJ_625                                      0x1129C4

#define mmSYNC_MNGR_SOB_OBJ_626                                      0x1129C8

#define mmSYNC_MNGR_SOB_OBJ_627                                      0x1129CC

#define mmSYNC_MNGR_SOB_OBJ_628                                      0x1129D0

#define mmSYNC_MNGR_SOB_OBJ_629                                      0x1129D4

#define mmSYNC_MNGR_SOB_OBJ_630                                      0x1129D8

#define mmSYNC_MNGR_SOB_OBJ_631                                      0x1129DC

#define mmSYNC_MNGR_SOB_OBJ_632                                      0x1129E0

#define mmSYNC_MNGR_SOB_OBJ_633                                      0x1129E4

#define mmSYNC_MNGR_SOB_OBJ_634                                      0x1129E8

#define mmSYNC_MNGR_SOB_OBJ_635                                      0x1129EC

#define mmSYNC_MNGR_SOB_OBJ_636                                      0x1129F0

#define mmSYNC_MNGR_SOB_OBJ_637                                      0x1129F4

#define mmSYNC_MNGR_SOB_OBJ_638                                      0x1129F8

#define mmSYNC_MNGR_SOB_OBJ_639                                      0x1129FC

#define mmSYNC_MNGR_SOB_OBJ_640                                      0x112A00

#define mmSYNC_MNGR_SOB_OBJ_641                                      0x112A04

#define mmSYNC_MNGR_SOB_OBJ_642                                      0x112A08

#define mmSYNC_MNGR_SOB_OBJ_643                                      0x112A0C

#define mmSYNC_MNGR_SOB_OBJ_644                                      0x112A10

#define mmSYNC_MNGR_SOB_OBJ_645                                      0x112A14

#define mmSYNC_MNGR_SOB_OBJ_646                                      0x112A18

#define mmSYNC_MNGR_SOB_OBJ_647                                      0x112A1C

#define mmSYNC_MNGR_SOB_OBJ_648                                      0x112A20

#define mmSYNC_MNGR_SOB_OBJ_649                                      0x112A24

#define mmSYNC_MNGR_SOB_OBJ_650                                      0x112A28

#define mmSYNC_MNGR_SOB_OBJ_651                                      0x112A2C

#define mmSYNC_MNGR_SOB_OBJ_652                                      0x112A30

#define mmSYNC_MNGR_SOB_OBJ_653                                      0x112A34

#define mmSYNC_MNGR_SOB_OBJ_654                                      0x112A38

#define mmSYNC_MNGR_SOB_OBJ_655                                      0x112A3C

#define mmSYNC_MNGR_SOB_OBJ_656                                      0x112A40

#define mmSYNC_MNGR_SOB_OBJ_657                                      0x112A44

#define mmSYNC_MNGR_SOB_OBJ_658                                      0x112A48

#define mmSYNC_MNGR_SOB_OBJ_659                                      0x112A4C

#define mmSYNC_MNGR_SOB_OBJ_660                                      0x112A50

#define mmSYNC_MNGR_SOB_OBJ_661                                      0x112A54

#define mmSYNC_MNGR_SOB_OBJ_662                                      0x112A58

#define mmSYNC_MNGR_SOB_OBJ_663                                      0x112A5C

#define mmSYNC_MNGR_SOB_OBJ_664                                      0x112A60

#define mmSYNC_MNGR_SOB_OBJ_665                                      0x112A64

#define mmSYNC_MNGR_SOB_OBJ_666                                      0x112A68

#define mmSYNC_MNGR_SOB_OBJ_667                                      0x112A6C

#define mmSYNC_MNGR_SOB_OBJ_668                                      0x112A70

#define mmSYNC_MNGR_SOB_OBJ_669                                      0x112A74

#define mmSYNC_MNGR_SOB_OBJ_670                                      0x112A78

#define mmSYNC_MNGR_SOB_OBJ_671                                      0x112A7C

#define mmSYNC_MNGR_SOB_OBJ_672                                      0x112A80

#define mmSYNC_MNGR_SOB_OBJ_673                                      0x112A84

#define mmSYNC_MNGR_SOB_OBJ_674                                      0x112A88

#define mmSYNC_MNGR_SOB_OBJ_675                                      0x112A8C

#define mmSYNC_MNGR_SOB_OBJ_676                                      0x112A90

#define mmSYNC_MNGR_SOB_OBJ_677                                      0x112A94

#define mmSYNC_MNGR_SOB_OBJ_678                                      0x112A98

#define mmSYNC_MNGR_SOB_OBJ_679                                      0x112A9C

#define mmSYNC_MNGR_SOB_OBJ_680                                      0x112AA0

#define mmSYNC_MNGR_SOB_OBJ_681                                      0x112AA4

#define mmSYNC_MNGR_SOB_OBJ_682                                      0x112AA8

#define mmSYNC_MNGR_SOB_OBJ_683                                      0x112AAC

#define mmSYNC_MNGR_SOB_OBJ_684                                      0x112AB0

#define mmSYNC_MNGR_SOB_OBJ_685                                      0x112AB4

#define mmSYNC_MNGR_SOB_OBJ_686                                      0x112AB8

#define mmSYNC_MNGR_SOB_OBJ_687                                      0x112ABC

#define mmSYNC_MNGR_SOB_OBJ_688                                      0x112AC0

#define mmSYNC_MNGR_SOB_OBJ_689                                      0x112AC4

#define mmSYNC_MNGR_SOB_OBJ_690                                      0x112AC8

#define mmSYNC_MNGR_SOB_OBJ_691                                      0x112ACC

#define mmSYNC_MNGR_SOB_OBJ_692                                      0x112AD0

#define mmSYNC_MNGR_SOB_OBJ_693                                      0x112AD4

#define mmSYNC_MNGR_SOB_OBJ_694                                      0x112AD8

#define mmSYNC_MNGR_SOB_OBJ_695                                      0x112ADC

#define mmSYNC_MNGR_SOB_OBJ_696                                      0x112AE0

#define mmSYNC_MNGR_SOB_OBJ_697                                      0x112AE4

#define mmSYNC_MNGR_SOB_OBJ_698                                      0x112AE8

#define mmSYNC_MNGR_SOB_OBJ_699                                      0x112AEC

#define mmSYNC_MNGR_SOB_OBJ_700                                      0x112AF0

#define mmSYNC_MNGR_SOB_OBJ_701                                      0x112AF4

#define mmSYNC_MNGR_SOB_OBJ_702                                      0x112AF8

#define mmSYNC_MNGR_SOB_OBJ_703                                      0x112AFC

#define mmSYNC_MNGR_SOB_OBJ_704                                      0x112B00

#define mmSYNC_MNGR_SOB_OBJ_705                                      0x112B04

#define mmSYNC_MNGR_SOB_OBJ_706                                      0x112B08

#define mmSYNC_MNGR_SOB_OBJ_707                                      0x112B0C

#define mmSYNC_MNGR_SOB_OBJ_708                                      0x112B10

#define mmSYNC_MNGR_SOB_OBJ_709                                      0x112B14

#define mmSYNC_MNGR_SOB_OBJ_710                                      0x112B18

#define mmSYNC_MNGR_SOB_OBJ_711                                      0x112B1C

#define mmSYNC_MNGR_SOB_OBJ_712                                      0x112B20

#define mmSYNC_MNGR_SOB_OBJ_713                                      0x112B24

#define mmSYNC_MNGR_SOB_OBJ_714                                      0x112B28

#define mmSYNC_MNGR_SOB_OBJ_715                                      0x112B2C

#define mmSYNC_MNGR_SOB_OBJ_716                                      0x112B30

#define mmSYNC_MNGR_SOB_OBJ_717                                      0x112B34

#define mmSYNC_MNGR_SOB_OBJ_718                                      0x112B38

#define mmSYNC_MNGR_SOB_OBJ_719                                      0x112B3C

#define mmSYNC_MNGR_SOB_OBJ_720                                      0x112B40

#define mmSYNC_MNGR_SOB_OBJ_721                                      0x112B44

#define mmSYNC_MNGR_SOB_OBJ_722                                      0x112B48

#define mmSYNC_MNGR_SOB_OBJ_723                                      0x112B4C

#define mmSYNC_MNGR_SOB_OBJ_724                                      0x112B50

#define mmSYNC_MNGR_SOB_OBJ_725                                      0x112B54

#define mmSYNC_MNGR_SOB_OBJ_726                                      0x112B58

#define mmSYNC_MNGR_SOB_OBJ_727                                      0x112B5C

#define mmSYNC_MNGR_SOB_OBJ_728                                      0x112B60

#define mmSYNC_MNGR_SOB_OBJ_729                                      0x112B64

#define mmSYNC_MNGR_SOB_OBJ_730                                      0x112B68

#define mmSYNC_MNGR_SOB_OBJ_731                                      0x112B6C

#define mmSYNC_MNGR_SOB_OBJ_732                                      0x112B70

#define mmSYNC_MNGR_SOB_OBJ_733                                      0x112B74

#define mmSYNC_MNGR_SOB_OBJ_734                                      0x112B78

#define mmSYNC_MNGR_SOB_OBJ_735                                      0x112B7C

#define mmSYNC_MNGR_SOB_OBJ_736                                      0x112B80

#define mmSYNC_MNGR_SOB_OBJ_737                                      0x112B84

#define mmSYNC_MNGR_SOB_OBJ_738                                      0x112B88

#define mmSYNC_MNGR_SOB_OBJ_739                                      0x112B8C

#define mmSYNC_MNGR_SOB_OBJ_740                                      0x112B90

#define mmSYNC_MNGR_SOB_OBJ_741                                      0x112B94

#define mmSYNC_MNGR_SOB_OBJ_742                                      0x112B98

#define mmSYNC_MNGR_SOB_OBJ_743                                      0x112B9C

#define mmSYNC_MNGR_SOB_OBJ_744                                      0x112BA0

#define mmSYNC_MNGR_SOB_OBJ_745                                      0x112BA4

#define mmSYNC_MNGR_SOB_OBJ_746                                      0x112BA8

#define mmSYNC_MNGR_SOB_OBJ_747                                      0x112BAC

#define mmSYNC_MNGR_SOB_OBJ_748                                      0x112BB0

#define mmSYNC_MNGR_SOB_OBJ_749                                      0x112BB4

#define mmSYNC_MNGR_SOB_OBJ_750                                      0x112BB8

#define mmSYNC_MNGR_SOB_OBJ_751                                      0x112BBC

#define mmSYNC_MNGR_SOB_OBJ_752                                      0x112BC0

#define mmSYNC_MNGR_SOB_OBJ_753                                      0x112BC4

#define mmSYNC_MNGR_SOB_OBJ_754                                      0x112BC8

#define mmSYNC_MNGR_SOB_OBJ_755                                      0x112BCC

#define mmSYNC_MNGR_SOB_OBJ_756                                      0x112BD0

#define mmSYNC_MNGR_SOB_OBJ_757                                      0x112BD4

#define mmSYNC_MNGR_SOB_OBJ_758                                      0x112BD8

#define mmSYNC_MNGR_SOB_OBJ_759                                      0x112BDC

#define mmSYNC_MNGR_SOB_OBJ_760                                      0x112BE0

#define mmSYNC_MNGR_SOB_OBJ_761                                      0x112BE4

#define mmSYNC_MNGR_SOB_OBJ_762                                      0x112BE8

#define mmSYNC_MNGR_SOB_OBJ_763                                      0x112BEC

#define mmSYNC_MNGR_SOB_OBJ_764                                      0x112BF0

#define mmSYNC_MNGR_SOB_OBJ_765                                      0x112BF4

#define mmSYNC_MNGR_SOB_OBJ_766                                      0x112BF8

#define mmSYNC_MNGR_SOB_OBJ_767                                      0x112BFC

#define mmSYNC_MNGR_SOB_OBJ_768                                      0x112C00

#define mmSYNC_MNGR_SOB_OBJ_769                                      0x112C04

#define mmSYNC_MNGR_SOB_OBJ_770                                      0x112C08

#define mmSYNC_MNGR_SOB_OBJ_771                                      0x112C0C

#define mmSYNC_MNGR_SOB_OBJ_772                                      0x112C10

#define mmSYNC_MNGR_SOB_OBJ_773                                      0x112C14

#define mmSYNC_MNGR_SOB_OBJ_774                                      0x112C18

#define mmSYNC_MNGR_SOB_OBJ_775                                      0x112C1C

#define mmSYNC_MNGR_SOB_OBJ_776                                      0x112C20

#define mmSYNC_MNGR_SOB_OBJ_777                                      0x112C24

#define mmSYNC_MNGR_SOB_OBJ_778                                      0x112C28

#define mmSYNC_MNGR_SOB_OBJ_779                                      0x112C2C

#define mmSYNC_MNGR_SOB_OBJ_780                                      0x112C30

#define mmSYNC_MNGR_SOB_OBJ_781                                      0x112C34

#define mmSYNC_MNGR_SOB_OBJ_782                                      0x112C38

#define mmSYNC_MNGR_SOB_OBJ_783                                      0x112C3C

#define mmSYNC_MNGR_SOB_OBJ_784                                      0x112C40

#define mmSYNC_MNGR_SOB_OBJ_785                                      0x112C44

#define mmSYNC_MNGR_SOB_OBJ_786                                      0x112C48

#define mmSYNC_MNGR_SOB_OBJ_787                                      0x112C4C

#define mmSYNC_MNGR_SOB_OBJ_788                                      0x112C50

#define mmSYNC_MNGR_SOB_OBJ_789                                      0x112C54

#define mmSYNC_MNGR_SOB_OBJ_790                                      0x112C58

#define mmSYNC_MNGR_SOB_OBJ_791                                      0x112C5C

#define mmSYNC_MNGR_SOB_OBJ_792                                      0x112C60

#define mmSYNC_MNGR_SOB_OBJ_793                                      0x112C64

#define mmSYNC_MNGR_SOB_OBJ_794                                      0x112C68

#define mmSYNC_MNGR_SOB_OBJ_795                                      0x112C6C

#define mmSYNC_MNGR_SOB_OBJ_796                                      0x112C70

#define mmSYNC_MNGR_SOB_OBJ_797                                      0x112C74

#define mmSYNC_MNGR_SOB_OBJ_798                                      0x112C78

#define mmSYNC_MNGR_SOB_OBJ_799                                      0x112C7C

#define mmSYNC_MNGR_SOB_OBJ_800                                      0x112C80

#define mmSYNC_MNGR_SOB_OBJ_801                                      0x112C84

#define mmSYNC_MNGR_SOB_OBJ_802                                      0x112C88

#define mmSYNC_MNGR_SOB_OBJ_803                                      0x112C8C

#define mmSYNC_MNGR_SOB_OBJ_804                                      0x112C90

#define mmSYNC_MNGR_SOB_OBJ_805                                      0x112C94

#define mmSYNC_MNGR_SOB_OBJ_806                                      0x112C98

#define mmSYNC_MNGR_SOB_OBJ_807                                      0x112C9C

#define mmSYNC_MNGR_SOB_OBJ_808                                      0x112CA0

#define mmSYNC_MNGR_SOB_OBJ_809                                      0x112CA4

#define mmSYNC_MNGR_SOB_OBJ_810                                      0x112CA8

#define mmSYNC_MNGR_SOB_OBJ_811                                      0x112CAC

#define mmSYNC_MNGR_SOB_OBJ_812                                      0x112CB0

#define mmSYNC_MNGR_SOB_OBJ_813                                      0x112CB4

#define mmSYNC_MNGR_SOB_OBJ_814                                      0x112CB8

#define mmSYNC_MNGR_SOB_OBJ_815                                      0x112CBC

#define mmSYNC_MNGR_SOB_OBJ_816                                      0x112CC0

#define mmSYNC_MNGR_SOB_OBJ_817                                      0x112CC4

#define mmSYNC_MNGR_SOB_OBJ_818                                      0x112CC8

#define mmSYNC_MNGR_SOB_OBJ_819                                      0x112CCC

#define mmSYNC_MNGR_SOB_OBJ_820                                      0x112CD0

#define mmSYNC_MNGR_SOB_OBJ_821                                      0x112CD4

#define mmSYNC_MNGR_SOB_OBJ_822                                      0x112CD8

#define mmSYNC_MNGR_SOB_OBJ_823                                      0x112CDC

#define mmSYNC_MNGR_SOB_OBJ_824                                      0x112CE0

#define mmSYNC_MNGR_SOB_OBJ_825                                      0x112CE4

#define mmSYNC_MNGR_SOB_OBJ_826                                      0x112CE8

#define mmSYNC_MNGR_SOB_OBJ_827                                      0x112CEC

#define mmSYNC_MNGR_SOB_OBJ_828                                      0x112CF0

#define mmSYNC_MNGR_SOB_OBJ_829                                      0x112CF4

#define mmSYNC_MNGR_SOB_OBJ_830                                      0x112CF8

#define mmSYNC_MNGR_SOB_OBJ_831                                      0x112CFC

#define mmSYNC_MNGR_SOB_OBJ_832                                      0x112D00

#define mmSYNC_MNGR_SOB_OBJ_833                                      0x112D04

#define mmSYNC_MNGR_SOB_OBJ_834                                      0x112D08

#define mmSYNC_MNGR_SOB_OBJ_835                                      0x112D0C

#define mmSYNC_MNGR_SOB_OBJ_836                                      0x112D10

#define mmSYNC_MNGR_SOB_OBJ_837                                      0x112D14

#define mmSYNC_MNGR_SOB_OBJ_838                                      0x112D18

#define mmSYNC_MNGR_SOB_OBJ_839                                      0x112D1C

#define mmSYNC_MNGR_SOB_OBJ_840                                      0x112D20

#define mmSYNC_MNGR_SOB_OBJ_841                                      0x112D24

#define mmSYNC_MNGR_SOB_OBJ_842                                      0x112D28

#define mmSYNC_MNGR_SOB_OBJ_843                                      0x112D2C

#define mmSYNC_MNGR_SOB_OBJ_844                                      0x112D30

#define mmSYNC_MNGR_SOB_OBJ_845                                      0x112D34

#define mmSYNC_MNGR_SOB_OBJ_846                                      0x112D38

#define mmSYNC_MNGR_SOB_OBJ_847                                      0x112D3C

#define mmSYNC_MNGR_SOB_OBJ_848                                      0x112D40

#define mmSYNC_MNGR_SOB_OBJ_849                                      0x112D44

#define mmSYNC_MNGR_SOB_OBJ_850                                      0x112D48

#define mmSYNC_MNGR_SOB_OBJ_851                                      0x112D4C

#define mmSYNC_MNGR_SOB_OBJ_852                                      0x112D50

#define mmSYNC_MNGR_SOB_OBJ_853                                      0x112D54

#define mmSYNC_MNGR_SOB_OBJ_854                                      0x112D58

#define mmSYNC_MNGR_SOB_OBJ_855                                      0x112D5C

#define mmSYNC_MNGR_SOB_OBJ_856                                      0x112D60

#define mmSYNC_MNGR_SOB_OBJ_857                                      0x112D64

#define mmSYNC_MNGR_SOB_OBJ_858                                      0x112D68

#define mmSYNC_MNGR_SOB_OBJ_859                                      0x112D6C

#define mmSYNC_MNGR_SOB_OBJ_860                                      0x112D70

#define mmSYNC_MNGR_SOB_OBJ_861                                      0x112D74

#define mmSYNC_MNGR_SOB_OBJ_862                                      0x112D78

#define mmSYNC_MNGR_SOB_OBJ_863                                      0x112D7C

#define mmSYNC_MNGR_SOB_OBJ_864                                      0x112D80

#define mmSYNC_MNGR_SOB_OBJ_865                                      0x112D84

#define mmSYNC_MNGR_SOB_OBJ_866                                      0x112D88

#define mmSYNC_MNGR_SOB_OBJ_867                                      0x112D8C

#define mmSYNC_MNGR_SOB_OBJ_868                                      0x112D90

#define mmSYNC_MNGR_SOB_OBJ_869                                      0x112D94

#define mmSYNC_MNGR_SOB_OBJ_870                                      0x112D98

#define mmSYNC_MNGR_SOB_OBJ_871                                      0x112D9C

#define mmSYNC_MNGR_SOB_OBJ_872                                      0x112DA0

#define mmSYNC_MNGR_SOB_OBJ_873                                      0x112DA4

#define mmSYNC_MNGR_SOB_OBJ_874                                      0x112DA8

#define mmSYNC_MNGR_SOB_OBJ_875                                      0x112DAC

#define mmSYNC_MNGR_SOB_OBJ_876                                      0x112DB0

#define mmSYNC_MNGR_SOB_OBJ_877                                      0x112DB4

#define mmSYNC_MNGR_SOB_OBJ_878                                      0x112DB8

#define mmSYNC_MNGR_SOB_OBJ_879                                      0x112DBC

#define mmSYNC_MNGR_SOB_OBJ_880                                      0x112DC0

#define mmSYNC_MNGR_SOB_OBJ_881                                      0x112DC4

#define mmSYNC_MNGR_SOB_OBJ_882                                      0x112DC8

#define mmSYNC_MNGR_SOB_OBJ_883                                      0x112DCC

#define mmSYNC_MNGR_SOB_OBJ_884                                      0x112DD0

#define mmSYNC_MNGR_SOB_OBJ_885                                      0x112DD4

#define mmSYNC_MNGR_SOB_OBJ_886                                      0x112DD8

#define mmSYNC_MNGR_SOB_OBJ_887                                      0x112DDC

#define mmSYNC_MNGR_SOB_OBJ_888                                      0x112DE0

#define mmSYNC_MNGR_SOB_OBJ_889                                      0x112DE4

#define mmSYNC_MNGR_SOB_OBJ_890                                      0x112DE8

#define mmSYNC_MNGR_SOB_OBJ_891                                      0x112DEC

#define mmSYNC_MNGR_SOB_OBJ_892                                      0x112DF0

#define mmSYNC_MNGR_SOB_OBJ_893                                      0x112DF4

#define mmSYNC_MNGR_SOB_OBJ_894                                      0x112DF8

#define mmSYNC_MNGR_SOB_OBJ_895                                      0x112DFC

#define mmSYNC_MNGR_SOB_OBJ_896                                      0x112E00

#define mmSYNC_MNGR_SOB_OBJ_897                                      0x112E04

#define mmSYNC_MNGR_SOB_OBJ_898                                      0x112E08

#define mmSYNC_MNGR_SOB_OBJ_899                                      0x112E0C

#define mmSYNC_MNGR_SOB_OBJ_900                                      0x112E10

#define mmSYNC_MNGR_SOB_OBJ_901                                      0x112E14

#define mmSYNC_MNGR_SOB_OBJ_902                                      0x112E18

#define mmSYNC_MNGR_SOB_OBJ_903                                      0x112E1C

#define mmSYNC_MNGR_SOB_OBJ_904                                      0x112E20

#define mmSYNC_MNGR_SOB_OBJ_905                                      0x112E24

#define mmSYNC_MNGR_SOB_OBJ_906                                      0x112E28

#define mmSYNC_MNGR_SOB_OBJ_907                                      0x112E2C

#define mmSYNC_MNGR_SOB_OBJ_908                                      0x112E30

#define mmSYNC_MNGR_SOB_OBJ_909                                      0x112E34

#define mmSYNC_MNGR_SOB_OBJ_910                                      0x112E38

#define mmSYNC_MNGR_SOB_OBJ_911                                      0x112E3C

#define mmSYNC_MNGR_SOB_OBJ_912                                      0x112E40

#define mmSYNC_MNGR_SOB_OBJ_913                                      0x112E44

#define mmSYNC_MNGR_SOB_OBJ_914                                      0x112E48

#define mmSYNC_MNGR_SOB_OBJ_915                                      0x112E4C

#define mmSYNC_MNGR_SOB_OBJ_916                                      0x112E50

#define mmSYNC_MNGR_SOB_OBJ_917                                      0x112E54

#define mmSYNC_MNGR_SOB_OBJ_918                                      0x112E58

#define mmSYNC_MNGR_SOB_OBJ_919                                      0x112E5C

#define mmSYNC_MNGR_SOB_OBJ_920                                      0x112E60

#define mmSYNC_MNGR_SOB_OBJ_921                                      0x112E64

#define mmSYNC_MNGR_SOB_OBJ_922                                      0x112E68

#define mmSYNC_MNGR_SOB_OBJ_923                                      0x112E6C

#define mmSYNC_MNGR_SOB_OBJ_924                                      0x112E70

#define mmSYNC_MNGR_SOB_OBJ_925                                      0x112E74

#define mmSYNC_MNGR_SOB_OBJ_926                                      0x112E78

#define mmSYNC_MNGR_SOB_OBJ_927                                      0x112E7C

#define mmSYNC_MNGR_SOB_OBJ_928                                      0x112E80

#define mmSYNC_MNGR_SOB_OBJ_929                                      0x112E84

#define mmSYNC_MNGR_SOB_OBJ_930                                      0x112E88

#define mmSYNC_MNGR_SOB_OBJ_931                                      0x112E8C

#define mmSYNC_MNGR_SOB_OBJ_932                                      0x112E90

#define mmSYNC_MNGR_SOB_OBJ_933                                      0x112E94

#define mmSYNC_MNGR_SOB_OBJ_934                                      0x112E98

#define mmSYNC_MNGR_SOB_OBJ_935                                      0x112E9C

#define mmSYNC_MNGR_SOB_OBJ_936                                      0x112EA0

#define mmSYNC_MNGR_SOB_OBJ_937                                      0x112EA4

#define mmSYNC_MNGR_SOB_OBJ_938                                      0x112EA8

#define mmSYNC_MNGR_SOB_OBJ_939                                      0x112EAC

#define mmSYNC_MNGR_SOB_OBJ_940                                      0x112EB0

#define mmSYNC_MNGR_SOB_OBJ_941                                      0x112EB4

#define mmSYNC_MNGR_SOB_OBJ_942                                      0x112EB8

#define mmSYNC_MNGR_SOB_OBJ_943                                      0x112EBC

#define mmSYNC_MNGR_SOB_OBJ_944                                      0x112EC0

#define mmSYNC_MNGR_SOB_OBJ_945                                      0x112EC4

#define mmSYNC_MNGR_SOB_OBJ_946                                      0x112EC8

#define mmSYNC_MNGR_SOB_OBJ_947                                      0x112ECC

#define mmSYNC_MNGR_SOB_OBJ_948                                      0x112ED0

#define mmSYNC_MNGR_SOB_OBJ_949                                      0x112ED4

#define mmSYNC_MNGR_SOB_OBJ_950                                      0x112ED8

#define mmSYNC_MNGR_SOB_OBJ_951                                      0x112EDC

#define mmSYNC_MNGR_SOB_OBJ_952                                      0x112EE0

#define mmSYNC_MNGR_SOB_OBJ_953                                      0x112EE4

#define mmSYNC_MNGR_SOB_OBJ_954                                      0x112EE8

#define mmSYNC_MNGR_SOB_OBJ_955                                      0x112EEC

#define mmSYNC_MNGR_SOB_OBJ_956                                      0x112EF0

#define mmSYNC_MNGR_SOB_OBJ_957                                      0x112EF4

#define mmSYNC_MNGR_SOB_OBJ_958                                      0x112EF8

#define mmSYNC_MNGR_SOB_OBJ_959                                      0x112EFC

#define mmSYNC_MNGR_SOB_OBJ_960                                      0x112F00

#define mmSYNC_MNGR_SOB_OBJ_961                                      0x112F04

#define mmSYNC_MNGR_SOB_OBJ_962                                      0x112F08

#define mmSYNC_MNGR_SOB_OBJ_963                                      0x112F0C

#define mmSYNC_MNGR_SOB_OBJ_964                                      0x112F10

#define mmSYNC_MNGR_SOB_OBJ_965                                      0x112F14

#define mmSYNC_MNGR_SOB_OBJ_966                                      0x112F18

#define mmSYNC_MNGR_SOB_OBJ_967                                      0x112F1C

#define mmSYNC_MNGR_SOB_OBJ_968                                      0x112F20

#define mmSYNC_MNGR_SOB_OBJ_969                                      0x112F24

#define mmSYNC_MNGR_SOB_OBJ_970                                      0x112F28

#define mmSYNC_MNGR_SOB_OBJ_971                                      0x112F2C

#define mmSYNC_MNGR_SOB_OBJ_972                                      0x112F30

#define mmSYNC_MNGR_SOB_OBJ_973                                      0x112F34

#define mmSYNC_MNGR_SOB_OBJ_974                                      0x112F38

#define mmSYNC_MNGR_SOB_OBJ_975                                      0x112F3C

#define mmSYNC_MNGR_SOB_OBJ_976                                      0x112F40

#define mmSYNC_MNGR_SOB_OBJ_977                                      0x112F44

#define mmSYNC_MNGR_SOB_OBJ_978                                      0x112F48

#define mmSYNC_MNGR_SOB_OBJ_979                                      0x112F4C

#define mmSYNC_MNGR_SOB_OBJ_980                                      0x112F50

#define mmSYNC_MNGR_SOB_OBJ_981                                      0x112F54

#define mmSYNC_MNGR_SOB_OBJ_982                                      0x112F58

#define mmSYNC_MNGR_SOB_OBJ_983                                      0x112F5C

#define mmSYNC_MNGR_SOB_OBJ_984                                      0x112F60

#define mmSYNC_MNGR_SOB_OBJ_985                                      0x112F64

#define mmSYNC_MNGR_SOB_OBJ_986                                      0x112F68

#define mmSYNC_MNGR_SOB_OBJ_987                                      0x112F6C

#define mmSYNC_MNGR_SOB_OBJ_988                                      0x112F70

#define mmSYNC_MNGR_SOB_OBJ_989                                      0x112F74

#define mmSYNC_MNGR_SOB_OBJ_990                                      0x112F78

#define mmSYNC_MNGR_SOB_OBJ_991                                      0x112F7C

#define mmSYNC_MNGR_SOB_OBJ_992                                      0x112F80

#define mmSYNC_MNGR_SOB_OBJ_993                                      0x112F84

#define mmSYNC_MNGR_SOB_OBJ_994                                      0x112F88

#define mmSYNC_MNGR_SOB_OBJ_995                                      0x112F8C

#define mmSYNC_MNGR_SOB_OBJ_996                                      0x112F90

#define mmSYNC_MNGR_SOB_OBJ_997                                      0x112F94

#define mmSYNC_MNGR_SOB_OBJ_998                                      0x112F98

#define mmSYNC_MNGR_SOB_OBJ_999                                      0x112F9C

#define mmSYNC_MNGR_SOB_OBJ_1000                                     0x112FA0

#define mmSYNC_MNGR_SOB_OBJ_1001                                     0x112FA4

#define mmSYNC_MNGR_SOB_OBJ_1002                                     0x112FA8

#define mmSYNC_MNGR_SOB_OBJ_1003                                     0x112FAC

#define mmSYNC_MNGR_SOB_OBJ_1004                                     0x112FB0

#define mmSYNC_MNGR_SOB_OBJ_1005                                     0x112FB4

#define mmSYNC_MNGR_SOB_OBJ_1006                                     0x112FB8

#define mmSYNC_MNGR_SOB_OBJ_1007                                     0x112FBC

#define mmSYNC_MNGR_SOB_OBJ_1008                                     0x112FC0

#define mmSYNC_MNGR_SOB_OBJ_1009                                     0x112FC4

#define mmSYNC_MNGR_SOB_OBJ_1010                                     0x112FC8

#define mmSYNC_MNGR_SOB_OBJ_1011                                     0x112FCC

#define mmSYNC_MNGR_SOB_OBJ_1012                                     0x112FD0

#define mmSYNC_MNGR_SOB_OBJ_1013                                     0x112FD4

#define mmSYNC_MNGR_SOB_OBJ_1014                                     0x112FD8

#define mmSYNC_MNGR_SOB_OBJ_1015                                     0x112FDC

#define mmSYNC_MNGR_SOB_OBJ_1016                                     0x112FE0

#define mmSYNC_MNGR_SOB_OBJ_1017                                     0x112FE4

#define mmSYNC_MNGR_SOB_OBJ_1018                                     0x112FE8

#define mmSYNC_MNGR_SOB_OBJ_1019                                     0x112FEC

#define mmSYNC_MNGR_SOB_OBJ_1020                                     0x112FF0

#define mmSYNC_MNGR_SOB_OBJ_1021                                     0x112FF4

#define mmSYNC_MNGR_SOB_OBJ_1022                                     0x112FF8

#define mmSYNC_MNGR_SOB_OBJ_1023                                     0x112FFC
/* SYNC_MNGR_SOB_OBJ */
#define SYNC_MNGR_SOB_OBJ_VAL_SHIFT                                  0
#define SYNC_MNGR_SOB_OBJ_VAL_MASK                                   0xFFFF

#define mmSYNC_MNGR_MON_PAY_ADDRL_0                                  0x113000

#define mmSYNC_MNGR_MON_PAY_ADDRL_1                                  0x113004

#define mmSYNC_MNGR_MON_PAY_ADDRL_2                                  0x113008

#define mmSYNC_MNGR_MON_PAY_ADDRL_3                                  0x11300C

#define mmSYNC_MNGR_MON_PAY_ADDRL_4                                  0x113010

#define mmSYNC_MNGR_MON_PAY_ADDRL_5                                  0x113014

#define mmSYNC_MNGR_MON_PAY_ADDRL_6                                  0x113018

#define mmSYNC_MNGR_MON_PAY_ADDRL_7                                  0x11301C

#define mmSYNC_MNGR_MON_PAY_ADDRL_8                                  0x113020

#define mmSYNC_MNGR_MON_PAY_ADDRL_9                                  0x113024

#define mmSYNC_MNGR_MON_PAY_ADDRL_10                                 0x113028

#define mmSYNC_MNGR_MON_PAY_ADDRL_11                                 0x11302C

#define mmSYNC_MNGR_MON_PAY_ADDRL_12                                 0x113030

#define mmSYNC_MNGR_MON_PAY_ADDRL_13                                 0x113034

#define mmSYNC_MNGR_MON_PAY_ADDRL_14                                 0x113038

#define mmSYNC_MNGR_MON_PAY_ADDRL_15                                 0x11303C

#define mmSYNC_MNGR_MON_PAY_ADDRL_16                                 0x113040

#define mmSYNC_MNGR_MON_PAY_ADDRL_17                                 0x113044

#define mmSYNC_MNGR_MON_PAY_ADDRL_18                                 0x113048

#define mmSYNC_MNGR_MON_PAY_ADDRL_19                                 0x11304C

#define mmSYNC_MNGR_MON_PAY_ADDRL_20                                 0x113050

#define mmSYNC_MNGR_MON_PAY_ADDRL_21                                 0x113054

#define mmSYNC_MNGR_MON_PAY_ADDRL_22                                 0x113058

#define mmSYNC_MNGR_MON_PAY_ADDRL_23                                 0x11305C

#define mmSYNC_MNGR_MON_PAY_ADDRL_24                                 0x113060

#define mmSYNC_MNGR_MON_PAY_ADDRL_25                                 0x113064

#define mmSYNC_MNGR_MON_PAY_ADDRL_26                                 0x113068

#define mmSYNC_MNGR_MON_PAY_ADDRL_27                                 0x11306C

#define mmSYNC_MNGR_MON_PAY_ADDRL_28                                 0x113070

#define mmSYNC_MNGR_MON_PAY_ADDRL_29                                 0x113074

#define mmSYNC_MNGR_MON_PAY_ADDRL_30                                 0x113078

#define mmSYNC_MNGR_MON_PAY_ADDRL_31                                 0x11307C

#define mmSYNC_MNGR_MON_PAY_ADDRL_32                                 0x113080

#define mmSYNC_MNGR_MON_PAY_ADDRL_33                                 0x113084

#define mmSYNC_MNGR_MON_PAY_ADDRL_34                                 0x113088

#define mmSYNC_MNGR_MON_PAY_ADDRL_35                                 0x11308C

#define mmSYNC_MNGR_MON_PAY_ADDRL_36                                 0x113090

#define mmSYNC_MNGR_MON_PAY_ADDRL_37                                 0x113094

#define mmSYNC_MNGR_MON_PAY_ADDRL_38                                 0x113098

#define mmSYNC_MNGR_MON_PAY_ADDRL_39                                 0x11309C

#define mmSYNC_MNGR_MON_PAY_ADDRL_40                                 0x1130A0

#define mmSYNC_MNGR_MON_PAY_ADDRL_41                                 0x1130A4

#define mmSYNC_MNGR_MON_PAY_ADDRL_42                                 0x1130A8

#define mmSYNC_MNGR_MON_PAY_ADDRL_43                                 0x1130AC

#define mmSYNC_MNGR_MON_PAY_ADDRL_44                                 0x1130B0

#define mmSYNC_MNGR_MON_PAY_ADDRL_45                                 0x1130B4

#define mmSYNC_MNGR_MON_PAY_ADDRL_46                                 0x1130B8

#define mmSYNC_MNGR_MON_PAY_ADDRL_47                                 0x1130BC

#define mmSYNC_MNGR_MON_PAY_ADDRL_48                                 0x1130C0

#define mmSYNC_MNGR_MON_PAY_ADDRL_49                                 0x1130C4

#define mmSYNC_MNGR_MON_PAY_ADDRL_50                                 0x1130C8

#define mmSYNC_MNGR_MON_PAY_ADDRL_51                                 0x1130CC

#define mmSYNC_MNGR_MON_PAY_ADDRL_52                                 0x1130D0

#define mmSYNC_MNGR_MON_PAY_ADDRL_53                                 0x1130D4

#define mmSYNC_MNGR_MON_PAY_ADDRL_54                                 0x1130D8

#define mmSYNC_MNGR_MON_PAY_ADDRL_55                                 0x1130DC

#define mmSYNC_MNGR_MON_PAY_ADDRL_56                                 0x1130E0

#define mmSYNC_MNGR_MON_PAY_ADDRL_57                                 0x1130E4

#define mmSYNC_MNGR_MON_PAY_ADDRL_58                                 0x1130E8

#define mmSYNC_MNGR_MON_PAY_ADDRL_59                                 0x1130EC

#define mmSYNC_MNGR_MON_PAY_ADDRL_60                                 0x1130F0

#define mmSYNC_MNGR_MON_PAY_ADDRL_61                                 0x1130F4

#define mmSYNC_MNGR_MON_PAY_ADDRL_62                                 0x1130F8

#define mmSYNC_MNGR_MON_PAY_ADDRL_63                                 0x1130FC

#define mmSYNC_MNGR_MON_PAY_ADDRL_64                                 0x113100

#define mmSYNC_MNGR_MON_PAY_ADDRL_65                                 0x113104

#define mmSYNC_MNGR_MON_PAY_ADDRL_66                                 0x113108

#define mmSYNC_MNGR_MON_PAY_ADDRL_67                                 0x11310C

#define mmSYNC_MNGR_MON_PAY_ADDRL_68                                 0x113110

#define mmSYNC_MNGR_MON_PAY_ADDRL_69                                 0x113114

#define mmSYNC_MNGR_MON_PAY_ADDRL_70                                 0x113118

#define mmSYNC_MNGR_MON_PAY_ADDRL_71                                 0x11311C

#define mmSYNC_MNGR_MON_PAY_ADDRL_72                                 0x113120

#define mmSYNC_MNGR_MON_PAY_ADDRL_73                                 0x113124

#define mmSYNC_MNGR_MON_PAY_ADDRL_74                                 0x113128

#define mmSYNC_MNGR_MON_PAY_ADDRL_75                                 0x11312C

#define mmSYNC_MNGR_MON_PAY_ADDRL_76                                 0x113130

#define mmSYNC_MNGR_MON_PAY_ADDRL_77                                 0x113134

#define mmSYNC_MNGR_MON_PAY_ADDRL_78                                 0x113138

#define mmSYNC_MNGR_MON_PAY_ADDRL_79                                 0x11313C

#define mmSYNC_MNGR_MON_PAY_ADDRL_80                                 0x113140

#define mmSYNC_MNGR_MON_PAY_ADDRL_81                                 0x113144

#define mmSYNC_MNGR_MON_PAY_ADDRL_82                                 0x113148

#define mmSYNC_MNGR_MON_PAY_ADDRL_83                                 0x11314C

#define mmSYNC_MNGR_MON_PAY_ADDRL_84                                 0x113150

#define mmSYNC_MNGR_MON_PAY_ADDRL_85                                 0x113154

#define mmSYNC_MNGR_MON_PAY_ADDRL_86                                 0x113158

#define mmSYNC_MNGR_MON_PAY_ADDRL_87                                 0x11315C

#define mmSYNC_MNGR_MON_PAY_ADDRL_88                                 0x113160

#define mmSYNC_MNGR_MON_PAY_ADDRL_89                                 0x113164

#define mmSYNC_MNGR_MON_PAY_ADDRL_90                                 0x113168

#define mmSYNC_MNGR_MON_PAY_ADDRL_91                                 0x11316C

#define mmSYNC_MNGR_MON_PAY_ADDRL_92                                 0x113170

#define mmSYNC_MNGR_MON_PAY_ADDRL_93                                 0x113174

#define mmSYNC_MNGR_MON_PAY_ADDRL_94                                 0x113178

#define mmSYNC_MNGR_MON_PAY_ADDRL_95                                 0x11317C

#define mmSYNC_MNGR_MON_PAY_ADDRL_96                                 0x113180

#define mmSYNC_MNGR_MON_PAY_ADDRL_97                                 0x113184

#define mmSYNC_MNGR_MON_PAY_ADDRL_98                                 0x113188

#define mmSYNC_MNGR_MON_PAY_ADDRL_99                                 0x11318C

#define mmSYNC_MNGR_MON_PAY_ADDRL_100                                0x113190

#define mmSYNC_MNGR_MON_PAY_ADDRL_101                                0x113194

#define mmSYNC_MNGR_MON_PAY_ADDRL_102                                0x113198

#define mmSYNC_MNGR_MON_PAY_ADDRL_103                                0x11319C

#define mmSYNC_MNGR_MON_PAY_ADDRL_104                                0x1131A0

#define mmSYNC_MNGR_MON_PAY_ADDRL_105                                0x1131A4

#define mmSYNC_MNGR_MON_PAY_ADDRL_106                                0x1131A8

#define mmSYNC_MNGR_MON_PAY_ADDRL_107                                0x1131AC

#define mmSYNC_MNGR_MON_PAY_ADDRL_108                                0x1131B0

#define mmSYNC_MNGR_MON_PAY_ADDRL_109                                0x1131B4

#define mmSYNC_MNGR_MON_PAY_ADDRL_110                                0x1131B8

#define mmSYNC_MNGR_MON_PAY_ADDRL_111                                0x1131BC

#define mmSYNC_MNGR_MON_PAY_ADDRL_112                                0x1131C0

#define mmSYNC_MNGR_MON_PAY_ADDRL_113                                0x1131C4

#define mmSYNC_MNGR_MON_PAY_ADDRL_114                                0x1131C8

#define mmSYNC_MNGR_MON_PAY_ADDRL_115                                0x1131CC

#define mmSYNC_MNGR_MON_PAY_ADDRL_116                                0x1131D0

#define mmSYNC_MNGR_MON_PAY_ADDRL_117                                0x1131D4

#define mmSYNC_MNGR_MON_PAY_ADDRL_118                                0x1131D8

#define mmSYNC_MNGR_MON_PAY_ADDRL_119                                0x1131DC

#define mmSYNC_MNGR_MON_PAY_ADDRL_120                                0x1131E0

#define mmSYNC_MNGR_MON_PAY_ADDRL_121                                0x1131E4

#define mmSYNC_MNGR_MON_PAY_ADDRL_122                                0x1131E8

#define mmSYNC_MNGR_MON_PAY_ADDRL_123                                0x1131EC

#define mmSYNC_MNGR_MON_PAY_ADDRL_124                                0x1131F0

#define mmSYNC_MNGR_MON_PAY_ADDRL_125                                0x1131F4

#define mmSYNC_MNGR_MON_PAY_ADDRL_126                                0x1131F8

#define mmSYNC_MNGR_MON_PAY_ADDRL_127                                0x1131FC

#define mmSYNC_MNGR_MON_PAY_ADDRL_128                                0x113200

#define mmSYNC_MNGR_MON_PAY_ADDRL_129                                0x113204

#define mmSYNC_MNGR_MON_PAY_ADDRL_130                                0x113208

#define mmSYNC_MNGR_MON_PAY_ADDRL_131                                0x11320C

#define mmSYNC_MNGR_MON_PAY_ADDRL_132                                0x113210

#define mmSYNC_MNGR_MON_PAY_ADDRL_133                                0x113214

#define mmSYNC_MNGR_MON_PAY_ADDRL_134                                0x113218

#define mmSYNC_MNGR_MON_PAY_ADDRL_135                                0x11321C

#define mmSYNC_MNGR_MON_PAY_ADDRL_136                                0x113220

#define mmSYNC_MNGR_MON_PAY_ADDRL_137                                0x113224

#define mmSYNC_MNGR_MON_PAY_ADDRL_138                                0x113228

#define mmSYNC_MNGR_MON_PAY_ADDRL_139                                0x11322C

#define mmSYNC_MNGR_MON_PAY_ADDRL_140                                0x113230

#define mmSYNC_MNGR_MON_PAY_ADDRL_141                                0x113234

#define mmSYNC_MNGR_MON_PAY_ADDRL_142                                0x113238

#define mmSYNC_MNGR_MON_PAY_ADDRL_143                                0x11323C

#define mmSYNC_MNGR_MON_PAY_ADDRL_144                                0x113240

#define mmSYNC_MNGR_MON_PAY_ADDRL_145                                0x113244

#define mmSYNC_MNGR_MON_PAY_ADDRL_146                                0x113248

#define mmSYNC_MNGR_MON_PAY_ADDRL_147                                0x11324C

#define mmSYNC_MNGR_MON_PAY_ADDRL_148                                0x113250

#define mmSYNC_MNGR_MON_PAY_ADDRL_149                                0x113254

#define mmSYNC_MNGR_MON_PAY_ADDRL_150                                0x113258

#define mmSYNC_MNGR_MON_PAY_ADDRL_151                                0x11325C

#define mmSYNC_MNGR_MON_PAY_ADDRL_152                                0x113260

#define mmSYNC_MNGR_MON_PAY_ADDRL_153                                0x113264

#define mmSYNC_MNGR_MON_PAY_ADDRL_154                                0x113268

#define mmSYNC_MNGR_MON_PAY_ADDRL_155                                0x11326C

#define mmSYNC_MNGR_MON_PAY_ADDRL_156                                0x113270

#define mmSYNC_MNGR_MON_PAY_ADDRL_157                                0x113274

#define mmSYNC_MNGR_MON_PAY_ADDRL_158                                0x113278

#define mmSYNC_MNGR_MON_PAY_ADDRL_159                                0x11327C

#define mmSYNC_MNGR_MON_PAY_ADDRL_160                                0x113280

#define mmSYNC_MNGR_MON_PAY_ADDRL_161                                0x113284

#define mmSYNC_MNGR_MON_PAY_ADDRL_162                                0x113288

#define mmSYNC_MNGR_MON_PAY_ADDRL_163                                0x11328C

#define mmSYNC_MNGR_MON_PAY_ADDRL_164                                0x113290

#define mmSYNC_MNGR_MON_PAY_ADDRL_165                                0x113294

#define mmSYNC_MNGR_MON_PAY_ADDRL_166                                0x113298

#define mmSYNC_MNGR_MON_PAY_ADDRL_167                                0x11329C

#define mmSYNC_MNGR_MON_PAY_ADDRL_168                                0x1132A0

#define mmSYNC_MNGR_MON_PAY_ADDRL_169                                0x1132A4

#define mmSYNC_MNGR_MON_PAY_ADDRL_170                                0x1132A8

#define mmSYNC_MNGR_MON_PAY_ADDRL_171                                0x1132AC

#define mmSYNC_MNGR_MON_PAY_ADDRL_172                                0x1132B0

#define mmSYNC_MNGR_MON_PAY_ADDRL_173                                0x1132B4

#define mmSYNC_MNGR_MON_PAY_ADDRL_174                                0x1132B8

#define mmSYNC_MNGR_MON_PAY_ADDRL_175                                0x1132BC

#define mmSYNC_MNGR_MON_PAY_ADDRL_176                                0x1132C0

#define mmSYNC_MNGR_MON_PAY_ADDRL_177                                0x1132C4

#define mmSYNC_MNGR_MON_PAY_ADDRL_178                                0x1132C8

#define mmSYNC_MNGR_MON_PAY_ADDRL_179                                0x1132CC

#define mmSYNC_MNGR_MON_PAY_ADDRL_180                                0x1132D0

#define mmSYNC_MNGR_MON_PAY_ADDRL_181                                0x1132D4

#define mmSYNC_MNGR_MON_PAY_ADDRL_182                                0x1132D8

#define mmSYNC_MNGR_MON_PAY_ADDRL_183                                0x1132DC

#define mmSYNC_MNGR_MON_PAY_ADDRL_184                                0x1132E0

#define mmSYNC_MNGR_MON_PAY_ADDRL_185                                0x1132E4

#define mmSYNC_MNGR_MON_PAY_ADDRL_186                                0x1132E8

#define mmSYNC_MNGR_MON_PAY_ADDRL_187                                0x1132EC

#define mmSYNC_MNGR_MON_PAY_ADDRL_188                                0x1132F0

#define mmSYNC_MNGR_MON_PAY_ADDRL_189                                0x1132F4

#define mmSYNC_MNGR_MON_PAY_ADDRL_190                                0x1132F8

#define mmSYNC_MNGR_MON_PAY_ADDRL_191                                0x1132FC

#define mmSYNC_MNGR_MON_PAY_ADDRL_192                                0x113300

#define mmSYNC_MNGR_MON_PAY_ADDRL_193                                0x113304

#define mmSYNC_MNGR_MON_PAY_ADDRL_194                                0x113308

#define mmSYNC_MNGR_MON_PAY_ADDRL_195                                0x11330C

#define mmSYNC_MNGR_MON_PAY_ADDRL_196                                0x113310

#define mmSYNC_MNGR_MON_PAY_ADDRL_197                                0x113314

#define mmSYNC_MNGR_MON_PAY_ADDRL_198                                0x113318

#define mmSYNC_MNGR_MON_PAY_ADDRL_199                                0x11331C

#define mmSYNC_MNGR_MON_PAY_ADDRL_200                                0x113320

#define mmSYNC_MNGR_MON_PAY_ADDRL_201                                0x113324

#define mmSYNC_MNGR_MON_PAY_ADDRL_202                                0x113328

#define mmSYNC_MNGR_MON_PAY_ADDRL_203                                0x11332C

#define mmSYNC_MNGR_MON_PAY_ADDRL_204                                0x113330

#define mmSYNC_MNGR_MON_PAY_ADDRL_205                                0x113334

#define mmSYNC_MNGR_MON_PAY_ADDRL_206                                0x113338

#define mmSYNC_MNGR_MON_PAY_ADDRL_207                                0x11333C

#define mmSYNC_MNGR_MON_PAY_ADDRL_208                                0x113340

#define mmSYNC_MNGR_MON_PAY_ADDRL_209                                0x113344

#define mmSYNC_MNGR_MON_PAY_ADDRL_210                                0x113348

#define mmSYNC_MNGR_MON_PAY_ADDRL_211                                0x11334C

#define mmSYNC_MNGR_MON_PAY_ADDRL_212                                0x113350

#define mmSYNC_MNGR_MON_PAY_ADDRL_213                                0x113354

#define mmSYNC_MNGR_MON_PAY_ADDRL_214                                0x113358

#define mmSYNC_MNGR_MON_PAY_ADDRL_215                                0x11335C

#define mmSYNC_MNGR_MON_PAY_ADDRL_216                                0x113360

#define mmSYNC_MNGR_MON_PAY_ADDRL_217                                0x113364

#define mmSYNC_MNGR_MON_PAY_ADDRL_218                                0x113368

#define mmSYNC_MNGR_MON_PAY_ADDRL_219                                0x11336C

#define mmSYNC_MNGR_MON_PAY_ADDRL_220                                0x113370

#define mmSYNC_MNGR_MON_PAY_ADDRL_221                                0x113374

#define mmSYNC_MNGR_MON_PAY_ADDRL_222                                0x113378

#define mmSYNC_MNGR_MON_PAY_ADDRL_223                                0x11337C

#define mmSYNC_MNGR_MON_PAY_ADDRL_224                                0x113380

#define mmSYNC_MNGR_MON_PAY_ADDRL_225                                0x113384

#define mmSYNC_MNGR_MON_PAY_ADDRL_226                                0x113388

#define mmSYNC_MNGR_MON_PAY_ADDRL_227                                0x11338C

#define mmSYNC_MNGR_MON_PAY_ADDRL_228                                0x113390

#define mmSYNC_MNGR_MON_PAY_ADDRL_229                                0x113394

#define mmSYNC_MNGR_MON_PAY_ADDRL_230                                0x113398

#define mmSYNC_MNGR_MON_PAY_ADDRL_231                                0x11339C

#define mmSYNC_MNGR_MON_PAY_ADDRL_232                                0x1133A0

#define mmSYNC_MNGR_MON_PAY_ADDRL_233                                0x1133A4

#define mmSYNC_MNGR_MON_PAY_ADDRL_234                                0x1133A8

#define mmSYNC_MNGR_MON_PAY_ADDRL_235                                0x1133AC

#define mmSYNC_MNGR_MON_PAY_ADDRL_236                                0x1133B0

#define mmSYNC_MNGR_MON_PAY_ADDRL_237                                0x1133B4

#define mmSYNC_MNGR_MON_PAY_ADDRL_238                                0x1133B8

#define mmSYNC_MNGR_MON_PAY_ADDRL_239                                0x1133BC

#define mmSYNC_MNGR_MON_PAY_ADDRL_240                                0x1133C0

#define mmSYNC_MNGR_MON_PAY_ADDRL_241                                0x1133C4

#define mmSYNC_MNGR_MON_PAY_ADDRL_242                                0x1133C8

#define mmSYNC_MNGR_MON_PAY_ADDRL_243                                0x1133CC

#define mmSYNC_MNGR_MON_PAY_ADDRL_244                                0x1133D0

#define mmSYNC_MNGR_MON_PAY_ADDRL_245                                0x1133D4

#define mmSYNC_MNGR_MON_PAY_ADDRL_246                                0x1133D8

#define mmSYNC_MNGR_MON_PAY_ADDRL_247                                0x1133DC

#define mmSYNC_MNGR_MON_PAY_ADDRL_248                                0x1133E0

#define mmSYNC_MNGR_MON_PAY_ADDRL_249                                0x1133E4

#define mmSYNC_MNGR_MON_PAY_ADDRL_250                                0x1133E8

#define mmSYNC_MNGR_MON_PAY_ADDRL_251                                0x1133EC

#define mmSYNC_MNGR_MON_PAY_ADDRL_252                                0x1133F0

#define mmSYNC_MNGR_MON_PAY_ADDRL_253                                0x1133F4

#define mmSYNC_MNGR_MON_PAY_ADDRL_254                                0x1133F8

#define mmSYNC_MNGR_MON_PAY_ADDRL_255                                0x1133FC
/* SYNC_MNGR_MON_PAY_ADDRL */
#define SYNC_MNGR_MON_PAY_ADDRL_ADDRL_SHIFT                          0
#define SYNC_MNGR_MON_PAY_ADDRL_ADDRL_MASK                           0xFFFFFFFF

#define mmSYNC_MNGR_MON_PAY_ADDRH_0                                  0x113400

#define mmSYNC_MNGR_MON_PAY_ADDRH_1                                  0x113404

#define mmSYNC_MNGR_MON_PAY_ADDRH_2                                  0x113408

#define mmSYNC_MNGR_MON_PAY_ADDRH_3                                  0x11340C

#define mmSYNC_MNGR_MON_PAY_ADDRH_4                                  0x113410

#define mmSYNC_MNGR_MON_PAY_ADDRH_5                                  0x113414

#define mmSYNC_MNGR_MON_PAY_ADDRH_6                                  0x113418

#define mmSYNC_MNGR_MON_PAY_ADDRH_7                                  0x11341C

#define mmSYNC_MNGR_MON_PAY_ADDRH_8                                  0x113420

#define mmSYNC_MNGR_MON_PAY_ADDRH_9                                  0x113424

#define mmSYNC_MNGR_MON_PAY_ADDRH_10                                 0x113428

#define mmSYNC_MNGR_MON_PAY_ADDRH_11                                 0x11342C

#define mmSYNC_MNGR_MON_PAY_ADDRH_12                                 0x113430

#define mmSYNC_MNGR_MON_PAY_ADDRH_13                                 0x113434

#define mmSYNC_MNGR_MON_PAY_ADDRH_14                                 0x113438

#define mmSYNC_MNGR_MON_PAY_ADDRH_15                                 0x11343C

#define mmSYNC_MNGR_MON_PAY_ADDRH_16                                 0x113440

#define mmSYNC_MNGR_MON_PAY_ADDRH_17                                 0x113444

#define mmSYNC_MNGR_MON_PAY_ADDRH_18                                 0x113448

#define mmSYNC_MNGR_MON_PAY_ADDRH_19                                 0x11344C

#define mmSYNC_MNGR_MON_PAY_ADDRH_20                                 0x113450

#define mmSYNC_MNGR_MON_PAY_ADDRH_21                                 0x113454

#define mmSYNC_MNGR_MON_PAY_ADDRH_22                                 0x113458

#define mmSYNC_MNGR_MON_PAY_ADDRH_23                                 0x11345C

#define mmSYNC_MNGR_MON_PAY_ADDRH_24                                 0x113460

#define mmSYNC_MNGR_MON_PAY_ADDRH_25                                 0x113464

#define mmSYNC_MNGR_MON_PAY_ADDRH_26                                 0x113468

#define mmSYNC_MNGR_MON_PAY_ADDRH_27                                 0x11346C

#define mmSYNC_MNGR_MON_PAY_ADDRH_28                                 0x113470

#define mmSYNC_MNGR_MON_PAY_ADDRH_29                                 0x113474

#define mmSYNC_MNGR_MON_PAY_ADDRH_30                                 0x113478

#define mmSYNC_MNGR_MON_PAY_ADDRH_31                                 0x11347C

#define mmSYNC_MNGR_MON_PAY_ADDRH_32                                 0x113480

#define mmSYNC_MNGR_MON_PAY_ADDRH_33                                 0x113484

#define mmSYNC_MNGR_MON_PAY_ADDRH_34                                 0x113488

#define mmSYNC_MNGR_MON_PAY_ADDRH_35                                 0x11348C

#define mmSYNC_MNGR_MON_PAY_ADDRH_36                                 0x113490

#define mmSYNC_MNGR_MON_PAY_ADDRH_37                                 0x113494

#define mmSYNC_MNGR_MON_PAY_ADDRH_38                                 0x113498

#define mmSYNC_MNGR_MON_PAY_ADDRH_39                                 0x11349C

#define mmSYNC_MNGR_MON_PAY_ADDRH_40                                 0x1134A0

#define mmSYNC_MNGR_MON_PAY_ADDRH_41                                 0x1134A4

#define mmSYNC_MNGR_MON_PAY_ADDRH_42                                 0x1134A8

#define mmSYNC_MNGR_MON_PAY_ADDRH_43                                 0x1134AC

#define mmSYNC_MNGR_MON_PAY_ADDRH_44                                 0x1134B0

#define mmSYNC_MNGR_MON_PAY_ADDRH_45                                 0x1134B4

#define mmSYNC_MNGR_MON_PAY_ADDRH_46                                 0x1134B8

#define mmSYNC_MNGR_MON_PAY_ADDRH_47                                 0x1134BC

#define mmSYNC_MNGR_MON_PAY_ADDRH_48                                 0x1134C0

#define mmSYNC_MNGR_MON_PAY_ADDRH_49                                 0x1134C4

#define mmSYNC_MNGR_MON_PAY_ADDRH_50                                 0x1134C8

#define mmSYNC_MNGR_MON_PAY_ADDRH_51                                 0x1134CC

#define mmSYNC_MNGR_MON_PAY_ADDRH_52                                 0x1134D0

#define mmSYNC_MNGR_MON_PAY_ADDRH_53                                 0x1134D4

#define mmSYNC_MNGR_MON_PAY_ADDRH_54                                 0x1134D8

#define mmSYNC_MNGR_MON_PAY_ADDRH_55                                 0x1134DC

#define mmSYNC_MNGR_MON_PAY_ADDRH_56                                 0x1134E0

#define mmSYNC_MNGR_MON_PAY_ADDRH_57                                 0x1134E4

#define mmSYNC_MNGR_MON_PAY_ADDRH_58                                 0x1134E8

#define mmSYNC_MNGR_MON_PAY_ADDRH_59                                 0x1134EC

#define mmSYNC_MNGR_MON_PAY_ADDRH_60                                 0x1134F0

#define mmSYNC_MNGR_MON_PAY_ADDRH_61                                 0x1134F4

#define mmSYNC_MNGR_MON_PAY_ADDRH_62                                 0x1134F8

#define mmSYNC_MNGR_MON_PAY_ADDRH_63                                 0x1134FC

#define mmSYNC_MNGR_MON_PAY_ADDRH_64                                 0x113500

#define mmSYNC_MNGR_MON_PAY_ADDRH_65                                 0x113504

#define mmSYNC_MNGR_MON_PAY_ADDRH_66                                 0x113508

#define mmSYNC_MNGR_MON_PAY_ADDRH_67                                 0x11350C

#define mmSYNC_MNGR_MON_PAY_ADDRH_68                                 0x113510

#define mmSYNC_MNGR_MON_PAY_ADDRH_69                                 0x113514

#define mmSYNC_MNGR_MON_PAY_ADDRH_70                                 0x113518

#define mmSYNC_MNGR_MON_PAY_ADDRH_71                                 0x11351C

#define mmSYNC_MNGR_MON_PAY_ADDRH_72                                 0x113520

#define mmSYNC_MNGR_MON_PAY_ADDRH_73                                 0x113524

#define mmSYNC_MNGR_MON_PAY_ADDRH_74                                 0x113528

#define mmSYNC_MNGR_MON_PAY_ADDRH_75                                 0x11352C

#define mmSYNC_MNGR_MON_PAY_ADDRH_76                                 0x113530

#define mmSYNC_MNGR_MON_PAY_ADDRH_77                                 0x113534

#define mmSYNC_MNGR_MON_PAY_ADDRH_78                                 0x113538

#define mmSYNC_MNGR_MON_PAY_ADDRH_79                                 0x11353C

#define mmSYNC_MNGR_MON_PAY_ADDRH_80                                 0x113540

#define mmSYNC_MNGR_MON_PAY_ADDRH_81                                 0x113544

#define mmSYNC_MNGR_MON_PAY_ADDRH_82                                 0x113548

#define mmSYNC_MNGR_MON_PAY_ADDRH_83                                 0x11354C

#define mmSYNC_MNGR_MON_PAY_ADDRH_84                                 0x113550

#define mmSYNC_MNGR_MON_PAY_ADDRH_85                                 0x113554

#define mmSYNC_MNGR_MON_PAY_ADDRH_86                                 0x113558

#define mmSYNC_MNGR_MON_PAY_ADDRH_87                                 0x11355C

#define mmSYNC_MNGR_MON_PAY_ADDRH_88                                 0x113560

#define mmSYNC_MNGR_MON_PAY_ADDRH_89                                 0x113564

#define mmSYNC_MNGR_MON_PAY_ADDRH_90                                 0x113568

#define mmSYNC_MNGR_MON_PAY_ADDRH_91                                 0x11356C

#define mmSYNC_MNGR_MON_PAY_ADDRH_92                                 0x113570

#define mmSYNC_MNGR_MON_PAY_ADDRH_93                                 0x113574

#define mmSYNC_MNGR_MON_PAY_ADDRH_94                                 0x113578

#define mmSYNC_MNGR_MON_PAY_ADDRH_95                                 0x11357C

#define mmSYNC_MNGR_MON_PAY_ADDRH_96                                 0x113580

#define mmSYNC_MNGR_MON_PAY_ADDRH_97                                 0x113584

#define mmSYNC_MNGR_MON_PAY_ADDRH_98                                 0x113588

#define mmSYNC_MNGR_MON_PAY_ADDRH_99                                 0x11358C

#define mmSYNC_MNGR_MON_PAY_ADDRH_100                                0x113590

#define mmSYNC_MNGR_MON_PAY_ADDRH_101                                0x113594

#define mmSYNC_MNGR_MON_PAY_ADDRH_102                                0x113598

#define mmSYNC_MNGR_MON_PAY_ADDRH_103                                0x11359C

#define mmSYNC_MNGR_MON_PAY_ADDRH_104                                0x1135A0

#define mmSYNC_MNGR_MON_PAY_ADDRH_105                                0x1135A4

#define mmSYNC_MNGR_MON_PAY_ADDRH_106                                0x1135A8

#define mmSYNC_MNGR_MON_PAY_ADDRH_107                                0x1135AC

#define mmSYNC_MNGR_MON_PAY_ADDRH_108                                0x1135B0

#define mmSYNC_MNGR_MON_PAY_ADDRH_109                                0x1135B4

#define mmSYNC_MNGR_MON_PAY_ADDRH_110                                0x1135B8

#define mmSYNC_MNGR_MON_PAY_ADDRH_111                                0x1135BC

#define mmSYNC_MNGR_MON_PAY_ADDRH_112                                0x1135C0

#define mmSYNC_MNGR_MON_PAY_ADDRH_113                                0x1135C4

#define mmSYNC_MNGR_MON_PAY_ADDRH_114                                0x1135C8

#define mmSYNC_MNGR_MON_PAY_ADDRH_115                                0x1135CC

#define mmSYNC_MNGR_MON_PAY_ADDRH_116                                0x1135D0

#define mmSYNC_MNGR_MON_PAY_ADDRH_117                                0x1135D4

#define mmSYNC_MNGR_MON_PAY_ADDRH_118                                0x1135D8

#define mmSYNC_MNGR_MON_PAY_ADDRH_119                                0x1135DC

#define mmSYNC_MNGR_MON_PAY_ADDRH_120                                0x1135E0

#define mmSYNC_MNGR_MON_PAY_ADDRH_121                                0x1135E4

#define mmSYNC_MNGR_MON_PAY_ADDRH_122                                0x1135E8

#define mmSYNC_MNGR_MON_PAY_ADDRH_123                                0x1135EC

#define mmSYNC_MNGR_MON_PAY_ADDRH_124                                0x1135F0

#define mmSYNC_MNGR_MON_PAY_ADDRH_125                                0x1135F4

#define mmSYNC_MNGR_MON_PAY_ADDRH_126                                0x1135F8

#define mmSYNC_MNGR_MON_PAY_ADDRH_127                                0x1135FC

#define mmSYNC_MNGR_MON_PAY_ADDRH_128                                0x113600

#define mmSYNC_MNGR_MON_PAY_ADDRH_129                                0x113604

#define mmSYNC_MNGR_MON_PAY_ADDRH_130                                0x113608

#define mmSYNC_MNGR_MON_PAY_ADDRH_131                                0x11360C

#define mmSYNC_MNGR_MON_PAY_ADDRH_132                                0x113610

#define mmSYNC_MNGR_MON_PAY_ADDRH_133                                0x113614

#define mmSYNC_MNGR_MON_PAY_ADDRH_134                                0x113618

#define mmSYNC_MNGR_MON_PAY_ADDRH_135                                0x11361C

#define mmSYNC_MNGR_MON_PAY_ADDRH_136                                0x113620

#define mmSYNC_MNGR_MON_PAY_ADDRH_137                                0x113624

#define mmSYNC_MNGR_MON_PAY_ADDRH_138                                0x113628

#define mmSYNC_MNGR_MON_PAY_ADDRH_139                                0x11362C

#define mmSYNC_MNGR_MON_PAY_ADDRH_140                                0x113630

#define mmSYNC_MNGR_MON_PAY_ADDRH_141                                0x113634

#define mmSYNC_MNGR_MON_PAY_ADDRH_142                                0x113638

#define mmSYNC_MNGR_MON_PAY_ADDRH_143                                0x11363C

#define mmSYNC_MNGR_MON_PAY_ADDRH_144                                0x113640

#define mmSYNC_MNGR_MON_PAY_ADDRH_145                                0x113644

#define mmSYNC_MNGR_MON_PAY_ADDRH_146                                0x113648

#define mmSYNC_MNGR_MON_PAY_ADDRH_147                                0x11364C

#define mmSYNC_MNGR_MON_PAY_ADDRH_148                                0x113650

#define mmSYNC_MNGR_MON_PAY_ADDRH_149                                0x113654

#define mmSYNC_MNGR_MON_PAY_ADDRH_150                                0x113658

#define mmSYNC_MNGR_MON_PAY_ADDRH_151                                0x11365C

#define mmSYNC_MNGR_MON_PAY_ADDRH_152                                0x113660

#define mmSYNC_MNGR_MON_PAY_ADDRH_153                                0x113664

#define mmSYNC_MNGR_MON_PAY_ADDRH_154                                0x113668

#define mmSYNC_MNGR_MON_PAY_ADDRH_155                                0x11366C

#define mmSYNC_MNGR_MON_PAY_ADDRH_156                                0x113670

#define mmSYNC_MNGR_MON_PAY_ADDRH_157                                0x113674

#define mmSYNC_MNGR_MON_PAY_ADDRH_158                                0x113678

#define mmSYNC_MNGR_MON_PAY_ADDRH_159                                0x11367C

#define mmSYNC_MNGR_MON_PAY_ADDRH_160                                0x113680

#define mmSYNC_MNGR_MON_PAY_ADDRH_161                                0x113684

#define mmSYNC_MNGR_MON_PAY_ADDRH_162                                0x113688

#define mmSYNC_MNGR_MON_PAY_ADDRH_163                                0x11368C

#define mmSYNC_MNGR_MON_PAY_ADDRH_164                                0x113690

#define mmSYNC_MNGR_MON_PAY_ADDRH_165                                0x113694

#define mmSYNC_MNGR_MON_PAY_ADDRH_166                                0x113698

#define mmSYNC_MNGR_MON_PAY_ADDRH_167                                0x11369C

#define mmSYNC_MNGR_MON_PAY_ADDRH_168                                0x1136A0

#define mmSYNC_MNGR_MON_PAY_ADDRH_169                                0x1136A4

#define mmSYNC_MNGR_MON_PAY_ADDRH_170                                0x1136A8

#define mmSYNC_MNGR_MON_PAY_ADDRH_171                                0x1136AC

#define mmSYNC_MNGR_MON_PAY_ADDRH_172                                0x1136B0

#define mmSYNC_MNGR_MON_PAY_ADDRH_173                                0x1136B4

#define mmSYNC_MNGR_MON_PAY_ADDRH_174                                0x1136B8

#define mmSYNC_MNGR_MON_PAY_ADDRH_175                                0x1136BC

#define mmSYNC_MNGR_MON_PAY_ADDRH_176                                0x1136C0

#define mmSYNC_MNGR_MON_PAY_ADDRH_177                                0x1136C4

#define mmSYNC_MNGR_MON_PAY_ADDRH_178                                0x1136C8

#define mmSYNC_MNGR_MON_PAY_ADDRH_179                                0x1136CC

#define mmSYNC_MNGR_MON_PAY_ADDRH_180                                0x1136D0

#define mmSYNC_MNGR_MON_PAY_ADDRH_181                                0x1136D4

#define mmSYNC_MNGR_MON_PAY_ADDRH_182                                0x1136D8

#define mmSYNC_MNGR_MON_PAY_ADDRH_183                                0x1136DC

#define mmSYNC_MNGR_MON_PAY_ADDRH_184                                0x1136E0

#define mmSYNC_MNGR_MON_PAY_ADDRH_185                                0x1136E4

#define mmSYNC_MNGR_MON_PAY_ADDRH_186                                0x1136E8

#define mmSYNC_MNGR_MON_PAY_ADDRH_187                                0x1136EC

#define mmSYNC_MNGR_MON_PAY_ADDRH_188                                0x1136F0

#define mmSYNC_MNGR_MON_PAY_ADDRH_189                                0x1136F4

#define mmSYNC_MNGR_MON_PAY_ADDRH_190                                0x1136F8

#define mmSYNC_MNGR_MON_PAY_ADDRH_191                                0x1136FC

#define mmSYNC_MNGR_MON_PAY_ADDRH_192                                0x113700

#define mmSYNC_MNGR_MON_PAY_ADDRH_193                                0x113704

#define mmSYNC_MNGR_MON_PAY_ADDRH_194                                0x113708

#define mmSYNC_MNGR_MON_PAY_ADDRH_195                                0x11370C

#define mmSYNC_MNGR_MON_PAY_ADDRH_196                                0x113710

#define mmSYNC_MNGR_MON_PAY_ADDRH_197                                0x113714

#define mmSYNC_MNGR_MON_PAY_ADDRH_198                                0x113718

#define mmSYNC_MNGR_MON_PAY_ADDRH_199                                0x11371C

#define mmSYNC_MNGR_MON_PAY_ADDRH_200                                0x113720

#define mmSYNC_MNGR_MON_PAY_ADDRH_201                                0x113724

#define mmSYNC_MNGR_MON_PAY_ADDRH_202                                0x113728

#define mmSYNC_MNGR_MON_PAY_ADDRH_203                                0x11372C

#define mmSYNC_MNGR_MON_PAY_ADDRH_204                                0x113730

#define mmSYNC_MNGR_MON_PAY_ADDRH_205                                0x113734

#define mmSYNC_MNGR_MON_PAY_ADDRH_206                                0x113738

#define mmSYNC_MNGR_MON_PAY_ADDRH_207                                0x11373C

#define mmSYNC_MNGR_MON_PAY_ADDRH_208                                0x113740

#define mmSYNC_MNGR_MON_PAY_ADDRH_209                                0x113744

#define mmSYNC_MNGR_MON_PAY_ADDRH_210                                0x113748

#define mmSYNC_MNGR_MON_PAY_ADDRH_211                                0x11374C

#define mmSYNC_MNGR_MON_PAY_ADDRH_212                                0x113750

#define mmSYNC_MNGR_MON_PAY_ADDRH_213                                0x113754

#define mmSYNC_MNGR_MON_PAY_ADDRH_214                                0x113758

#define mmSYNC_MNGR_MON_PAY_ADDRH_215                                0x11375C

#define mmSYNC_MNGR_MON_PAY_ADDRH_216                                0x113760

#define mmSYNC_MNGR_MON_PAY_ADDRH_217                                0x113764

#define mmSYNC_MNGR_MON_PAY_ADDRH_218                                0x113768

#define mmSYNC_MNGR_MON_PAY_ADDRH_219                                0x11376C

#define mmSYNC_MNGR_MON_PAY_ADDRH_220                                0x113770

#define mmSYNC_MNGR_MON_PAY_ADDRH_221                                0x113774

#define mmSYNC_MNGR_MON_PAY_ADDRH_222                                0x113778

#define mmSYNC_MNGR_MON_PAY_ADDRH_223                                0x11377C

#define mmSYNC_MNGR_MON_PAY_ADDRH_224                                0x113780

#define mmSYNC_MNGR_MON_PAY_ADDRH_225                                0x113784

#define mmSYNC_MNGR_MON_PAY_ADDRH_226                                0x113788

#define mmSYNC_MNGR_MON_PAY_ADDRH_227                                0x11378C

#define mmSYNC_MNGR_MON_PAY_ADDRH_228                                0x113790

#define mmSYNC_MNGR_MON_PAY_ADDRH_229                                0x113794

#define mmSYNC_MNGR_MON_PAY_ADDRH_230                                0x113798

#define mmSYNC_MNGR_MON_PAY_ADDRH_231                                0x11379C

#define mmSYNC_MNGR_MON_PAY_ADDRH_232                                0x1137A0

#define mmSYNC_MNGR_MON_PAY_ADDRH_233                                0x1137A4

#define mmSYNC_MNGR_MON_PAY_ADDRH_234                                0x1137A8

#define mmSYNC_MNGR_MON_PAY_ADDRH_235                                0x1137AC

#define mmSYNC_MNGR_MON_PAY_ADDRH_236                                0x1137B0

#define mmSYNC_MNGR_MON_PAY_ADDRH_237                                0x1137B4

#define mmSYNC_MNGR_MON_PAY_ADDRH_238                                0x1137B8

#define mmSYNC_MNGR_MON_PAY_ADDRH_239                                0x1137BC

#define mmSYNC_MNGR_MON_PAY_ADDRH_240                                0x1137C0

#define mmSYNC_MNGR_MON_PAY_ADDRH_241                                0x1137C4

#define mmSYNC_MNGR_MON_PAY_ADDRH_242                                0x1137C8

#define mmSYNC_MNGR_MON_PAY_ADDRH_243                                0x1137CC

#define mmSYNC_MNGR_MON_PAY_ADDRH_244                                0x1137D0

#define mmSYNC_MNGR_MON_PAY_ADDRH_245                                0x1137D4

#define mmSYNC_MNGR_MON_PAY_ADDRH_246                                0x1137D8

#define mmSYNC_MNGR_MON_PAY_ADDRH_247                                0x1137DC

#define mmSYNC_MNGR_MON_PAY_ADDRH_248                                0x1137E0

#define mmSYNC_MNGR_MON_PAY_ADDRH_249                                0x1137E4

#define mmSYNC_MNGR_MON_PAY_ADDRH_250                                0x1137E8

#define mmSYNC_MNGR_MON_PAY_ADDRH_251                                0x1137EC

#define mmSYNC_MNGR_MON_PAY_ADDRH_252                                0x1137F0

#define mmSYNC_MNGR_MON_PAY_ADDRH_253                                0x1137F4

#define mmSYNC_MNGR_MON_PAY_ADDRH_254                                0x1137F8

#define mmSYNC_MNGR_MON_PAY_ADDRH_255                                0x1137FC
/* SYNC_MNGR_MON_PAY_ADDRH */
#define SYNC_MNGR_MON_PAY_ADDRH_ADDRH_SHIFT                          0
#define SYNC_MNGR_MON_PAY_ADDRH_ADDRH_MASK                           0xFFFFFFFF

#define mmSYNC_MNGR_MON_PAY_DATA_0                                   0x113800

#define mmSYNC_MNGR_MON_PAY_DATA_1                                   0x113804

#define mmSYNC_MNGR_MON_PAY_DATA_2                                   0x113808

#define mmSYNC_MNGR_MON_PAY_DATA_3                                   0x11380C

#define mmSYNC_MNGR_MON_PAY_DATA_4                                   0x113810

#define mmSYNC_MNGR_MON_PAY_DATA_5                                   0x113814

#define mmSYNC_MNGR_MON_PAY_DATA_6                                   0x113818

#define mmSYNC_MNGR_MON_PAY_DATA_7                                   0x11381C

#define mmSYNC_MNGR_MON_PAY_DATA_8                                   0x113820

#define mmSYNC_MNGR_MON_PAY_DATA_9                                   0x113824

#define mmSYNC_MNGR_MON_PAY_DATA_10                                  0x113828

#define mmSYNC_MNGR_MON_PAY_DATA_11                                  0x11382C

#define mmSYNC_MNGR_MON_PAY_DATA_12                                  0x113830

#define mmSYNC_MNGR_MON_PAY_DATA_13                                  0x113834

#define mmSYNC_MNGR_MON_PAY_DATA_14                                  0x113838

#define mmSYNC_MNGR_MON_PAY_DATA_15                                  0x11383C

#define mmSYNC_MNGR_MON_PAY_DATA_16                                  0x113840

#define mmSYNC_MNGR_MON_PAY_DATA_17                                  0x113844

#define mmSYNC_MNGR_MON_PAY_DATA_18                                  0x113848

#define mmSYNC_MNGR_MON_PAY_DATA_19                                  0x11384C

#define mmSYNC_MNGR_MON_PAY_DATA_20                                  0x113850

#define mmSYNC_MNGR_MON_PAY_DATA_21                                  0x113854

#define mmSYNC_MNGR_MON_PAY_DATA_22                                  0x113858

#define mmSYNC_MNGR_MON_PAY_DATA_23                                  0x11385C

#define mmSYNC_MNGR_MON_PAY_DATA_24                                  0x113860

#define mmSYNC_MNGR_MON_PAY_DATA_25                                  0x113864

#define mmSYNC_MNGR_MON_PAY_DATA_26                                  0x113868

#define mmSYNC_MNGR_MON_PAY_DATA_27                                  0x11386C

#define mmSYNC_MNGR_MON_PAY_DATA_28                                  0x113870

#define mmSYNC_MNGR_MON_PAY_DATA_29                                  0x113874

#define mmSYNC_MNGR_MON_PAY_DATA_30                                  0x113878

#define mmSYNC_MNGR_MON_PAY_DATA_31                                  0x11387C

#define mmSYNC_MNGR_MON_PAY_DATA_32                                  0x113880

#define mmSYNC_MNGR_MON_PAY_DATA_33                                  0x113884

#define mmSYNC_MNGR_MON_PAY_DATA_34                                  0x113888

#define mmSYNC_MNGR_MON_PAY_DATA_35                                  0x11388C

#define mmSYNC_MNGR_MON_PAY_DATA_36                                  0x113890

#define mmSYNC_MNGR_MON_PAY_DATA_37                                  0x113894

#define mmSYNC_MNGR_MON_PAY_DATA_38                                  0x113898

#define mmSYNC_MNGR_MON_PAY_DATA_39                                  0x11389C

#define mmSYNC_MNGR_MON_PAY_DATA_40                                  0x1138A0

#define mmSYNC_MNGR_MON_PAY_DATA_41                                  0x1138A4

#define mmSYNC_MNGR_MON_PAY_DATA_42                                  0x1138A8

#define mmSYNC_MNGR_MON_PAY_DATA_43                                  0x1138AC

#define mmSYNC_MNGR_MON_PAY_DATA_44                                  0x1138B0

#define mmSYNC_MNGR_MON_PAY_DATA_45                                  0x1138B4

#define mmSYNC_MNGR_MON_PAY_DATA_46                                  0x1138B8

#define mmSYNC_MNGR_MON_PAY_DATA_47                                  0x1138BC

#define mmSYNC_MNGR_MON_PAY_DATA_48                                  0x1138C0

#define mmSYNC_MNGR_MON_PAY_DATA_49                                  0x1138C4

#define mmSYNC_MNGR_MON_PAY_DATA_50                                  0x1138C8

#define mmSYNC_MNGR_MON_PAY_DATA_51                                  0x1138CC

#define mmSYNC_MNGR_MON_PAY_DATA_52                                  0x1138D0

#define mmSYNC_MNGR_MON_PAY_DATA_53                                  0x1138D4

#define mmSYNC_MNGR_MON_PAY_DATA_54                                  0x1138D8

#define mmSYNC_MNGR_MON_PAY_DATA_55                                  0x1138DC

#define mmSYNC_MNGR_MON_PAY_DATA_56                                  0x1138E0

#define mmSYNC_MNGR_MON_PAY_DATA_57                                  0x1138E4

#define mmSYNC_MNGR_MON_PAY_DATA_58                                  0x1138E8

#define mmSYNC_MNGR_MON_PAY_DATA_59                                  0x1138EC

#define mmSYNC_MNGR_MON_PAY_DATA_60                                  0x1138F0

#define mmSYNC_MNGR_MON_PAY_DATA_61                                  0x1138F4

#define mmSYNC_MNGR_MON_PAY_DATA_62                                  0x1138F8

#define mmSYNC_MNGR_MON_PAY_DATA_63                                  0x1138FC

#define mmSYNC_MNGR_MON_PAY_DATA_64                                  0x113900

#define mmSYNC_MNGR_MON_PAY_DATA_65                                  0x113904

#define mmSYNC_MNGR_MON_PAY_DATA_66                                  0x113908

#define mmSYNC_MNGR_MON_PAY_DATA_67                                  0x11390C

#define mmSYNC_MNGR_MON_PAY_DATA_68                                  0x113910

#define mmSYNC_MNGR_MON_PAY_DATA_69                                  0x113914

#define mmSYNC_MNGR_MON_PAY_DATA_70                                  0x113918

#define mmSYNC_MNGR_MON_PAY_DATA_71                                  0x11391C

#define mmSYNC_MNGR_MON_PAY_DATA_72                                  0x113920

#define mmSYNC_MNGR_MON_PAY_DATA_73                                  0x113924

#define mmSYNC_MNGR_MON_PAY_DATA_74                                  0x113928

#define mmSYNC_MNGR_MON_PAY_DATA_75                                  0x11392C

#define mmSYNC_MNGR_MON_PAY_DATA_76                                  0x113930

#define mmSYNC_MNGR_MON_PAY_DATA_77                                  0x113934

#define mmSYNC_MNGR_MON_PAY_DATA_78                                  0x113938

#define mmSYNC_MNGR_MON_PAY_DATA_79                                  0x11393C

#define mmSYNC_MNGR_MON_PAY_DATA_80                                  0x113940

#define mmSYNC_MNGR_MON_PAY_DATA_81                                  0x113944

#define mmSYNC_MNGR_MON_PAY_DATA_82                                  0x113948

#define mmSYNC_MNGR_MON_PAY_DATA_83                                  0x11394C

#define mmSYNC_MNGR_MON_PAY_DATA_84                                  0x113950

#define mmSYNC_MNGR_MON_PAY_DATA_85                                  0x113954

#define mmSYNC_MNGR_MON_PAY_DATA_86                                  0x113958

#define mmSYNC_MNGR_MON_PAY_DATA_87                                  0x11395C

#define mmSYNC_MNGR_MON_PAY_DATA_88                                  0x113960

#define mmSYNC_MNGR_MON_PAY_DATA_89                                  0x113964

#define mmSYNC_MNGR_MON_PAY_DATA_90                                  0x113968

#define mmSYNC_MNGR_MON_PAY_DATA_91                                  0x11396C

#define mmSYNC_MNGR_MON_PAY_DATA_92                                  0x113970

#define mmSYNC_MNGR_MON_PAY_DATA_93                                  0x113974

#define mmSYNC_MNGR_MON_PAY_DATA_94                                  0x113978

#define mmSYNC_MNGR_MON_PAY_DATA_95                                  0x11397C

#define mmSYNC_MNGR_MON_PAY_DATA_96                                  0x113980

#define mmSYNC_MNGR_MON_PAY_DATA_97                                  0x113984

#define mmSYNC_MNGR_MON_PAY_DATA_98                                  0x113988

#define mmSYNC_MNGR_MON_PAY_DATA_99                                  0x11398C

#define mmSYNC_MNGR_MON_PAY_DATA_100                                 0x113990

#define mmSYNC_MNGR_MON_PAY_DATA_101                                 0x113994

#define mmSYNC_MNGR_MON_PAY_DATA_102                                 0x113998

#define mmSYNC_MNGR_MON_PAY_DATA_103                                 0x11399C

#define mmSYNC_MNGR_MON_PAY_DATA_104                                 0x1139A0

#define mmSYNC_MNGR_MON_PAY_DATA_105                                 0x1139A4

#define mmSYNC_MNGR_MON_PAY_DATA_106                                 0x1139A8

#define mmSYNC_MNGR_MON_PAY_DATA_107                                 0x1139AC

#define mmSYNC_MNGR_MON_PAY_DATA_108                                 0x1139B0

#define mmSYNC_MNGR_MON_PAY_DATA_109                                 0x1139B4

#define mmSYNC_MNGR_MON_PAY_DATA_110                                 0x1139B8

#define mmSYNC_MNGR_MON_PAY_DATA_111                                 0x1139BC

#define mmSYNC_MNGR_MON_PAY_DATA_112                                 0x1139C0

#define mmSYNC_MNGR_MON_PAY_DATA_113                                 0x1139C4

#define mmSYNC_MNGR_MON_PAY_DATA_114                                 0x1139C8

#define mmSYNC_MNGR_MON_PAY_DATA_115                                 0x1139CC

#define mmSYNC_MNGR_MON_PAY_DATA_116                                 0x1139D0

#define mmSYNC_MNGR_MON_PAY_DATA_117                                 0x1139D4

#define mmSYNC_MNGR_MON_PAY_DATA_118                                 0x1139D8

#define mmSYNC_MNGR_MON_PAY_DATA_119                                 0x1139DC

#define mmSYNC_MNGR_MON_PAY_DATA_120                                 0x1139E0

#define mmSYNC_MNGR_MON_PAY_DATA_121                                 0x1139E4

#define mmSYNC_MNGR_MON_PAY_DATA_122                                 0x1139E8

#define mmSYNC_MNGR_MON_PAY_DATA_123                                 0x1139EC

#define mmSYNC_MNGR_MON_PAY_DATA_124                                 0x1139F0

#define mmSYNC_MNGR_MON_PAY_DATA_125                                 0x1139F4

#define mmSYNC_MNGR_MON_PAY_DATA_126                                 0x1139F8

#define mmSYNC_MNGR_MON_PAY_DATA_127                                 0x1139FC

#define mmSYNC_MNGR_MON_PAY_DATA_128                                 0x113A00

#define mmSYNC_MNGR_MON_PAY_DATA_129                                 0x113A04

#define mmSYNC_MNGR_MON_PAY_DATA_130                                 0x113A08

#define mmSYNC_MNGR_MON_PAY_DATA_131                                 0x113A0C

#define mmSYNC_MNGR_MON_PAY_DATA_132                                 0x113A10

#define mmSYNC_MNGR_MON_PAY_DATA_133                                 0x113A14

#define mmSYNC_MNGR_MON_PAY_DATA_134                                 0x113A18

#define mmSYNC_MNGR_MON_PAY_DATA_135                                 0x113A1C

#define mmSYNC_MNGR_MON_PAY_DATA_136                                 0x113A20

#define mmSYNC_MNGR_MON_PAY_DATA_137                                 0x113A24

#define mmSYNC_MNGR_MON_PAY_DATA_138                                 0x113A28

#define mmSYNC_MNGR_MON_PAY_DATA_139                                 0x113A2C

#define mmSYNC_MNGR_MON_PAY_DATA_140                                 0x113A30

#define mmSYNC_MNGR_MON_PAY_DATA_141                                 0x113A34

#define mmSYNC_MNGR_MON_PAY_DATA_142                                 0x113A38

#define mmSYNC_MNGR_MON_PAY_DATA_143                                 0x113A3C

#define mmSYNC_MNGR_MON_PAY_DATA_144                                 0x113A40

#define mmSYNC_MNGR_MON_PAY_DATA_145                                 0x113A44

#define mmSYNC_MNGR_MON_PAY_DATA_146                                 0x113A48

#define mmSYNC_MNGR_MON_PAY_DATA_147                                 0x113A4C

#define mmSYNC_MNGR_MON_PAY_DATA_148                                 0x113A50

#define mmSYNC_MNGR_MON_PAY_DATA_149                                 0x113A54

#define mmSYNC_MNGR_MON_PAY_DATA_150                                 0x113A58

#define mmSYNC_MNGR_MON_PAY_DATA_151                                 0x113A5C

#define mmSYNC_MNGR_MON_PAY_DATA_152                                 0x113A60

#define mmSYNC_MNGR_MON_PAY_DATA_153                                 0x113A64

#define mmSYNC_MNGR_MON_PAY_DATA_154                                 0x113A68

#define mmSYNC_MNGR_MON_PAY_DATA_155                                 0x113A6C

#define mmSYNC_MNGR_MON_PAY_DATA_156                                 0x113A70

#define mmSYNC_MNGR_MON_PAY_DATA_157                                 0x113A74

#define mmSYNC_MNGR_MON_PAY_DATA_158                                 0x113A78

#define mmSYNC_MNGR_MON_PAY_DATA_159                                 0x113A7C

#define mmSYNC_MNGR_MON_PAY_DATA_160                                 0x113A80

#define mmSYNC_MNGR_MON_PAY_DATA_161                                 0x113A84

#define mmSYNC_MNGR_MON_PAY_DATA_162                                 0x113A88

#define mmSYNC_MNGR_MON_PAY_DATA_163                                 0x113A8C

#define mmSYNC_MNGR_MON_PAY_DATA_164                                 0x113A90

#define mmSYNC_MNGR_MON_PAY_DATA_165                                 0x113A94

#define mmSYNC_MNGR_MON_PAY_DATA_166                                 0x113A98

#define mmSYNC_MNGR_MON_PAY_DATA_167                                 0x113A9C

#define mmSYNC_MNGR_MON_PAY_DATA_168                                 0x113AA0

#define mmSYNC_MNGR_MON_PAY_DATA_169                                 0x113AA4

#define mmSYNC_MNGR_MON_PAY_DATA_170                                 0x113AA8

#define mmSYNC_MNGR_MON_PAY_DATA_171                                 0x113AAC

#define mmSYNC_MNGR_MON_PAY_DATA_172                                 0x113AB0

#define mmSYNC_MNGR_MON_PAY_DATA_173                                 0x113AB4

#define mmSYNC_MNGR_MON_PAY_DATA_174                                 0x113AB8

#define mmSYNC_MNGR_MON_PAY_DATA_175                                 0x113ABC

#define mmSYNC_MNGR_MON_PAY_DATA_176                                 0x113AC0

#define mmSYNC_MNGR_MON_PAY_DATA_177                                 0x113AC4

#define mmSYNC_MNGR_MON_PAY_DATA_178                                 0x113AC8

#define mmSYNC_MNGR_MON_PAY_DATA_179                                 0x113ACC

#define mmSYNC_MNGR_MON_PAY_DATA_180                                 0x113AD0

#define mmSYNC_MNGR_MON_PAY_DATA_181                                 0x113AD4

#define mmSYNC_MNGR_MON_PAY_DATA_182                                 0x113AD8

#define mmSYNC_MNGR_MON_PAY_DATA_183                                 0x113ADC

#define mmSYNC_MNGR_MON_PAY_DATA_184                                 0x113AE0

#define mmSYNC_MNGR_MON_PAY_DATA_185                                 0x113AE4

#define mmSYNC_MNGR_MON_PAY_DATA_186                                 0x113AE8

#define mmSYNC_MNGR_MON_PAY_DATA_187                                 0x113AEC

#define mmSYNC_MNGR_MON_PAY_DATA_188                                 0x113AF0

#define mmSYNC_MNGR_MON_PAY_DATA_189                                 0x113AF4

#define mmSYNC_MNGR_MON_PAY_DATA_190                                 0x113AF8

#define mmSYNC_MNGR_MON_PAY_DATA_191                                 0x113AFC

#define mmSYNC_MNGR_MON_PAY_DATA_192                                 0x113B00

#define mmSYNC_MNGR_MON_PAY_DATA_193                                 0x113B04

#define mmSYNC_MNGR_MON_PAY_DATA_194                                 0x113B08

#define mmSYNC_MNGR_MON_PAY_DATA_195                                 0x113B0C

#define mmSYNC_MNGR_MON_PAY_DATA_196                                 0x113B10

#define mmSYNC_MNGR_MON_PAY_DATA_197                                 0x113B14

#define mmSYNC_MNGR_MON_PAY_DATA_198                                 0x113B18

#define mmSYNC_MNGR_MON_PAY_DATA_199                                 0x113B1C

#define mmSYNC_MNGR_MON_PAY_DATA_200                                 0x113B20

#define mmSYNC_MNGR_MON_PAY_DATA_201                                 0x113B24

#define mmSYNC_MNGR_MON_PAY_DATA_202                                 0x113B28

#define mmSYNC_MNGR_MON_PAY_DATA_203                                 0x113B2C

#define mmSYNC_MNGR_MON_PAY_DATA_204                                 0x113B30

#define mmSYNC_MNGR_MON_PAY_DATA_205                                 0x113B34

#define mmSYNC_MNGR_MON_PAY_DATA_206                                 0x113B38

#define mmSYNC_MNGR_MON_PAY_DATA_207                                 0x113B3C

#define mmSYNC_MNGR_MON_PAY_DATA_208                                 0x113B40

#define mmSYNC_MNGR_MON_PAY_DATA_209                                 0x113B44

#define mmSYNC_MNGR_MON_PAY_DATA_210                                 0x113B48

#define mmSYNC_MNGR_MON_PAY_DATA_211                                 0x113B4C

#define mmSYNC_MNGR_MON_PAY_DATA_212                                 0x113B50

#define mmSYNC_MNGR_MON_PAY_DATA_213                                 0x113B54

#define mmSYNC_MNGR_MON_PAY_DATA_214                                 0x113B58

#define mmSYNC_MNGR_MON_PAY_DATA_215                                 0x113B5C

#define mmSYNC_MNGR_MON_PAY_DATA_216                                 0x113B60

#define mmSYNC_MNGR_MON_PAY_DATA_217                                 0x113B64

#define mmSYNC_MNGR_MON_PAY_DATA_218                                 0x113B68

#define mmSYNC_MNGR_MON_PAY_DATA_219                                 0x113B6C

#define mmSYNC_MNGR_MON_PAY_DATA_220                                 0x113B70

#define mmSYNC_MNGR_MON_PAY_DATA_221                                 0x113B74

#define mmSYNC_MNGR_MON_PAY_DATA_222                                 0x113B78

#define mmSYNC_MNGR_MON_PAY_DATA_223                                 0x113B7C

#define mmSYNC_MNGR_MON_PAY_DATA_224                                 0x113B80

#define mmSYNC_MNGR_MON_PAY_DATA_225                                 0x113B84

#define mmSYNC_MNGR_MON_PAY_DATA_226                                 0x113B88

#define mmSYNC_MNGR_MON_PAY_DATA_227                                 0x113B8C

#define mmSYNC_MNGR_MON_PAY_DATA_228                                 0x113B90

#define mmSYNC_MNGR_MON_PAY_DATA_229                                 0x113B94

#define mmSYNC_MNGR_MON_PAY_DATA_230                                 0x113B98

#define mmSYNC_MNGR_MON_PAY_DATA_231                                 0x113B9C

#define mmSYNC_MNGR_MON_PAY_DATA_232                                 0x113BA0

#define mmSYNC_MNGR_MON_PAY_DATA_233                                 0x113BA4

#define mmSYNC_MNGR_MON_PAY_DATA_234                                 0x113BA8

#define mmSYNC_MNGR_MON_PAY_DATA_235                                 0x113BAC

#define mmSYNC_MNGR_MON_PAY_DATA_236                                 0x113BB0

#define mmSYNC_MNGR_MON_PAY_DATA_237                                 0x113BB4

#define mmSYNC_MNGR_MON_PAY_DATA_238                                 0x113BB8

#define mmSYNC_MNGR_MON_PAY_DATA_239                                 0x113BBC

#define mmSYNC_MNGR_MON_PAY_DATA_240                                 0x113BC0

#define mmSYNC_MNGR_MON_PAY_DATA_241                                 0x113BC4

#define mmSYNC_MNGR_MON_PAY_DATA_242                                 0x113BC8

#define mmSYNC_MNGR_MON_PAY_DATA_243                                 0x113BCC

#define mmSYNC_MNGR_MON_PAY_DATA_244                                 0x113BD0

#define mmSYNC_MNGR_MON_PAY_DATA_245                                 0x113BD4

#define mmSYNC_MNGR_MON_PAY_DATA_246                                 0x113BD8

#define mmSYNC_MNGR_MON_PAY_DATA_247                                 0x113BDC

#define mmSYNC_MNGR_MON_PAY_DATA_248                                 0x113BE0

#define mmSYNC_MNGR_MON_PAY_DATA_249                                 0x113BE4

#define mmSYNC_MNGR_MON_PAY_DATA_250                                 0x113BE8

#define mmSYNC_MNGR_MON_PAY_DATA_251                                 0x113BEC

#define mmSYNC_MNGR_MON_PAY_DATA_252                                 0x113BF0

#define mmSYNC_MNGR_MON_PAY_DATA_253                                 0x113BF4

#define mmSYNC_MNGR_MON_PAY_DATA_254                                 0x113BF8

#define mmSYNC_MNGR_MON_PAY_DATA_255                                 0x113BFC
/* SYNC_MNGR_MON_PAY_DATA */
#define SYNC_MNGR_MON_PAY_DATA_DATA_SHIFT                            0
#define SYNC_MNGR_MON_PAY_DATA_DATA_MASK                             0xFFFFFFFF

#define mmSYNC_MNGR_MON_ARM_0                                        0x113C00

#define mmSYNC_MNGR_MON_ARM_1                                        0x113C04

#define mmSYNC_MNGR_MON_ARM_2                                        0x113C08

#define mmSYNC_MNGR_MON_ARM_3                                        0x113C0C

#define mmSYNC_MNGR_MON_ARM_4                                        0x113C10

#define mmSYNC_MNGR_MON_ARM_5                                        0x113C14

#define mmSYNC_MNGR_MON_ARM_6                                        0x113C18

#define mmSYNC_MNGR_MON_ARM_7                                        0x113C1C

#define mmSYNC_MNGR_MON_ARM_8                                        0x113C20

#define mmSYNC_MNGR_MON_ARM_9                                        0x113C24

#define mmSYNC_MNGR_MON_ARM_10                                       0x113C28

#define mmSYNC_MNGR_MON_ARM_11                                       0x113C2C

#define mmSYNC_MNGR_MON_ARM_12                                       0x113C30

#define mmSYNC_MNGR_MON_ARM_13                                       0x113C34

#define mmSYNC_MNGR_MON_ARM_14                                       0x113C38

#define mmSYNC_MNGR_MON_ARM_15                                       0x113C3C

#define mmSYNC_MNGR_MON_ARM_16                                       0x113C40

#define mmSYNC_MNGR_MON_ARM_17                                       0x113C44

#define mmSYNC_MNGR_MON_ARM_18                                       0x113C48

#define mmSYNC_MNGR_MON_ARM_19                                       0x113C4C

#define mmSYNC_MNGR_MON_ARM_20                                       0x113C50

#define mmSYNC_MNGR_MON_ARM_21                                       0x113C54

#define mmSYNC_MNGR_MON_ARM_22                                       0x113C58

#define mmSYNC_MNGR_MON_ARM_23                                       0x113C5C

#define mmSYNC_MNGR_MON_ARM_24                                       0x113C60

#define mmSYNC_MNGR_MON_ARM_25                                       0x113C64

#define mmSYNC_MNGR_MON_ARM_26                                       0x113C68

#define mmSYNC_MNGR_MON_ARM_27                                       0x113C6C

#define mmSYNC_MNGR_MON_ARM_28                                       0x113C70

#define mmSYNC_MNGR_MON_ARM_29                                       0x113C74

#define mmSYNC_MNGR_MON_ARM_30                                       0x113C78

#define mmSYNC_MNGR_MON_ARM_31                                       0x113C7C

#define mmSYNC_MNGR_MON_ARM_32                                       0x113C80

#define mmSYNC_MNGR_MON_ARM_33                                       0x113C84

#define mmSYNC_MNGR_MON_ARM_34                                       0x113C88

#define mmSYNC_MNGR_MON_ARM_35                                       0x113C8C

#define mmSYNC_MNGR_MON_ARM_36                                       0x113C90

#define mmSYNC_MNGR_MON_ARM_37                                       0x113C94

#define mmSYNC_MNGR_MON_ARM_38                                       0x113C98

#define mmSYNC_MNGR_MON_ARM_39                                       0x113C9C

#define mmSYNC_MNGR_MON_ARM_40                                       0x113CA0

#define mmSYNC_MNGR_MON_ARM_41                                       0x113CA4

#define mmSYNC_MNGR_MON_ARM_42                                       0x113CA8

#define mmSYNC_MNGR_MON_ARM_43                                       0x113CAC

#define mmSYNC_MNGR_MON_ARM_44                                       0x113CB0

#define mmSYNC_MNGR_MON_ARM_45                                       0x113CB4

#define mmSYNC_MNGR_MON_ARM_46                                       0x113CB8

#define mmSYNC_MNGR_MON_ARM_47                                       0x113CBC

#define mmSYNC_MNGR_MON_ARM_48                                       0x113CC0

#define mmSYNC_MNGR_MON_ARM_49                                       0x113CC4

#define mmSYNC_MNGR_MON_ARM_50                                       0x113CC8

#define mmSYNC_MNGR_MON_ARM_51                                       0x113CCC

#define mmSYNC_MNGR_MON_ARM_52                                       0x113CD0

#define mmSYNC_MNGR_MON_ARM_53                                       0x113CD4

#define mmSYNC_MNGR_MON_ARM_54                                       0x113CD8

#define mmSYNC_MNGR_MON_ARM_55                                       0x113CDC

#define mmSYNC_MNGR_MON_ARM_56                                       0x113CE0

#define mmSYNC_MNGR_MON_ARM_57                                       0x113CE4

#define mmSYNC_MNGR_MON_ARM_58                                       0x113CE8

#define mmSYNC_MNGR_MON_ARM_59                                       0x113CEC

#define mmSYNC_MNGR_MON_ARM_60                                       0x113CF0

#define mmSYNC_MNGR_MON_ARM_61                                       0x113CF4

#define mmSYNC_MNGR_MON_ARM_62                                       0x113CF8

#define mmSYNC_MNGR_MON_ARM_63                                       0x113CFC

#define mmSYNC_MNGR_MON_ARM_64                                       0x113D00

#define mmSYNC_MNGR_MON_ARM_65                                       0x113D04

#define mmSYNC_MNGR_MON_ARM_66                                       0x113D08

#define mmSYNC_MNGR_MON_ARM_67                                       0x113D0C

#define mmSYNC_MNGR_MON_ARM_68                                       0x113D10

#define mmSYNC_MNGR_MON_ARM_69                                       0x113D14

#define mmSYNC_MNGR_MON_ARM_70                                       0x113D18

#define mmSYNC_MNGR_MON_ARM_71                                       0x113D1C

#define mmSYNC_MNGR_MON_ARM_72                                       0x113D20

#define mmSYNC_MNGR_MON_ARM_73                                       0x113D24

#define mmSYNC_MNGR_MON_ARM_74                                       0x113D28

#define mmSYNC_MNGR_MON_ARM_75                                       0x113D2C

#define mmSYNC_MNGR_MON_ARM_76                                       0x113D30

#define mmSYNC_MNGR_MON_ARM_77                                       0x113D34

#define mmSYNC_MNGR_MON_ARM_78                                       0x113D38

#define mmSYNC_MNGR_MON_ARM_79                                       0x113D3C

#define mmSYNC_MNGR_MON_ARM_80                                       0x113D40

#define mmSYNC_MNGR_MON_ARM_81                                       0x113D44

#define mmSYNC_MNGR_MON_ARM_82                                       0x113D48

#define mmSYNC_MNGR_MON_ARM_83                                       0x113D4C

#define mmSYNC_MNGR_MON_ARM_84                                       0x113D50

#define mmSYNC_MNGR_MON_ARM_85                                       0x113D54

#define mmSYNC_MNGR_MON_ARM_86                                       0x113D58

#define mmSYNC_MNGR_MON_ARM_87                                       0x113D5C

#define mmSYNC_MNGR_MON_ARM_88                                       0x113D60

#define mmSYNC_MNGR_MON_ARM_89                                       0x113D64

#define mmSYNC_MNGR_MON_ARM_90                                       0x113D68

#define mmSYNC_MNGR_MON_ARM_91                                       0x113D6C

#define mmSYNC_MNGR_MON_ARM_92                                       0x113D70

#define mmSYNC_MNGR_MON_ARM_93                                       0x113D74

#define mmSYNC_MNGR_MON_ARM_94                                       0x113D78

#define mmSYNC_MNGR_MON_ARM_95                                       0x113D7C

#define mmSYNC_MNGR_MON_ARM_96                                       0x113D80

#define mmSYNC_MNGR_MON_ARM_97                                       0x113D84

#define mmSYNC_MNGR_MON_ARM_98                                       0x113D88

#define mmSYNC_MNGR_MON_ARM_99                                       0x113D8C

#define mmSYNC_MNGR_MON_ARM_100                                      0x113D90

#define mmSYNC_MNGR_MON_ARM_101                                      0x113D94

#define mmSYNC_MNGR_MON_ARM_102                                      0x113D98

#define mmSYNC_MNGR_MON_ARM_103                                      0x113D9C

#define mmSYNC_MNGR_MON_ARM_104                                      0x113DA0

#define mmSYNC_MNGR_MON_ARM_105                                      0x113DA4

#define mmSYNC_MNGR_MON_ARM_106                                      0x113DA8

#define mmSYNC_MNGR_MON_ARM_107                                      0x113DAC

#define mmSYNC_MNGR_MON_ARM_108                                      0x113DB0

#define mmSYNC_MNGR_MON_ARM_109                                      0x113DB4

#define mmSYNC_MNGR_MON_ARM_110                                      0x113DB8

#define mmSYNC_MNGR_MON_ARM_111                                      0x113DBC

#define mmSYNC_MNGR_MON_ARM_112                                      0x113DC0

#define mmSYNC_MNGR_MON_ARM_113                                      0x113DC4

#define mmSYNC_MNGR_MON_ARM_114                                      0x113DC8

#define mmSYNC_MNGR_MON_ARM_115                                      0x113DCC

#define mmSYNC_MNGR_MON_ARM_116                                      0x113DD0

#define mmSYNC_MNGR_MON_ARM_117                                      0x113DD4

#define mmSYNC_MNGR_MON_ARM_118                                      0x113DD8

#define mmSYNC_MNGR_MON_ARM_119                                      0x113DDC

#define mmSYNC_MNGR_MON_ARM_120                                      0x113DE0

#define mmSYNC_MNGR_MON_ARM_121                                      0x113DE4

#define mmSYNC_MNGR_MON_ARM_122                                      0x113DE8

#define mmSYNC_MNGR_MON_ARM_123                                      0x113DEC

#define mmSYNC_MNGR_MON_ARM_124                                      0x113DF0

#define mmSYNC_MNGR_MON_ARM_125                                      0x113DF4

#define mmSYNC_MNGR_MON_ARM_126                                      0x113DF8

#define mmSYNC_MNGR_MON_ARM_127                                      0x113DFC

#define mmSYNC_MNGR_MON_ARM_128                                      0x113E00

#define mmSYNC_MNGR_MON_ARM_129                                      0x113E04

#define mmSYNC_MNGR_MON_ARM_130                                      0x113E08

#define mmSYNC_MNGR_MON_ARM_131                                      0x113E0C

#define mmSYNC_MNGR_MON_ARM_132                                      0x113E10

#define mmSYNC_MNGR_MON_ARM_133                                      0x113E14

#define mmSYNC_MNGR_MON_ARM_134                                      0x113E18

#define mmSYNC_MNGR_MON_ARM_135                                      0x113E1C

#define mmSYNC_MNGR_MON_ARM_136                                      0x113E20

#define mmSYNC_MNGR_MON_ARM_137                                      0x113E24

#define mmSYNC_MNGR_MON_ARM_138                                      0x113E28

#define mmSYNC_MNGR_MON_ARM_139                                      0x113E2C

#define mmSYNC_MNGR_MON_ARM_140                                      0x113E30

#define mmSYNC_MNGR_MON_ARM_141                                      0x113E34

#define mmSYNC_MNGR_MON_ARM_142                                      0x113E38

#define mmSYNC_MNGR_MON_ARM_143                                      0x113E3C

#define mmSYNC_MNGR_MON_ARM_144                                      0x113E40

#define mmSYNC_MNGR_MON_ARM_145                                      0x113E44

#define mmSYNC_MNGR_MON_ARM_146                                      0x113E48

#define mmSYNC_MNGR_MON_ARM_147                                      0x113E4C

#define mmSYNC_MNGR_MON_ARM_148                                      0x113E50

#define mmSYNC_MNGR_MON_ARM_149                                      0x113E54

#define mmSYNC_MNGR_MON_ARM_150                                      0x113E58

#define mmSYNC_MNGR_MON_ARM_151                                      0x113E5C

#define mmSYNC_MNGR_MON_ARM_152                                      0x113E60

#define mmSYNC_MNGR_MON_ARM_153                                      0x113E64

#define mmSYNC_MNGR_MON_ARM_154                                      0x113E68

#define mmSYNC_MNGR_MON_ARM_155                                      0x113E6C

#define mmSYNC_MNGR_MON_ARM_156                                      0x113E70

#define mmSYNC_MNGR_MON_ARM_157                                      0x113E74

#define mmSYNC_MNGR_MON_ARM_158                                      0x113E78

#define mmSYNC_MNGR_MON_ARM_159                                      0x113E7C

#define mmSYNC_MNGR_MON_ARM_160                                      0x113E80

#define mmSYNC_MNGR_MON_ARM_161                                      0x113E84

#define mmSYNC_MNGR_MON_ARM_162                                      0x113E88

#define mmSYNC_MNGR_MON_ARM_163                                      0x113E8C

#define mmSYNC_MNGR_MON_ARM_164                                      0x113E90

#define mmSYNC_MNGR_MON_ARM_165                                      0x113E94

#define mmSYNC_MNGR_MON_ARM_166                                      0x113E98

#define mmSYNC_MNGR_MON_ARM_167                                      0x113E9C

#define mmSYNC_MNGR_MON_ARM_168                                      0x113EA0

#define mmSYNC_MNGR_MON_ARM_169                                      0x113EA4

#define mmSYNC_MNGR_MON_ARM_170                                      0x113EA8

#define mmSYNC_MNGR_MON_ARM_171                                      0x113EAC

#define mmSYNC_MNGR_MON_ARM_172                                      0x113EB0

#define mmSYNC_MNGR_MON_ARM_173                                      0x113EB4

#define mmSYNC_MNGR_MON_ARM_174                                      0x113EB8

#define mmSYNC_MNGR_MON_ARM_175                                      0x113EBC

#define mmSYNC_MNGR_MON_ARM_176                                      0x113EC0

#define mmSYNC_MNGR_MON_ARM_177                                      0x113EC4

#define mmSYNC_MNGR_MON_ARM_178                                      0x113EC8

#define mmSYNC_MNGR_MON_ARM_179                                      0x113ECC

#define mmSYNC_MNGR_MON_ARM_180                                      0x113ED0

#define mmSYNC_MNGR_MON_ARM_181                                      0x113ED4

#define mmSYNC_MNGR_MON_ARM_182                                      0x113ED8

#define mmSYNC_MNGR_MON_ARM_183                                      0x113EDC

#define mmSYNC_MNGR_MON_ARM_184                                      0x113EE0

#define mmSYNC_MNGR_MON_ARM_185                                      0x113EE4

#define mmSYNC_MNGR_MON_ARM_186                                      0x113EE8

#define mmSYNC_MNGR_MON_ARM_187                                      0x113EEC

#define mmSYNC_MNGR_MON_ARM_188                                      0x113EF0

#define mmSYNC_MNGR_MON_ARM_189                                      0x113EF4

#define mmSYNC_MNGR_MON_ARM_190                                      0x113EF8

#define mmSYNC_MNGR_MON_ARM_191                                      0x113EFC

#define mmSYNC_MNGR_MON_ARM_192                                      0x113F00

#define mmSYNC_MNGR_MON_ARM_193                                      0x113F04

#define mmSYNC_MNGR_MON_ARM_194                                      0x113F08

#define mmSYNC_MNGR_MON_ARM_195                                      0x113F0C

#define mmSYNC_MNGR_MON_ARM_196                                      0x113F10

#define mmSYNC_MNGR_MON_ARM_197                                      0x113F14

#define mmSYNC_MNGR_MON_ARM_198                                      0x113F18

#define mmSYNC_MNGR_MON_ARM_199                                      0x113F1C

#define mmSYNC_MNGR_MON_ARM_200                                      0x113F20

#define mmSYNC_MNGR_MON_ARM_201                                      0x113F24

#define mmSYNC_MNGR_MON_ARM_202                                      0x113F28

#define mmSYNC_MNGR_MON_ARM_203                                      0x113F2C

#define mmSYNC_MNGR_MON_ARM_204                                      0x113F30

#define mmSYNC_MNGR_MON_ARM_205                                      0x113F34

#define mmSYNC_MNGR_MON_ARM_206                                      0x113F38

#define mmSYNC_MNGR_MON_ARM_207                                      0x113F3C

#define mmSYNC_MNGR_MON_ARM_208                                      0x113F40

#define mmSYNC_MNGR_MON_ARM_209                                      0x113F44

#define mmSYNC_MNGR_MON_ARM_210                                      0x113F48

#define mmSYNC_MNGR_MON_ARM_211                                      0x113F4C

#define mmSYNC_MNGR_MON_ARM_212                                      0x113F50

#define mmSYNC_MNGR_MON_ARM_213                                      0x113F54

#define mmSYNC_MNGR_MON_ARM_214                                      0x113F58

#define mmSYNC_MNGR_MON_ARM_215                                      0x113F5C

#define mmSYNC_MNGR_MON_ARM_216                                      0x113F60

#define mmSYNC_MNGR_MON_ARM_217                                      0x113F64

#define mmSYNC_MNGR_MON_ARM_218                                      0x113F68

#define mmSYNC_MNGR_MON_ARM_219                                      0x113F6C

#define mmSYNC_MNGR_MON_ARM_220                                      0x113F70

#define mmSYNC_MNGR_MON_ARM_221                                      0x113F74

#define mmSYNC_MNGR_MON_ARM_222                                      0x113F78

#define mmSYNC_MNGR_MON_ARM_223                                      0x113F7C

#define mmSYNC_MNGR_MON_ARM_224                                      0x113F80

#define mmSYNC_MNGR_MON_ARM_225                                      0x113F84

#define mmSYNC_MNGR_MON_ARM_226                                      0x113F88

#define mmSYNC_MNGR_MON_ARM_227                                      0x113F8C

#define mmSYNC_MNGR_MON_ARM_228                                      0x113F90

#define mmSYNC_MNGR_MON_ARM_229                                      0x113F94

#define mmSYNC_MNGR_MON_ARM_230                                      0x113F98

#define mmSYNC_MNGR_MON_ARM_231                                      0x113F9C

#define mmSYNC_MNGR_MON_ARM_232                                      0x113FA0

#define mmSYNC_MNGR_MON_ARM_233                                      0x113FA4

#define mmSYNC_MNGR_MON_ARM_234                                      0x113FA8

#define mmSYNC_MNGR_MON_ARM_235                                      0x113FAC

#define mmSYNC_MNGR_MON_ARM_236                                      0x113FB0

#define mmSYNC_MNGR_MON_ARM_237                                      0x113FB4

#define mmSYNC_MNGR_MON_ARM_238                                      0x113FB8

#define mmSYNC_MNGR_MON_ARM_239                                      0x113FBC

#define mmSYNC_MNGR_MON_ARM_240                                      0x113FC0

#define mmSYNC_MNGR_MON_ARM_241                                      0x113FC4

#define mmSYNC_MNGR_MON_ARM_242                                      0x113FC8

#define mmSYNC_MNGR_MON_ARM_243                                      0x113FCC

#define mmSYNC_MNGR_MON_ARM_244                                      0x113FD0

#define mmSYNC_MNGR_MON_ARM_245                                      0x113FD4

#define mmSYNC_MNGR_MON_ARM_246                                      0x113FD8

#define mmSYNC_MNGR_MON_ARM_247                                      0x113FDC

#define mmSYNC_MNGR_MON_ARM_248                                      0x113FE0

#define mmSYNC_MNGR_MON_ARM_249                                      0x113FE4

#define mmSYNC_MNGR_MON_ARM_250                                      0x113FE8

#define mmSYNC_MNGR_MON_ARM_251                                      0x113FEC

#define mmSYNC_MNGR_MON_ARM_252                                      0x113FF0

#define mmSYNC_MNGR_MON_ARM_253                                      0x113FF4

#define mmSYNC_MNGR_MON_ARM_254                                      0x113FF8

#define mmSYNC_MNGR_MON_ARM_255                                      0x113FFC
/* SYNC_MNGR_MON_ARM */
#define SYNC_MNGR_MON_ARM_SID_SHIFT                                  0
#define SYNC_MNGR_MON_ARM_SID_MASK                                   0x3FF
#define SYNC_MNGR_MON_ARM_SOP_SHIFT                                  15
#define SYNC_MNGR_MON_ARM_SOP_MASK                                   0x8000
#define SYNC_MNGR_MON_ARM_SOD_SHIFT                                  16
#define SYNC_MNGR_MON_ARM_SOD_MASK                                   0xFFFF0000

#define mmSYNC_MNGR_MON_STATUS_0                                     0x114000

#define mmSYNC_MNGR_MON_STATUS_1                                     0x114004

#define mmSYNC_MNGR_MON_STATUS_2                                     0x114008

#define mmSYNC_MNGR_MON_STATUS_3                                     0x11400C

#define mmSYNC_MNGR_MON_STATUS_4                                     0x114010

#define mmSYNC_MNGR_MON_STATUS_5                                     0x114014

#define mmSYNC_MNGR_MON_STATUS_6                                     0x114018

#define mmSYNC_MNGR_MON_STATUS_7                                     0x11401C

#define mmSYNC_MNGR_MON_STATUS_8                                     0x114020

#define mmSYNC_MNGR_MON_STATUS_9                                     0x114024

#define mmSYNC_MNGR_MON_STATUS_10                                    0x114028

#define mmSYNC_MNGR_MON_STATUS_11                                    0x11402C

#define mmSYNC_MNGR_MON_STATUS_12                                    0x114030

#define mmSYNC_MNGR_MON_STATUS_13                                    0x114034

#define mmSYNC_MNGR_MON_STATUS_14                                    0x114038

#define mmSYNC_MNGR_MON_STATUS_15                                    0x11403C

#define mmSYNC_MNGR_MON_STATUS_16                                    0x114040

#define mmSYNC_MNGR_MON_STATUS_17                                    0x114044

#define mmSYNC_MNGR_MON_STATUS_18                                    0x114048

#define mmSYNC_MNGR_MON_STATUS_19                                    0x11404C

#define mmSYNC_MNGR_MON_STATUS_20                                    0x114050

#define mmSYNC_MNGR_MON_STATUS_21                                    0x114054

#define mmSYNC_MNGR_MON_STATUS_22                                    0x114058

#define mmSYNC_MNGR_MON_STATUS_23                                    0x11405C

#define mmSYNC_MNGR_MON_STATUS_24                                    0x114060

#define mmSYNC_MNGR_MON_STATUS_25                                    0x114064

#define mmSYNC_MNGR_MON_STATUS_26                                    0x114068

#define mmSYNC_MNGR_MON_STATUS_27                                    0x11406C

#define mmSYNC_MNGR_MON_STATUS_28                                    0x114070

#define mmSYNC_MNGR_MON_STATUS_29                                    0x114074

#define mmSYNC_MNGR_MON_STATUS_30                                    0x114078

#define mmSYNC_MNGR_MON_STATUS_31                                    0x11407C

#define mmSYNC_MNGR_MON_STATUS_32                                    0x114080

#define mmSYNC_MNGR_MON_STATUS_33                                    0x114084

#define mmSYNC_MNGR_MON_STATUS_34                                    0x114088

#define mmSYNC_MNGR_MON_STATUS_35                                    0x11408C

#define mmSYNC_MNGR_MON_STATUS_36                                    0x114090

#define mmSYNC_MNGR_MON_STATUS_37                                    0x114094

#define mmSYNC_MNGR_MON_STATUS_38                                    0x114098

#define mmSYNC_MNGR_MON_STATUS_39                                    0x11409C

#define mmSYNC_MNGR_MON_STATUS_40                                    0x1140A0

#define mmSYNC_MNGR_MON_STATUS_41                                    0x1140A4

#define mmSYNC_MNGR_MON_STATUS_42                                    0x1140A8

#define mmSYNC_MNGR_MON_STATUS_43                                    0x1140AC

#define mmSYNC_MNGR_MON_STATUS_44                                    0x1140B0

#define mmSYNC_MNGR_MON_STATUS_45                                    0x1140B4

#define mmSYNC_MNGR_MON_STATUS_46                                    0x1140B8

#define mmSYNC_MNGR_MON_STATUS_47                                    0x1140BC

#define mmSYNC_MNGR_MON_STATUS_48                                    0x1140C0

#define mmSYNC_MNGR_MON_STATUS_49                                    0x1140C4

#define mmSYNC_MNGR_MON_STATUS_50                                    0x1140C8

#define mmSYNC_MNGR_MON_STATUS_51                                    0x1140CC

#define mmSYNC_MNGR_MON_STATUS_52                                    0x1140D0

#define mmSYNC_MNGR_MON_STATUS_53                                    0x1140D4

#define mmSYNC_MNGR_MON_STATUS_54                                    0x1140D8

#define mmSYNC_MNGR_MON_STATUS_55                                    0x1140DC

#define mmSYNC_MNGR_MON_STATUS_56                                    0x1140E0

#define mmSYNC_MNGR_MON_STATUS_57                                    0x1140E4

#define mmSYNC_MNGR_MON_STATUS_58                                    0x1140E8

#define mmSYNC_MNGR_MON_STATUS_59                                    0x1140EC

#define mmSYNC_MNGR_MON_STATUS_60                                    0x1140F0

#define mmSYNC_MNGR_MON_STATUS_61                                    0x1140F4

#define mmSYNC_MNGR_MON_STATUS_62                                    0x1140F8

#define mmSYNC_MNGR_MON_STATUS_63                                    0x1140FC

#define mmSYNC_MNGR_MON_STATUS_64                                    0x114100

#define mmSYNC_MNGR_MON_STATUS_65                                    0x114104

#define mmSYNC_MNGR_MON_STATUS_66                                    0x114108

#define mmSYNC_MNGR_MON_STATUS_67                                    0x11410C

#define mmSYNC_MNGR_MON_STATUS_68                                    0x114110

#define mmSYNC_MNGR_MON_STATUS_69                                    0x114114

#define mmSYNC_MNGR_MON_STATUS_70                                    0x114118

#define mmSYNC_MNGR_MON_STATUS_71                                    0x11411C

#define mmSYNC_MNGR_MON_STATUS_72                                    0x114120

#define mmSYNC_MNGR_MON_STATUS_73                                    0x114124

#define mmSYNC_MNGR_MON_STATUS_74                                    0x114128

#define mmSYNC_MNGR_MON_STATUS_75                                    0x11412C

#define mmSYNC_MNGR_MON_STATUS_76                                    0x114130

#define mmSYNC_MNGR_MON_STATUS_77                                    0x114134

#define mmSYNC_MNGR_MON_STATUS_78                                    0x114138

#define mmSYNC_MNGR_MON_STATUS_79                                    0x11413C

#define mmSYNC_MNGR_MON_STATUS_80                                    0x114140

#define mmSYNC_MNGR_MON_STATUS_81                                    0x114144

#define mmSYNC_MNGR_MON_STATUS_82                                    0x114148

#define mmSYNC_MNGR_MON_STATUS_83                                    0x11414C

#define mmSYNC_MNGR_MON_STATUS_84                                    0x114150

#define mmSYNC_MNGR_MON_STATUS_85                                    0x114154

#define mmSYNC_MNGR_MON_STATUS_86                                    0x114158

#define mmSYNC_MNGR_MON_STATUS_87                                    0x11415C

#define mmSYNC_MNGR_MON_STATUS_88                                    0x114160

#define mmSYNC_MNGR_MON_STATUS_89                                    0x114164

#define mmSYNC_MNGR_MON_STATUS_90                                    0x114168

#define mmSYNC_MNGR_MON_STATUS_91                                    0x11416C

#define mmSYNC_MNGR_MON_STATUS_92                                    0x114170

#define mmSYNC_MNGR_MON_STATUS_93                                    0x114174

#define mmSYNC_MNGR_MON_STATUS_94                                    0x114178

#define mmSYNC_MNGR_MON_STATUS_95                                    0x11417C

#define mmSYNC_MNGR_MON_STATUS_96                                    0x114180

#define mmSYNC_MNGR_MON_STATUS_97                                    0x114184

#define mmSYNC_MNGR_MON_STATUS_98                                    0x114188

#define mmSYNC_MNGR_MON_STATUS_99                                    0x11418C

#define mmSYNC_MNGR_MON_STATUS_100                                   0x114190

#define mmSYNC_MNGR_MON_STATUS_101                                   0x114194

#define mmSYNC_MNGR_MON_STATUS_102                                   0x114198

#define mmSYNC_MNGR_MON_STATUS_103                                   0x11419C

#define mmSYNC_MNGR_MON_STATUS_104                                   0x1141A0

#define mmSYNC_MNGR_MON_STATUS_105                                   0x1141A4

#define mmSYNC_MNGR_MON_STATUS_106                                   0x1141A8

#define mmSYNC_MNGR_MON_STATUS_107                                   0x1141AC

#define mmSYNC_MNGR_MON_STATUS_108                                   0x1141B0

#define mmSYNC_MNGR_MON_STATUS_109                                   0x1141B4

#define mmSYNC_MNGR_MON_STATUS_110                                   0x1141B8

#define mmSYNC_MNGR_MON_STATUS_111                                   0x1141BC

#define mmSYNC_MNGR_MON_STATUS_112                                   0x1141C0

#define mmSYNC_MNGR_MON_STATUS_113                                   0x1141C4

#define mmSYNC_MNGR_MON_STATUS_114                                   0x1141C8

#define mmSYNC_MNGR_MON_STATUS_115                                   0x1141CC

#define mmSYNC_MNGR_MON_STATUS_116                                   0x1141D0

#define mmSYNC_MNGR_MON_STATUS_117                                   0x1141D4

#define mmSYNC_MNGR_MON_STATUS_118                                   0x1141D8

#define mmSYNC_MNGR_MON_STATUS_119                                   0x1141DC

#define mmSYNC_MNGR_MON_STATUS_120                                   0x1141E0

#define mmSYNC_MNGR_MON_STATUS_121                                   0x1141E4

#define mmSYNC_MNGR_MON_STATUS_122                                   0x1141E8

#define mmSYNC_MNGR_MON_STATUS_123                                   0x1141EC

#define mmSYNC_MNGR_MON_STATUS_124                                   0x1141F0

#define mmSYNC_MNGR_MON_STATUS_125                                   0x1141F4

#define mmSYNC_MNGR_MON_STATUS_126                                   0x1141F8

#define mmSYNC_MNGR_MON_STATUS_127                                   0x1141FC

#define mmSYNC_MNGR_MON_STATUS_128                                   0x114200

#define mmSYNC_MNGR_MON_STATUS_129                                   0x114204

#define mmSYNC_MNGR_MON_STATUS_130                                   0x114208

#define mmSYNC_MNGR_MON_STATUS_131                                   0x11420C

#define mmSYNC_MNGR_MON_STATUS_132                                   0x114210

#define mmSYNC_MNGR_MON_STATUS_133                                   0x114214

#define mmSYNC_MNGR_MON_STATUS_134                                   0x114218

#define mmSYNC_MNGR_MON_STATUS_135                                   0x11421C

#define mmSYNC_MNGR_MON_STATUS_136                                   0x114220

#define mmSYNC_MNGR_MON_STATUS_137                                   0x114224

#define mmSYNC_MNGR_MON_STATUS_138                                   0x114228

#define mmSYNC_MNGR_MON_STATUS_139                                   0x11422C

#define mmSYNC_MNGR_MON_STATUS_140                                   0x114230

#define mmSYNC_MNGR_MON_STATUS_141                                   0x114234

#define mmSYNC_MNGR_MON_STATUS_142                                   0x114238

#define mmSYNC_MNGR_MON_STATUS_143                                   0x11423C

#define mmSYNC_MNGR_MON_STATUS_144                                   0x114240

#define mmSYNC_MNGR_MON_STATUS_145                                   0x114244

#define mmSYNC_MNGR_MON_STATUS_146                                   0x114248

#define mmSYNC_MNGR_MON_STATUS_147                                   0x11424C

#define mmSYNC_MNGR_MON_STATUS_148                                   0x114250

#define mmSYNC_MNGR_MON_STATUS_149                                   0x114254

#define mmSYNC_MNGR_MON_STATUS_150                                   0x114258

#define mmSYNC_MNGR_MON_STATUS_151                                   0x11425C

#define mmSYNC_MNGR_MON_STATUS_152                                   0x114260

#define mmSYNC_MNGR_MON_STATUS_153                                   0x114264

#define mmSYNC_MNGR_MON_STATUS_154                                   0x114268

#define mmSYNC_MNGR_MON_STATUS_155                                   0x11426C

#define mmSYNC_MNGR_MON_STATUS_156                                   0x114270

#define mmSYNC_MNGR_MON_STATUS_157                                   0x114274

#define mmSYNC_MNGR_MON_STATUS_158                                   0x114278

#define mmSYNC_MNGR_MON_STATUS_159                                   0x11427C

#define mmSYNC_MNGR_MON_STATUS_160                                   0x114280

#define mmSYNC_MNGR_MON_STATUS_161                                   0x114284

#define mmSYNC_MNGR_MON_STATUS_162                                   0x114288

#define mmSYNC_MNGR_MON_STATUS_163                                   0x11428C

#define mmSYNC_MNGR_MON_STATUS_164                                   0x114290

#define mmSYNC_MNGR_MON_STATUS_165                                   0x114294

#define mmSYNC_MNGR_MON_STATUS_166                                   0x114298

#define mmSYNC_MNGR_MON_STATUS_167                                   0x11429C

#define mmSYNC_MNGR_MON_STATUS_168                                   0x1142A0

#define mmSYNC_MNGR_MON_STATUS_169                                   0x1142A4

#define mmSYNC_MNGR_MON_STATUS_170                                   0x1142A8

#define mmSYNC_MNGR_MON_STATUS_171                                   0x1142AC

#define mmSYNC_MNGR_MON_STATUS_172                                   0x1142B0

#define mmSYNC_MNGR_MON_STATUS_173                                   0x1142B4

#define mmSYNC_MNGR_MON_STATUS_174                                   0x1142B8

#define mmSYNC_MNGR_MON_STATUS_175                                   0x1142BC

#define mmSYNC_MNGR_MON_STATUS_176                                   0x1142C0

#define mmSYNC_MNGR_MON_STATUS_177                                   0x1142C4

#define mmSYNC_MNGR_MON_STATUS_178                                   0x1142C8

#define mmSYNC_MNGR_MON_STATUS_179                                   0x1142CC

#define mmSYNC_MNGR_MON_STATUS_180                                   0x1142D0

#define mmSYNC_MNGR_MON_STATUS_181                                   0x1142D4

#define mmSYNC_MNGR_MON_STATUS_182                                   0x1142D8

#define mmSYNC_MNGR_MON_STATUS_183                                   0x1142DC

#define mmSYNC_MNGR_MON_STATUS_184                                   0x1142E0

#define mmSYNC_MNGR_MON_STATUS_185                                   0x1142E4

#define mmSYNC_MNGR_MON_STATUS_186                                   0x1142E8

#define mmSYNC_MNGR_MON_STATUS_187                                   0x1142EC

#define mmSYNC_MNGR_MON_STATUS_188                                   0x1142F0

#define mmSYNC_MNGR_MON_STATUS_189                                   0x1142F4

#define mmSYNC_MNGR_MON_STATUS_190                                   0x1142F8

#define mmSYNC_MNGR_MON_STATUS_191                                   0x1142FC

#define mmSYNC_MNGR_MON_STATUS_192                                   0x114300

#define mmSYNC_MNGR_MON_STATUS_193                                   0x114304

#define mmSYNC_MNGR_MON_STATUS_194                                   0x114308

#define mmSYNC_MNGR_MON_STATUS_195                                   0x11430C

#define mmSYNC_MNGR_MON_STATUS_196                                   0x114310

#define mmSYNC_MNGR_MON_STATUS_197                                   0x114314

#define mmSYNC_MNGR_MON_STATUS_198                                   0x114318

#define mmSYNC_MNGR_MON_STATUS_199                                   0x11431C

#define mmSYNC_MNGR_MON_STATUS_200                                   0x114320

#define mmSYNC_MNGR_MON_STATUS_201                                   0x114324

#define mmSYNC_MNGR_MON_STATUS_202                                   0x114328

#define mmSYNC_MNGR_MON_STATUS_203                                   0x11432C

#define mmSYNC_MNGR_MON_STATUS_204                                   0x114330

#define mmSYNC_MNGR_MON_STATUS_205                                   0x114334

#define mmSYNC_MNGR_MON_STATUS_206                                   0x114338

#define mmSYNC_MNGR_MON_STATUS_207                                   0x11433C

#define mmSYNC_MNGR_MON_STATUS_208                                   0x114340

#define mmSYNC_MNGR_MON_STATUS_209                                   0x114344

#define mmSYNC_MNGR_MON_STATUS_210                                   0x114348

#define mmSYNC_MNGR_MON_STATUS_211                                   0x11434C

#define mmSYNC_MNGR_MON_STATUS_212                                   0x114350

#define mmSYNC_MNGR_MON_STATUS_213                                   0x114354

#define mmSYNC_MNGR_MON_STATUS_214                                   0x114358

#define mmSYNC_MNGR_MON_STATUS_215                                   0x11435C

#define mmSYNC_MNGR_MON_STATUS_216                                   0x114360

#define mmSYNC_MNGR_MON_STATUS_217                                   0x114364

#define mmSYNC_MNGR_MON_STATUS_218                                   0x114368

#define mmSYNC_MNGR_MON_STATUS_219                                   0x11436C

#define mmSYNC_MNGR_MON_STATUS_220                                   0x114370

#define mmSYNC_MNGR_MON_STATUS_221                                   0x114374

#define mmSYNC_MNGR_MON_STATUS_222                                   0x114378

#define mmSYNC_MNGR_MON_STATUS_223                                   0x11437C

#define mmSYNC_MNGR_MON_STATUS_224                                   0x114380

#define mmSYNC_MNGR_MON_STATUS_225                                   0x114384

#define mmSYNC_MNGR_MON_STATUS_226                                   0x114388

#define mmSYNC_MNGR_MON_STATUS_227                                   0x11438C

#define mmSYNC_MNGR_MON_STATUS_228                                   0x114390

#define mmSYNC_MNGR_MON_STATUS_229                                   0x114394

#define mmSYNC_MNGR_MON_STATUS_230                                   0x114398

#define mmSYNC_MNGR_MON_STATUS_231                                   0x11439C

#define mmSYNC_MNGR_MON_STATUS_232                                   0x1143A0

#define mmSYNC_MNGR_MON_STATUS_233                                   0x1143A4

#define mmSYNC_MNGR_MON_STATUS_234                                   0x1143A8

#define mmSYNC_MNGR_MON_STATUS_235                                   0x1143AC

#define mmSYNC_MNGR_MON_STATUS_236                                   0x1143B0

#define mmSYNC_MNGR_MON_STATUS_237                                   0x1143B4

#define mmSYNC_MNGR_MON_STATUS_238                                   0x1143B8

#define mmSYNC_MNGR_MON_STATUS_239                                   0x1143BC

#define mmSYNC_MNGR_MON_STATUS_240                                   0x1143C0

#define mmSYNC_MNGR_MON_STATUS_241                                   0x1143C4

#define mmSYNC_MNGR_MON_STATUS_242                                   0x1143C8

#define mmSYNC_MNGR_MON_STATUS_243                                   0x1143CC

#define mmSYNC_MNGR_MON_STATUS_244                                   0x1143D0

#define mmSYNC_MNGR_MON_STATUS_245                                   0x1143D4

#define mmSYNC_MNGR_MON_STATUS_246                                   0x1143D8

#define mmSYNC_MNGR_MON_STATUS_247                                   0x1143DC

#define mmSYNC_MNGR_MON_STATUS_248                                   0x1143E0

#define mmSYNC_MNGR_MON_STATUS_249                                   0x1143E4

#define mmSYNC_MNGR_MON_STATUS_250                                   0x1143E8

#define mmSYNC_MNGR_MON_STATUS_251                                   0x1143EC

#define mmSYNC_MNGR_MON_STATUS_252                                   0x1143F0

#define mmSYNC_MNGR_MON_STATUS_253                                   0x1143F4

#define mmSYNC_MNGR_MON_STATUS_254                                   0x1143F8

#define mmSYNC_MNGR_MON_STATUS_255                                   0x1143FC
/* SYNC_MNGR_MON_STATUS */
#define SYNC_MNGR_MON_STATUS_VALID_SHIFT                             0
#define SYNC_MNGR_MON_STATUS_VALID_MASK                              0x1
#define SYNC_MNGR_MON_STATUS_RESOLVED_SHIFT                          1
#define SYNC_MNGR_MON_STATUS_RESOLVED_MASK                           0x2

#endif /* ASIC_REG_SYNC_MNGR_H_ */

