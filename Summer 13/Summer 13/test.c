#include <stdio.h>
#include<stdlib.h>

#if 0
#define sum(a,b,c) a+b+c
int  main()
{
	int i= 3;
	int j = 2;
	printf("%d\n", i*sum(i,(i+j),j));  //i*i+(i+j)+j=16
	system("pause");
	return 0;
}
#endif

#if 0
int f(int n)
{
	static int i = 1;
	if (n>=5)
	{
		return n;
	}
	n = n + i;
	i++;
	return f(n);
}

int  main()
{
	printf("%d\n", f(1));  //7 
	system("pause");
	return 0;
}
#endif

#if 0
int func()
{
	int i, j, k = 0;
	for (i = 0, j = -1; j = 0; i++, j++)    // k=0条件为假不执行！！
	{
		k++;
	}
	return k;
}

int  main()
{
	printf("%d\n", (func()));  
	system("pause");
	return 0;
}
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void DeleteStr(char *str1, char *str2)
{
	char *pFast = str1;
	char *pSlow = str2;
	int a[256] = { 0 };
	int i;
	int n = strlen(str2);
	for (i = 0; i < n; i++)
	{
		a[str2[i]] = 1;
	}
	while (*pFast)
	{
		if (a[*pFast] == 0)
		{
			*pSlow = *pFast;
			pSlow++;
		}
		*pFast++;
	}
	*pSlow = '\0';
}

int main()
{
	char str1[] = "They are students.";
	char str2[] = "aeiou";
	DeleteStr(str1, str2);
	printf("%s\n", str2);
	system("pause");
	return 0;
}