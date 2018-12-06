#include "../ProblemSelect.h"
#ifdef LeetCode013
#include <map>
int romanToInt(std::string s)
{
	std::map<char, int> roman_value = { { 'I', 1 },{ 'V', 5 },{ 'X', 10 },{ 'L', 50 },{ 'C', 100 },{ 'D', 500 },{ 'M', 1000 } };

	int res = roman_value[s[s.length() - 1]];
	int cur = res, pre = res;
	for(int i = s.length() - 2;i >= 0;--i)
	{
		cur = roman_value[s[i]];
		res += (cur >= pre ? cur : -cur);
		pre = cur;
	}
	return res;
}

int main()
{
	std::cout << romanToInt("III") << std::endl;
	return 0;
}
#endif