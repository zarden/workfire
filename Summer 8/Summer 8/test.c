#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	char s[] = "\\123456\123456\t";//     //表示/， /123表示{，\t表示制表符
	printf("%d\n", strlen(s)); //12
	system("pause");
	return 0; 
}
#endif

#if 0
int main()
{
	int s = 0, n;
	for (n = 0; n < 4; n++)
	{
		switch (n)
		{
		default:s += 4;
		case 1:s += 1;
		case 2:s += 2;
		case 3:s += 3;
		}
	}
	printf("%d\n", s);  //24, 没有遇到break一直执行
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	unsigned long ulA = 0x11000000;
	printf("%x\n", *(unsigned char *)&ulA);//0
	system("pause");
	return 0;
}
//int a;变量
//scanf("%d", &a); 

//int a ,*p; 指针
//p = &a;

//int a[10]; 数组
//for(int i=0;i<10; i++)
//{
//	scanf("%d", a + i); a + i <= = >&a[i]
//}
#endif

#if 1
int main()
{
	char *pcColor = "blue1";
	char acColor[] = "blue1";
	printf("%d\n", strlen(pcColor));//5
	printf("%d\n", strlen(acColor));//5 strlen是求字符串长度的，sizeof是求所占字节数，strlen要求字符串中必须有\0
	printf("%d\n", sizeof(pcColor));//4 指针地址长度
	printf("%d\n", sizeof(acColor));//6
	system("pause");
	return 0;
}
#endif