#include"Sort1.h"

void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void BubbleSort(int *a, int n)
{
	for (int end = n - 1; end > 0; --end)
	{
		int flag = 0;
		for (int i = 0; i < n - 1; ++i)
		{
			if (a[i]>a[i + 1])
			{
				Swap(&a[i], &a[i + 1]);
				flag = 1;
			}
		}
		if (flag==0)
		{
			break;
		}
	}
}

//hoare��
int HoareSort(int *a, int begin,int end)
{
	//end��key,������ߣ�begin��key,�ұ�����

	int key = a[end];
	int keyindex = end;
	while (begin < end)
	{
		//begin�Ҵ�
		while (begin < end && a[begin] <= key)
		{
			++begin;
		}
		while (begin < end && a[end] >= key)
		{
			--end;
		}
		Swap(&a[begin], &a[end]);
	}
	Swap(&a[begin], &a[keyindex]);
	return begin;
}

//�ڿӷ�
int PitSort(int *a, int begin, int end)
{
	int key = a[end];
	while (begin < end)
	{
		//begin�Ҵ�
		while (begin < end && a[begin] <= key)
		{
			++begin;
		}
		a[end] = a[begin];//�ҵ����ӵ��ұߵĿ���ȥ
		while (begin < end && a[end] >= key)
		{
			--end;
		}
		a[begin] = a[end];//�ҵ�С���ӵ���ߵĿ���ȥ
	}
	a[begin]=key;
	return begin;
}

//ǰ��ָ��汾
int PrevCurSort(int *a, int begin, int end)
{
	int cur = begin;
	int prev=begin-1;
	int key = a[end];

	while (cur < end)//����key��λ�þͽ�����
	{
		if (a[cur] < key && ++prev != cur)
			Swap(&a[cur], &a[prev]);
		++cur;
	}
	++prev;
	Swap(&a[prev],&a[end]);

	return prev;
}

void QuickSort(int *a, int begin, int end)
{
	if (begin >= end)
		return;

	//int keyindex = HoareSort(a, begin, end);
	//int keyindex = PitSort(a, begin, end);
	int keyindex = PrevCurSort(a, begin, end);

	QuickSort(a, begin, keyindex - 1);
	QuickSort(a, keyindex + 1, end);
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
	int a[] = {6,1,2,7,6,9, 3, 4, 5, 10, 8};
	//BubbleSort(a, sizeof(a) / sizeof(int));
	//PartSort(a, 0, sizeof(a) / sizeof(int)-1);
	
	QuickSort(a, 0, sizeof(a) / sizeof(int)-1);
	PrintfArray(a, sizeof(a) / sizeof(int));
	system("pause");
	return 0;
}