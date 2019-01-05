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

#include <avr/io.h>  
#include <util/delay.h>
#include <assert.h>

#include "kdbparser.h"
#include "abc806serialdriver.h"


USB                                 usb;
HIDBoot<USB_HID_PROTOCOL_KEYBOARD>  HidKeyboard(&usb);
KdbParser                           kbdparser;

void setup() {
  abc806serialdriver::Setup();
  usb.Init();
  delay( 200 );
  HidKeyboard.SetReportParser(0, &kbdparser);
}

void loop() {
  usb.Task();
  kbdparser.RepeatKey();  
}
