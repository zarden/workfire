#include<stdio.h>
#include<stdlib.h>

//函数指针的三种用法
//1.函数指针指向函数
int add(int a, int b){
	return a + b;
}
int sub(int a, int b){
	return a -b;
}
int mul(int a, int b){
	return a * b;
}
int Div(int a, int b){
	if (b != 0)
		return a / b;
}
int mod(int a, int b){
	return a % b;
}
#if 0
int main(){
	//int(*p)(int, int);
	//p = mod;
	//printf("%d\n", p(5, 4));
	int(*p[])(int, int) = { add, sub, mul, Div, mod };//函数指针数组
	int n = sizeof(p)/sizeof(p[0]);
	for (int i = 0; i < n; ++i)
		printf("%d\n", p[i](5, 4));
	system("pause");
	return 0;
}
#endif
//2.函数指针作为另一个函数的参数
#if 0
void test(int a, int b, int(*p)(int, int))//add->p
{
	printf("%d\n", p(a, b));//add(a,b)
}

int main()
{
	test(4, 7, add);
	system("pause");
	return 0;
}
#endif
//3.函数指针作为函数返回值
int(*fn(int n))(int, int)//fn函数的返回值是个指针(指向函数(int xx(int,int))的指针
{
	printf("fn:n=%d\n", n);
	return add;
}

int main(){
	int value = fn(100)(3, 9);//add(3,9)
	printf("%d\n", value);
	/*int(*p)(int,int);
	p=fn(100);
	p(3,9);
	printf("%d\n", p(3,9));*/
	system("pause");
	return	0;

}

