#include <stdio.h>
#include<stdlib.h>

int main()
{
	int single = 0;
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 4, 3, 2, 1, 9 };
	single = arr[0];  //
	for (i = 1; i<sizeof(arr) / sizeof(arr[0]); i++)
	{

		single = single^arr[i]; //����������򣬰ѵ�һ������������
	}
	printf("%d", single);
	system("pause");
	return 0;
}