#include "../ProblemSelect.h"
#ifdef LeetCode067
std::string addBinary(std::string a, std::string b)
{
	std::string res_str;
	int loop_times = a.size() > b.size() ? a.size() : b.size();
	int i = a.size() - 1, j = b.size() - 1;
	bool up = false;
	while (loop_times--)
	{
		int a_ch = i >= 0 ? a[i] - '0' : 0;
		int b_ch = j >= 0 ? b[j] - '0' : 0;

		int tmp = a_ch + b_ch + (up ? 1 : 0);
		if(tmp > 1)
		{
			res_str = static_cast<char>(tmp - 2 + '0') + res_str;
			up = true;
		}
		else
		{
			res_str = static_cast<char>(tmp + '0') + res_str;
			up = false;
		}
		i--;
		j--;
	}
	if(up)
	{
		res_str = '1' + res_str;
	}
	return res_str;
}

int main()
{
	std::cout << addBinary("1010", "1011").c_str() << std::endl;
}
#endif