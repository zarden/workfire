#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int input = 0;
	int i = 1;
	int j = 1;
	int k = 0;
	printf("请输入你想打印的行数\n");
	scanf("%d", &input);
	for (i = 1; i <= input; i++)
	{
		for (j = 1; j <= i; j++)
		{
			k = i*j;
			printf("%d*%d=%2d ", j, i, k);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
