#include <stdio.h>
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

void swapArgs(int *pa, int *pb)//����
{
	int tmp;

	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int HoareWay(int * src, int start, int end)
{
	int a = start + 1, b = end - 2;
	int mid = (start + end) / 2;

	if (src[start] > src[mid])
	{
		swapArgs(src + start, src + mid);
	}
	if (src[mid] > src[end])
	{
		swapArgs(src + mid, src + end);
	}
	if (src[start] > src[mid])
	{
		swapArgs(src + start, src + mid);
	}

	if (end - start <= 2)
	{
		return mid;//ð���Ѿ��ź�˳��
	}

	swapArgs(src + mid, src + end - 1);

	while (a <= b)
	{
		while (a < end - 1 && src[a] <= src[end - 1])
		{
			a++;
		}

		while (b > 1 && src[b] >= src[end - 1])
		{
			b--;
		}

		if (a == b && (a == 1 || a == end - 1))
		{
			break;
		}

		if (a < b)
		{
			swapArgs(src + a, src + b);
		}
	}
	swapArgs(src + a, src + end - 1);
	return a;
}

int digWay(int * src, int start, int end)//�ٿӷ���ֱ�Ӹ��ǲ�����
{
	int a = start, b = end;
	int flag = 0;
	int tmp = src[start];

	while (1)
	{
		while (b > start && src[b] >= tmp)
		{
			b--;
		}

		if (a < b)
		{
			src[a] = src[b];//�ҵ�һ����tmpС��b,��b����a,b����һ����
		}
		else
		{
			src[a] = tmp;//������
			return a;
		}

		while (a < end && src[a] <= tmp)
		{
			a++;
		}

		if (a < b)
		{
			src[b] = src[a];//�ҵ�һ����tmp���a,��a����b,a����һ����
		}
		else
		{
			src[b] = tmp;//������
			return b;
		}
	}
}

int doublePointerWay2(int * src, int start, int end)
{
	int a = start, b = end - 1;
	int mid = (start + end) / 2;

	swapArgs(src + mid, src + end);

	while (a <= b)
	{
		while (a < end && src[a] <= src[end])
		{
			a++;
		}

		while (b > 0 && src[b] >= src[end])
		{
			b--;
		}

		if (a == b && (a == 0 || a == end))
		{
			break;
		}

		if (a < b)
		{
			swapArgs(src + a, src + b);
		}
	}
	swapArgs(src + a, src + end);
	return a;
}

int doublePointerWay1(int * src, int start, int end)//˫ָ�뷨
{
	int a = start, b = end;//a�ǻ�׼ֵ
	int flag = 0;

	while (src[b] > src[a])
	{
		b--;
	}

	while (a < b)
	{
		swapArgs(src + b, src + a); //src[b] > src[a]����н���
		flag = !flag;

		while (src[b] >= src[a])
		{
			flag ? a++ : b--;
		}
	}

	return flag ? b : a;//���b���򷵻�a,���a���򷵻�b.
}

void dealQuickSort(int * src, int start, int end)
{
	int mid;
	if (start + 8 < end)
	{
		mid = HoareWay(src, start, end);
		dealQuickSort(src, start, mid - 1);
		dealQuickSort(src, mid + 1, end);
	}
	else
	{
		InsertSort(src + start, end - start + 1);
	}
}

void QuickSort(int * src, int n)
{
	dealQuickSort(src, 0, n - 1);
}