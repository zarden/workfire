#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#if 0
// 1.
int main()
{
	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 };
	int *q[4];
	int k;

	for (k = 0; k < 4; k++)
	{
		q[k] = &a[k * 3];
	}
	printf("%d\n", q[3][1]);
	system("pause");
	return 0;
}
#endif

#if 0
//2
int main()
{
	int i, j, a = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (j % 2)
				break;
			a++;
		}
		a++;
	}
	printf("%d\n", a);

	const char *p = "Hello!";
	printf("%c\n", *p);
	system("pause");
	return 0;
}
#endif


//3.
//在一个二维数组中,每一行都按照从左到右递增的顺序排序,每一列都按照从上到下递增的顺序排序.
//请完成一个函数,输入这样的一个二维数组和一个整数,并判断数组中是否含有该整数.
//时间复杂度 O(row+col)
//数组样例
//int arr[4][4]={
//     1,2,8,9
//     2,4,9,12
//     4,7,10,13
//     6,8,11,15};

#define ROW 4
#define COL 4

int YoungMatrix(int array[][COL], int searchKey)
{
	int i = 0, j = COL - 1;
	int var = array[i][j];
	while (1)
	{
		if (var == searchKey)
		{
			return 1;
		}
		else if (var < searchKey && i < ROW - 1)
		{
			var = array[++i][j];
		}
		else if (var > searchKey && j > 0)
		{
			var = array[i][--j];
		}
		else
		{
			return -1;
		}
	}
}

int main()
{
	int array[ROW][COL] = { 1, 2, 8, 9, 2, 4, 9, 12, 4, 7, 10, 13, 6, 8, 11, 15 };
	YoungMatrix(array, 5);
	system("pause");
	return 0;
}

#if 0
int main()
{
	int i = 0;
	while (i<10)
	{
		if (i < 1)
			continue;
		if (i == 5)
			break;
		i++;
	}
	system("pause");
	return 0;
}
#endif

#if 0
void main()
{
	int a = 10;
	a += a *= a -= a / 3;
	printf("%d", a);
	system("pause");
}
#endif


