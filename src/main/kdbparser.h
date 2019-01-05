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

#ifndef KDBPARSER
#define KDBPARSER

#include <hidboot.h>

class KdbParser : public KeyboardReportParser
{
  public:
    KdbParser();
    void RepeatKey(void);

  protected:
    uint8_t OemToABC(uint8_t mod, uint8_t key);

    void SendKey(uint8_t key);
    void Reset(void);

    void OnKeyDown	(uint8_t mod, uint8_t key);
    void OnKeyUp	(uint8_t mod, uint8_t key);

    unsigned long initalRepeatDelay;
    unsigned long initalRepeatMark; 
    unsigned long lastRepeatOfKey;
    unsigned long repeatIntervalMs;
    uint8_t       currentKey;
};

#endif