#include "../ProblemSelect.h"
#ifdef LeetCode027
#include <vector>
int removeElement(std::vector<int>& nums, int val) 
{
	int index = 0, len = nums.size();
	for(int i = 0;i < len;i++)
	{
		if(nums[i] != val)
		{
			nums[index] = nums[i];
			index++;
		}
	}
	// for(int i = index;i < len;i++)
	// {
	// 	nums.pop_back();
	// }
	return index;
}

int main()
{
	std::vector<int> nums = {
		3,2,2,3
	};
	std::cout << removeElement(nums, 3) << std::endl;
}
#endif