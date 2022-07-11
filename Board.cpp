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
ChessBoard::ChessBoard(bool start){
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
	if (start == true) {	// รณภฝ
		for (int i = 0; i <= 9; i++) {
			pBoard[i][0] = out;
			pBoard[i][9] = out;
			pBoard[0][i] = out;
			pBoard[9][i] = out;
		}
		for (int x = 1; x <= 8;x++) {
			pBoard[2][x] = W_Pawn;
			pBoard[7][x] = B_Pawn;
		}
		pBoard[1][1] = W_Rock;
		pBoard[1][8] = W_Rock;
		pBoard[8][1] = B_Rock;
		pBoard[8][8] = B_Rock;
		pBoard[1][2] = W_Knight;
		pBoard[1][7] = W_Knight;
		pBoard[8][2] = B_Knight;
		pBoard[8][7] = B_Knight;
		pBoard[1][3] = W_Bishop;
		pBoard[1][6] = W_Bishop;
		pBoard[8][3] = B_Bishop;
		pBoard[8][6] = B_Bishop;
		pBoard[1][4] = W_King;
		pBoard[1][5] = W_Queen;
		pBoard[8][4] = B_King;
		pBoard[8][5] = B_Queen;
	}
}
Piece* ChessBoard::ChessDisplay() {
	//	printf("41\n");
	
	for (int y = 0; y <= 9; y++) {
		//		printf("42\n");
		for (int x = 0; x <= 9; x++) {
			//			printf("43\n");
			int team, type;
			type = pBoard[y][x].type;
//			printf("%d", type);
			if (y == 0 || x == 0) {
				printf("%d  ", _MAX(y,x));
				continue;
			}
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
					printf("   ");
					
			}
		}

		printf("\n");
	}
	return *pBoard;
}
