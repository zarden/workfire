#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	int sn;
	int i;
	int tmp, sum = 0;
	scanf("%d %d", &n, &sn);

	for (i = n; i; i /= sn)
	{
		tmp = i % sn;
		sum = sum * sn + tmp;
	}
	if (n == sum)
	{
		printf("%d��%d�������ǻ�����\n", n, sn);
	}
	else
	{
		printf("%d��%d�����²��ǻ�����\n", n, sn);
	}

	system("pause");
	return 0;
}