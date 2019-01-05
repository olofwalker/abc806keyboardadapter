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

#include <usbhub.h>

#include "kdbparser.h"
#include "abc806serialdriver.h"
#include "swedishlayouttoabclayout.h"
#include "abckeys.h"
#include "usbhidkeys.h"

KdbParser::KdbParser() {
    repeatIntervalMs    = 100; // 100 ms
    initalRepeatDelay   = 200; // 200 ms
    Reset();
}
void KdbParser::SendKey(uint8_t key) {
    abc806serialdriver::Send(key);
}
void KdbParser::Reset(void) {
    currentKey          = 0;  
    initalRepeatMark    = 0;
    lastRepeatOfKey     = millis();
}
void KdbParser::RepeatKey(void) {

    if(currentKey != 0) {
        unsigned long currentTime = millis();
        // Stop it from repeat on every keystroke
        if(initalRepeatMark == 0) 
            initalRepeatMark = currentTime;

        if(currentTime - initalRepeatMark > initalRepeatDelay) {
            if(currentTime - lastRepeatOfKey > repeatIntervalMs) {
                SendKey(currentKey);
                lastRepeatOfKey = currentTime;
            }
        }
    }
}

uint8_t KdbParser::OemToABC(uint8_t mod, uint8_t key) {
    uint8_t shift = (mod & 0x22);
    size_t count = sizeof(swedishLayoutToABCLayout) / sizeof(swedishLayoutToABCLayout[0]);
    for(int i=0;i<count;i++) {
        ScancodeConversion conv = swedishLayoutToABCLayout[i];
        if(mod) {
            if(conv.scanCode == key && (mod & conv.modifierMask))
                return conv.abcKeyCode;
        } else {
            if(conv.scanCode == key && !conv.modifierMask) 
                return conv.abcKeyCode;
        }
    }
    return 0;
}

void KdbParser::OnKeyDown(uint8_t mod, uint8_t key)
{
    uint8_t abcKeyCode = OemToABC(mod,key);
    if(abcKeyCode) {
        currentKey = abcKeyCode;    
        SendKey(currentKey);
    } else
        currentKey = 0;
}

void KdbParser::OnKeyUp(uint8_t mod, uint8_t key)
{
    Reset();
}
