#include "playground.h"
using namespace std;

int main()
{
  bool escKeyState = 0;
  string escMessage = "You escaped! ";
  int wasdKeyValueArray[] = {0x57, 0x41, 0x53, 0x44};               // 0x57 == 'W' key; 0x41 == 'A' key; 0x53 == 'S' key; 0x44 == 'D' key
  int arrowKeyValueArray[] = {VK_LEFT, VK_RIGHT, VK_UP, VK_DOWN};   // Arrow keys
  string wasdMessageArray[] = {"W\r", "\b\bA", "S\n", "D\t"};
  int i = 0;
  while(escKeyState == 0)
  {
    if(GetAsyncKeyState(VK_ESCAPE)) escKeyState = 1;
    if(GetAsyncKeyState(wasdKeyValueArray[i]))  cout<<wasdMessageArray[i]; // Output the wasdMessageArray message corresponding to the wasd key that was pressed
    Sleep(50);
    i++;
    i%=4;
  }

  cout<<escMessage;

  return 0;
}




void testKeyState(void){
  bool wKeyState = 0, aKeyState = 0, sKeyState = 0, dKeyState = 0, escKeyState = 0; // Booleans not yet used in function
  int wIndex = 0, aIndex = 1, sIndex = 2, dIndex = 3, leftArrowIndex = 0, rightArrowIndex = 1, upArrowIndex = 2, downArrowIndex = 3;
  string arrowMessageArray[] = {"Left Arrow ","Right Arrow ","Up Arrow ","Down Arrow "};
  string wasdMessageArray[] = {"W ","A ","S ","D "};
  string escMessage = "You escaped! ";

  while(escKeyState == 0)
  {
    Sleep(100);  // Wait 50 milliseconds before next loop iteration
    if(GetAsyncKeyState(0x57))    cout<<wasdMessageArray[wIndex]; // 0x57 == 'W' key
    if(GetAsyncKeyState(0x41))    cout<<wasdMessageArray[aIndex]; // 0x41 == 'A' key
    if(GetAsyncKeyState(0x53))    cout<<wasdMessageArray[sIndex]; // 0x53 == 'S' key
    if(GetAsyncKeyState(0x44))    cout<<wasdMessageArray[dIndex]; // 0x44 == 'D' key
    if(GetAsyncKeyState(VK_LEFT))   cout<<arrowMessageArray[leftArrowIndex];   // VK_LEFT == left arrow key
    if(GetAsyncKeyState(VK_RIGHT))  cout<<arrowMessageArray[rightArrowIndex];  // VK_RIGHT == right arrow key
    if(GetAsyncKeyState(VK_UP))     cout<<arrowMessageArray[upArrowIndex];     // VK_UP == up arrow key
    if(GetAsyncKeyState(VK_DOWN))   cout<<arrowMessageArray[downArrowIndex];   // VK_DDOWN == down arrow key
    if(GetAsyncKeyState(VK_ESCAPE)) escKeyState = 1;   // VK_ESCAPE == esc key
  }
  if(escKeyState == 1)  cout<<escMessage;
}



/*

VK_ESCAPE
0x1B
ESC ke

VK_LEFT   LEFT ARROW key
0x25

VK_UP     UP ARROW key
0x26

VK_RIGHT  RIGHT ARROW key
0x27

VK_DOWN   DOWN ARROW key
0x28

0x41
A key
0x42
B key
0x43
C key
0x44
D key
0x45
E key
0x46
F key
0x47
G key
0x48
H key
0x49
I key
0x4A
J key
0x4B
K key
0x4C
L key
0x4D
M key
0x4E
N key
0x4F
O key
0x50
P key
0x51
Q key
0x52
R key
0x53
S key
0x54
T key
0x55
U key
0x56
V key
0x57
W key
0x58
X key
0x59
Y key
0x5A
Z key

*/
