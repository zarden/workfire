//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse_part(char *str, int start, int end)
{
	int i, j;
	char tmp;
	for (i = start, j = end; i < j; i++, j--)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}
	void round(char *src, int time)
	{
		int len = strlen(src);
		int pos = len - time %  len;
		reverse_part(src, 0, pos - 1);
		reverse_part(src, pos, len - 1);
		reverse_part(src, 0, len - 1);
	}

	void round_cat(char *src, int time)
	{
		int len = strlen(src);
		int pos = len - time%len;
		char tmp[256] = { 0 };
		strcpy(tmp, src + pos);
		strcat(tmp, src, pos);
		strcpy(src, tmp);
	}

	int main()
	{
		char str[] = "ABCDE";
		round(str, 2);
		puts(str);
		system("pause");
		return 0;

	}