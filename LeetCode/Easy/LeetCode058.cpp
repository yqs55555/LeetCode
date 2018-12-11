#include "../ProblemSelect.h"
#ifdef LeetCode058
int lengthOfLastWord(std::string s) 
{
	int count = 0;
	bool space_appear = false;
	for(int i = 0;i < s.length();i++)
	{
		if(s[i] == ' ')		//如果当前字节时' '，标记' '出现
		{
			space_appear = true;
		}
		else if(space_appear)	//如果上个字节是' '，并且这个字节不是' ',长度重计算为1，标记' '没有出现
		{
			count = 1;
			space_appear = false;
		}
		else				//如果上个字节和这个字节都不是' '
		{
			count++;
		}
	}
	return count;
}

int main()
{
	std::cout << lengthOfLastWord("1231 dsaduiu  kj") << std::endl;
}
#endif