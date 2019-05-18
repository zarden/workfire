//数组名交换内容,指针变指向
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char a[] = "123";
	char b[] = "456";
	char tmp[20];
	strcpy(tmp, a);
	strcpy(a, b);
	strcpy(b, tmp);
	puts(a);
	puts(b);

	char *p = "123";
	char *q = "456";
	char *t;
	t = p;
	p = q;
	q = t;
	puts(p);
	puts(q);
	system("pause");
	return 0;
}