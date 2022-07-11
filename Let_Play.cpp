#include "Let_Play.h"
#include<iostream>
ChessPlay::ChessPlay() {
//	printf("1\n");
	ChessBoard Board = ChessBoard();
//	printf("2\n");
	Board.ChessDisplay();
	printf("\n%d\n", pBoard[2][2].type);
	Board.GetCommand();
//	printf("3\n");
}
void ChessPlay::_Command() {
	
}
ChessPlay::~ChessPlay() {

}