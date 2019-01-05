# ABC 806 Keyboard adapter

This project is released under the GNU General Public License v2.

## Summary

This project contains the software needed to build a USB keyboard adapter for the [Luxor ABC 806 computer](http://www.pc-museum.com/luxor/index.htm).

## Required hardware

- [Arudino USB Host shield Uno](https://store.arduino.cc/arduino-uno-rev3) (or compatible)
- [Arudino USB Host shield USB Host shield](https://store.arduino.cc/arduino-usb-host-shield)

## Required Software

- [Arudino IDE](https://www.arduino.cc/en/main/software)
    
While the Arduino IDE is serviceable, VS Code together with the new [Arduino plugin](https://marketplace.visualstudio.com/items?itemName=vsciot-vscode.vscode-arduino) gives a far better development experience.

## Library dependencies

- [USB Host Shield Library 2.0](https://github.com/felis/USB_Host_Shield_2.0)
    
## Pin mappings

This is how the pins should be mapped between the Arduino Uno board and the ABC 806 keyboard connector.

    DIN pin     Signal      Arduino Pin
    ----------------------------------------------------------------
    1           TxD         1
    2           GnD         GND
    3           RxD         0
    4           TRxC        3
    5           Keydown     2
    6           +12v        Vin
    7           Reset       Not connected

## Information about the serial connection

The keyboard is connected to the B channel of the Z80 dart using an asynchronous serial connection. In addition to the serial connection the keyboard side generates a 10 khz signal as well as a `keydown` event, triggering an processor interrupt.

These are the setting of the serial connection:

    - 650 baud
    - 8 bits
    - no parity
    - 2 stop bits