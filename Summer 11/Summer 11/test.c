#include<stdio.h>
#include<stdlib.h>


//1.
#if 0
int fun(char *s)//����һ���������������Ϊ�ַ���
{
	char *p = s;//����һ��ָ��ָ�����ַ������׵�ַ
	while (*p!='\0')//�ж��Ƿ��ַ���������־��\0��
	{
		p++;//���pָ��ĵ�ַ��Ϊ��\0���Ļ���pָ�����һλchar,ֱ��Ϊ\0����
	}
	return(p - s);//�����ַ�����β���ַ�����ͷ����ĸ��Ŀ��Ҳ���Ǵ����ַ����ĳ���
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
	unsigned char b = ~a>>4+1;//��ȡ��������
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