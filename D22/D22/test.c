#include<stdio.h>
#include<stdlib.h>

// �ṹ��������
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

//�ṹ���ڴ����
int main()
{
	//��ϰ1
	//*struct S1
	//{
		//char c1;
		//int i;
		//char c2;
	//};
	//printf("%d\n", sizeof(struct S1)); 12

	//��ϰ2
	//struct S2
	//{
		//char c1;
		//char c2;
		//int i;
	//};
	//printf("%d\n", sizeof(struct S2));  8

	//��ϰ3
	struct S3
	{
		double d;
		char c;
		int i;
	};
	printf("%d\n", sizeof(struct S3)); 16

	//��ϰ4-�ṹ��Ƕ������
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