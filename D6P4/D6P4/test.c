#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int prime_num(int num){
	int i, k;
	k = sqrt(num);
	for (i = 2; i <= k; i++){
		if (num % i == 0){             //循环是用来判断不是素数的!
			return 0;
		}
	}
	return 1;
}

int main(){
	int num,ret=0;
	printf("请输入一个大于1的整数:");
	scanf("%d", &num);
	ret = prime_num(num);
	if (ret == 1){
		printf("%d 是素数", num);
	}
	else{
		printf("%d 不是素数", num);
	}
	system("pause");
	return 0;
}