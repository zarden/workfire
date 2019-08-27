#include<stdio.h>
#include<stdlib.h>

void BabbleSort(int *a, int n)
{
	int tmp;
	int i, j;

	for (i=0 ; i < n-1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j]>a[j+1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int i;
	int a[10] = { 5, 3, 6, 7, 9, 1, 2, 8, 4, 0 };
	int n = sizeof(a) / sizeof(a[0]);
	BabbleSort(a, n);
	//for ( i = 0; i < n; i++)
	//{
		printf("%d\n", a[9]);
	//}
	putchar('\n');
	system("pause");
	return 0;
}