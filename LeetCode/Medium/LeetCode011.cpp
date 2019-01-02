#include "../ProblemSelect.h"
#ifdef LeetCode011
#include <vector>
#include <algorithm>
int maxArea(std::vector<int>& height) 
{
	int max_res = 0;
	int left = 0, right = height.size() - 1;
	while (left < right)
	{
		max_res = std::max((right - left) * std::min(height[left], height[right]), max_res);
		if(height[left] <= height[right])
		{
			left++;
		}
		else
		{
			right--;
		}
	}
	return max_res;
}

int main()
{
	std::vector<int> heights = {
		1,8,6,2,5,4,8,3,7
	};
	std::cout << maxArea(heights) << std::endl;

	return 0;
}
#endif