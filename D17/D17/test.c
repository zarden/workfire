//指针  基类型*指针变量名
//野指针 1.声明指针没有合法化 2.malloc
//int *p 单指针
//int **p1 双指针
//int (*p2)[3] 数组指针
//int *p3[3] 指针数组 (存储指针的数组)
//int (*p4)(int,int) 函数指针
//int (*p4[3])(int,int) 函数指针数组
//int *p5(int,int) 指针函数 (返回指针的函数)

//int a = 5;   一级指针
//int *p = &a;

#include<stdio.h>
#include<stdlib.h>

//1.交换内容,必须有地址
//void swap(int *x, int *y)
//{
//	int t;
//	t = *x;
//	*x = *y;//取* ,就是取内容
//	*y = t;
//}
//void main()
//{
//	int a = 5, b = 7;
//	swap(&a, &b);
//	printf("%d,%d\n", a, b);
//	system("pause");
//}

//2.
//void main()
//{
//	char a[] = { 1, 1, 1, 1, 1 };
//	int *p = (int *)a;//*p 指向基类型跨基类型字节数
//	printf("%d\n", *p);
//	system("pause");
//}

//3.数组下标,当前数组元素距离首地址偏移量
//数组3个特点 : 有序性(下标有序), 连续性(占连续内存空间, 随机存储), 一致性(数组中元素类型一样)
//一维数组名可当作单指针来用(单指针加1,相当于加1个元素
//一维数组名取地址,相当于二位数组行指针
//二维数组名可当作行指针来用,也就是数组指针(int (*p)[4] )来用
//a[0]~*a    a[i]~*(a+i)
//a[0][0]~**a  a[i][j]~*(*(a+i)+j)
//void main()
//{
	//int a[] = { 1, 2, 3, 4, 5 };
	//int *p = (int *)(&a + 1);//p指向5后面一个元素
	////int *p=a+1; 把a1地址给p
	//printf("%d\n", *(p - 1));
//	int a[3][4];
//	printf("%d,%d,%d\n", a, a[0], &a[0][0]);//a, a[0], &a[0][0]三个地址一样
//	printf("%d,%d,%d\n", a, a + 1,  &a[1]);// a + 1,  &a[1]地址一样
//	system("pause");
//}
//4.冒泡排序
//void main()
//{
//	int a[] = { 7, 6, 8, 9, 0, 1, 2, 3, 4, 5 };
//	int i, j, t;
//	int n = sizeof(a) / sizeof(a[0]); 
//	int *p=a;//所有a换p
//	for (i = 0; i < n - 1; ++i)
//	{
//		for (j = 0; j < n - i - 1; ++j)
//		{
//			if (a[j]<a[j + 1])
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	//for (i = 0; i < n; ++i)
//	//{
//	//	printf("%d", a[i]);//1.a[i]2.*(a+i)3.*(p+i)4.a[i]5.*p,效率最高
//	//	printf("\n");
//	//}
//	for (p = a; p <a+10; ++p)
//	{
//		printf("%d", *p);
//		printf("\n");
//	}
//	system("pause");
//}
//逆序
//void main()
//{
//	int a[] = { 7, 6, 8, 9, 0, 1, 2, 3, 4, 5 };// 将 i 和 n-i-1 交换
//	int n = sizeof(a) / sizeof(a[0]);
//	int *p = a, *q = a + n - 1;//p指向7,q指向5
//	while (p < q)
//	{
//		int t = *p;
//		*p = *q;
//		*q = t;
//		++p;
//		--q;
//	}
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%d", a[i]);
//		printf("\n");
//	}
//	system("pause");
//}
//纯指针实现冒泡排序
void main()
{
	int a[] = { 7, 6, 8, 9, 0, 1, 2, 3, 4, 5 };
	int n = sizeof(a) / sizeof(a[0]);
	int *p = a, *q = a + 1, *end = a + n - 1;
	for (p = a; p < a + n - 1; ++p)//趟数
	{
		for (q = a; q < end; ++q)//次数
		{
			if (*q < *(q + 1))
			{
				int t = *q;
				*q = *(q + 1);
				*(q + 1) = t;
			}
		}
	}
	end--;
	for (p = a; p < a + 10; ++p)
	{
		printf("%d", *p);
		printf("\n");
	}
	system("pause");
}