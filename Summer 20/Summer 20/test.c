#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	char x[] = "China";
	printf("%d\n", sizeof(x));//6
	printf("%s\n", x);
	system("pause");
	return 0;
}
#endif


#if 0
int main()
{
	char str[] = { 'g', 'o', 'o', 'd' };
	char str1[8] = { 'g', 'o', 'o', 'd', '!' };
	char str2[8] = "good!";
	//char *str3 = "good!";
	printf("%d\n", sizeof(str));//4
	printf("%s\n", str);
	printf("%d\n", sizeof(str1));//8
	printf("%d\n", sizeof(str2));//8
	system("pause");
	return 0;
}
#endif

#if 0
int fun(int x)
{
	int count = 0;
	while (x)
	{
		count++;

		x = x & ( x - 1);
	}
	return count;
}

int main()
{
	printf("%d\n", fun(2019));//8
	//2019ת��Ϊ������Ϊ  0111 1110 0011?   ��8��0
	system("pause");
	return 0;
}
#endif


#if 0
int func(int a)
{
	int b = 0;
	static int c = 3;
	a = c++, b++;
	return (a);
}

int main()
{
	int a = 2, i, k;
	for (i = 0; i < 2; i++)
	{
		k = func(a++);
	}
	printf("%d\n", k);//4
	system("pause");
	return 0;
}
#endif


#if 0
int main()
{
	int s = 0, n;
	for (n = 0; n < 4; n++)
	{
		switch (n)
		{
		default:s += 4;
		case 1:s += 1;
		case 2:s += 2;
		case 3:s += 3;
		}
	}
	printf("%d\n", s);//24
	system("pause");
	return 0;
}
#endif

/*�ַ���ȥ������Ŀո�,һ�����������Ŀո���һ���ո�(����һ���µ�����洢)*/
#include<stdio.h>
#include<string.h>

char *deblank(char string[])
{
	int i, j = 0;
	char  *str = string;
	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] != ' ')
		{
			*str++ = string[i];
		}
		if ((string[i] == ' ') && !(string[i + 1] == ' '))  /*������������ַ���ȫ�ǿո�������*/
		{
			*str++ = string[i];
		}
	}
	*str = '\0'; 
	/*ע��ؼ������,�ַ�����string��Ч�����Ѿ��������,����strָ������鱻��ֵ��,ָ��str�Լ�,
	*�����ʱ��ָ��str�Ѿ�ָ���ַ�����string���һλ,
	��ָ��Ҫ���'\0'�ĵط�*/
	//str = string; 
	/*��strָ���ָ�����µ����ַ�������λ*/

	return string;
}

int main()
{
	char a[100], *p;
	int i, j;
	gets(a);
	p = deblank(a);
	puts(p);
	system("pause");
	return 0;
}