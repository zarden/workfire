#include<stdio.h>
#include<stdlib.h>


//1.
#if 0
int fun(char *s)//定义一个函数，传入参数为字符串
{
	char *p = s;//定义一个指针指向传入字符串的首地址
	while (*p!='\0')//判断是否字符串结束标志‘\0’
	{
		p++;//如果p指向的地址不为‘\0’的话，p指针后移一位char,直到为\0结束
	}
	return(p - s);//返回字符串结尾到字符串开头的字母数目，也就是传入字符串的长度
}

int main()
{
	printf("%d\n", fun("goodbye!"));
	system("pause");
	return 0;
}
#endif

//2.1
#if 0
int main()
{
	unsigned char a = 0xA5;
	unsigned char b = ~a>>4+1;//先取反在右移
	printf("%d\n", b);//250
	system("pause");
	return 0;
}
#endif


//2.2
#if 0
int main()
{
	const int i = 0;
	int *j = (int *)&i;
	*j = 1;
	printf("%d,%d", i, *j);// 1,1
	system("pause");
	return 0;
}
#endif

void main(){
	char findFirstRepeat(char * c, int n);
	char c[] = "hjdkhdkghk";
	findFirstRepeat(c, 10);
	getchar();
}

char findFirstRepeat(char * c, int n) 
{
	char word[10];
	int i, j;
	word[0] = *c;
	for (i = 1; i<n; i++)
	for (j = 0; j<i; j++){
		if (*(c + i) == word[j]){
			printf("we have found the repeat word:%c", *(c + i));
			return 1;
		}
		else word[i] = *(c + i);
	}
}