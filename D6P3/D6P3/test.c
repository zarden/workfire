#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int leap_year(int year){
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int year;
	int ret = 0;
	printf("请输入年份:");
	scanf("%d", &year);
	ret = leap_year(year);
	if (ret == 1){
		printf("%d 是闰年\n", year);
	}
	else{
		printf("%d是平年\n", year);
	}
	system("pause");
	return 0;
}