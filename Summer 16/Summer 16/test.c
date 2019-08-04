#include<stdio.h>
#include<stdlib.h>


#if 0
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&arr + 1);
	printf("%d %d\n", *(arr + 1), *(ptr - 1));// 2  5
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	unsigned short sht = 0;
	sht--;//sht定义为无符号的16位整数，0减1后应为其能表示的最大值，
	//也就是2^16-1=65535
	//无符号变量的取值范围0~65535.
	printf("%d", sht);//65535
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	printf("%c", 'B' + '8' - '3'); //G
	system("pause");
	return 0;
}
#endif

//int mypow(int x, int y)
//{
//	if (y == 0)
//		return 1;
//	if (y == 1)
//		return x;
//	else
//	{
//		return x*mypow(x, y - 1);
//	}
//		
//}

int mypow(int x, int y){
	if (y == 0) 
		return 1;
	if (y == 1) 
		return x;
	int ret = 0;
	int tmp = mypow(x, y / 2);
	if (y & 1 != 0)
	{
		ret = x*tmp*tmp;
	}
	else
	{
		ret = tmp*tmp;
	}
	return ret;
}

int main()
{
	printf("%d\n", mypow(2, 4));
	system("pause");
	return 0;
}