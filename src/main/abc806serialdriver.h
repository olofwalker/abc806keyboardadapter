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

#ifndef ABC806SERIALDRIVER 
#define ABC806SERIALDRIVER

#include <avr/io.h>  
#include <util/delay.h>

// Class with used to communicate with the ABC80x, its hard coded to
// use the first usart 
class abc806serialdriver {
  #define KEYDOWN_PIN 2
  #define RESET_PIN   9
  #define CLOCK_PIN   3    // PD3 = OC2B.
  #define BAUD        650
  #define UBRR        (F_CPU / (16 * BAUD))  - 1

public:
  static void Setup(){
    SetupSerialport();
    SetupClock();

    // Setup additional pins
    pinMode(KEYDOWN_PIN, OUTPUT); 
    pinMode(RESET_PIN, OUTPUT);
  }

  static void Send(unsigned char data) {
    digitalWrite(KEYDOWN_PIN, HIGH);    
    while(!(UCSR0A && (1<<UDRE0)));
    UCSR0A |= _BV(TXC0);
    UDR0 = data;
    digitalWrite(KEYDOWN_PIN, LOW);    
  }

  static void Receive() {
    while(!(UCSR0A & (1<<RXC0)));
    return UDR0;
  }

private:
  static void SetupSerialport() 
  {
    UBRR0H  = (uint8_t)(UBRR>>8); // USART Baud Rate Register High
    UBRR0L  = (uint8_t)(UBRR);    // USART Baud Rate Register Low
    UCSR0B  = _BV(RXEN0)
              |_BV(TXEN0);        // Enable TX/ Enable RX
    /*
    USBSn Stop Bit(s)
    0     1-bit
    1     2-bit    
    UCSZn2  UCSZn1  UCSZn0  Character Size
    0       0       0       5-bit
    0       0       1       6-bit
    0       1       0       7-bit
    0       1       1       8-bit
    1       0       0       Reserved
    1       0       1       Reserved
    1       1       0       Reserved
    1       1       1       9-bit    

    UCPOLn  UCPHAn  SPI Mode  Leading Edge      Trailing Edge
    0       0       0         Sample (Rising)   Setup (Falling)
    0       1       1         Setup (Rising)    Sample (Falling)
    1       0       2         Sample (Falling)  Setup (Rising)
    1       1       3         Setup (Falling)   Sample (Rising) */

    UCSR0C = _BV(USBS0)
             |_BV(UCSZ00)
             |_BV(UCSZ01);
    /*
    UPMn1 UPMn0 Parity Mode
    ----------------------------
    0     0     Disabled
    0     1     Reserved
    1     0     Enabled, Even Parity
    1     1     Enabled, Odd Parity */
    UCSR0C |= (0<<UPM01)|(0<<UPM01);        // No parity

    /*
    UMSELn1 UMSELn0   Mode
    0       0         Asynchronous USART
    0       1         Synchronous USART
    1       0         (Reserved)
    1       1         Master SPI (MSPIM) */
    UCSR0C |= (0<<UMSEL00)|(0<<UMSEL01);    // Set sync flag off 

    // Clear existing transmit 
    UCSR0A |= _BV(TXC0);

    // Turn off double speed
    UCSR0A &= ~(1<<U2X0);

  }
  static void SetupClock() 
  {
    pinMode(CLOCK_PIN, OUTPUT);
    // Configure timer 2 for PWM @ 10 kHz on OC2B.
    TCCR2A = _BV(COM2B1)  // non-inverting PWM on OC2B 
           | _BV(WGM20)   // mode 7: fast PWM, TOP = OCR2A
           | _BV(WGM21);  // ditto
    TCCR2B = _BV(WGM22)   // ditto
           | _BV(CS21);   // Here we prescale the CPU clock by dividing it by 8, there are options also to divide it with 32 and 64
    OCR2A  = 199;         // The output compare register A, Here we decided on the top value count, when the 199 + 1 cycles (times 8 as of the prescaler) 
    OCR2B  = 99;          // The output compare register B, Here we decided how long we will remain HIGH (99 + 1) * 8 CPU cycles 
  }
};

#endif