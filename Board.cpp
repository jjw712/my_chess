#include <Windows.h>
#include "Board.h"

#define		_MAX(a, b) (((a) > (b)) ? (a) : (b))
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
ChessBoard::ChessBoard(Piece _pBoard[][10]){
	Piece out = { -1,-1 };
	Piece empty = { 0,-1 };
	Piece B_Pawn = { 1,0 };
	Piece W_Pawn = { 1,1 };
	Piece B_Rock = { 2,0 };
	Piece W_Rock = { 2,1 };
	Piece B_Knight = { 3,0 };
	Piece W_Knight = { 3,1 };
	Piece B_Bishop = { 4,0 };
	Piece W_Bishop = { 4,1 };
	Piece B_Queen = { 5,0 };
	Piece W_Queen = { 5,1 };
	Piece B_King = { 6,0 };
	Piece W_King = { 6,1 };
//	if (start == true) {	// ó��
		for (int i = 0; i <= 9; i++) {
			_pBoard[i][0] = out;
			_pBoard[i][9] = out;
			_pBoard[0][i] = out;
			_pBoard[9][i] = out;
		}
		for (int x = 1; x <= 8;x++) {
			_pBoard[2][x] = W_Pawn;
			_pBoard[7][x] = B_Pawn;
		}
		_pBoard[1][1] = W_Rock;
		_pBoard[1][8] = W_Rock;
		_pBoard[8][1] = B_Rock;
		_pBoard[8][8] = B_Rock;
		_pBoard[1][2] = W_Knight;
		_pBoard[1][7] = W_Knight;
		_pBoard[8][2] = B_Knight;
		_pBoard[8][7] = B_Knight;
		_pBoard[1][3] = W_Bishop;
		_pBoard[1][6] = W_Bishop;
		_pBoard[8][3] = B_Bishop;
		_pBoard[8][6] = B_Bishop;
		_pBoard[1][4] = W_King;
		_pBoard[1][5] = W_Queen;
		_pBoard[8][4] = B_King;
		_pBoard[8][5] = B_Queen;
		for (int i = 0; i <= 9; i++) {
			for (int j = 0; j <= 9; j++) {
				if (_pBoard[j][i].team == 0 && _pBoard[j][i].type == 0) {
					_pBoard[j][i] = empty;
				}
			}
		}
//	}
}
Piece* ChessBoard::ChessDisplay(Piece _pBoard[][10]) {
	//	printf("41\n");
	system("cls");
	int King[2] = { 0, };
	for (int y = 0; y <= 9; y++) {
		//		printf("42\n");
		for (int x = 0; x <= 9; x++) {
			//			printf("43\n");
			int team, type;
			type = _pBoard[y][x].type;
			team = _pBoard[y][x].team;
//			printf("%d", type);
			if (type >= 1) {
				if (team == 0)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
				else if (team == 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			if (y == 0 || x == 0) {
				printf("%d  ", _MAX(y,x));
				continue;
			}
			switch (type) {
				case -1:
					printf("�� ");
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
					King[team]=1;
					break;
				default:
					printf("   ");
					
			}
		}

		printf("\n");
	}
	printf("Quit: -1\n");
	if (King[0] == 0) {
		printf("White Win!!\n");
		exit(0);
	}
	if (King[1] == 0) {
		printf("Black Win!!\n");
		exit(0);
	}
	return *_pBoard;
}
