#ifndef MOVE_H
#define MOVE_H

#include <stdlib.h>

#include "../structs/game_struct.h"
#include "../debugmalloc.h"

ChessMove *saveMove(ChessMove *moves, int numMoves, ChessMove move);

#endif