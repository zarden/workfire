#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int a;
	char b;
	short c;
	short d;
}AA_t;

#if 0
int main()
{
	int a = 10;
	a += a *= a -= a / 3;
	printf("%d\n", sizeof(AA_t));
	printf("%d\n", a);
	system("pause");
	return 0;
}
#endif

#if 0
void main()
{
	int i = 0;
	while (i<10)
	{
		if (i < 1)
			continue;
		if (i == 5)
			break;
		i++;
	}
}
#endif

//�ַ����滻�ո�:ʵ��һ�����������ַ�����Ŀո��滻�ɡ�%20��
#include <stdio.h>
#include <assert.h>

void replace(char *src)
{
	assert(src);
	int OldLen = 0;                  //ԭ�ַ�������
	int NewLen = 0;                  //���ַ�������
	int BlackNum = 0;                //�ո�����
	int OldBack = 0;                 //ԭ�ַ���β��
	int NewBack = 0;                 //���ַ���β��

	while (src[OldLen] != '\0')
	{
		if (src[OldLen] == ' ')
		{
			BlackNum++;
		}
		OldLen++;
	}
	NewLen = OldLen + BlackNum * 2;
	OldBack = OldLen - 1;
	NewBack = NewLen - 1;
	while (OldBack != 0)
	{
		if (src[OldBack] == ' ')
		{
			src[NewBack--] = '0';
			src[NewBack--] = '2';
			src[NewBack] = '%';
		}
		else
		{
			src[NewBack] = src[OldBack];
		}
		OldBack--;
		NewBack--;
	}
}
int main()
{
	char p[20] = "hello world !";
	replace(p);
	printf("%s\n", p);
	system("pause");
	return 0;
}