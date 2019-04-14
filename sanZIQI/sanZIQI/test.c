#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

// 1. 先创建一个棋盘,并且进行初始化(全是空格)
// 2. 打印棋盘
// 3. 让玩家落子,提示一个落子位置坐标
// 4. 检测游戏是否结束
// 5. 电脑落子,生成一对随机数
// 6. 检测游戏是否结束
int Menu(){
	printf("**********************\n");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
	printf("**********************\n");
	printf("请输入你的选择：\n");
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
	//玩家落子
	printf("玩家落子!\n");
	while (1) {
		printf("请输入一组坐标(row col): ");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row >= MAX_ROW || row < 0 || col >= MAX_COL || col < 0) {
			printf("您的输入有误!请重新输入！\n");
			continue;
		}
		if (chess_board[row][col] != ' ') {
			printf("您输入的坐标已经被占用!\n");
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
	//检查行列对角线
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
		printf("电脑落子!\n");
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
		printf("玩家胜利!\n");
	}
	else if (winner == 'O'){
		printf("你真菜！\n");
	}
	else if (winner == 'q'){
		printf("你真菜，和电脑五五开！\n");
	}
	else{
		printf("好像出错了！\n");
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
			printf("您的输入有误\n");
		}

	}


	system("pause");
	return 0;
}
