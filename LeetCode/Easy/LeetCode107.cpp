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
	std::queue<TreeNode*> tmp_queue;
	if(root == nullptr)
	{
		return res;
	}

	tmp_queue.push(root);
	while (!tmp_queue.empty())
	{
		int nums = tmp_queue.size();
		std::vector<int> tmp_vec;
		while (nums--)
		{
			TreeNode* tmp = tmp_queue.front();
			tmp_queue.pop();
			tmp_vec.push_back(tmp->val);
			if(tmp->left != nullptr)
			{
				tmp_queue.push(tmp->left);
			}
			if(tmp->right != nullptr)
			{
				tmp_queue.push(tmp->right);
			}
		}
		res.insert(res.begin(), tmp_vec);
	}

	return res;
}

int main()
{
	return 0;
}
#endif
