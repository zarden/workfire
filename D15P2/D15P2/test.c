//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.

//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA

//AABCD右旋一个字符得到DAABC
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