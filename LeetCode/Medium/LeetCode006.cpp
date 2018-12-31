#include "../ProblemSelect.h"
#ifdef LeetCode006
std::string convert(std::string s, int numRows) 
{
	if(numRows == 1)
	{
		return s;
	}
	std::string res;
	int len = s.length();
	res.reserve(len + 1);
	int step = 2 * (numRows - 1);

	for(int i = 0, jmp = step;i < numRows;i++,jmp -= 2)
	{	
		if(i > len)
			break;
		int j = 0;
		for(res.push_back(s[i + j]);i + j < len;)
		{
			if(j != j + jmp)
			{
				j += jmp;
				if(i + j < len)
				{
					res.push_back(s[i + j]);
				}
			}
			if(j != j + step - jmp)
			{
				j += step - jmp;
				if(i + j < len)
				{
					res.push_back(s[i + j]);
				}
			}
		}
	}

	return res;
}

int main()
{
	std::cout << convert("A", 1).c_str() << std::endl;

	return 0;
}
#endif