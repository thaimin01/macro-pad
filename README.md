Custom RP2040 Macro Pad
An open-source, portable macro pad designed to increases and decreases volume in a convenient way and comes with custom key mapping.

Features
 -Waveshare RP2040-Zero
 
 -3 Kailh MX Hotswap Sockets
 
 -1 OLED 0.91'' 128x32 SSD1306

 <img width="895" height="544" alt="pcb" src="https://github.com/user-attachments/assets/22b40584-d80f-440b-b8e9-f43c19fa239c" />


Hot-Swappable Switches

Built with hot-swap sockets, allowing you to change mechanical switches instantly without any soldering.
<img width="1187" height="564" alt="pcb front" src="https://github.com/user-attachments/assets/404f940a-50f9-427c-9a80-0597aa10bfa7" />

Quick, convenient, volume control key
Custom key mappings and volume controls designed to step up or step down system volume quickly and accurately.

A customizable screen
An OLED 0.91 inch screen that you can cutomize on your own ! e.g Animations, Drawings, etc.
<img width="554" height="554" alt="screen" src="https://github.com/user-attachments/assets/c87ce80f-2656-4c72-a107-5b716b5a2db3" />


USB-C Connectivity
Uses a modern USB-C interface for HID communication with your computer

Firmware

Runs on C++, with built in Adafruit_TinyUSB.h, It works by taking instruction from the buttons and translate it in to HID signal for the computer

Schematic
<img width="958" height="527" alt="schematic" src="https://github.com/user-attachments/assets/de2c0122-e7fc-4b4e-84c5-d70c8d3bb99c" />


Case

It's still simple but I'll improve it soon
<img width="1019" height="783" alt="Case" src="https://github.com/user-attachments/assets/2fcfb9e2-14c9-4de1-b5a4-dcb37c1cad2b" />


Bill Of Materials

| Reference | Qty | Value | Footprint |
| :--- | :---: | :--- | :--- |
| J1 | 1 | Conn_01x04_Pin | oled:SSD1306-0.91-OLED-4pin-128x32 |
| MX1, MX2, MX3 | 3 | MX_SW_HS | marbastlib-mx:SW_MX_HS_CPG151101S11_1u |
| RZ1 | 1 | RP2040-Zero | modfile:RP2040-Zero |



Coding interface

Code by a Human, on Arduino IDE, And C++ !!!

