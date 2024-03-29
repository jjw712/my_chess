#pragma once
#include<stdio.h>
typedef struct Piece {
	int type;	// 1 Pawn 2 Rock 3 Knight 4 bishop 5 Queen 6 King
//	int x, y;
	int team;	// 0 black 1 white
}Piece;

static Piece pBoard[10][10] = { 0, };
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
class ChessBoard {
private:
//	static Piece pBoard[10][10];
	
public:
	ChessBoard(Piece _pBoard[][10]);
	Piece* ChessDisplay(Piece _pBoard[][10], int _turn);
	int MoveTo(int ax, int ay, int bx, int by, Piece _pBoard[][10]);
	int GetCommand(Piece _pBoard[][10]);
	int GetCommand2(Piece _pBoard[][10], int* _turn);
	~ChessBoard() {

	}
};
