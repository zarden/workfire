#include"InsertSort.h"

//直接插入排序
void InsertSort(int *src, int n)
{
	//多趟排序
	for (int i = 0; i < n - 1; ++i)
	{
		//单趟排序(升序)
		int end=i;
		int tmp = src[end + 1];
		while (end >= 0)
		{
			if (tmp < src[end])
			{
				src[end + 1] = src[end];
				--end;
			}
			else
			{
				break;
			}
			src[end + 1] = tmp;
		}
	}
}

//希尔排序(升序)
//平均复杂度：O(N^1.3)
//顺序有序(预排序全部白做了，还不如直接插入排序)情况下复杂度最坏
void ShellSort(int *src, int n)
{
	//gap>1时为预排序         接近有序
	//gap==1是为直接插入排序  有序
	int gap = n;
	while (gap > 1)
	{
		//间隔为gap的预排序
		gap = gap / 3 + 1;//加1是保证最后一次一定是1
		for (int i = 0; i <n - gap; ++i)
		{
			int end = i;
			int tmp = src[end + gap];
			while (end >= 0)
			{
				if (src[end] > tmp)
				{
					src[end + gap] = src[end];
					end -= gap;//每次减gap
				}
				else
				{
					break;
				}
				src[end + gap] = tmp;
			}
		}
	}
}

void PrintfInsertSort(int *src, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", src[i]);
	}
}

int main()
{
	int src[] = { 5, 8, 7, 9, 6, 5, 4, 2, 3};
	//InsertSort(src, sizeof(src)/sizeof(int));
	ShellSort(src, sizeof(src)/sizeof(int));
	PrintfInsertSort(src, sizeof(src) / sizeof(int));
	system("pause");
	return 0;
}