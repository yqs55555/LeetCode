#include "../ProblemSelect.h"
#ifdef LeetCode035
#include <vector>
int searchInsert(std::vector<int>& nums, int target)
{
	int len = nums.size();
	// int h, i = 0, j = nums.size();

	for (int i = 0;i < len;i++)
	{
		if(nums[i] == target)
		{
			return i;
		}
		if(nums[i] > target)
		{
			return i;
		}
	}
	return len;
}

int main()
{
	std::vector<int> nums = {
		0,1,2
	};

	std::cout << searchInsert(nums, 3) << std::endl;
}
#endif