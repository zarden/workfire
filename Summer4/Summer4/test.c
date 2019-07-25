#include<stdio.h>
#include<stdlib.h>
#define F(X,Y) ((X)+(Y))

//1
#if 0
int main()
{
	char a[20];
	char *p1 = (char *)a;
	char *p2 = (char *)(a + 5);
	int n = p2 - p1;
	printf("%d\n", n);
	system("pause");
	return 0;
}
  n的值为5 
#endif

//2
#if 0
int main()
{
	int a = 3, b = 4;
	printf("%d\n", F(a++, b++));// 输出结果为 7
	system("pause");
	return 0;
}
#endif

//3
#if 0
int main()
{
	int x;
	printf("%d\n", x=5>1+2&&2 || 2*4<4-!0); //x的值为1
    system("pause");
    return 0;
}
#endif

//4
#if 0
int main()
{
	int i = 1, sum = 0;
	while (i<10)
	{
		sum = sum + 1;
		i++;
	}
	printf("i=%d,sum=%d", i, sum); //i=10,sum=9
	system("pause");
	return 0;
}
#endif

//5
#if 0
#pragma pack(4) /*编译选项， 表示4字节对齐 平台：VS2013. 语言：C语言*/
int main(int argc,char*argv[])
{
	struct tagTest1
	{
		short a;
		char d;
		long b;
		long c;
	};

	struct tagTest2
	{
		long b;
		short c;
		char d;
		long a;
	};

	struct tagTest3
	{
		short c;
		long b;
		char d;
		long a;
	};

	struct tagTest1 stT1;
	struct tagTest2 stT2;
	struct tagTest3 stT3;

	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));// 12 12 16
	system("pause");
	return 0;
}
#endif

//6
#if 0
enum ENUM_A
{
	X1,
	Y1,
	Z1=5,
	A1,
	B1
};

enum ENUM_A enumA = Y1;
enum ENUM_A enumB = B1;

int main()
{
	printf("%d,%d", enumA, enumB); //enumA=1, enumB=7
	system("pause");
	return 0;
}
#endif

//8
int fun(int x,int y)
{
	static int m = 0;
	static int i = 2;
	i += m + 1;
	m = i + x + y;
	return m;
}

void main()
{
	int j = 4;
	int m = 1;
	int k;
	k = fun(j, m);
	printf("%d\n", k); //8
	k = fun(j, m);
	printf("%d\n", k);//17
	system("pause");
	return 0;
}