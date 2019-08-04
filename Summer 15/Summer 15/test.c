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
	p1 = "abcd";//p1指针指向字符串abcd的首地址
	p2 = "efgh";//p2指针指向字符串efgh首地址
	strcpy(str + 1, p2 + 1); //指针移一位所指的字符串fgh 复制到 str[1]这个位置(从这个位置开始往后覆盖) 即Afgh
	strcpy(str + 3, p1 + 3);//指针移三位所指的字符串d 复制到str[3]这个位置 即Afgd
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
	//%08x 8位对齐的16进制格式
	system("pause");
	return 0;
}
//unsigned int* p = &a; // p中的内容是的地址，即p指向a
//char* b = (char*)p; // 此处的强制转换只是使b也指向a而已
// 这里是char类型的指针转换，而不是char类型的转换，影响的只是指针的寻址
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
写一个完整的程序，实现随机生成20个元素的链表（尾插法或头插法）
用快慢指针快速查找中间结点的值并显示。
*/
#define OK 1;
#define ERROR 0;
typedef int EleType;
typedef int Status;
//单链表结点结构
typedef struct LinkNode
{
	int data;//结点数据 此时用int
	struct LinkNode *next;//下个结点的指针
} LinkNode, *LinkList;
/*
采用尾插法创建单链表
*/
Status CreateLinkList(LinkList* list, int num)
{
	//空指针 和 个数非法
	if (!list || num < 1)
	{
		return ERROR;
	}

	LinkNode* node = (LinkNode*)malloc(sizeof(LinkNode));//创建头结点
	*list = node;//链表指向头结点
	node->next = NULL;//初始化空链表
	//设置随机种子
	srand((size_t)time(NULL));
	for (size_t i = 0; i < num; i++)
	{
		//创建结点且赋值初始化
		LinkNode* temp = (LinkNode*)malloc(sizeof(LinkNode));
		temp->next = NULL;
		temp->data = rand() % 100;
		//新生成的结点放在单链表尾部
		node->next = temp;
		node = temp;
	}
	return OK;
}
/*
通过指针返回单链表中间结点的值
*/
Status GetMidVal(LinkList list, EleType* data)
{

	//快慢指针开始都指向 链表第一个结点
	LinkNode* fast = list->next;
	LinkNode* slow = list->next;

	while (fast->next != NULL)
	{
		//在不越界的情况下快指针每次走2个结点
		if (fast->next->next != NULL)
		{
			fast = fast->next->next;
			slow = slow->next;//慢指针一次走1个结点
		}
		//当结点为偶数个时，在倒数第二个结点无法走2个结点，就走一个结点
		else
		{
			fast = fast->next;
			//slow = slow->next;//如果想 当结点个数为偶数个时，慢指针指向 中间2个结点靠后那个结点
			//那么当快指针走1步时，慢指针也走1步。
		}
	}
	*data = slow->data;
	return OK;
}
/*
展示单链表数据
*/
void ShowLinkList(LinkList list)
{
	LinkNode* node = list->next;//node开始指向第一个结点
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


