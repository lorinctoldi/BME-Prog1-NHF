#ifndef SAVE_H
#define SAVE_H

#include <stdio.h>
#include <unistd.h>

#include "../structs/game_struct.h"

#include "../debugmalloc.h"

int save(GameStruct match);

#endif