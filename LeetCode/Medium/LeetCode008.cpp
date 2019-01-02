#include "../ProblemSelect.h"
#ifdef LeetCode008
int myAtoi(std::string str) 
{
	enum AtoiState
	{
		BEGIN = 0,
		CONTENT,
		FINISH
	};
	int res = 0;
	bool is_above_zero = true;
	AtoiState state = BEGIN;
	int len = str.length();

	for(int i = 0;i < len;i++)
	{
		switch (state)
		{
			case BEGIN :
			{
				if(str[i] == ' ')
				{
					continue;
				}
				else if(str[i] >= '0' && str[i] <= '9')
				{
					res = res * 10 + (str[i] - '0');
					state = CONTENT;
				}
				else if(str[i] == '-')
				{
					is_above_zero = false;
					state = CONTENT;
				}
				else if(str[i] == '+')
				{
					is_above_zero = true;
					state = CONTENT;
				}
				else
				{
					state = FINISH;
				}
				break;
			}
			case CONTENT:
			{
				if(str[i] >= '0' && str[i] <= '9')
				{
					if((res > INT_MAX / 10) || 
						(res == INT_MAX / 10 && str[i] >= (is_above_zero ? '7' : '8')))
					{
						return is_above_zero ? INT_MAX : INT_MIN;
					}
					res = res * 10 + (str[i] - '0');
				}
				else
				{
					state = FINISH;
				}
				break;
			}
			case FINISH:
			{
				res = is_above_zero ? res : -res;
				return res;
			}
		}
	}
	return is_above_zero ? res : -res;
}

int main()
{
	std::cout << myAtoi("2147483646") << std::endl;
}
#endif