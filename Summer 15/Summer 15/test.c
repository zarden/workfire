#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0
int main()
{
	char a[] = "123456789", *p = a;
	int i = 0;
	while (*p)
	{
		if (i % 2 == 0)
			*p = '!';
		i++; p++;
	}
	puts(a);//!2!4!6!8!
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	char str[] = "ABCDEFG";
	char *p1, *p2;
	p1 = "abcd";//p1ָ��ָ���ַ���abcd���׵�ַ
	p2 = "efgh";//p2ָ��ָ���ַ���efgh�׵�ַ
	strcpy(str + 1, p2 + 1); //ָ����һλ��ָ���ַ���fgh ���Ƶ� str[1]���λ��(�����λ�ÿ�ʼ���󸲸�) ��Afgh
	strcpy(str + 3, p1 + 3);//ָ������λ��ָ���ַ���d ���Ƶ�str[3]���λ�� ��Afgd
	printf("%s\n", str);//Afgd
	system("pause");
	return 0;
}
#endif

#if 0

int main()
{
	unsigned int a = 0xFFFFFFF7;
	unsigned char i = (unsigned char)a;
	char *b = (char *)&a;
	printf("%08x,%08x", i, *b);//000000f7,fffffff7
	//%08x 8λ�����16���Ƹ�ʽ
	system("pause");
	return 0;
}
//unsigned int* p = &a; // p�е������ǵĵ�ַ����pָ��a
//char* b = (char*)p; // �˴���ǿ��ת��ֻ��ʹbҲָ��a����
// ������char���͵�ָ��ת����������char���͵�ת����Ӱ���ֻ��ָ���Ѱַ
#endif

#if 0
int main()
{
	int j = 4;
	int i = j;
	for (; i <= 2 * j; i++)
	{
		switch (i/j)
		{
		case 0:
		case 1:
			printf("*");
			break;
		case 2:
			printf("#");
		}
	}
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int x = 1, y = 012;
	printf("%d\n", y*x++);//10
	system("pause");
	return 0;
}
#endif

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
дһ�������ĳ���ʵ���������20��Ԫ�ص�����β�巨��ͷ�巨��
�ÿ���ָ����ٲ����м����ֵ����ʾ��
*/
#define OK 1;
#define ERROR 0;
typedef int EleType;
typedef int Status;
//��������ṹ
typedef struct LinkNode
{
	int data;//������� ��ʱ��int
	struct LinkNode *next;//�¸�����ָ��
} LinkNode, *LinkList;
/*
����β�巨����������
*/
Status CreateLinkList(LinkList* list, int num)
{
	//��ָ�� �� �����Ƿ�
	if (!list || num < 1)
	{
		return ERROR;
	}

	LinkNode* node = (LinkNode*)malloc(sizeof(LinkNode));//����ͷ���
	*list = node;//����ָ��ͷ���
	node->next = NULL;//��ʼ��������
	//�����������
	srand((size_t)time(NULL));
	for (size_t i = 0; i < num; i++)
	{
		//��������Ҹ�ֵ��ʼ��
		LinkNode* temp = (LinkNode*)malloc(sizeof(LinkNode));
		temp->next = NULL;
		temp->data = rand() % 100;
		//�����ɵĽ����ڵ�����β��
		node->next = temp;
		node = temp;
	}
	return OK;
}
/*
ͨ��ָ�뷵�ص������м����ֵ
*/
Status GetMidVal(LinkList list, EleType* data)
{

	//����ָ�뿪ʼ��ָ�� �����һ�����
	LinkNode* fast = list->next;
	LinkNode* slow = list->next;

	while (fast->next != NULL)
	{
		//�ڲ�Խ�������¿�ָ��ÿ����2�����
		if (fast->next->next != NULL)
		{
			fast = fast->next->next;
			slow = slow->next;//��ָ��һ����1�����
		}
		//�����Ϊż����ʱ���ڵ����ڶ�������޷���2����㣬����һ�����
		else
		{
			fast = fast->next;
			//slow = slow->next;//����� ��������Ϊż����ʱ����ָ��ָ�� �м�2����㿿���Ǹ����
			//��ô����ָ����1��ʱ����ָ��Ҳ��1����
		}
	}
	*data = slow->data;
	return OK;
}
/*
չʾ����������
*/
void ShowLinkList(LinkList list)
{
	LinkNode* node = list->next;//node��ʼָ���һ�����
	while (node)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	printf("\n");
}
int main(int argc, char *argv[])
{
	LinkList list;
	int mid;
	CreateLinkList(&list, 6);
	GetMidVal(list, &mid);
	ShowLinkList(list);
	printf("mid = %d\n", mid);
	system("pause");
	return 0;
}


