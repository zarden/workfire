#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int prime_num(int num){
	int i, k;
	k = sqrt(num);
	for (i = 2; i <= k; i++){
		if (num % i == 0){             //ѭ���������жϲ���������!
			return 0;
		}
	}
	return 1;
}

int main(){
	int num,ret=0;
	printf("������һ������1������:");
	scanf("%d", &num);
	ret = prime_num(num);
	if (ret == 1){
		printf("%d ������", num);
	}
	else{
		printf("%d ��������", num);
	}
	system("pause");
	return 0;
}