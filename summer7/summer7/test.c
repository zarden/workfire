#include<stdio.h>
#include<stdlib.h>

//1.
#if 0
int main()
{
	int m,n=-1;
	for (m = 0,n=-1; n=0; m++,n++)
	{
		n++;
	}
	system("pause");
	return 0;
}
#endif

//2.
#if 0
int a = 1;
void test()
{
	int a = 2;
	 a += 1;
}

int main()
{
	test();
	printf("%d\n", a); // 1
    system("pause");
    return 0;
}
#endif

//3.
#if 0
int main()
{
	int y = 10,x;
	x = y++;
	printf("%d,%d", x, y); //10 11
	system("pause");
	return 0;
}
#endif

//4.
#if 0
int main()
{
	int i = 0;
	int j = 0;
	if ((++i > 0) || (++j) > 0)
	{
		printf("i=%d ,j=%d\n", i, j);// i=1 j=0
	}
	system("pause");
	return 0;
}
#endif

//5.
#if 0
#define MOD(x,y) x%y
int main()
{
	int a = 13, b = 94;
	printf("%d\n", MOD(b, a + 4));//7     b%a+4
	system("pause");
	return 0;
}
#endif

//6.
#if 1
int main()
{
	int x = 0;
	switch (++x)
	{
	case 0:++x;
	case 1:++x;
	case 2:++x;
	}
	printf("x=%d\n", x);//3
	system("pause");
	return 0;
}
#endif