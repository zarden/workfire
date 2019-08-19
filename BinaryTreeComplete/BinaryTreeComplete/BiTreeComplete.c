int BinaryTreeComplete(BTNode* root)//�ж��Ƿ�Ϊ��ȫ������
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

		if (cur->rchild && !cur->lchild)//���Һ���������Ϊ����ȫ������
		{
			return 0;
		}

		if (tag && (cur->rchild || cur->lchild))//û���Һ����з�Ҷ�ӽڵ�Ϊ����ȫ������
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
			tag = 1;//û���Һ���
		}

		QueuePop(&qu);
	}

	QueueDestory(&qu);
	return 1;
}