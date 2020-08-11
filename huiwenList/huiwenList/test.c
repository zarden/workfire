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
		//1.找出中间位置
		while (fast && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;
		}
		//2.逆置后一半链表
		ListNode* next;
		ListNode* newhead = NULL;
		while (slow != NULL)
		{
			next = slow->next;
			slow->next = newhead;
			newhead = slow;

			slow = next;
		}
		//3.将逆序后的与原来的前半部分作比较
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