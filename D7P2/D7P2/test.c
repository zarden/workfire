#include <stdio.h>
int fun(int n, int k)     //求n的k次方
{
	int sum;
	if (k == 0)
	{
		sum = 1;
	}
	else
	{
		sum = n*fun(n, k - 1);
	}
	return sum;
}
int main()
{
	printf("%d\n", fun(2, 3));
	system("pause");
	return 0;
}