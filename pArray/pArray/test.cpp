#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//һά���� 
int main()
{
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//16 ����ȫ����
	//printf("%d\n", sizeof(a + 0));//4
	//printf("%d\n", sizeof(*a));//4  a����Ԫ�ص�ַ int*
	//printf("%d\n", sizeof(a + 1));//4
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4  &a������ָ�룬����ĵ�ַ
	//printf("%d\n", sizeof(*&a));//16
	//4 ��1�Ǽ���һ��int
	//printf("%d\n", sizeof(&a + 1));
	//printf("%d\n", sizeof(&a[0]));//4
	//printf("%d\n", sizeof(&a[0] + 1));//4

	//�ַ����� 
	//arr��һ��6���ַ�������
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
	//printf("%d\n", strlen(arr)); //Խ��
	//printf("%d\n", strlen(arr + 0)); //Խ��
	///* �������
	//strlenֻ����char*���������ұ�������"\0"��β�ġ�
	//printf("%d\n", strlen(*arr)); 
	//printf("%d\n", strlen(arr[1])); 
	//printf("%d\n", strlen(&arr)); 
	//printf("%d\n", strlen(&arr + 1));
	//*/
	//printf("%d\n", strlen(&arr[0] + 1));//Խ��

	//char arr[] = "abcdef"; 
	////arr��һ��7���ַ�������
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
	///* ���벻ͨ��
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
	//���벻ͨ��
	//printf("%d\n", strlen(*p)); 
	//printf("%d\n", strlen(p[0])); 
	//printf("%d\n", strlen(&p)); 
	//printf("%d\n", strlen(&p + 1)); */
	//printf("%d\n", strlen(&p[0] + 1));//5

	//��ά���� 
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
 