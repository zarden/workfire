//动态内存管理
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//<malloc.h>

//1.malloc 和 free
//void* malloc(size_t size);
//malloc 向内存申请一块连续可用的空间,并返回指向这块空间的指针
//A.如果开辟成功,则返回一个指向开辟好空间的指针
//B.如果开辟失败,则返回一个NULL指针,因此malloc的返回值一定要做检查
//C.返回值的类型是void*,所以malloc函数并不知道开辟空间的类型,具体在使用的时候由使用者自己来决定
//D.如果参数size为0,malloc的行为是标准未定义的,取决于编译器.
//free 动态内存的释放和回收
//void free(void* ptr)
//A.如果参数ptr指向的空间不是动态开辟的,free函数的行为是未定义的
//B.如果参数ptr是NULL指针,则函数什么事都不做

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//int arr[num] = { 0 };num 必须是常量
//	int* ptr = NULL;
//	int i;
//	ptr = (int*)malloc(num * sizeof(int));
//	if (NULL != ptr)
//	{
//		for (i = 0; i < num; i++)
//		{
//			*(ptr + i)=i;
//       printf("%d", *(ptr + i));
//		}
//		
//	}
//	free(ptr);
//	ptr = NULL;
//	system("pause");
//	return 0;
//}

//2.calloc
//A.为num个大小为size的元素开辟一块空间,并且把空间的每个字节初始化为0
//B.与函数malloc的区别只在于calloc会在返回地址之前把申请的空间的每个字节初始化全为0.
//int main1()
//{
//	int i = 0;
//	int *p = calloc(10, sizeof(int));
//	if (NULL != p)
//	{
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}

//3.realloc 对动态开辟内存大小的调整
//void* realloc(void* ptr,size_t size)
//A.ptr是要调整的内存地址
//B.size 调整之后新大小
//C.返回值为调整之后的内存起始位置
//D.这个函数调整原内存空间大小的基础上,还会将原来内存中的数据移动到新的空间
//E.realloc 调整内存空间存在两种情况
 //  a.原有空间之后有足够大的空间(扩展内存直接在原有内存之后直接追加内存,原来空间的数据不发生变化)
 //  b.原有空间之后没有足够多的空间(在堆空间上另找一个合适大小的连续内存空间来使用,函数返回的是一个新地址)
int main()
{
	int *p = NULL;
	int *q = NULL;
	int i = 0;
	p = (int *)malloc(4);
	*p = 6;
	//printf("%d", *p);
	p = (int *)realloc(p, 6 * sizeof(int));
	q = (int *)realloc(p, 6 * sizeof(int));
	if (q != NULL)
		p = q;
	for (i = 1; i < 6; i++)
		*(p+i) = i;
	for (i = 0; i < 6; i++)
		printf("%d", p[i]);
	system("pause");
	return 0;
}