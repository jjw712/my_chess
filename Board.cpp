#include "Board.h"
/* 0 1 2 3 4 5 6 7 8 9
0 -1-1-1-1-1-1-1-1-1-1
1 -1	            -1
2 -1                -1
3 -1                -1
4 -1                -1
5 -1                -1
6 -1                -1
7 -1                -1
8 -1                -1
9 -1-1-1-1-1-1-1-1-1-1
*/
ChessBoard::ChessBoard(bool start){
	Piece out = { -1,-1 };
	Piece empty = { 0,-1 };
	Piece B_Pawn = { 1,0 };
	Piece W_Pawn = { 1,1 };
	Piece B_Rock = { 2,0 };
	Piece W_Rock = { 2,1 };
	Piece B_Knight = { 3,0 };
	Piece W_Knight = { 3,1 };
	Piece B_bishop = { 4,0 };
	Piece W_bishop = { 4,1 };
	Piece B_Queen = { 5,0 };
	Piece W_Queen = { 5,1 };
	Piece B_King = { 6,0 };
	Piece W_King = { 6,1 };
	if (start == true) {
		for (int i = 0; i <= 9; i++) {
			pBoard[i][0] = &out;
			pBoard[i][9] = &out;
			pBoard[0][i] = &out;
			pBoard[9][i] = &out;
		}
		for (int x = 1; x <= 8;x++) {
			pBoard[2][x] = &W_Pawn;
			pBoard[7][x] = &B_Pawn;
		}
	}
}