#include<stdio.h>
#include<stdlib.h>

//1.
#if 0
int fun(int a, int b)
{
	if (a>b)
	{
		return(a + b);
	}
	else
	{
		return(a - b);
	}
}

int main()
{
	int x = 3, y = 8, z = 6, r;
	r = fun(fun(x, y), 2 * z);
	printf("%d\n", r); \\-17
	system("pause");
	return 0;
}
#endif

//2.
#if 0
int f(int a)
{
	int b = 0;
	static int c = 3;
	a = c++; b++;
	return (a);
}

int main()
{
	int a = 2, i, k;
	for (i = 0; i < 2; i++)
	{
		k = f(a++);//a++µÄÖµÎª2
	}
	printf("%d\n", k);//4
	system("pause");
	return 0;
}
#endif

//3.
#if 1
int x = 3;
void inc()
{
	static int x= 1;
	x *= (x + 1);
	printf("%d\n", x);//2   6
	return ;
}

int main()
{
	int i;
	for (i = 1; i < x; i++)
	{
		inc();
	}
	system("pause");
	return 0;
}
#endif