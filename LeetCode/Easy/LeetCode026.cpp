#include "../ProblemSelect.h"
#ifdef LeetCode026
#include <vector>
int removeDuplicates(std::vector<int>& nums) 
{
	if(nums.size() <= 1)
	{
		return nums.size();
	}
	int index = 0;
	int len = nums.size();
	for(int i = 1;i < len;i++)
	{
		if(nums[i] != nums[index])
		{
			index++;
			nums[index] = nums[i];
		}
	}
	for(int i = index + 1;i < len;i++)
	{
		nums.pop_back();
	}
	return nums.size();
}

int main()
{
	std::vector<int> nums = {
		0,0,1,1,1,2,2,3,3,4
	};
	std::cout << removeDuplicates(nums) << std::endl;

	return 0;
}
#endif
