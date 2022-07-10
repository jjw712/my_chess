#define _CRT_SECURE_NO_WARNINGS
#include"Board.h"

int ChessBoard::GetCommand() {
	int ax, ay, bx, by;
	scanf("%d %d", &ax, &ay);
	scanf("%d %d", &bx, &by);
	MoveTo(ax, ay, bx, by);
	return 0;
}