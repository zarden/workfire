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
	sht--;//sht����Ϊ�޷��ŵ�16λ������0��1��ӦΪ���ܱ�ʾ�����ֵ��
	//Ҳ����2^16-1=65535
	//�޷��ű�����ȡֵ��Χ0~65535.
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