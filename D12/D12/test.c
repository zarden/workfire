#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#if 0
int main(){
	int a = 5, b = 7;//输出a,b中较大的一个
	int max = (a + b + abs(a - b)) / 2;
	printf("%d", max);
	system("pause");
	return 0;
}
#endif
#if 0
void main(){
	char a[] = "abc\012abc";
	char b[] = "abc\0abc";
	int n = sizeof(a);
	int m = sizeof(b);
	printf("n=%d, m=%d\n", n, m);
	n = strlen(a);
	m = strlen(b);
	printf("n=%d, m=%d\n", n, m);
	system("pause");
}
#endif
#if 0
void main(){
	int a = -10;
	unsigned int b = 5;
	if (a + b > 0)
		printf(">0\n");
	else
		printf("<0\n");
	system("pause");
}
#endif
#if 0
void main(){
	char a = 258;//258 100000010 从低位截取
	printf("%d\n", a);
	system("pause");
}
#endif
#if 1
void main(){
	int a = 10;
	int b = 16;//把a变成b进制
	int i = 0;// '1'='0'+1
	//char str[20] = " ";
	int m[10];
	//scanf("%d%d", &a, &b);
	//int r;
	//r = a % b;
	//if (r < 10)
	//	str[i] = r + '0';
	//else
	//	str[i] = r - 10 + 'a';
	while (a != 0){
		m[i] = a%b;
		a = a / b;
		++i;
	}
	for (--i; i >= 0; --i)
	{
		printf("%c", m[i]);
	}
	printf("\n");
		system("pause");
}
#endif
#if 0
void main(){
	char a = 0x80;
	unsigned char b = 0x80;
	unsigned int c = a;
	int d = a;
	printf("a=%d,a=%u\n", a, a);
	printf("b=%d,b=%u\n", b, b);
	printf("c=%d,c=%u\n", c, c);
	printf("d=%d,d=%u\n", d, d);
	system("pause");
}
#endif
#if 0
void main(){
	int i;
	char str[1000];
	for (i = 0; i < 1000; i++){
		str[i] = -1 - i; // '\0'-> 0  
	}
	printf("%d\n", strlen(str)); //-256 1 00000000
	system("pause");
}
#endif