#include<stdio.h>
#include<stdlib.h>

//1.
#if 0
int main()
{
	char acX[] = "abc";
	char acY[] = { 'a', 'b', 'c' };
	char *szX = "abc";
	char *szY = "abc";
	system("pause");
	return 0;
}
#endif


//2.
#if 0
int main()
{
	char *str[3] = { "stra", "strb", "strc" };
	char *p = str[0];
	int i = 0;
	while (i<3)
	{
		printf("%s\n", p++);//stra     tra      ra
		i++;
	}
	system("pause");
	return 0;
}
#endif


//3.
#if 0
int main()
{
	int x[] = { 1, 2, 3, 4, 5, 6 },*p=x;
	p += 2;
	printf("%d\n", *p++);
	system("pause");
	return 0;
}
#endif

//2.1
#if 0
char buffer[6] = { 0 };
char *myString()
{
	//char buffer[6] = { 0 };
	char *s = "Hello World!";
	for (int i = 0; i < sizeof(buffer)-1; i++)
	{
		buffer[i] = *(s + i);
	}
	//printf("%d\n", sizeof(buffer));6
	return buffer;
}

int main()
{
	printf("%s\n", myString());
	system("pause");
	return 0;
}
#endif

//2.2
#if 0
int main()
{
	int i = 1;
	printf("%d,%d\n", sizeof(i++), i);//4,1
	system("pause");
	return 0;
}
#endif

//2.3
#if 1
int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = (char)(-1 - i);
	}
	printf("%d\n", strlen(a));//255
	system("pause");
	return 0;
}
#endif
//-128
//原 1000 0000, 0000 0000, 0000 0000, 1000 0000
//反 1111 1111, 1111 1111, 1111 1111, 0111 1111
//补 1111 1111, 1111 1111, 1111 1111, 1000 0000
//
//-129
//原 1000 0000, 0000 0000, 0000 0000, 1000 0001
//反 1111 1111, 1111 1111, 1111 1111, 0111 1110
//补 1111 1111, 1111 1111, 1111 1111, 0111 1111
//
//-255
//原 1000 0000, 0000 0000, 0000 0000, 1111 1111
//反 1111 1111, 1111 1111, 1111 1111, 0000 0000
//补 1111 1111, 1111 1111, 1111 1111, 0000 0001
//
//-256
//原 1000 0000, 0000 0000, 0000 0001, 0000 0000
//反 1111 1111, 1111 1111, 1111 1110, 1111 1111
//补 1111 1111, 1111 1111, 1111 1111, 0000 0000