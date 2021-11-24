//Code by MasterJhimmy (2021) 
//Available at: https://github.com/MasterJhimmy/Sega-Genesis-to-GameCube-Adapter
//
//Install both NicoHood's "Nintendo" and jonthysell's "SegaController" libraries:
//https://github.com/NicoHood/Nintendo
//https://github.com/jonthysell/SegaController

#include <Gamecube.h>
#include <GamecubeAPI.h>
#include <Gamecube_N64.h>
#include <N64.h>
#include <N64API.h>
#include <Nintendo.h>
#include <SegaController.h>

//      Sega Genesis/Mega Drive port (male DB9)
//
//     \----------------------------------------/
//      \ A0      A1      A2       A3      +5V /
//       \    A4      A5      GND      D2     /
//        \----------------------------------/
//
//                        or
//
//           \-----------------------------/
//            \ 1     2     3     4     5 /
//             \   6     7     8     9   /
//              \-----------------------/
//
//     Both are the front view of the male connector
//
//
//  Pay attention to pins 5 and 8, +5V and GND respectively.
//  They are a good way to check if the orientation of your 
//  DB9 connector is correct. 

//                        Change these pins if you're using another Arduino board.
//                       (DB9 Pin 7, DB9 Pin 1, DB9 Pin 2, DB9 Pin 3, DB9 Pin 4, DB9 Pin 6, DB9 Pin 9)
SegaController controller(19,        14,        15,        16,        17,        18,        2        );
word currentState = 0;

CGamecubeConsole GamecubeConsole(1); //Gamecube data pin (TX1 pin)      
Gamecube_Data_t d = defaultGamecubeData;   
CGamecubeController GamecubeController1(7);

void setup()
{
    GamecubeController1.read();
}

void loop()
{
    currentState = controller.getState();
    output_write();
}

void output_write()
{
     d.report.dup = ((currentState & SC_BTN_UP)    ? 1 : 0);
     d.report.ddown = ((currentState & SC_BTN_DOWN)  ? 1 : 0);
     d.report.dleft = ((currentState & SC_BTN_LEFT)  ? 1 : 0);
     d.report.dright = ((currentState & SC_BTN_RIGHT)  ? 1 : 0);
     d.report.a = ((currentState & SC_BTN_A)  ? 1 : 0);
     d.report.b = ((currentState & SC_BTN_B)  ? 1 : 0);
     d.report.x = ((currentState & SC_BTN_X)  ? 1 : 0);
     d.report.y = ((currentState & SC_BTN_Y)  ? 1 : 0);
     d.report.r = ((currentState & SC_BTN_C)  ? 1 : 0);
     d.report.right = ((currentState & SC_BTN_C)  ? 255 : 0);
     d.report.l = ((currentState & SC_BTN_Z)  ? 1 : 0);
     d.report.left = ((currentState & SC_BTN_Z)  ? 255 : 0);
     d.report.z = ((currentState & SC_BTN_MODE)  ? 1 : 0);
     d.report.start = ((currentState & SC_BTN_START)  ? 1 : 0);
     GamecubeConsole.write(d);     
}
