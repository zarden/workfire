#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int prime(int num)
{
	int i = 0;
	int k = 0;
	k = sqrt(num);
	for (i = 2; i <= k; i++)
	{
		if (num%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int num;
	int ret;
	printf("请输入一个大于1的正整数：");
	scanf("%d", &num);
	ret = prime(num);
	if (ret == 1)
	{
		printf("%d是素数\n", num);
	}
	else
	{
		printf("%d不是素数\n", num);
	}
	system("pause");
	return 0;
}
