#include "Let_Play.h"
#include<iostream>
ChessPlay::ChessPlay() {
//	printf("1\n");
	ChessBoard Board = ChessBoard(pBoard);
//	printf("2\n");
	int turn = 1;
	while (1) {
		Board.ChessDisplay(pBoard,turn);
	

		int tmp = Board.GetCommand2(pBoard, &turn);
		if (tmp >= 1)
			turn++;
	}
//	printf("3\n");
}
ChessPlay::~ChessPlay() {

}