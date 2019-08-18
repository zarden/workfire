#include"BTree.h"
#include"queue.h"
#include"stack.h"

#include<stdio.h>
#include<stdlib.h>

BTNode *BinaryTreeCreate(BTDataType *src)
{
	static int s_n = 0;
	if (src[s_n] == '#')
	{
		s_n++;
		return NULL;
	}

	BTNode *cur = (BTNode*)malloc(sizeof(BTNode));
	cur->data = src[s_n];
	s_n++;

	cur->lchild = BinaryTreeCreate(src);
	cur->rchild = BinaryTreeCreate(src);

	return cur;
}

void BinaryTreePrevOrder(BTNode* root)
{
	if (root)
	{
		putchar(root->data);
		BinaryTreePrevOrder(root->lchild);
		BinaryTreePrevOrder(root->rchild);
	}
}

void BinaryTreeInOrder(BTNode* root)
{
	if (root)
	{
		BinaryTreeInOrder(root->lchild);
		putchar(root->data);
		BinaryTreeInOrder(root->rchild);
	}
}
void BinaryTreePostOrder(BTNode* root)
{
	if (root)
	{

		BinaryTreePostOrder(root->lchild);
		BinaryTreePostOrder(root->rchild);
		putchar(root->data);
	}
}

void BinaryTreeDestory(BTNode* root)
{
	if (root)
	{

		BinaryTreeDestory(root->lchild);
		BinaryTreeDestory(root->rchild);
		free(root);
	}
}

void BinaryTreeLevelOrder(BTNode* root)//�ö��в�α���
{
	Queue qu;
	BTNode* cur;

	QueueInit(&qu);//�г�ʼ����Ҫ����

	QueuePush(&qu, root);//���ڵ����

	while (!QueueIsEmpty(&qu))
	{
		cur = QueueTop(&qu);//�Ѷ���Ԫ�ظ�cur

		putchar(cur->data);

		if (cur->lchild)
		{
			QueuePush(&qu, cur->lchild);//���������
		}

		if (cur->rchild)
		{
			QueuePush(&qu, cur->rchild);//���Һ������
		}

		QueuePop(&qu);
	}

	QueueDestory(&qu);
}

void BinaryTreePrevOrderNonR(BTNode* root)//�÷ǵݹ飨ջ��ʵ��ǰ�����
{
	Stack st;

	BTNode *cur = root;//root�Ǹ��ڵ�

	StackInit(&st,100);
	while (cur)
	{
		putchar(cur->data);


		if (cur->rchild)//ǰ������Һ�����ջ
		{
			StackPush(&st, cur->rchild);
		}

		if (cur->lchild)//ֱ�ӱ�������
		{
			cur = cur->lchild;
		}

		else
		{
			cur = StackTop(&st);
			StackPop(&st);//û�����Һ��ӣ�ֱ�ӳ�ջ��Ԫ��
		}
	}

	StackDestory(&st);

}