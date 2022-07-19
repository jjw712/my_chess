#include "Board.h"
#include<Windows.h>
#include<conio.h>

using namespace std;

#define	UP		72
#define	DOWN	80
#define	LEFT	75
#define RIGHT	77
#define ENTER	13
#define QUIT	81
#define quit	113
#define RESTART	82
#define restart	114
void gotoXY(int x, int y) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(handle, pos);
}

int ChessBoard::GetCommand2(Piece _pBoard[][10], int* _turn) {
	int ax=0, ay=0, bx=0, by=0;
	int input = 0;
	int x = 3;
	int y = 1;
//	if (input == 224)
//		input = _getch();
	if (*_turn % 2 == 0) {
		x = 3;
		y = 8;
	}
	while (input != ENTER) {
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
			if (x < 10*3)
				x+=3;
			break;
		case LEFT:
			if (x > 0)
				x-=3;
			break;
		case ENTER:
			ax = x / 3;
			ay = y;
			break;
		case RESTART: {
			system("cls");
			printf("RESTART\n");
			*_turn = 1;
			Sleep(1000);
			system("cls");
			ChessBoard RePlay = ChessBoard(_pBoard);
			RePlay.ChessDisplay(_pBoard,1);

			break;
		}
		case QUIT:
			system("cls");
			printf("...Quit The Game...\n");
			Sleep(1000);
			exit(0);
		}
	}
	input = 0;
	while (input != ENTER) {
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
			if (x < 10 * 3)
				x += 3;
			break;
		case LEFT:
			if (x > 0)
				x -= 3;
			break;
		case ENTER:
			bx = x / 3;
			by = y;
			break;
		case RESTART: {
			printf("RESTART\n");
			ChessBoard RePlay = ChessBoard(_pBoard);

			
			break;
		}

		case QUIT:
			system("cls");
			printf("...Quit The Game...\n");
			Sleep(1000);
			exit(0);
		}
	}

	return MoveTo(ax,ay,bx,by,_pBoard);
}