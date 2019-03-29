#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{
	int n;
	int i, j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)//控制每行打印多少个空格
		{
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++)//控制第i行打印多少个星星
		{
			putchar('*');
		}
		putchar('\n');
	}

	for (i = n - 1; i >= 1; i--)
	{
		for (j = 1; j <= n - i; j++)//倒叙打印空格
		{
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++)//倒序打印星星
		{
			putchar('*');
		}
		putchar('\n');
	}

	system("pause");
	return 0;
}