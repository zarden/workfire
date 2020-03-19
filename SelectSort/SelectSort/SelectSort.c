#include"SelectSort.h"

void Swap(int *p1, int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void PrintArray(int *a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void SelectSort(int *a, int n)
{
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		//[begin,end]选出一个最小的，选出一个最大的
		int minindex = begin, maxindex = end;
		for (int i = begin; i <= end; ++i)
		{
			if (a[i]>a[maxindex])
				maxindex = i;

			if (a[i] < a[minindex])
				minindex = i;
		}

			Swap(&a[begin], &a[minindex]);

			//值比较可能会导致本来不需要修正的被修正了
			if (begin == maxindex)
				maxindex = minindex;

			Swap(&a[end], &a[maxindex]);

			printf("[%d,%d]", begin, end);
			PrintArray(a, n);

			++begin;
			--end;
	}
}

void TestSelectSort()
{
	int a[] = { 6, 5, 6, 9, 7, 8, 3, 2, 4, 1 ,77,4,454};
	SelectSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}

int main()
{
	TestSelectSort();
	system("pause");
	return 0;
}