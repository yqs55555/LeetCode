#include "../ProblemSelect.h"
#ifdef LeetCode101
struct TreeNode 
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool check(TreeNode* node_left, TreeNode* node_right)
{
	if(node_left != nullptr && node_right != nullptr)
	{
		if(node_left->val != node_right->val)
		{
			return false;
		}
		if(!check(node_left->left, node_right->right))
		{
			return false;
		}
		if(!check(node_left->right, node_right->left))
		{
			return false;
		}
	}
	else if(node_left == nullptr && node_right == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

bool isSymmetric(TreeNode* root) 
{
	return root == nullptr ? true : check(root->left, root->right);
}

int main()
{
	TreeNode* root = new TreeNode(1);
	TreeNode* tmp = root;


	std::cout << isSymmetric(root) << std::endl;
}
#endif