#include "../ProblemSelect.h"
#ifdef LeetCode112
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
	bool hasPathSum(TreeNode* root, int sum) 
	{
		if(root == nullptr)
		{
			return false;
		}
		if(root->left == nullptr && root->right == nullptr)
		{
			return sum == root->val;
		}
		return hasPathSum(root->left, sum - root->val) ||
			hasPathSum(root->right, sum - root->val);
	};
};

int main()
{
	auto* root = new TreeNode(1);
	TreeNode* tmp = root;

	return 0;
}
#endif