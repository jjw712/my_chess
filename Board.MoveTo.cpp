#include"Board.h"
void Pa(int team);
void Ro();
void Kn();
void Bi();
void Qu();
void Ki();

void ChessBoard::MoveTo(int ax, int ay, int bx, int by) {
	int team = pBoard[ay][ax].team;
	int type = pBoard[ay][ax].type;
	int tmp_B[10][10] = { 0, };	//0 불가능 1 가능 2 어택
	switch (type) {
	case -1:
		printf("empty");
		break;
	case 0:
		printf("empty");
		break;
	case 1:
		Pa();
		break;
	case 2:
		Ro();
		break;
	case 3:
		Kn();
		break;
	case 4:
		Bi();
		break;
	case 5:
		Qu();
		break;
	case 6:
		Ki();
		break;
	default:
		printf("   ");
}