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
//ԭ��1000,0000 0000,0000 0000,0000 0000,0001
//����1111,1111 1111,1111 1111,1111 1111,1110
//����1111,1111 1111,1111 1111,1111 1111,1111
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
	return n == 0;//n==0���жϱ��ʽ���ñ��ʽ���ص��� ��٣�
	//���return n == 0;�������ж�n �Ƿ����0���������򷵻���(1)�����򷵻ؼ�(0)
}

int main()
{
	int m, k;
	printf("������һ������m:\n");
	scanf("%d", &m);
	if (IsPow(m))
	{
		printf("%d��2��K�η�\n", m);
	}
	else
	{
		printf("%d����2��K�η�\n", m);
	}
	system("pause");
	return 0;
}