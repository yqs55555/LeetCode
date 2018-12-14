#include "../ProblemSelect.h"
#ifdef LeetCode100
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isSameTree(TreeNode* p, TreeNode* q) 
{
	if(p != nullptr && q != nullptr)
	{
		if(p->val != q->val)
		{
			return false;
		}
		if(!isSameTree(p->left, q->left))
		{
			return false;
		}
		if(!isSameTree(p->right, q->right))
		{
			return false;
		}
	}
	else if(p == nullptr && q == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

int main()
{
	TreeNode* tmp;
	TreeNode* p = new TreeNode(1);
	tmp = p;
	tmp->left = new TreeNode(2);
	tmp->right = new TreeNode(3);

	TreeNode* q = new TreeNode(1);
	tmp = q;
	tmp->left = new TreeNode(2);
	tmp->right = new TreeNode(3);

	std::cout << isSameTree(p, q) << std::endl;
}
#endif