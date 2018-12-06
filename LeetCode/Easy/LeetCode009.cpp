#include "../ProblemSelect.h"
#ifdef LeetCode009
bool isPalindrome(int x) 
{
	if (x < 0)
	{
		return false;
	}
	int res = 0;
	int cpy_x = x;

	while (x != 0)
	{
		res = res * 10 + x % 10;
		x /= 10;
	}
	return (res == cpy_x);
}

int main()
{
	std::cout << isPalindrome(121);
	return 0;
}

#endif