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

/* Bit mask for modifiers
  struct {
   uint8_t   bmLeftCtrl: 1        1
   uint8_t   bmLeftShift: 1       2
   uint8_t   bmLeftAlt: 1         4
   uint8_t   bmLeftGUI: 1         8
   uint8_t   bmRightCtrl: 1       16
   uint8_t   bmRightShift: 1      32
   uint8_t   bmRightAlt: 1
   uint8_t   bmRightGUI: 1
  }; 
*/

const uint8_t noModifierKey       = 0x0;
const uint8_t shiftKeys           = 0x22;
const uint8_t controlKeys         = 0x11;
const uint8_t shiftAndControlKeys = 0x33;

// This is a table for converting USB Hid scan codes applied to a Swedish layout to the ABC layout
ScancodeConversion swedishLayoutToABCLayout[] = {
  
// Control keys
  {KEY_BACKSPACE,ABC_KEY_BS,noModifierKey},             // Backspace
  {KEY_ENTER,ABC_KEY_ENTER,noModifierKey},              // Enter
  {KEY_SPACE,ABC_KEY_SPACE,noModifierKey},              // Space
  {KEY_C,ABC_KEY_BREAK,controlKeys},                    // Break / Ctrl-c
  {KEY_G,ABC_KEY_BELL,controlKeys},                     // Bell / Ctrl-g
  {KEY_X,ABC_KEY_KILL,controlKeys},                     // Kill line / Ctrl-x
  {KEY_J,ABC_KEY_LF,controlKeys},                       // Line feed / Ctrl-j
  {KEY_M,ABC_KEY_ENTER,controlKeys},                    // Enter / Ctrl-m
  {KEY_L,ABC_KEY_CS,controlKeys},                       // Clear screen / Ctrl-l
  {KEY_S,ABC_KEY_STEP,controlKeys},                     // Single step / Ctrl-s

// Top row
  {KEY_1,ABC_KEY_EXCLMATION,shiftKeys},                 // !
  {KEY_2,ABC_KEY_QUOTE,shiftKeys},                      // "
  {KEY_3,ABC_KEY_HASH,shiftKeys},                       // #
  {KEY_4,ABC_KEY_SOL,shiftKeys},                        // Sol
  {KEY_5,ABC_KEY_PERCENT,shiftKeys},                    // %
  {KEY_6,ABC_KEY_AMPERSAND,shiftKeys},                  // &
  {KEY_7,ABC_KEY_FSLASH,shiftKeys},                     // /
  {KEY_8,ABC_KEY_LEFT_PAR,shiftKeys},                   // (
  {KEY_9,ABC_KEY_RIGHT_PAR,shiftKeys},                  // )
  {KEY_0,ABC_KEY_EQUAL,shiftKeys},                      // =  
  {KEY_MINUS,ABC_KEY_PLUS,noModifierKey},               // +  
  {KEY_MINUS,ABC_KEY_QM,shiftKeys},                     // ?  
  {KEY_EQUAL,ABC_KEY_64,shiftKeys},                     // Captial é
  {KEY_EQUAL,ABC_KEY_96,noModifierKey},                 // é

// Misc
  {KEY_SLASH,ABC_KEY_MINUS,0x0},                        // -
  {KEY_SLASH,ABC_KEY_UNDERSCORE,shiftKeys},             // _
  {KEY_SEMICOLON,ABC_KEY_92,shiftKeys},                 // Ö
  {KEY_SEMICOLON,ABC_KEY_124,noModifierKey},            // ö
  {KEY_APOSTROPHE,ABC_KEY_91,shiftKeys},                // Ä
  {KEY_APOSTROPHE,ABC_KEY_123,noModifierKey},           // Ä
  {KEY_LEFTBRACE,ABC_KEY_93,shiftKeys},                 // Å
  {KEY_LEFTBRACE,ABC_KEY_125,noModifierKey},            // å
  {KEY_RIGHTBRACE,ABC_KEY_94,shiftKeys},                // Ü
  {KEY_RIGHTBRACE,ABC_KEY_126,noModifierKey},           // ü
  {KEY_COMMA,ABC_KEY_COMMA,noModifierKey},              // ,
  {KEY_DOT,ABC_KEY_DOT,noModifierKey},                  // .
  {KEY_COMMA,ABC_KEY_SEMICOLON,shiftKeys},              // ;
  {KEY_DOT,ABC_KEY_COLON,shiftKeys},                    // :
  {KEY_HASHTILDE,ABC_KEY_STAR,shiftKeys},               // *
  {KEY_HASHTILDE,ABC_KEY_APOSTROPHE,noModifierKey},     // '
  {KEY_102ND,ABC_KEY_LESS,noModifierKey},               // >
  {KEY_102ND,ABC_KEY_GREATER,shiftKeys},                // <

// Alpha and numeric  
  {KEY_0,ABC_KEY_ZERO,noModifierKey},       
  {KEY_1,ABC_KEY_ONE,noModifierKey},
  {KEY_2,ABC_KEY_TWO,noModifierKey},
  {KEY_3,ABC_KEY_THREE,noModifierKey},
  {KEY_4,ABC_KEY_FOUR,noModifierKey},
  {KEY_5,ABC_KEY_FIVE,noModifierKey},
  {KEY_6,ABC_KEY_SIX,noModifierKey},
  {KEY_7,ABC_KEY_SEVEN,noModifierKey},
  {KEY_8,ABC_KEY_EIGHT,noModifierKey},
  {KEY_9,ABC_KEY_NINE,noModifierKey},
  {KEY_A,ABC_KEY_AL,noModifierKey},
  {KEY_B,ABC_KEY_BL,noModifierKey},
  {KEY_C,ABC_KEY_CL,noModifierKey},
  {KEY_D,ABC_KEY_DL,noModifierKey},
  {KEY_E,ABC_KEY_EL,noModifierKey},
  {KEY_F,ABC_KEY_FL,noModifierKey},
  {KEY_G,ABC_KEY_GL,noModifierKey},
  {KEY_H,ABC_KEY_HL,noModifierKey},
  {KEY_I,ABC_KEY_IL,noModifierKey},
  {KEY_J,ABC_KEY_JL,noModifierKey},
  {KEY_K,ABC_KEY_KL,noModifierKey},
  {KEY_L,ABC_KEY_LL,noModifierKey},
  {KEY_M,ABC_KEY_ML,noModifierKey},
  {KEY_N,ABC_KEY_NL,noModifierKey},
  {KEY_O,ABC_KEY_OL,noModifierKey},
  {KEY_P,ABC_KEY_PL,noModifierKey},
  {KEY_Q,ABC_KEY_QL,noModifierKey},
  {KEY_R,ABC_KEY_RL,noModifierKey},
  {KEY_S,ABC_KEY_SL,noModifierKey},
  {KEY_T,ABC_KEY_TL,noModifierKey},
  {KEY_U,ABC_KEY_UL,noModifierKey},
  {KEY_V,ABC_KEY_VL,noModifierKey},
  {KEY_W,ABC_KEY_WL,noModifierKey},
  {KEY_X,ABC_KEY_XL,noModifierKey},
  {KEY_Y,ABC_KEY_YL,noModifierKey},
  {KEY_Z,ABC_KEY_ZL,noModifierKey},
  {KEY_A,ABC_KEY_A,shiftKeys},
  {KEY_B,ABC_KEY_B,shiftKeys},
  {KEY_C,ABC_KEY_C,shiftKeys},
  {KEY_D,ABC_KEY_D,shiftKeys},
  {KEY_E,ABC_KEY_E,shiftKeys},
  {KEY_F,ABC_KEY_F,shiftKeys},
  {KEY_G,ABC_KEY_G,shiftKeys},
  {KEY_H,ABC_KEY_H,shiftKeys},
  {KEY_I,ABC_KEY_I,shiftKeys},
  {KEY_J,ABC_KEY_J,shiftKeys},
  {KEY_K,ABC_KEY_K,shiftKeys},
  {KEY_L,ABC_KEY_L,shiftKeys},
  {KEY_M,ABC_KEY_M,shiftKeys},
  {KEY_N,ABC_KEY_N,shiftKeys},
  {KEY_O,ABC_KEY_O,shiftKeys},
  {KEY_P,ABC_KEY_P,shiftKeys},
  {KEY_Q,ABC_KEY_Q,shiftKeys},
  {KEY_R,ABC_KEY_R,shiftKeys},
  {KEY_S,ABC_KEY_S,shiftKeys},
  {KEY_T,ABC_KEY_T,shiftKeys},
  {KEY_U,ABC_KEY_U,shiftKeys},
  {KEY_V,ABC_KEY_V,shiftKeys},
  {KEY_W,ABC_KEY_W,shiftKeys},
  {KEY_X,ABC_KEY_X,shiftKeys},
  {KEY_Y,ABC_KEY_Y,shiftKeys},
  {KEY_Z,ABC_KEY_Z,shiftKeys},

// Function keys
  {KEY_F1,ABC_KEY_PF1,noModifierKey},
  {KEY_F2,ABC_KEY_PF2,noModifierKey},
  {KEY_F3,ABC_KEY_PF3,noModifierKey},
  {KEY_F4,ABC_KEY_PF4,noModifierKey},
  {KEY_F5,ABC_KEY_PF5,noModifierKey},
  {KEY_F6,ABC_KEY_PF6,noModifierKey},
  {KEY_F7,ABC_KEY_PF7,noModifierKey},
  {KEY_F8,ABC_KEY_PF8,noModifierKey},

  {KEY_F1,ABC_KEY_PF1_SHIFT,shiftKeys},
  {KEY_F2,ABC_KEY_PF2_SHIFT,shiftKeys},
  {KEY_F3,ABC_KEY_PF3_SHIFT,shiftKeys},
  {KEY_F4,ABC_KEY_PF4_SHIFT,shiftKeys},
  {KEY_F5,ABC_KEY_PF5_SHIFT,shiftKeys},
  {KEY_F6,ABC_KEY_PF6_SHIFT,shiftKeys},
  {KEY_F7,ABC_KEY_PF7_SHIFT,shiftKeys},
  {KEY_F8,ABC_KEY_PF8_SHIFT,shiftKeys},

  {KEY_F1,ABC_KEY_PF1_SHIFT_CTRL,shiftAndControlKeys},
  {KEY_F2,ABC_KEY_PF2_SHIFT_CTRL,shiftAndControlKeys},
  {KEY_F3,ABC_KEY_PF3_SHIFT_CTRL,shiftAndControlKeys},
  {KEY_F4,ABC_KEY_PF4_SHIFT_CTRL,shiftAndControlKeys},
  {KEY_F5,ABC_KEY_PF5_SHIFT_CTRL,shiftAndControlKeys},
  {KEY_F6,ABC_KEY_PF6_SHIFT_CTRL,shiftAndControlKeys},
  {KEY_F7,ABC_KEY_PF7_SHIFT_CTRL,shiftAndControlKeys},
  {KEY_F8,ABC_KEY_PF8_SHIFT_CTRL,shiftAndControlKeys},

  {KEY_F1,ABC_KEY_PF1_CTRL,controlKeys},
  {KEY_F2,ABC_KEY_PF2_CTRL,controlKeys},
  {KEY_F3,ABC_KEY_PF3_CTRL,controlKeys},
  {KEY_F4,ABC_KEY_PF4_CTRL,controlKeys},
  {KEY_F5,ABC_KEY_PF5_CTRL,controlKeys},
  {KEY_F6,ABC_KEY_PF6_CTRL,controlKeys},
  {KEY_F7,ABC_KEY_PF7_CTRL,controlKeys},
  {KEY_F8,ABC_KEY_PF8_CTRL,controlKeys},
};

#endif 