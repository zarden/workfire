#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	int next_reuslt;
	int pre_result = 1;
	int result = 1;
	while (n > 2){
		n -= 1;
		next_reuslt = pre_result;
		pre_result = result;
		result = next_reuslt + pre_result;
	}
	return result;
}
int main(){
	int f,n=0;
	printf("求第几个斐波那契数:");
	scanf("%d", &n);
	f = fib(n);
	printf("%d", f);
	system("pause");
	return 0;
}