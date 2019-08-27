#include<stdio.h>
#include <stdlib.h>

void InsertSort(int * src, int n)
{
	int i, j;
	int tmp;

	for (i = 1; i < n; i++)
	{
		tmp = src[i];

		for (j = i; j > 0 && src[j - 1] > tmp; j--)
		{
			src[j] = src[j - 1];
		}

		src[j] = tmp;
	}
}

