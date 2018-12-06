#include "../ProblemSelect.h"
#ifdef LeetCode014
#include <vector>
static const auto io_sync_off = []()
{
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	std::cin.tie(nullptr);
	return nullptr;
}();
std::string longestCommonPrefix(std::vector<std::string>& strs)
{
	if(strs.empty())
	{
		return "";
	}
	std::string common_prefix = *(strs.begin());
	for(std::vector<std::string>::iterator it = (++strs.begin());it != strs.end();++it)
	{
		int len = common_prefix.length();
		for(int i = 0; i < len;i++)
		{
			if(common_prefix[i] != (*it)[i])
			{
				if(i == 0)
				{
					return "";
				}
				common_prefix = common_prefix.substr(0, i);
				break;
			}
		}
	}
	return common_prefix;
}

int main()
{
	std::vector<std::string> strs;
	strs.emplace_back("flower");
	strs.emplace_back("flow");
	strs.emplace_back("flight");
	std::string str = longestCommonPrefix(strs);


	std::cout << str.c_str() << std::endl;
}
#endif
