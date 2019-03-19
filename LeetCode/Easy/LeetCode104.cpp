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
int max(const int a, const int b)
{
	return (a > b ? a : b);
}
int maxDepth(TreeNode* root) 
{
	if(root == nullptr)
	{
		return 0;
	}

	return max(maxDepth(root->left), maxDepth(root->right)) + 1;
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