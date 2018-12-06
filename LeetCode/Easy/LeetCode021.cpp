#include "../ProblemSelect.h"
#ifdef LeetCode021
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
{
	if(l1 == nullptr)
	{
		return l2;
	} 
	if(l2 == nullptr)
	{
		return l1;
	}
	ListNode* new_list;
	if (l1->val <= l2->val)
	{
		new_list = new ListNode(l1->val);
		l1 = l1->next;
	}
	else
	{
		new_list = new ListNode(l2->val);
		l2 = l2->next;
	}
	ListNode* tmp = new_list;
	while(l1 != nullptr && l2 != nullptr)
	{
		if(l1->val <= l2->val)
		{
			tmp->next = new ListNode(l1->val);
			l1 = l1->next;
		}
		else
		{
			tmp->next = new ListNode(l2->val);
			l2 = l2->next;
		}
		tmp = tmp->next;
	}
	tmp->next = (l1 == nullptr ? l2 : l1);
	return new_list;
}

int main()
{
	ListNode* tmp;
	ListNode* l1 = new ListNode(1);
	tmp = l1;
	tmp = (tmp->next = new ListNode(2));
	tmp = (tmp->next = new ListNode(4));

	
	ListNode* l2 = new ListNode(1);
	tmp = l2;
	tmp = (tmp->next = new ListNode(3));
	tmp = (tmp->next = new ListNode(4));

	mergeTwoLists(l1, l2);

	return 0;
}

#endif