#ifndef BOARD_H
#define BOARD_H

#include <stdio.h>
#include <stdlib.h>

#include "../structs/game_struct.h"

#include "../debugmalloc.h"

void resetBoard(char ***board);
char **createBoard();
void displayBoard(char **board);
void freeBoard(char ***board);

#endif