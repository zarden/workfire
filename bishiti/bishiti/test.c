#include<stdio.h>
#include<stdlib.h>

//1.
int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char **cp[] = { c + 3, c + 2, c + 1, c };
	char ***cpp = cp;
	printf("%s\n", **++cpp);//%s,从当前位置开始遇到\0 结束
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);//*cpp[-2] + 3   ->    **(cpp-2)+3
	printf("%s\n", cpp[-1][-1] + 1);//cpp[-1][-1]+1  ->  *(*(cpp-1)-1)+1
	system("pause");
	return 0;
}

//2.
int main()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式,int a[3][2]={1,3,5,0,0,0}
	int *p = a[0];//&a[0][0]
	printf("%d\n", p[0]);//p[0] -> *(p+0)
	system("pause");
	return 0;
}