#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	struct student
	{
		char name[10];
		int age;
		char gender;
	}std[3],*p=std;
	scanf("%d", &(*p).age);
	scanf("%c", &std[0].gender);
	scanf("%c", &(p->gender));
	//scanf("%s", &std.name);  错误
	system("pause");
	return 0;
}
#endif

#if 0
int main(void)
{
	int a = 2, *p1, **p2;
	p2 = &p1;
	p1 = &a;
	a++;
	printf("%d,%d,%d\n", a, *p1, **p2); // 3,3,3
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int k,j,s;
	for (k = 2; k < 6; k++,k++)
	{
		s = 1;
		for (j = k; j < 6; j++)
			s += j;
	}
	printf("%d\n", s); 
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int arr[] = { 6, 7, 8, 9, 10 };
	int *ptr = arr;
	*(ptr++) += 123;
	printf("%d,%d\n", *ptr,*(++ptr));//8,8
	system("pause");
	return 0;
}
#endif

int IsEchoNum(int num)
{
	int n;
	int tmp,sum=0;
	for (n = num; n; n /= 10)
	{
		tmp = n % 10;
		sum = sum * 10 +tmp;
	}
	if (num == sum)
	{
		printf("%d是回文数", num);
	}
	else
	{
		printf("%d不是回文数", num);
	}
}

int main()
{
	int num = 123454321;
	IsEchoNum(num);
	system("pause");
	return 0;
}
