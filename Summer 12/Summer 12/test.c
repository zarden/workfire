#include<stdio.h>
#include<stdlib.h>

#if 0
int f(int x, int y)
{
	return (x&y) + ((x^y) >> 1);
}

int main()
{
	int result = f(2, 4);
	printf("%d\n", result);//3
	system("pause");
	return 0;
}
#endif

#if 0
void fun(int x, int y, int *c, int *d)
{
	*c = x + y;
	*d = x - y;
}

int main()
{
	int a = 4, b = 3, c = 0, d = 0;
	fun(a, b, &c, &d);
	printf("%d %d\n", c, d);
	system("pause");
	return 0;
}
#endif

#include <stdio.h>
#include <stdlib.h>
int main(){
	int arr[8] = { 1, 3,  5, 7, 1,3,5,9 };
	int ret = 0;
	for (int i = 0; i < 8; ++i){
		ret = ret ^ arr[i];	//������������λ��֮����ʵ�õ�������������г���һ�ε���������λ��Ľ��
	}
	int pos;
	for (int i = 0; i < 32; ++i){
		if (ret & (1 << i))
		{	//�����������ҵ�2���Ƶ�1
			//��һ��Ŀ�����ڶ�����λ���ҵ����������״γ��ֵĲ�ͬλ,
			//��Ϊret����������λ��Ľ��,Ҳ����˵�ڶ�����λ��,
			//��������������ԵĲ�������ͬ�Ļ����ܵõ�1.
			pos = i;	//���²�����ͬ��λ��
			break;
		}
	}
	int num1 = 0, num2 = 0;
	for (int i = 0; i < 8; ++i){
		//�������е������������¼��λ�÷�Ϊ����,
		if (arr[i] & (1 << pos)){
			num1 = num1 ^ arr[i];
		}
		else {
			num2 = num2 ^ arr[i];
		}
	}
	printf("%d %d", num1, num2);
	system("pause");
	return 0;
}
