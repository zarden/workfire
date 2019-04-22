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

int p_strlenN(char * str)
{
	int i;
	for (i = 0; str[i]; i++);
	return i;
}
int main(){
	printf("%d\n", p_strlen("haohaoxuexi"));
	printf("%d\n", p_strlenN("haohaoxuexi"));
	system("pause");
}