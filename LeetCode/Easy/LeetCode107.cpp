#include "../ProblemSelect.h"
#ifdef LeetCode107
#include <vector>
#include <queue>
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

std::vector<std::vector<int>> levelOrderBottom(TreeNode* root) 
{
	std::vector<std::vector<int>> res;
	if (root == nullptr)
	{
		return res;
	}
	std::queue<TreeNode*> tmp_queue;

	tmp_queue.push(root);
	while (!tmp_queue.empty())
	{
		int nums = tmp_queue.size();
		std::vector<int> tmp_vec(nums);
		for(int i = 0;i < nums;i++)
		{
			TreeNode* tmp = tmp_queue.front();
			tmp_queue.pop();
			tmp_vec[i] = tmp->val;
			if (tmp->left != nullptr)
			{
				tmp_queue.push(tmp->left);
			}
			if (tmp->right != nullptr)
			{
				tmp_queue.push(tmp->right);
			}
		}
		res.push_back(tmp_vec);
	}
	std::reverse(res.begin(), res.end());

	return res;
}

int main()
{
	return 0;
}
#endif
