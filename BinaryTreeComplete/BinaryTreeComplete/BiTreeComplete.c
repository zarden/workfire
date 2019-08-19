int BinaryTreeComplete(BTNode* root)//判断是否为完全二叉树
{
	Queue qu;

	BTNode * cur;
	int tag = 0;

	QueueInit(&qu);

	QueuePush(&qu, root);

	while (!QueueIsEmpty(&qu))
	{
		cur = QueueTop(&qu);

		putchar(cur->data);

		if (cur->rchild && !cur->lchild)//有右孩子无左孩子为非完全二叉树
		{
			return 0;
		}

		if (tag && (cur->rchild || cur->lchild))//没有右孩子有非叶子节点为非完全二叉树
		{
			return 0;
		}

		if (cur->lchild)
		{
			QueuePush(&qu, cur->lchild);
		}

		if (cur->rchild)
		{
			QueuePush(&qu, cur->rchild);
		}
		else
		{
			tag = 1;//没有右孩子
		}

		QueuePop(&qu);
	}

	QueueDestory(&qu);
	return 1;
}