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
		for (j = 1; j <= n - i; j++)//����ÿ�д�ӡ���ٸ��ո�
		{
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++)//���Ƶ�i�д�ӡ���ٸ�����
		{
			putchar('*');
		}
		putchar('\n');
	}

	for (i = n - 1; i >= 1; i--)
	{
		for (j = 1; j <= n - i; j++)//�����ӡ�ո�
		{
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++)//�����ӡ����
		{
			putchar('*');
		}
		putchar('\n');
	}

	system("pause");
	return 0;
}