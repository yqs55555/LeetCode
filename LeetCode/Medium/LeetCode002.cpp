#include "../ProblemSelect.h"
#ifdef LeetCode002
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
	ListNode* res = new ListNode(0);
	ListNode* tmp_node = res;
	bool up = false;
	while(true)
	{
		int tmp = up ? 1 : 0;
		up = false;
		if(l1 != nullptr)
		{
			tmp += l1->val;
			l1 = l1->next;
		}
		if(l2 != nullptr)
		{
			tmp += l2->val;
			l2 = l2->next;
		}
		if(tmp > 9)
		{
			tmp -= 10;
			up = true;
		}
		tmp_node->val = tmp;
		if(l1 != nullptr || l2 != nullptr)
		{
			tmp_node = (tmp_node->next = new ListNode(0));
		}
		else
		{
			break;
		}
	}
	if(up)
	{
		tmp_node->next = new ListNode(1);
	}
	return res;
}

int main()
{
	ListNode* tmp;
	ListNode* l1 = new ListNode(1);
	tmp = l1;
	tmp = (tmp->next = new ListNode(8));
	// tmp = (tmp->next = new ListNode(3));


	ListNode* l2 = new ListNode(0);
	// tmp = l2;
	// tmp = (tmp->next = new ListNode(6));
	// tmp = (tmp->next = new ListNode(4));

	addTwoNumbers(l1, l2);
}

#endif
