/*     
    USB Keyboard driver for Luxor ABC 806 computers
    Copyright (C) 2019  Robert Walker

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>. 
*/

#ifndef ABCKEYS
#define ABCKEYS

#define ABC_KEY_BREAK           3   // Ctrl-c
#define ABC_KEY_BS              8   // Backspace
#define ABC_KEY_BELL            7   // Ctrl-g
#define ABC_KEY_HT              9   // "Forward"
#define ABC_KEY_LF              10  // Ctrl-j
#define ABC_KEY_CS              12  // Ctrl-l
#define ABC_KEY_ENTER           13  // Ctrl-m / Enter
#define ABC_KEY_STEP            19  // Ctrl-s
#define ABC_KEY_KILL            24  // Ctrl-x

#define ABC_KEY_SPACE           32
#define ABC_KEY_EXCLMATION      33
#define ABC_KEY_QUOTE           34
#define ABC_KEY_HASH            35
#define ABC_KEY_SOL             36
#define ABC_KEY_PERCENT         37
#define ABC_KEY_AMPERSAND       38
#define ABC_KEY_APOSTROPHE      39
#define ABC_KEY_LEFT_PAR        40
#define ABC_KEY_RIGHT_PAR       41
#define ABC_KEY_STAR            42
#define ABC_KEY_PLUS            43
#define ABC_KEY_COMMA           44
#define ABC_KEY_MINUS           45
#define ABC_KEY_DOT             46
#define ABC_KEY_FSLASH          47
#define ABC_KEY_ZERO            48
#define ABC_KEY_ONE             49
#define ABC_KEY_TWO             50
#define ABC_KEY_THREE           51
#define ABC_KEY_FOUR            52
#define ABC_KEY_FIVE            53
#define ABC_KEY_SIX             54
#define ABC_KEY_SEVEN           55
#define ABC_KEY_EIGHT           56
#define ABC_KEY_NINE            57
#define ABC_KEY_COLON           58
#define ABC_KEY_SEMICOLON       59
#define ABC_KEY_LESS            60
#define ABC_KEY_EQUAL           61
#define ABC_KEY_GREATER         62
#define ABC_KEY_QM              63
#define ABC_KEY_64              64 // Captial é
#define ABC_KEY_A               65
#define ABC_KEY_B               66
#define ABC_KEY_C               67
#define ABC_KEY_D               68
#define ABC_KEY_E               69
#define ABC_KEY_F               70
#define ABC_KEY_G               71
#define ABC_KEY_H               72
#define ABC_KEY_I               73
#define ABC_KEY_J               74
#define ABC_KEY_K               75
#define ABC_KEY_L               76
#define ABC_KEY_M               77
#define ABC_KEY_N               78
#define ABC_KEY_O               79
#define ABC_KEY_P               80
#define ABC_KEY_Q               81
#define ABC_KEY_R               82
#define ABC_KEY_S               83
#define ABC_KEY_T               84
#define ABC_KEY_U               85
#define ABC_KEY_V               86
#define ABC_KEY_W               87
#define ABC_KEY_X               88
#define ABC_KEY_Y               89
#define ABC_KEY_Z               90
#define ABC_KEY_91              91  // Ä
#define ABC_KEY_92              92  // Ö
#define ABC_KEY_93              93  // Å
#define ABC_KEY_94              94  // Ü
#define ABC_KEY_UNDERSCORE      95
#define ABC_KEY_96              96  // é
#define ABC_KEY_AL              97
#define ABC_KEY_BL              98
#define ABC_KEY_CL              99
#define ABC_KEY_DL              100
#define ABC_KEY_EL              101
#define ABC_KEY_FL              102
#define ABC_KEY_GL              103
#define ABC_KEY_HL              104
#define ABC_KEY_IL              105
#define ABC_KEY_JL              106
#define ABC_KEY_KL              107
#define ABC_KEY_LL              108
#define ABC_KEY_ML              109
#define ABC_KEY_NL              110
#define ABC_KEY_OL              111
#define ABC_KEY_PL              112
#define ABC_KEY_QL              113
#define ABC_KEY_RL              114
#define ABC_KEY_SL              115
#define ABC_KEY_TL              116
#define ABC_KEY_UL              117
#define ABC_KEY_VL              118
#define ABC_KEY_WL              119
#define ABC_KEY_XL              120
#define ABC_KEY_YL              121
#define ABC_KEY_ZL              122
#define ABC_KEY_123             123 // ä
#define ABC_KEY_125             125 // å 
#define ABC_KEY_124             124 // ö
#define ABC_KEY_126             126 // ü
#define ABC_KEY_127             127 // BLOCK

#define ABC_KEY_PF1             192
#define ABC_KEY_PF2             193
#define ABC_KEY_PF3             194
#define ABC_KEY_PF4             195
#define ABC_KEY_PF5             196
#define ABC_KEY_PF6             197
#define ABC_KEY_PF7             198
#define ABC_KEY_PF8             199

#define ABC_KEY_PF1_SHIFT       208
#define ABC_KEY_PF2_SHIFT       209
#define ABC_KEY_PF3_SHIFT       210
#define ABC_KEY_PF4_SHIFT       211
#define ABC_KEY_PF5_SHIFT       212
#define ABC_KEY_PF6_SHIFT       213
#define ABC_KEY_PF7_SHIFT       214
#define ABC_KEY_PF8_SHIFT       215

#define ABC_KEY_PF1_CTRL        224
#define ABC_KEY_PF2_CTRL        225
#define ABC_KEY_PF3_CTRL        226
#define ABC_KEY_PF4_CTRL        227
#define ABC_KEY_PF5_CTRL        228
#define ABC_KEY_PF6_CTRL        229
#define ABC_KEY_PF7_CTRL        230
#define ABC_KEY_PF8_CTRL        231

#define ABC_KEY_PF1_SHIFT_CTRL  240
#define ABC_KEY_PF2_SHIFT_CTRL  241
#define ABC_KEY_PF3_SHIFT_CTRL  242
#define ABC_KEY_PF4_SHIFT_CTRL  243
#define ABC_KEY_PF5_SHIFT_CTRL  244
#define ABC_KEY_PF6_SHIFT_CTRL  245
#define ABC_KEY_PF7_SHIFT_CTRL  246
#define ABC_KEY_PF8_SHIFT_CTRL  247

#endif // ABCKEYS