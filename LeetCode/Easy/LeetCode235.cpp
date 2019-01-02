#include "../ProblemSelect.h"
#ifdef LeetCode235
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
{
	if(p->val < root->val && q->val > root->val)
	{
		return root;
	}

	if(p->val > root->val && q->val > root->val)
	{
		return lowestCommonAncestor(root->right, p, q);
	}

	if(p->val < root->val && q->val < root->val)
	{
		return lowestCommonAncestor(root->left, p, q);
	}

	return root;
}

int main()
{
	return 0;
}
#endif