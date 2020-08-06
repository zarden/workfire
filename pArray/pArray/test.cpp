#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//一维数组 
int main()
{
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//16 代表全数组
	//printf("%d\n", sizeof(a + 0));//4
	//printf("%d\n", sizeof(*a));//4  a是首元素地址 int*
	//printf("%d\n", sizeof(a + 1));//4
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4  &a是数组指针，数组的地址
	//printf("%d\n", sizeof(*&a));//16
	//4 加1是加了一个int
	//printf("%d\n", sizeof(&a + 1));
	//printf("%d\n", sizeof(&a[0]));//4
	//printf("%d\n", sizeof(&a[0] + 1));//4

	//字符数组 
	//arr是一个6个字符的数组
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' }; 
	//printf("%d\n", sizeof(arr)); //6
	//printf("%d\n", sizeof(arr + 0)); //4
	//printf("%d\n", sizeof(*arr)); //1
	//printf("%d\n", sizeof(arr[1])); //1
	////4
	//printf("%d\n", sizeof(&arr)); 
	////4
	//printf("%d\n", sizeof(&arr + 1)); 
	////4
	//printf("%d\n", sizeof(&arr[0] + 1));
	//
	//printf("%d\n", strlen(arr)); //越界
	//printf("%d\n", strlen(arr + 0)); //越界
	///* 编译出错
	//strlen只能用char*做参数，且必须是以"\0"结尾的。
	//printf("%d\n", strlen(*arr)); 
	//printf("%d\n", strlen(arr[1])); 
	//printf("%d\n", strlen(&arr)); 
	//printf("%d\n", strlen(&arr + 1));
	//*/
	//printf("%d\n", strlen(&arr[0] + 1));//越界

	//char arr[] = "abcdef"; 
	////arr是一个7个字符的数组
	//printf("%d\n", sizeof(arr)); //7
	//printf("%d\n", sizeof(arr + 0)); //4
	//printf("%d\n", sizeof(*arr)); //1
	//printf("%d\n", sizeof(arr[1])); //1
	////4
	//printf("%d\n", sizeof(&arr)); 
	////4
	//printf("%d\n", sizeof(&arr + 1)); 
	////4
	//printf("%d\n", sizeof(&arr[0] + 1));

	//printf("%d\n", strlen(arr)); //6
	////6
	//printf("%d\n", strlen(arr + 0)); 
	///* 编译不通过
	//printf("%d\n", strlen(*arr)); 
	//printf("%d\n", strlen(arr[1])); 
	//printf("%d\n", strlen(&arr)); 
	//printf("%d\n", strlen(&arr + 1)); */
	////5
	//printf("%d\n", strlen(&arr[0] + 1));

	//char *p = "abcdef"; 
	//printf("%d\n", sizeof(p)); //4
	////4
	//printf("%d\n", sizeof(p + 1));
	//printf("%d\n", sizeof(*p)); //1
	//printf("%d\n", sizeof(p[0])); //1
	//printf("%d\n", sizeof(&p)); //4
	//printf("%d\n", sizeof(&p + 1));//4 
	//printf("%d\n", sizeof(&p[0] + 1));//4

	//printf("%d\n", strlen(p)); //6
	//printf("%d\n", strlen(p + 1));//5 
	///*
	//编译不通过
	//printf("%d\n", strlen(*p)); 
	//printf("%d\n", strlen(p[0])); 
	//printf("%d\n", strlen(&p)); 
	//printf("%d\n", strlen(&p + 1)); */
	//printf("%d\n", strlen(&p[0] + 1));//5

	//二维数组 
	//int a[3][4] = {0}; 
	//printf("%d\n", sizeof(a)); //48
	//printf("%d\n", sizeof(a[0][0]));//4 
	//printf("%d\n", sizeof(a[0])); //16
	////4
	//printf("%d\n", sizeof(a[0] + 1)); 
	//printf("%d\n", sizeof(*(a[0] + 1))); //4
	////4
	//printf("%d\n", sizeof(a + 1)); 
	//printf("%d\n", sizeof(*(a + 1))); //16
	//printf("%d\n", sizeof(&a[0] + 1)); //4
	//printf("%d\n", sizeof(*(&a[0] + 1))); //16
	//printf("%d\n", sizeof(*a)); //16
	//printf("%d\n", sizeof(a[3]));//16
	
	int a[] = { 1, 2, 3, 4 };
	int* p1 = (int*)(&a + 1);
	int* p2 = (int*)((int)a + 1);
	printf("%x,%x\n", p1[-1], *p2);

	system("pause");
	return 0;
}
 