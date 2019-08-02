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
		ret = ret ^ arr[i];	//这样遍历并按位与之后其实得到的是这个数组中出现一次的两个数按位与的结果
	}
	int pos;
	for (int i = 0; i < 32; ++i){
		if (ret & (1 << i))
		{	//在这个结果中找到2进制的1
			//这一步目的是在二进制位下找到这两个数首次出现的不同位,
			//因为ret是两个数按位与的结果,也就是说在二进制位下,
			//如果这两个数各自的操作数不同的话就能得到1.
			pos = i;	//记下产生不同的位置
			break;
		}
	}
	int num1 = 0, num2 = 0;
	for (int i = 0; i < 8; ++i){
		//将数组中的数按照上面记录的位置分为两类,
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
