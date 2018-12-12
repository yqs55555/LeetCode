#include "../ProblemSelect.h"
#ifdef LeetCode070
/**
 * \brief 此题是一个经典的动态规划(DP)问题，此题的解为f(n) = f(n - 1) + f(n - 2)
 * \n 第几层楼梯
 * \return 
 */
int climbStairs(int n) 
{
	if (n <= 2)
	{
		return n;
	}

	int climb_tmp_1 = 1;
	int climb_tmp_2 = 2;
	int res;
	for(int i = 2;i < n;i++)
	{
		res = climb_tmp_1 + climb_tmp_2;
		climb_tmp_1 = climb_tmp_2;
		climb_tmp_2 = res;
	}

	return res;
}

int main()
{
	std::cout << climbStairs(4) << std::endl;
}
#endif