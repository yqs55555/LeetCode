#include "../ProblemSelect.h"
#ifdef LeetCode053
/*
 * ����ʹ��Kadane�㷨����̬�滮��������nums[i,j]���������䣬�������kʹ��nums[i,k]<0����ônums[k,j]>nums[i,j],�������ì��
 * ����nums[i,k](i <= k <= j)�ض�����0
 * https://www.cnblogs.com/mengfanrong/p/5282042.html
 * 
 * ����ʹ�÷��η���⣬Ч�ʵ�һЩ������˼·��Ҫ���˽⣺https://blog.csdn.net/monkey_rose/article/details/78012246 
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