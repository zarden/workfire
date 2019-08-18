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

void BinaryTreeLevelOrder(BTNode* root)//用队列层次遍历
{
	Queue qu;
	BTNode* cur;

	QueueInit(&qu);//有初始化就要销毁

	QueuePush(&qu, root);//根节点入队

	while (!QueueIsEmpty(&qu))
	{
		cur = QueueTop(&qu);//把队首元素给cur

		putchar(cur->data);

		if (cur->lchild)
		{
			QueuePush(&qu, cur->lchild);//有左孩子入队
		}

		if (cur->rchild)
		{
			QueuePush(&qu, cur->rchild);//有右孩子入队
		}

		QueuePop(&qu);
	}

	QueueDestory(&qu);
}

void BinaryTreePrevOrderNonR(BTNode* root)//用非递归（栈）实现前序遍历
{
	Stack st;

	BTNode *cur = root;//root是根节点

	StackInit(&st,100);
	while (cur)
	{
		putchar(cur->data);


		if (cur->rchild)//前序遍历右孩子入栈
		{
			StackPush(&st, cur->rchild);
		}

		if (cur->lchild)//直接遍历左孩子
		{
			cur = cur->lchild;
		}

		else
		{
			cur = StackTop(&st);
			StackPop(&st);//没有左右孩子，直接出栈顶元素
		}
	}

	StackDestory(&st);

}