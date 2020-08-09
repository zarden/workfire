#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>


//int main()
//{
	//int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	//int* p = a[0];
	//printf("%d\n", p[0]);//1 圆括号是逗号表达式，值是最后一个值

	/*char *a[] = { "work", "at", "alibaba" };  
	char** pa = a;  
	pa++;  
	printf("%s\n", *pa);  

	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };     
	int *ptr1 = (int *)(&aa + 1);     
	int *ptr2 = (int *)(*(aa + 1));     
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));*/

	/*int a[4] = { 1, 2, 3, 4 };     
	int *ptr1 = (int *)(&a + 1);     
	int *ptr2 = (int *)((int)a + 1);     
	printf("%x,%x", ptr1[-1], *ptr2);*/

	/*int a[5] = { 1, 2, 3, 4, 5 };     
	int *ptr = (int *)(&a + 1);     
	printf("%d,%d", *(a + 1), *(ptr - 1));*/

	/*union{ 
		int a; 
		char b;
	}temp_t;
	temp_t.a = 1;
	if (temp_t.b == 1)
		printf("小端");
	else
		printf("大端");*/

	/*const char*str1 = "abcdef";    
	const char*str2 = "bbb";    
	if (strlen(str2) - strlen(str1)>0)    
		printf("str2>str1\n"); 
	else    
		printf("srt1>str2\n"); */

	/*struct {
		char name[40];
		int age;
	}person, person_copy;
	
	char myname[] = "Pierre de Fermat";

	memcpy(person.name, myname, strlen(myname) + 1);
	person.age = 46;


	memcpy(&person_copy, &person, sizeof(person));
	printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);

	char str[] = "memmove can be very useful......";
	memmove(str + 20, str + 15, 11);
	puts(str);*/

	/*char str[] = "This is a simple string";
	char * pch;
	pch = strstr(str, "simple");
	strncpy(pch, "sample", 6);
	puts(str);*/

	
//}

//void * memcpy(void * dst, const void * src, size_t count)
//{
//
//	void * ret = dst;
//	assert(dst);
//	assert(src);
//
//	while (count--) {
//		*(char *)dst = *(char *)src;
//		dst = (char *)dst + 1;
//		src = (char *)src + 1;
//		return (ret);
//	}
//}

//char *my_strstr(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//
//	char* start = (char*)str1;
//	char* substr = (char*)str2;
//	char* cp = (char*)str1;
//
//	if (*str2 == '\0')
//		return NULL;
//
//	while (*cp)
//	{
//		start=cp;
//
//		while (*start && *substr && *start == *substr)
//		{
//			start++;
//			substr++;
//		}
//
//		if (*substr == '\0')
//			return cp;
//
//		substr = (char*)str2;
//		cp++;//得到起始位置的下一个位置
//	}
//}
//
//int main()
//{
//	char a[20] = "abbbcdef";
//	char b[10] = "bbcde";
//	printf("%s\n", my_strstr(a, b));
//
//	system("pause");
//	return 0;
//}

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
	struct S1
	{
	char c1;
	int i;
	char c2;
	};
	printf("%d\n", sizeof(struct S1)); //12

	//练习2
	struct S2
	{
	char c1;
	char c2;
	int i;
	};
	printf("%d\n", sizeof(struct S2));  //8

	//练习3
	struct S3
	{
		double d;
		char c;
		int i;
	};
	printf("%d\n", sizeof(struct S3)); //16

	//练习4-结构体嵌套问题
	struct S4
	{
		char c1;
		struct S3 s3;//16
		double d;
	};
	printf("%d\n", sizeof(struct S4));//32

	system("pause");
	return 0;
}