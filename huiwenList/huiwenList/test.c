/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};*/
class PalindromeList {
public:
	bool chkPalindrome(ListNode* A) {
		ListNode* slow = A;
		ListNode* fast = A;
		//1.�ҳ��м�λ��
		while (fast && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;
		}
		//2.���ú�һ������
		ListNode* next;
		ListNode* newhead = NULL;
		while (slow != NULL)
		{
			next = slow->next;
			slow->next = newhead;
			newhead = slow;

			slow = next;
		}
		//3.����������ԭ����ǰ�벿�����Ƚ�
		while (newhead != NULL)
		{
			if (A->val != newhead->val)
				return false;
			newhead = newhead->next;
			A = A->next;
		}
		return true;
	}
};