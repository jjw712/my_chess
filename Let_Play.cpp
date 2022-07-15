#include "Let_Play.h"
#include<iostream>
ChessPlay::ChessPlay() {
//	printf("1\n");
	ChessBoard Board = ChessBoard(pBoard);
//	printf("2\n");
	int turn = 1;
	while (1) {
		Board.ChessDisplay(pBoard);
		printf("\nturn: %d", turn);
		if (turn % 2 == 1)
			printf(" White\n");
		else
			printf(" Black\n");

		int tmp = Board.GetCommand2(pBoard, turn);
		if (tmp >= 1)
			turn++;
	}
//	printf("3\n");
}
void ChessPlay::_Command() {
	
}
ChessPlay::~ChessPlay() {

}