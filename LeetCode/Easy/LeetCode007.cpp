#include "../ProblemSelect.h"
#ifdef LeetCode007
#include <iostream>
int reverse(int x) 
{
	int res = 0;

	while(x != 0)
	{
		int tmp = x % 10;
		x /= 10;
		if(res > INT32_MAX / 10 || (res == INT32_MAX / 10 && tmp > 7))
		{
			return 0;
		}
		if(res < INT32_MIN / 10 || (res == INT32_MIN / 10 && tmp < -8))
		{
			return 0;
		}
		res = res * 10 + tmp;
	}
	return res;
}

int main()
{
	int res = reverse(-2147483648);
	return 0;
}

#endif