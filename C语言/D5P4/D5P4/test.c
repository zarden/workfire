#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i, j;
	int tmp[10] = { 0 };
	int sum = 0;
	int count = 0;

	for (i = 0; i < 100000000; i++)
	{
		for (j = i; j; j /= 10)
		{
			tmp[count] = j % 10;//取出来的数字是逆序的放入数组
			count++;
		}

		for (j = 0; j < count; j++)
		{
			sum += pow(tmp[j], count);
		}

		if (sum == i)
		{
			printf("%d\n", i);
		}
		count = sum = 0;
	}
	system("pause");
	return 0;
}