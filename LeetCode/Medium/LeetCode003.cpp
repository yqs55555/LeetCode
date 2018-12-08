#include "../ProblemSelect.h"
#ifdef LeetCode003
#include <map>
int lengthOfLongestSubstring(std::string s) 
{
	int len = s.length();
	std::map<char, int> ch_last_index;
	int res = 0;
	int cur_res = 0;
	int longest_str_begin = 0;
	for(int i = 0;i < len;i++)
	{
		std::map<char, int>::iterator it = ch_last_index.find(s[i]);
		if(it == ch_last_index.end())
		{
			cur_res++;
		}
		else
		{
			res = (res > cur_res ? res : cur_res);
			int ch_last_appear = (*it).second;
			if(ch_last_appear < longest_str_begin)
			{
				cur_res++;
			}
			else
			{
				longest_str_begin = ch_last_appear + 1;
				cur_res = i - longest_str_begin + 1;
			}
		}
		ch_last_index[s[i]] = i;
	}
	return (res > cur_res ? res : cur_res);
}

int main()
{
	std::cout << lengthOfLongestSubstring("abba") << std::endl;
}
#endif