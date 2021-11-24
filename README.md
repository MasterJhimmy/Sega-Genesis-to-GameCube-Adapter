# Sega Genesis/Mega Drive to GameCube Adapter

Simple use of NicoHood's "Nintendo" library in conjuction with jonthysell's "SegaController" library, allowing the use of Sega Genesis/Mega Drive controllers on GameCube/Wii hardware.

## Requirements

- [NicoHood's Nintendo library](https://github.com/NicoHood/Nintendo)
- [jonthysell's SegaController library](https://github.com/jonthysell/SegaController)
- Arduino Nano (or any 5V 16MHz Arduino, Atmega168 or Atmega328, just adapting the pin numbers)
- Bidirectional Logic Level Converter
- Male DB9 connector
- GameCube Controller Extension Cord

## Hardware

First, cut the female end of the extension cord, using a multimeter in continuity mode to check which wire corresponds to each pin in the male end. In my case I used a male and female DB9 connectors as a breakout, to use the same extension cord in multiple adapters, but you can solder the wires directly without the breakout.

GameCube Controller Pinout

![alt text](https://cdn.hackaday.io/images/402451542330582063.png)
Source: [https://hackaday.io/project/162348/instructions](https://hackaday.io/project/162348/instructions)


Male DB9 Pinout (Front View) 
![alt text](https://www.consolesunleashed.com/sites/all/files/images/tech/sega-mega-drive/sega-mega-drive-controller-port-pinout.png)
 Source: [https://www.consolesunleashed.com/tech/sega-mega-drive/](https://www.consolesunleashed.com/tech/sega-mega-drive/)
 
 Respective arduino pins:
 
 | DB9 Pin | Arduino Pin |
|---------|-------------|
| 1       | A0          |
| 2       | A1          |
| 3       | A2          |
| 4       | A3          |
| 5       | Vin         |
| 6       | A4          |
| 7       | A5          |
| 8       | GND         |
| 9       | D2          |

Wiring Diagram