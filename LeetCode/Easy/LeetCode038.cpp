#include "../ProblemSelect.h"
#ifdef LeetCode038
std::string countAndSay(int n) 
{
	std::string str("1");
	std::string tmp_str;
	for(int i = 1;i < n;i++)
	{
		char last_ch = str[0];
		int happen_times = 1;
		int len = str.length();
		for(int j = 1;j < len;j++)
		{
			if(last_ch == str[j])
			{
				happen_times++;
			}
			else
			{
				tmp_str += (happen_times + '0');
				tmp_str += last_ch;
				last_ch = str[j];
				happen_times = 1;
			}
		}
		tmp_str += (happen_times + '0');
		tmp_str += str[len - 1];
		str = tmp_str;
		tmp_str = "";
	}
	return str;
}

int main()
{
	std::cout << countAndSay(5).c_str() << std::endl;
}
#endif