#include "../ProblemSelect.h"
#ifdef LeetCode108
#include <vector>
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
	TreeNode * sortedArrayToBST(std::vector<int>& nums)
	{
		return sortedArrayToBST(nums, 0, nums.size() - 1);
	}

	TreeNode* sortedArrayToBST(std::vector<int>& nums, int left, int right)
	{
		if (left > right)
		{
			return nullptr;
		}
		int mid = left + ((right - left) >> 1);
		TreeNode* node = new TreeNode(nums[mid]);
		node->left = sortedArrayToBST(nums, left, mid - 1);
		node->right = sortedArrayToBST(nums, mid + 1, right);
		return node;
	}
};

int main()
{
	std::vector<int> nums = { 1,2,5,6,8 };
	Solution solution;
	solution.sortedArrayToBST(nums);
	return 0;
}
#endif