#include "../ProblemSelect.h"
#ifdef LeetCode066
#include <vector>
std::vector<int> plusOne(std::vector<int>& digits) 
{
	std::vector<int> res;
	int cur_num = 1;
	for(int i = digits.size() - 1;i >= 0;i--)
	{
		cur_num += digits[i];
		if(cur_num > 9)
		{
			int tmp = cur_num % 10;
			res.insert(res.begin(), tmp);
			cur_num = 1;
		}
		else
		{
			res.insert(res.begin(), cur_num);
			cur_num = 0;
		}
	}
	if(cur_num == 1)
	{
		res.insert(res.begin(), cur_num);
	}
	return res;
}

int main()
{
	std::vector<int> digits = {
		1,2,3
	};

	std::vector<int> res = plusOne(digits);
	for(int num : res)
	{
		std::cout << num << " ";
	}
	return 0;
}
#endif