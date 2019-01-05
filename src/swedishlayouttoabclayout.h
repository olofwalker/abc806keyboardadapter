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

#ifndef SWEDISH_LAYOUT
#define SWEDISH_LAYOUT

#include "scancodeconversion.h"
#include "abckeys.h"
#include "usbhidkeys.h"

// This is a table for converting USB Hid scan codes applied to a Swedish layout to the ABC layout
ScancodeConversion swedishLayoutToABCLayout[] = {

// Control keys
  {KEY_BACKSPACE,ABC_KEY_BS,0},                 // Backspace
  {KEY_ENTER,ABC_KEY_ENTER,0},                  // Enter
  {KEY_SPACE,ABC_KEY_SPACE,0},                  // Space
  {KEY_C,ABC_KEY_BREAK,0x30},                   // Break / Ctrl-c
  {KEY_G,ABC_KEY_BELL,0x30},                    // Bell / Ctrl-g
  {KEY_X,ABC_KEY_KILL,0x30},                    // Kill line / Ctrl-x
  {KEY_M,ABC_KEY_LF,0x30},                      // Line feed / Ctrl-m
  {KEY_L,ABC_KEY_CS,0x30},                      // Clear screen / Ctrl-l

// Top row
  {KEY_1,ABC_KEY_EXCLMATION,0x22},              // !
  {KEY_2,ABC_KEY_QUOTE,0x22},                   // "
  {KEY_3,ABC_KEY_HASH,0x22},                    // #
  {KEY_4,ABC_KEY_SOL,0x22},                     // Sol
  {KEY_5,ABC_KEY_PERCENT,0x22},                 // %
  {KEY_6,ABC_KEY_AMPERSAND,0x22},               // &
  {KEY_7,ABC_KEY_FSLASH,0x22},                  // /
  {KEY_8,ABC_KEY_LEFT_PAR,0x22},                // (
  {KEY_9,ABC_KEY_RIGHT_PAR,0x22},               // )
  {KEY_0,ABC_KEY_EQUAL,0x22},                   // =  
  {KEY_MINUS,ABC_KEY_PLUS,0},                   // +  
  {KEY_MINUS,ABC_KEY_QM,0x22},                  // ?  
  {KEY_EQUAL,ABC_KEY_64,0x22},                  // Captial é
  {KEY_EQUAL,ABC_KEY_96,0},                     // é

// Misc
  {KEY_SLASH,ABC_KEY_MINUS,0x0},                // -
  {KEY_SLASH,ABC_KEY_UNDERSCORE,0x22},          // _
  {KEY_SEMICOLON,ABC_KEY_92,0x22},              // Ö
  {KEY_SEMICOLON,ABC_KEY_124,0},                // ö
  {KEY_APOSTROPHE,ABC_KEY_91,0x22},             // Ä
  {KEY_APOSTROPHE,ABC_KEY_123,0},               // Ä
  {KEY_LEFTBRACE,ABC_KEY_93,0x22},              // Å
  {KEY_LEFTBRACE,ABC_KEY_125,0},                // å
  {KEY_RIGHTBRACE,ABC_KEY_94,0x22},             // Ü
  {KEY_RIGHTBRACE,ABC_KEY_126,0},               // ü
  {KEY_COMMA,ABC_KEY_COMMA,0},                  // ,
  {KEY_DOT,ABC_KEY_DOT,0},                      // .
  {KEY_COMMA,ABC_KEY_SEMICOLON,0x22},           // ;
  {KEY_DOT,ABC_KEY_COLON,0x22},                 // :
  {KEY_HASHTILDE,ABC_KEY_STAR,0x22},           // *
  {KEY_HASHTILDE,ABC_KEY_APOSTROPHE,0},        // '
  {KEY_102ND,ABC_KEY_LESS,0},                  // >
  {KEY_102ND,ABC_KEY_GREATER,0x22},            // <

// Alpha and numeric  
  {KEY_0,ABC_KEY_ZERO,0},       
  {KEY_1,ABC_KEY_ONE,0},
  {KEY_2,ABC_KEY_TWO,0},
  {KEY_3,ABC_KEY_THREE,0},
  {KEY_4,ABC_KEY_FOUR,0},
  {KEY_5,ABC_KEY_FIVE,0},
  {KEY_6,ABC_KEY_SIX,0},
  {KEY_7,ABC_KEY_SEVEN,0},
  {KEY_8,ABC_KEY_EIGHT,0},
  {KEY_9,ABC_KEY_NINE,0},
  {KEY_A,ABC_KEY_AL,0},
  {KEY_B,ABC_KEY_BL,0},
  {KEY_C,ABC_KEY_CL,0},
  {KEY_D,ABC_KEY_DL,0},
  {KEY_E,ABC_KEY_EL,0},
  {KEY_F,ABC_KEY_FL,0},
  {KEY_G,ABC_KEY_GL,0},
  {KEY_H,ABC_KEY_HL,0},
  {KEY_I,ABC_KEY_IL,0},
  {KEY_J,ABC_KEY_JL,0},
  {KEY_K,ABC_KEY_KL,0},
  {KEY_L,ABC_KEY_LL,0},
  {KEY_M,ABC_KEY_ML,0},
  {KEY_N,ABC_KEY_NL,0},
  {KEY_O,ABC_KEY_OL,0},
  {KEY_P,ABC_KEY_PL,0},
  {KEY_Q,ABC_KEY_QL,0},
  {KEY_R,ABC_KEY_RL,0},
  {KEY_S,ABC_KEY_SL,0},
  {KEY_T,ABC_KEY_TL,0},
  {KEY_U,ABC_KEY_UL,0},
  {KEY_V,ABC_KEY_VL,0},
  {KEY_W,ABC_KEY_WL,0},
  {KEY_X,ABC_KEY_XL,0},
  {KEY_Y,ABC_KEY_YL,0},
  {KEY_Z,ABC_KEY_ZL,0},
  {KEY_A,ABC_KEY_A,0x22},
  {KEY_B,ABC_KEY_B,0x22},
  {KEY_C,ABC_KEY_C,0x22},
  {KEY_D,ABC_KEY_D,0x22},
  {KEY_E,ABC_KEY_E,0x22},
  {KEY_F,ABC_KEY_F,0x22},
  {KEY_G,ABC_KEY_G,0x22},
  {KEY_H,ABC_KEY_H,0x22},
  {KEY_I,ABC_KEY_I,0x22},
  {KEY_J,ABC_KEY_J,0x22},
  {KEY_K,ABC_KEY_K,0x22},
  {KEY_L,ABC_KEY_L,0x22},
  {KEY_M,ABC_KEY_M,0x22},
  {KEY_N,ABC_KEY_N,0x22},
  {KEY_O,ABC_KEY_O,0x22},
  {KEY_P,ABC_KEY_P,0x22},
  {KEY_Q,ABC_KEY_Q,0x22},
  {KEY_R,ABC_KEY_R,0x22},
  {KEY_S,ABC_KEY_S,0x22},
  {KEY_T,ABC_KEY_T,0x22},
  {KEY_U,ABC_KEY_U,0x22},
  {KEY_V,ABC_KEY_V,0x22},
  {KEY_W,ABC_KEY_W,0x22},
  {KEY_X,ABC_KEY_X,0x22},
  {KEY_Y,ABC_KEY_Y,0x22},
  {KEY_Z,ABC_KEY_Z,0x22},

// Function keys
  {KEY_F1,ABC_KEY_PF1,0},
  {KEY_F2,ABC_KEY_PF2,0},
  {KEY_F3,ABC_KEY_PF3,0},
  {KEY_F4,ABC_KEY_PF4,0},
  {KEY_F5,ABC_KEY_PF5,0},
  {KEY_F6,ABC_KEY_PF6,0},
  {KEY_F7,ABC_KEY_PF7,0},
  {KEY_F8,ABC_KEY_PF8,0},

  {KEY_F1,ABC_KEY_PF1_SHIFT,0x22},
  {KEY_F2,ABC_KEY_PF2_SHIFT,0x22},
  {KEY_F3,ABC_KEY_PF3_SHIFT,0x22},
  {KEY_F4,ABC_KEY_PF4_SHIFT,0x22},
  {KEY_F5,ABC_KEY_PF5_SHIFT,0x22},
  {KEY_F6,ABC_KEY_PF6_SHIFT,0x22},
  {KEY_F7,ABC_KEY_PF7_SHIFT,0x22},
  {KEY_F8,ABC_KEY_PF8_SHIFT,0x22},

  {KEY_F1,ABC_KEY_PF1_SHIFT_CTRL,0x52},
  {KEY_F2,ABC_KEY_PF2_SHIFT_CTRL,0x52},
  {KEY_F3,ABC_KEY_PF3_SHIFT_CTRL,0x52},
  {KEY_F4,ABC_KEY_PF4_SHIFT_CTRL,0x52},
  {KEY_F5,ABC_KEY_PF5_SHIFT_CTRL,0x52},
  {KEY_F6,ABC_KEY_PF6_SHIFT_CTRL,0x52},
  {KEY_F7,ABC_KEY_PF7_SHIFT_CTRL,0x52},
  {KEY_F8,ABC_KEY_PF8_SHIFT_CTRL,0x52},

  {KEY_F1,ABC_KEY_PF1_CTRL,0x30},
  {KEY_F2,ABC_KEY_PF2_CTRL,0x30},
  {KEY_F3,ABC_KEY_PF3_CTRL,0x30},
  {KEY_F4,ABC_KEY_PF4_CTRL,0x30},
  {KEY_F5,ABC_KEY_PF5_CTRL,0x30},
  {KEY_F6,ABC_KEY_PF6_CTRL,0x30},
  {KEY_F7,ABC_KEY_PF7_CTRL,0x30},
  {KEY_F8,ABC_KEY_PF8_CTRL,0x30},
};

#endif 