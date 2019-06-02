#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	char *p = (char *)malloc(sizeof(char)* 10);
//	strcpy(p, "123456");
//	printf(p);
//	//puts(p);
//	//printf("%s", p);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char str[20];
//	char *p = (char *)malloc(100);
//	return 0;
//}

//从标准输入读取一段整数,并将这段整数存储在一个动态开辟的数组中
//数组的第一个元素是整数的个数,以后依此是这些整数
#define N 10
int main()
{
	int *p = NULL;
	int num;
	int n = 0;
	int i;
	int size = N;
	p = (int *)malloc(sizeof(int)*(size+1));
	while (1 == scanf("%d", &num))
	{
		n++;
		if (n>size)
		{
			size = size + N;
			int *q = NULL;
			q = (int *)realloc(p, sizeof(int)*(size + 1));
			if (q != NULL)
				p = q;
		}
		p[n] = num;
	}
	p[0] = n;
	p = (int *)realloc(p, sizeof(int)*(n + 1));
	for (i = 0; i <= n; i++)
		printf("%d", p[i]);
	printf("\n");
	free(p);
	p = NULL;
	system("pause");
	return 0;
}