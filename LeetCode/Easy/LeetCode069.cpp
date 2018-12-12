#include "../ProblemSelect.h"
#ifdef LeetCode069
int mySqrt(int x) 
{
	int left = 0, right = x;
	long mid = x >> 2;
	long tmp = mid * mid;
	long tmp_add = tmp + (mid << 1) + 1;
	while(!(tmp < x && tmp_add > x))
	{
		if(tmp == x)
		{
			return mid;
		}
		if(tmp_add == x)
		{
			return mid + 1;
		}
		if(tmp > x)
		{
			right = mid;
		}
		else
		{
			left = mid;
		}
		mid = (left + right) >> 1;
		tmp = mid * mid;
		tmp_add = tmp + (mid << 1) + 1;
	}
	return mid;
}

int main()
{
	std::cout << mySqrt(4) << std::endl;
}
#endif