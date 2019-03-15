#include "../ProblemSelect.h"
#ifdef LeetCode104
#include <algorithm>
#include <vector>
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int maxDepth(TreeNode* root) 
{
	if(root == nullptr)
	{
		return 0;
	}

	return std::max(maxDepth(root->left), maxDepth(root->right)) + 1;
}

int main()
{
	auto* root = new TreeNode(1);
	TreeNode* tmp = root;

	std::cout << maxDepth(root) << std::endl;

	delete root;
	root = nullptr;
	tmp = nullptr;

	return 0;
}
#endif