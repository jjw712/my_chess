
#include <iostream>
#include "Let_Play.h"
using namespace std;
/// <summary>
// 
/// Board() -> ������
/// ����ü Pieces -> �� ���� ����, 
/// MoveTo() -> ������ ������ �̵�
/// display() -> ���� �������� ���� ǥ��
/// 
/// Board���� �� ����(command->move->display) �ݺ�

int main() {
	ChessPlay Play = ChessPlay();
	
	Play.~ChessPlay();
	
	printf("main\n");
	return 0;
}