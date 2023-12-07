#include "move.h"

// store move in the array of moves
ChessMove *saveMove(ChessMove *moves, int numMoves, ChessMove move) {
  // create temporary moves array with more storage so we can save the move
    ChessMove *temp = (ChessMove*)malloc((numMoves + 1) * sizeof(ChessMove));

  // if there are moves, fill the "temp" with them then free the memory used for storing "moves"
    if (moves != NULL) {
        for (int i = 0; i < numMoves; i++)
          temp[i] = moves[i];

        free(moves);
    }

    // add the new move to the end of temp array
    temp[numMoves] = move;

    // return the temporary array
    return temp;
}