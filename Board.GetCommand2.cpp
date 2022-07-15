#include "Board.h"
#include<Windows.h>
#include<conio.h>

using namespace std;

#define	UP		72
#define	DOWN	80
#define	LEFT	75
#define RIGHT	77
#define ENTER	13
void gotoXY(int x, int y) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(handle, pos);
}

int ChessBoard::GetCommand2(Piece _pBoard[][10], int turn) {
	int ax, ay, bx, by;
	int input;
	int x = 1;
	int y = 1;
//	if (input == 224)
//		input = _getch();
	while (1) {
		gotoXY(x, y);
		input = _getch();
		if (input == 224)
			input = _getch();
		switch (input) {
		case UP:
			if (y > 0)
				y--;
			break;
		case DOWN:
			if (y < 10)
				y++;
			break;
		case RIGHT:
			if (x < 10)
				x++;
			break;
		case LEFT:
			if (x > 0)
				x--;
			break;
		case ENTER:
			ax = x;
			ay = y;
			printf("%d %d\n", y, x);
		}
	}
}