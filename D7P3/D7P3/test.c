#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int factorial(int n){
	if (n <= 1)
		return 1;
	else
		return n*factorial(n - 1);
}

int main(){
	int num,n;
	printf("����������һ�����Ľ׳�:");
	scanf("%d", &n);
	num = factorial(n);
	printf("%d", num);
	system("pause");;
	return 0;
}