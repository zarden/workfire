#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//1.指针变指向交换
//int main()
//{
//	int  *p1, *p2, p, a, b;
//	printf("please enter two integer numbers:");
//	scanf("%d%d", &a, &b);
//	p1 = &a;
//	p2 = &b;
//	if (a < b)
//	{
//		p = p1;
//		p1 = p2;//p1 = &b;p2 = &a;
//		p2 = p;
//	}
//	printf("a=%d,b=%d\n", a, b);
//	printf("max=%d,min=%d\n", *p1, *p2);
//	system("pause");
//	return 0;
//}

//2.交换a和b的值

void swap(int *p1, int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main()
{	
	int a, b;
	int *pointer_1,  *pointer_2;
	printf("please enter a and b:");
	scanf("%d%d", &a, &b);
	pointer_1 = &a;
	pointer_2 = &b;
	if (a < b)
	{
		swap(pointer_1, pointer_2);
	}
	printf("max=%d,min=%d", a, b);
	system("pause");
	return 0;
}