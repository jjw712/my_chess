#include"Board.h"
#include<algorithm>
int Pa(int team, int ax, int ay, int bx, int by);
int Ro(int team, int ax, int ay, int bx, int by);
int Kn(int team, int ax, int ay, int bx, int by);
int Bi(int team, int ax, int ay, int bx, int by);
int Qu(int team, int ax, int ay, int bx, int by);
int Ki(int team, int ax, int ay, int bx, int by);
//extern Piece pBoard[10][10];
void ChessBoard::MoveTo(int ax, int ay, int bx, int by) {
//	Piece pBoard[10][10] = ChessBoard::pBoard;
	int team = pBoard[ay][ax].team;
	int type =pBoard[ay][ax].type;
	int tmp_B[10][10] = { 0, };	//0 불가능 1 가능 2 어택
	if (ax < 1 || ax>8 || bx < 1 || bx>8 || ay < 1 || ay>8 || by < 1 || by>8) {
		printf("input error\n");
		return;
	}
	switch (type) {
	case -1:
		printf("empty");
		break;
	case 0:
		printf("empty");
		break;
	case 1:
		Pa(team, ax, ay, bx, by);
		break;
	case 2:
		Ro(team, ax, ay, bx, by);
		break;
	case 3:
		Kn(team, ax, ay, bx, by);
		break;
	case 4:
		Bi(team, ax, ay, bx, by);
		break;
	case 5:
		Qu(team, ax, ay, bx, by);
		break;
	case 6:
		Ki(team, ax, ay, bx, by);
		break;
	default:
		printf("   ");
	}
}
/// <summary>
/*
0  1  2  3  4  5  6  7  8  9
1  Ro Kn Bi Ki Qu Bi Kn Ro ㅣ
2  Pa Pa Pa Pa Pa Pa Pa Pa ㅣ
3  .. .. .. .. .. .. .. ..ㅣ
4  .. .. .. .. .. .. .. ..ㅣ
5  .. .. .. .. .. .. .. ..ㅣ
6  .. .. .. .. .. .. .. ..ㅣ
7  Pa Pa Pa Pa Pa Pa Pa Pa ㅣ
8  Ro Kn Bi Ki Qu Bi Kn Ro ㅣ
9  ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ
*/
void _move(int ax, int ay, int bx, int by) {
	pBoard[by][bx].type = pBoard[ay][ax].type;
	pBoard[by][bx].team = pBoard[ay][ax].team;
	pBoard[ay][ax].type = 0;
	pBoard[ay][ax].team = -1;
}
int Pa(int team, int ax, int ay, int bx, int by) {
	if (team == 1) {	// White
		if (pBoard[by][bx].type >= 0) {
			if (ay + 1 == by && abs(ax - bx) == 1) {
				_move(ax, ay, bx, by);
				printf("attack\n");
				return 2;
			}
		}
		else if(ay == 2){
			if (ax == bx && (by - ay == 1 || (by - ay == 2 && pBoard[ay + 1][by].type < 1))) {
				_move(ax, ay, bx, by);
				printf("move\n");
				return 1;
			}
			
		}
		else {
			if ((ax == bx && by - ay == 1)) {
				_move(ax, ay, bx, by);
				printf("move\n");
				return 1;
			}
		}
		printf("impossible\n");
		return 0;
	}
	else if(team == 0){		// Black
		if (pBoard[by][bx].type >= 0) {
			if (ay - 1 == by && abs(ax - bx) == 1) {
				pBoard[by][bx].type = pBoard[ay][ax].type;
				pBoard[by][bx].team = pBoard[ay][ax].team;
				printf("attack\n");
				return 2;
			}
		}
		else if (ay == 7) {
			if (ax == bx && (by - ay == -1 || (by - ay == -2 && pBoard[ay + 1][by].type < 1))) {
				_move(ax, ay, bx, by);
				printf("move\n");
				return 1;
			}

		}
		else {
			if ((ax == bx && by - ay == -1)) {
				_move(ax, ay, bx, by);
				printf("move\n");
				return 1;
			}
		}
		printf("impossible\n");
		return 0;
	}
	return 0;
}
int Ro(int team, int ax, int ay, int bx, int by) {
	return 0;
}
int Kn(int team, int ax, int ay, int bx, int by) {
	return 0;
}
int Bi(int team, int ax, int ay, int bx, int by) {
	return 0;
}
int Qu(int team, int ax, int ay, int bx, int by) {
	return 0;
}
int Ki(int team, int ax, int ay, int bx, int by) {
	return 0;
}