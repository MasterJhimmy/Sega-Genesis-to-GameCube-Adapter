# Sega Genesis/Mega Drive to GameCube Adapter

Simple use of NicoHood's "Nintendo" library in conjuction with jonthysell's "SegaController" library, allowing the use of Sega Genesis/Mega Drive controllers on GameCube/Wii hardware.

Test Videos:
- Genesis_to_GC.ino: [https://youtu.be/kbzL-ITwaIQ](https://youtu.be/kbzL-ITwaIQ)
- Genesis_to_GCanalog.ino: [https://youtu.be/HIg18HVipuE](https://youtu.be/HIg18HVipuE)

![alt text](https://github.com/MasterJhimmy/Sega-Genesis-to-GameCube-Adapter/blob/main/Adapter.jpg)

Genesis_to_GC Buttons:
| GameCube   | Sega Genesis |
|------------|--------------|
| DPad UP    | UP           |
| DPad DOWN  | DOWN         |
| DPad LEFT  | LEFT         |
| DPad RIGHT | RIGHT        |
| A          | A            |
| B          | B            |
| X          | X            |
| Y          | Y            |
| R          | C            |
| L          | Z            |
| Z          | MODE         |

Genesis_to_GCanalog Buttons:
| GameCube                 | Sega Genesis |
|--------------------------|--------------|
| Analog UP (Full Push)    | UP           |
| Analog DOWN (Full Push)  | DOWN         |
| Analog LEFT (Full Push)  | LEFT         |
| Analog RIGHT (Full Push) | RIGHT        |
| A                        | A            |
| B                        | B            |
| X                        | X            |
| Y                        | Y            |
| R                        | C            |
| L                        | Z            |
| Z                        | MODE         |

## Requirements

- [NicoHood's Nintendo library](https://github.com/NicoHood/Nintendo)
- [jonthysell's SegaController library](https://github.com/jonthysell/SegaController)
- Arduino Nano (or any 5V 16MHz Arduino, Atmega168 or Atmega328, just adapting the pin numbers)
- Bidirectional Logic Level Converter (5V to 3.3V)
- Male DB9 connector
- 1kΩ Resistor
- GameCube Controller Extension Cord

## Hardware

First, cut the female end of the extension cord, using a multimeter in continuity mode to check which wire corresponds to which pin in the male end. In my case I used a male and female DB9 connectors as a breakout, to use the same extension cord in multiple adapters, but you can solder the wires directly without the breakout.

GameCube Controller Pinout:

![alt text](https://cdn.hackaday.io/images/402451542330582063.png) 

Source: [https://hackaday.io/project/162348/instructions](https://hackaday.io/project/162348/instructions)


Male DB9 Pinout (Front View): 
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


Wiring Diagram:
![alt text](https://github.com/MasterJhimmy/Sega-Genesis-to-GameCube-Adapter/blob/main/Genesis_to_GC.jpg?raw=true)

## Software

After installing both libraries on your Arduino IDE (both of their pages have instructions on how to do so), upload the code (Genesis_to_GC.ino or Genesis_to_GCanalog.ino) to your Arduino.

## Sources

Huge thanks to [NicoHood](https://github.com/NicoHood/) and [jonthysell](https://github.com/jonthysell/) for both their amazing libraries.

Also, thanks to [tevey](https://github.com/tevey) for their [SNES to GameCube adapter](https://github.com/tevey/snesToGameCube), which not only inspired me to make this project, but taught me a great deal on how to use the "Nintendo" library correctly. 