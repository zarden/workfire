#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h.>

int fib(int n){
	if (n <= 2){
		return 1;
	}
	else
		return fib(n - 1) + fib(n - 2);
}
int main(){
	int num;
	printf("请输入一个数:");
	scanf("%d", &num);
	int q=fib(num);
	printf("%d\n", q);
	system("pause");
	return 0;
}