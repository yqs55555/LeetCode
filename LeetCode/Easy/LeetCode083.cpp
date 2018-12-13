#include "../ProblemSelect.h"
#ifdef LeetCode083
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplicates(ListNode* head) 
{
	if (head == nullptr)
		return nullptr;
	ListNode* res_list = new ListNode(head->val);
	ListNode* tmp = res_list;
	int last_val = head->val;
	head = head->next;
	while (head != nullptr)
	{
		if(head->val != last_val)
		{
			tmp->next = new ListNode(head->val);
			tmp = tmp->next;
		}
		last_val = head->val;
		head = head->next;
	}
	return res_list;
}

int main()
{
	ListNode* tmp;
	ListNode* l1 = new ListNode(1);
	tmp = l1;
	tmp = (tmp->next = new ListNode(1));
	tmp = (tmp->next = new ListNode(4));


	ListNode* l2 = new ListNode(1);
	tmp = l2;
	tmp = (tmp->next = new ListNode(3));
	tmp = (tmp->next = new ListNode(4));

	deleteDuplicates(l1);
}
#endif