Custom RP2040 Macro Pad
An open-source, portable macro pad designed to increases and decreases volume in a convenient way and comes with custom key mapping.

Features
 -Xiao seeed rp2040
 
 -9 switches
 
 -1 OLED 0.91'' 128x32 SSD1306

 -1 Rotary encoder




Many keys to play around with

You can custom the key mapping, uses of each keys and utilize it

<img width="642" height="585" alt="pcb3d" src="https://github.com/user-attachments/assets/6628685d-5e7e-44eb-9efb-9068ce9b1ebe" />



<img width="622" height="738" alt="pcb1" src="https://github.com/user-attachments/assets/cf8710ea-8df1-4904-9a8b-6d5994dc6588" />



Quick, convenient, volume control rotary encoder
Volume controls designed to change system volume quickly and accurately.

A customizable screen
An OLED 0.91 inch screen that you can cutomize on your own ! e.g Animations, Drawings, etc.

<img width="500" height="400" alt="images (1)" src="https://github.com/user-attachments/assets/cfa46257-d41f-4eca-8745-e15b43984914" />


USB-C Connectivity
Uses a modern USB-C interface for HID communication with your computer

Firmware

Runs on C++, with built in Adafruit_TinyUSB.h, It works by taking instruction from the buttons and translate it in to HID signal for the computer

Schematic
<img width="1141" height="543" alt="schematic1" src="https://github.com/user-attachments/assets/b3b571c2-de7f-4acd-a54a-bbafc45294f8" />



Case

Never ever ask an engineer to disign a case

This is a simple case but its done

<img width="541" height="841" alt="3d case" src="https://github.com/user-attachments/assets/3af2cac9-bfd8-4f42-a6f2-082fd8eaae0d" />




Bill Of Materials

| Reference | Qty | Value | DNP | Exclude fr... | Exclude fr... | Footprint | Datasheet |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| D1, D2, D5, D6 | 4 | SK6812MINI-E | | | | LED_SMD:SK6812MINI-E | [Link](https://www.lcsc.com/datasheet/C5149201.pdf) |
| D7, D8, D9, D10, D11, D12, D13, D14, D15 | 9 | 1N4148 | | | | Diode_THT:D_DO-35_SOD27_P7.62mm_Horizontal | [Link](https://assets.nexperia.com/documents/data-sheet/1N4148_1N4448.pdf) |
| J1 | 1 | Conn_01x04_Pin | | | | oled:SSD1306-0.91-OLED-4pin-128x32 | |
| MX1 | 1 | 0,0 | | | | marbastlib-xp-mx:SW_MX_Reversible_1u | |
| MX2 | 1 | 0,1 | | | | marbastlib-xp-mx:SW_MX_Reversible_1u | |
| MX3 | 1 | 0,2 | | | | marbastlib-xp-mx:SW_MX_Reversible_1u | |
| MX4 | 1 | 1,0 | | | | marbastlib-xp-mx:SW_MX_Reversible_1u | |
| MX5 | 1 | 1,1 | | | | marbastlib-xp-mx:SW_MX_Reversible_1u | |
| MX6 | 1 | 1,2 | | | | marbastlib-xp-mx:SW_MX_Reversible_1u | |
| MX7 | 1 | 2,0 | | | | marbastlib-xp-mx:SW_MX_Reversible_1u | |
| MX8 | 1 | 2,1 | | | | marbastlib-xp-mx:SW_MX_Reversible_1u | |
| MX9 | 1 | 2,2 | | | | marbastlib-xp-mx:SW_MX_Reversible_1u | |
| SW1 | 1 | RotaryEncoder_Switch_MP | | | | Rotary_Encoder:RotaryEncoder_Alps_EC11E-Switch_Vertical_H20mm_CircularMountingHoles | |
| U1 | 1 | XIAO-RP2040-SMD | | | | Seeed_Studio_XIAO_Series:XIAO-RP2040-SMD | |



Coding interface

Code by a Human, on Arduino IDE, And C++ !!!

