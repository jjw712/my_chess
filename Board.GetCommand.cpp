#define _CRT_SECURE_NO_WARNINGS
#include"Board.h"
#include<algorithm>

int ChessBoard::GetCommand(Piece _pBoard[][10]) {
	int ax, ay, bx, by;
	scanf("%d %d", &ax, &ay);
	scanf("%d %d", &bx, &by);
	printf("%d %d\n", _pBoard[ay][ax].team, _pBoard[ay][ax].type);
	if (ax == -1 && ay == -1 && by == -1 && bx == -1)
		exit(0);
	MoveTo(ax, ay, bx, by, _pBoard);
	return 0;
}