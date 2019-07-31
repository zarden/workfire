#include<stdio.h>
#include<stdlib.h>

#if 0
void Func(char str_arg[2])
{
	int m = sizeof(str_arg);
	int n = strlen(str_arg);
	printf("%d\n", m);//4
	printf("%d\n", n);//5
}

int main(void)
{
	char str[] = "Hello";
	Func(str);
	system("pause");
	return 0;
}
#endif

#if 0
union X
{
	int x;
	char y[4];
}a;

int main()
{
	a.x = 0X11223344;
	printf("%x\n", a.y[0]);//44
	printf("%x\n", a.y[1]);//33
	printf("%x\n", a.y[2]);//22
	printf("%x\n", a.y[3]);//11
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int a, x;
	for (a = 0, x = 0; a <= 1 && !x++; a++)
	{
		a++;
	}
	printf("%d %d", a, x);// 2 1
	system("pause");
	return 0;
}
#endif

#if 1
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int *p1 = (int*)(&a + 1);//&（a+1）指的是下一个数组的首地址，也就是下一行首地址
	int *p2 = (int*)((int)a + 1);
	int *p3 = (int*)(a + 1);
	printf("%d ,%x,%d\n", p1[-1], p2[0], p3[1]);//5 ,2000000,3
	system("pause");
	return 0;
}
#endif

