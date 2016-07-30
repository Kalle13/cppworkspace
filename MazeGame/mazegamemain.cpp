
#include "mazegame.h"
using namespace std;

int main()
{
  int mainMenuChoice = 0, newGameFlag = 0, highestLevelNumber = 0;

  printf("\n\t\tWelcome to the Maze Game\n\
          Please select from the following options\n\n\
          \t1.) New game\n\
          \t2.) Level select\n\
          \t3.) Options\n");

  cin>>mainMenuChoice;

  switch(mainMenuChoice)
  {
    case 1:   highestLevelNumber = NewGame();
              newGameFlag = 1;
              break;
    case 2:   //LevelSelect();
              break;
    case 3:   //OptionsMenu();
              break;
    default:  highestLevelNumber = NewGame();
              newGameFlag = 1;
              break;
  }
  if (newGameFlag == 1) printf("\nThe highest level reached was %d\n",highestLevelNumber);
  printf("\nThank you for playing!\n");
  return 0;
}

int NewGame(void)
{
  int highestLevelNumber = 0;
  printf("New Game coming soon\n");
  printf("%s",(plevelMap+0)->asciiLevel);
/*
  glevelNumber = 1;
  int escapeFlag = 0, i = 0;
  while(escapeFlag == 0)
  {
    if (glevelNumber == levelMap[i].levelNumber)
    {


    }
  }
*/
return highestLevelNumber;
}
