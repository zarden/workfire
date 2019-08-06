#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	int a = 5, *p = &a, *q = a;
	a = (*p)*(*q);
	q = a; //int *”与“int”的间接级别不同
	a = p - q;
	p = q;
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int x, y = 5, *p = &x;
	//x = *p;
	//*p = &y;
	//x = &y;
	x = y;
	printf("%d\n", x);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int x = 6, n = 5;
	printf("%d\n", x += n++);//11
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int x = 4;
	printf("%d\n", x += x *= x + x);//64
	system("pause");
	return 0;
}
#endif

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main()
{
	char str[99] = "xxxyyyyz";//3x4yz
	int strLength = strlen(str);
	int count = 1;//记录重复个数
	int i;
	for (i = 0; i < strLength; i++)
	{
		if (str[i+1]==str[i])
		{
			count++;
		}
		else
		{
			if (count==1)
			{
				printf("%c", str[i]);
			}
			else
			{
				printf("%d%c", count, str[i]);
			}
			count = 1;//重置
		}
	}
	system("pause");
	return 0;
}
