/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/

typedef struct ListNode Node;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
	if (l1 == NULL)
		return l2;
	if (l2 == NULL)
		return l1;

	Node* head = NULL;
	Node* tail = NULL;

	while (l1 && l2)
	{
		if (l1->val < l2->val)
		{
			if (tail == NULL)
			{
				head = tail = l1;
			}
			else
			{
				tail->next = l1;
				tail = l1;
			}
			l1 = l1->next;
		}
		else
		{
			if (tail == NULL)
			{
				head = tail = l2;
			}
			else
			{
				tail->next = l2;
				tail = l2;
			}
			l2 = l2->next;

		}
		if (l1)
			tail->next = l1;
		else if (l2)
			tail->next = l2;
	}
	return head;
}