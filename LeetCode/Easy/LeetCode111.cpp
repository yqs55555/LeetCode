#include "../ProblemSelect.h"
#ifdef LeetCode111
#include <algorithm>
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int minDepth(TreeNode* root) 
{
	if(root == nullptr)
	{
		return 0;
	}
	int left = minDepth(root->left);
	int right = minDepth(root->right);
	return (left != 0 && right != 0) ? std::min(left, right) + 1 : 1 + left + right;
}

int main()
{
	auto* root = new TreeNode(1);
	TreeNode* tmp = root;
	// tmp->left = new TreeNode(2);
	// tmp->right = new TreeNode(3);

	std::cout << minDepth(root) << std::endl;

	delete root;
	return 0;
}
#endif