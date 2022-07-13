#include "Let_Play.h"
#include<iostream>
ChessPlay::ChessPlay() {
//	printf("1\n");
	ChessBoard Board = ChessBoard(pBoard);
//	printf("2\n");
	while (1) {
		Board.ChessDisplay(pBoard);
		printf("\n%d\n", pBoard[2][2].type);
		Board.GetCommand(pBoard);
	}
//	printf("3\n");
}
void ChessPlay::_Command() {
	
}
ChessPlay::~ChessPlay() {

}