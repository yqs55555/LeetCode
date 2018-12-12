#include "../ProblemSelect.h"
#ifdef LeetCode070
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