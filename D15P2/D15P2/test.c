//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.

//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA

//AABCD����һ���ַ��õ�DAABC
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int find_round(char *src, char *find)
{
	char tmp[256] = { 0 };
	strcpy(tmp, src);
	strcat(tmp, src);
	return strstr(tmp, find) ? 1 : 0;

}

int main()
{
	printf("%d\n", find_round("ABCDE", "BCDEA"));
	system("pause");
	return 0;

}