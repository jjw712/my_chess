#define _CRT_SECURE_NO_WARNINGS
#include"Board.h"
#include<algorithm>

int ChessBoard::GetCommand(Piece _pBoard[][10], int turn) {
	int ax, ay, bx, by;
	scanf("%d", &ax);
	if (ax == -1) {
		printf("game quit\n");
		exit(0);
	}
	scanf("%d", &ay);
	if (_pBoard[ay][ax].team != turn % 2) {
		printf("Not Your Turn\n");
		return 0;
	}
	int type = _pBoard[ay][ax].type;
	switch (type) {
	case -1:
		printf("คำ ");
		break;
	case 0:
		printf(".. ");
		break;
	case 1:
		printf("Pa ");
		break;
	case 2:
		printf("Ro ");
		break;
	case 3:
		printf("Kn ");
		break;
	case 4:
		printf("Bi ");
		break;
	case 5:
		printf("Qu ");
		break;
	case 6:
		printf("Ki ");
		break;
	default:
		printf("   \n");
	}
	printf("\n");
	scanf("%d %d", &bx, &by);
	
	printf("%d %d\n", _pBoard[ay][ax].team, _pBoard[ay][ax].type);
	if (ax == -1)
		exit(0);
	return MoveTo(ax, ay, bx, by, _pBoard);
}