#include"InsertSort.h"

//ֱ�Ӳ�������
void InsertSort(int *src, int n)
{
	//��������
	for (int i = 0; i < n - 1; ++i)
	{
		//��������(����)
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

//ϣ������(����)
//ƽ�����Ӷȣ�O(N^1.3)
//˳������(Ԥ����ȫ�������ˣ�������ֱ�Ӳ�������)����¸��Ӷ��
void ShellSort(int *src, int n)
{
	//gap>1ʱΪԤ����         �ӽ�����
	//gap==1��Ϊֱ�Ӳ�������  ����
	int gap = n;
	while (gap > 1)
	{
		//���Ϊgap��Ԥ����
		gap = gap / 3 + 1;//��1�Ǳ�֤���һ��һ����1
		for (int i = 0; i <n - gap; ++i)
		{
			int end = i;
			int tmp = src[end + gap];
			while (end >= 0)
			{
				if (src[end] > tmp)
				{
					src[end + gap] = src[end];
					end -= gap;//ÿ�μ�gap
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