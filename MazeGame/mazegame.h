#ifndef MAZEGAME_H
#define MAZEGAME_H

#include <iostream>
#include <stdio.h>
#include <string>

int NewGame(void);
int LevelSelect(void);
int OptionsMenu(void);

extern int glevelNumber;
//extern class Level;
extern Level* plevelMap;

#endif
