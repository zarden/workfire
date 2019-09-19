SListNode *getIntersectionNode(Slist *listA, SList * listB)
{
	int lenA = 0;
	int lenB = 0;
	SListNode *cur;
	SListNode * headlong = listA;
	SListNode * headshort = listB;
	int gap;
	int i;
	for (cur = listA->_head; cur; cur = cur->_next)
	{
		lenA++;
	}

	for (cur = listB->_head; cur; cur = cur->_next)
	{
		lenB++;
	}

	gap = lenA - lenB;
	if (gap<0)
	{
		gap *= -1;
		headlong = listB->_head;
		headshort = listA->_head;
	}

	for (i = 0; i < gap; i++)
	{
		headlong = headlong->_next;
	}

	for (; headlong; headlong = headlong->_next, headshort = headshort->_next)
	{
		if (headlong==headshort)
		{
			return headlong;
		}
	}
	return NULL;
}