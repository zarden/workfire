#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int factorial(int n){
	int result = 1;
	while (n > 1){
		result *= n;
		n -= 1;
	}
	return result;
}

int main(){
	int num, n;
	printf("����������һ�����Ľ׳�:");
	scanf("%d", &n);
	num = factorial(n);
	printf("%d", num);
	system("pause");;
	return 0;
}