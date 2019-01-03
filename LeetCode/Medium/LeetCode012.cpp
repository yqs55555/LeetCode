#include "../ProblemSelect.h"
#include <map>
#ifdef LeetCode012
std::string intToRoman(int num)
{
	std::string res;
	std::map<int, std::string> romans = {
		{1, "I"}, {4, "IV"}, {5,"V"},
		{9, "IX"}, {10,"X"}, {40, "XL"},
		{50, "L"}, {90, "XC"}, {100, "C"},
		{400, "CD"}, {500, "D"}, {900, "CM"},
		{1000, "M"}
	};

	for (std::map<int, std::string>::iterator it = --romans.end();; --it)
	{
		int tmp = num / it->first;
		num %= it->first;
		while (tmp--)
		{
			res.append(it->second);
		}
		if(it == romans.begin())
		{
			break;
		}
	}
	return res;
}

int main()
{
	std::cout << intToRoman(3).c_str() << std::endl;

	return 0;
}
#endif