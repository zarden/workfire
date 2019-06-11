#include<stdio.h>
#include<stdlib.h>

// 结构的自引用
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;

//结构体内存对齐
int main()
{
	//练习1
	//*struct S1
	//{
		//char c1;
		//int i;
		//char c2;
	//};
	//printf("%d\n", sizeof(struct S1)); 12

	//练习2
	//struct S2
	//{
		//char c1;
		//char c2;
		//int i;
	//};
	//printf("%d\n", sizeof(struct S2));  8

	//练习3
	struct S3
	{
		double d;
		char c;
		int i;
	};
	printf("%d\n", sizeof(struct S3)); 16

	//练习4-结构体嵌套问题
	/*struct S4
	{
		char c1;
		struct S3 s3;
		double d;
	};
	printf("%d\n", sizeof(struct S4));*/
	system("pause");
	return 0;
}