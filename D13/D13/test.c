#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#if 0
int main(){
	int a = 3, b = 4, c = 5;
	while (a < b < c){
		int t = a;
		a = b;
		b = t;
		c--;
	}
	printf("%d,%d,%d", a, b, c);
	system("pause");
	return 0;
}
#endif
#if 0
int main(){
	int a = 3, b = 0, c = 5;
	int n = 0;
	while (--a && ++b && c--)//只要有一个减到0就停止循环
		n++;
	printf("%d,%d,%d,%d\n", a, b, c, n);
	system("pause");
	return 0;
}
#endif
#if 0
int main(){
	int a = 0x11223344;//小端->地位存储在低位地址,高位存储在高位地址
	short int b = a;//分配从高地址到低地址,a高地址b低地址c更低地址
	char c = a;//
	printf("%x,%x,%x\n", a, b, c);//该程序可判断大端小端
	system("pause");
	return 0;
}
#endif
#if 0
int main(){
	int a = 6;
	float b = 4.6;//浮点型存储SEM
	printf("%d\n", (int)b);
	system("pause");
	return 0;
}
#endif
#if 0
int main(){
	int i,  j;
	while (1){
		for (i = 0; i < 10; i++){
			printf("||||||||||");
			Sleep(100);//100ms
			system("cls");
			for (j = 0; j <= i; j++){
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}
#endif
#if 1
HANDLE	handle;
COORD pos = { 0, 0 };
int main(){
	int i,  j;
	while (1){
		for (i = 0; i < 10; i++){
			printf("||||||||||");
			Sleep(100);//100ms
			printf("\b\b\b\b\b\b\b\b\b\b");//灯笼来回上下
			printf("          ");
			printf("\n");
		}
		handle = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(handle, pos);
	}

	system("pause");
	return 0;
}
#endif
