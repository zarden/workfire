#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

// 1. �ȴ���һ������,���ҽ��г�ʼ��(ȫ�ǿո�)
// 2. ��ӡ����
// 3. ���������,��ʾһ������λ������
// 4. �����Ϸ�Ƿ����
// 5. ��������,����һ�������
// 6. �����Ϸ�Ƿ����
int Menu(){
	printf("**********************\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.�˳���Ϸ\n");
	printf("**********************\n");
	printf("���������ѡ��\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
#define MAX_ROW 3
#define MAX_COL 3
char chess_board[MAX_ROW][MAX_COL];

void Init(){
	for (int row = 0; row < MAX_ROW; ++row){
		for (int col = 0; col < MAX_COL; ++col){
			chess_board[row][col] = ' ';
		}
	}
}
void Print() {
	for (int row = 0; row < MAX_ROW; ++row) {
		printf("| %c | %c | %c |\n", chess_board[row][0],
			chess_board[row][1], chess_board[row][2]);
		if (row != MAX_ROW - 1) {
			printf("|---|---|---|\n");
		}
	}
}

void Player() {
	//�������
	printf("�������!\n");
	while (1) {
		printf("������һ������(row col): ");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row >= MAX_ROW || row < 0 || col >= MAX_COL || col < 0) {
			printf("������������!���������룡\n");
			continue;
		}
		if (chess_board[row][col] != ' ') {
			printf("������������Ѿ���ռ��!\n");
			continue;
		}
		chess_board[row][col] = 'X';
		break;
	}
}


int Isfull(){

	for (int row = 0; row < MAX_ROW; ++row){
		for (int col = 0; col < MAX_COL; ++col){
			if (chess_board[row][col] == ' '){
				return 1;
			}
		}
	}
	return 0;

}
char Chack(){
	//������жԽ���
	for (int row = 0; row < MAX_ROW; ++row){
		if (chess_board[row][0] == chess_board[row][1] && chess_board[row][0] == chess_board[row][2]){
			return chess_board[row][0];
		}
	}
	for (int col = 0; col < MAX_COL; ++col){
		if (chess_board[0][col] == chess_board[1][col] && chess_board[0][col] == chess_board[2][col]){
			return chess_board[0][col];
		}
	}
	if (chess_board[0][0] == chess_board[1][1] && chess_board[0][0] == chess_board[2][2]){
		return chess_board[0][0];
	}
	if (chess_board[0][2] == chess_board[1][1] && chess_board[0][2] == chess_board[2][0]){
		return chess_board[0][2];
	}
	if (Isfull()){
		return 'q';
	}
	return ' ';
}
void Computer(){
	while (1)	{
		printf("��������!\n");
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chess_board[row][col] != ' '){
			continue;
		}
		chess_board[row][col] = 'O';
		break;
	}
}



void Game(){
	Init();
	char winner = ' ';
	while (1){
		system("cls");
		Print();
		Player();
		char  winner = Chack();
		if (winner != ' '){
			break;
		}

		Computer();
		Chack();
		if (winner != ' '){
			break;
		}
	}
	system("cls");
	Print();
	winner = Chack();
	if (winner == 'X'){
		printf("���ʤ��!\n");
	}
	else if (winner == 'O'){
		printf("����ˣ�\n");
	}
	else if (winner == 'q'){
		printf("����ˣ��͵������忪��\n");
	}
	else{
		printf("��������ˣ�\n");
	}


}


int main(){
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();
		}
		else if (choice == 0){
			printf("good bye\n");
			break;
		}
		else{
			printf("������������\n");
		}

	}


	system("pause");
	return 0;
}
