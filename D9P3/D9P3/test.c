#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(){
	int num1 = 0, num2 = 0;
	printf("请输入两个数:");
	scanf("%d%d", &num1, &num2);
	int avg = num1 + (num2 - num1) / 2;
	printf("%d\n", avg);
	system("pause");
	return 0;
}


