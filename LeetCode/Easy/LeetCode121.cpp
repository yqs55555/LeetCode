#include "../ProblemSelect.h"
#ifdef LeetCode121
class Solution {
public:
	int maxProfit(std::vector<int>& prices) 
	{
		if(prices.empty())
		{
			return 0;
		}
		int min = prices[0];
		int max_profit = 0;

		for (int i = 0;i < prices.size();i++)
		{
			min = min < prices[i] ? min : prices[i];
			int tmp = prices[i] - min;
			max_profit = max_profit > tmp ? max_profit : tmp;
		}
		return max_profit;
	}
};


int main()
{
	Solution solution;
	std::vector<int> test = { 1, 3, 6 };
	std::cout << solution.maxProfit(test) << std::endl;

	return 0;
}
#endif