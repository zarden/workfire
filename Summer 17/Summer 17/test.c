#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0
int main()
{
	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
	unsigned long *pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 2) += 2;
	printf("%d,%d\n", *pulPtr, *(pulPtr + 2));// 6,10
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	char *szStr = "abcde";
	szStr += 2;
	printf("%lu\n", szStr);//c的地址
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int i;
	char acNew[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	for (i = 0; i < 10; i++)
	{
		acNew[i] = '0';
	}
	printf("%d\n", strlen(acNew));//10
	system("pause");
	return 0;
}
#endif

#if 0
void foo(int b[][3])
{
	++b;
	b[1][1] = 9;
}

int main()
{
	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	foo(a);
	printf("%d", a[2][1]);//9
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int x = 0, y = 0, z = 0;;
	z = (x == 1) && (y = 2);
	printf("%d", y);//0
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int i = 10;
	long long t = sizeof(i++);
	printf("%d\n", i);//10
	system("pause");
	return 0;
}
#endif

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	int x;//表示一个数的下标
	int y;//表示另一个数的下标
}A;
A Array;
void FindIndex(int *a, int n, int add)
{
	int left = 0;
	int right = n - 1;
	int sum = 0;
	while (left<=right)
	{
		sum = a[left] + a[right];
		if (sum<add)
		{
			left++;
		}
		else if (sum>add)
		{
			right--;
		}
		else
		{
			Array.x = left;
			Array.y = right;
			break;
		}
	}
}

int main()
{
	int a[10] = {  1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
	int n = sizeof(a) / sizeof(a[0]);
	int add;
	printf("请输入K：");
	scanf("%d", &add);
	FindIndex(a, n, add);
	printf("%d %d\n", Array.x, Array.y);
	system("pause");
	return 0;
}