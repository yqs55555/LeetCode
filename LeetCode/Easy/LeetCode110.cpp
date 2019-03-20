#include "../ProblemSelect.h"
#include <algorithm>
#ifdef LeetCode110
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int maxDepth(TreeNode* root)
{
	if (root == nullptr)
	{
		return 0;
	}
	return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
}

bool isBalanced(TreeNode* root)
{
	if(root == nullptr)
	{
		return true;
	}
	if(abs(maxDepth(root->right) - maxDepth(root->left)) > 1)	//��Ҫ����һ���ж��Լ���ջ���ڴ�ռ��
	{
		return false;
	}
	return isBalanced(root->left) && isBalanced(root->right);
}

#endif