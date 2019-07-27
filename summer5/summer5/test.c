#include<stdio.h>
#include<stdlib.h>

//1.
#if 0
int Change(int *pX)
{
	int y = 8;
	y = y - *pX;
	pX = &y;
	return 0;
}

int main()
{
	int xx = 3;
	int *pY = &xx;
	Change(pY);// 值传递，不能改变指针
	printf("%d\n", *pY);//  3
	system("pause");
	return 0;
}
#endif

//2.
#if 0
int main()
{
	char arr[2][4];
	strcpy((char *)arr, "you");
	strcpy(arr[1], "me");
	arr[0][3] = '&';
	printf("%s\n", arr);// you&me
	system("pause");
	return 0;
}
#endif

//3.
#if 0
int main()
{
	printf("%x\n", -27);// ffffffe5
	system("pause");
	return 0;
}
#endif

//4.
#if 0
int fun(int x)
{
	int count = 0;
	while (x)
	{
		count++;
		x = x&(x - 1);
	}
	return count;
}

int main()
{
	printf("fun(2017)=%d\n", fun(2019));//fun(2017)=8
	system("pause");
	return 0;
}
#endif

//5.
#if 0

#define CIR(r) r*r

void main()
{
	int a = 1;
	int b = 2;
	int t;
	t = CIR(a + b); //a+b*a+b
	printf("%d\n", t);//5
	system("pause");
	return ;
}
#endif

//6.
#if 1
unsigned long g_ulGlobal = 0;

void GlobalInit(unsigned long ulArg)
{
	ulArg = 0x01;
	return;
}

void main()
{
	GlobalInit(g_ulGlobal);//形参只是实参的 副本
	printf("%lu",g_ulGlobal);//0
	system("pause");
	return;
}
#endif