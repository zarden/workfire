#include <stdio.h>
#include <stdlib.h>

int p_strlen(char * str)
{
	if (*str)
	{
		return 1 + p_strlen(str + 1);
	}
	return 0;
}

void reverse_string(char * str)
{
	int end = p_strlen(str) - 1;
	char tmp = str[0];
	if (str[0])
	{
		str[0] = str[end];
		str[end] = '\0';
		reverse_string(str + 1);
		str[end] = tmp;
	}
}

int main()
{
	printf("%d\n", p_strlen("bitekeji"));
	char arr[] = "bitekeji";
	reverse_string(arr);
	puts(arr);
	system("pause");
	return 0;
}