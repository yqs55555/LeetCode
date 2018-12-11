#include "../ProblemSelect.h"
#ifdef LeetCode053
/*
 * 本题使用Kadane算法（动态规划），即设nums[i,j]是最大和区间，如果存在k使得nums[i,k]<0，那么nums[k,j]>nums[i,j],这与假设矛盾
 * 所以nums[i,k](i <= k <= j)必定大于0
 * https://www.cnblogs.com/mengfanrong/p/5282042.html
 * 
 * 另有使用分治法求解，效率低一些，但是思路需要多了解：https://blog.csdn.net/monkey_rose/article/details/78012246 
 */
#include <vector>
int maxSubArray(std::vector<int>& nums) 
{
	int max = nums[0];
	int sum = max;
	for(int i = 1;i < nums.size();i++)
	{
		sum = (sum < 0 ? nums[i] : sum + nums[i]);
		max = sum > max ? sum : max;
	}
	return max;
}

int main()
{
	std::vector<int> nums = {
		0,1,2
	};
	std::cout << maxSubArray(nums) << std::endl;
}
#endif