#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#if 0
#define N 3
#define Y(n) ((N+1)*n)

int main()
{
	printf("%d\n", 2 * ((N + Y(5 + 1))));//48
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int i = 6;
	if (i <= 6)
		printf("hello\n");//hello
	else
		printf("bye-bye\n");
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	char ch = -1;
	int i = -1;
	printf("%x\n", i);
	printf("%d\n", ch);//-1
	system("pause");
	return 0;
}
//-1
//原码1000,0000 0000,0000 0000,0000 0000,0001
//反码1111,1111 1111,1111 1111,1111 1111,1110
//补码1111,1111 1111,1111 1111,1111 1111,1111
#endif

#if 0
int main()
{
	printf("%f\n", (double)(10/4*4));//8.000000
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int a = 2;
	int b = 5;
	printf("%d\n", a++);//2
	printf("%d\n", b++);//5
	printf("%d\n", a+b);//9
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int i, x, y;
	i = x = y = 0;
	do
	{
		++i;
		if (i % 2)
			x += i, i++;
		y += i++;
	} while (i<=7);
	printf("%d %d %d", i, x, y);//9 1 20
	system("pause");
	return 0;
}
#endif

#include<stdio.h>
#include<stdlib.h>
int IsPow(int m)
{
	if (m < 1)
		return 0;
	int n = m&(m - 1);
	return n == 0;//n==0是判断表达式，该表达式返回的是 真假，
	//因此return n == 0;就是先判断n 是否等于0，若等于则返回真(1)，否则返回假(0)
}

int main()
{
	int m, k;
	printf("请输入一个整数m:\n");
	scanf("%d", &m);
	if (IsPow(m))
	{
		printf("%d是2的K次方\n", m);
	}
	else
	{
		printf("%d不是2的K次方\n", m);
	}
	system("pause");
	return 0;
}