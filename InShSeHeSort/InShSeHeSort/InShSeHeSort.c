#include"InShSeHeSort.h"

// ÷±Ω”≤Â»Î≈≈–Ú
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
	int end=i;
	int tmp = a[end + 1];
	while (end>=0)
	{
		if (tmp < a[end])
		{
			a[end + 1] = a[end];
			--end;
		}
		else
		{
			break;
		}
		a[end + 1] = tmp;
	}
	}
}

// œ£∂˚≈≈–Ú
void ShellSort(int* a, int n)
{
	int gap=n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; ++i)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			if (tmp < a[end])
			{
				a[end + gap] = a[end];
				end -= gap;
			}
			else
			{
				break;
			}
			a[end + gap] = tmp;
		}
	}
}

// —°‘Ò≈≈–Ú
void Swap(int *p1, int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	while (begin<end)
	{
	int minidex = begin, maxidex = end;
	for (int i = begin; i <= end; ++i)
	{
		if (a[i]>a[maxidex])
		{
			maxidex = i;
		}
		if (a[i] < a[minidex])
		{
			minidex = i;
		}
	}
		//begin            end
		//  9   3  5  6  1  8                1   3  5  6  9  8  
		//maxidex      minidex

		Swap(&a[begin], &a[minidex]);
		if (begin == maxidex)
		{
			maxidex = minidex;
		}
		Swap(&a[end], &a[maxidex]);

		++begin;
		--end;
	}
}

// ∂—≈≈–Ú

//void Swap(int *a, int *b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}

void AdjustDwon(int* a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child<n)
	{
		if (child + 1 < n && a[child + 1] > a[child])
			++child;

		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);

			parent = child;
			child = parent * 2 + 1;
		}

		else
		{
			break;
		}
	}
}

void HeapSort(int* a, int n)
{
	for (int i = (n-2)/2; i >= 0; --i)
	{
		AdjustDwon(a, n, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDwon(a, end, 0);
		--end;
	}
}

void PrintfArray(int *a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	int a[] = { 6, 5, 8, 3, 9, 1, 6, 2, 4, 7 };
	//InsertSort(a, sizeof(a) / sizeof(int));
	//ShellSort(a, sizeof(a) / sizeof(int));
	//SelectSort(a,sizeof(a) / sizeof(int));
	HeapSort(a, sizeof(a) / sizeof(int));
	PrintfArray(a, sizeof(a) / sizeof(int));
	system("pause");
	return 0;
}