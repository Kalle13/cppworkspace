#include "mazegame.h"

class Level {
              int difficulty;
              int levelNumber;
              char* instructions;
              char* asciiLevel;
}

Level levelMap[] = {1,
                 1,
                "\nUse WASD or arrow keys to get to the finish (F)\n\n",
                "XXXXXXXXXXX\n\
                 X         X\n\
                 X    X    X\n\
                 X    X  S X\n\
                 X    XXXXXX\n\
                 X    X    X\n\
                 X    X    F\n\
                 X         X\n\
                 XXXXXXXXXXX\n",
                 2,
                 1,
                 "\nUse WASD or arrow keys to get to the finish (F)\n\n",
                 "XXXXXXXXXXXXXXXXXXXXXXXXX\n\
                  X         X             X\n\
                  X    X    X      X      X\n\
                  X    X  S X      X      X\n\
                  X    XXXXXX      X      X\n\
                  X         X      X      X\n\
                  X         X      X      F\n\
                  X                X      X\n\
                  XXXXXXXXXXXXXXXXXXXXXXXXX\n"
                 };

Level* plevelMap = levelMap;
