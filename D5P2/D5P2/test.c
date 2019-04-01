#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, n = 0, tmp = 0, sum = 0;
	printf("请输入一个数:");
	scanf("%d", &n);
	for (i = 0; i < 5; i++)
	{
		tmp = tmp * 10 + n;//主要思想
		sum += tmp;
	}
	printf("计算结果为%d\n", sum);
	system("pause");
	return 0;

}