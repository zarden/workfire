#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int DigitSum(int num)
{
	if (num == 0)
		return 0;
	else
		return (num % 10) + DigitSum(num / 10);
}
int main()
{
	int n = 0;
	printf("请输入一个非负整数:");
	scanf("%d", &n);
	int ret = DigitSum(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}