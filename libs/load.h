#ifndef LOAD_H
#define LOAD_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

#include "../structs/game_struct.h"

#include "../debugmalloc.h"

#include "create.h"
#include "move.h"

ChessMove parseMove(char *move);
GameStruct load(void);

#endif