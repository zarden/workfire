#include<stdio.h>
#include<stdlib.h>

//1.
//int main()
//{
//	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 7, 6 };// 二维数组名a是 int(*p)[4] 类型
//	int(*p)[4];
//	int i, j;
//	p = a;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d", *(*(p + i) + j));
//		}
//		printf("\n");
//	}

//注意指针变量的当前值
//for (p = a; p < a + 3; p++)//比二维数组名多一个操作可以自加,数组名不可以自加
//{
//	for (j = 0; j < 4; j++)
//	{
//		printf("%d", *(*p + j));
//	}
//	printf("\n");
//}
//
//	system("pause");
//	return 0;
//
//}

//2. 数组传参数
//void output(int arr[][4]){}
//void output(int(*p)[4]){}
//
//int main()
//{
//	int arr[3][4] = { 1, 4, 2, 3, 5, 6, 7, 8, 9, 0, 9, 8 };
//	output(arr);
//	system("pause");
//	return 0;
//}

//3.变指向来实现交换
//int main()
//{
//	char *tmp = NULL;
//	char *p = "111";
//	char *q = "222";
//	tmp = p;
//	p = q;
//	q = tmp;
//	printf("%s,%s\n", p, q);//%s
//	system("pause");
//	return 0;
//}
//4.
//void test(int a[100])// int * 类型
//{
//	printf("%d\n", sizeof(a));//4
//}
//
//int main()
//{ 
//	int a[100];
//	printf("%d\n", sizeof(a));//400
//	test(a);//传首地址
//	system("pause");
//	return 0;
//}


// 二级指针
//int main()
//{
//	int a = 5;
//	int *p = &a;
//	int **q = &p;
//	printf("%d   %d   %d\n", a, *p, **q);
//	system("pause");
//	return 0;
//}
//5.
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *q[5] = { &a[0], &a[1], &a[2], &a[3], &a[4] };
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%2d", **(q + i));
//	}
//	system("pause");
//	return 0;
//}

//6 指针类型不一样,加1就不一样
int main()
{
	int a = 6;
	int *p = &a;
	printf("%p\n", p);
	printf("%p\n", p+1);//加4个字节
	printf("%p\n", (unsigned long)p + 0x1);//加数字 1
	printf("%p\n", (short *)p + 0x1);//加 2个字节
	system("pause");
	return 0;
}