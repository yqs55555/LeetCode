#include "../ProblemSelect.h"
#ifdef LeetCode020
#include <stack>
#include <map>
bool isValid(std::string s) 
{
	if(s.empty())
	{
		return true;
	}
	std::map<char, char> key_value = {
		std::map<char, char>::value_type{')', '('}, 
		{']', '['}, 
		{'}', '{'}
	};
	std::stack<char> parentheses_stack;
	int len = s.length();
	for(int i = 0;i < len;i++)
	{
		switch (s[i])
		{
		case '(':
		case '{':
		case '[':
			parentheses_stack.push(s[i]);
			break;
		case ')':
		case '}':
		case ']':
			if(parentheses_stack.empty())
			{
				return false;
			}
			if(parentheses_stack.top() != key_value[s[i]])
			{
				return false;
			}
			parentheses_stack.pop();
			break;
		default: 
			break;
		}
	}
	return parentheses_stack.empty();
}

int main()
{
	std::cout << isValid("{[]") << std::endl;

	return 0;
}

#endif