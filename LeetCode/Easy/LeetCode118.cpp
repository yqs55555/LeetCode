#include "../ProblemSelect.h"
#ifdef LeetCode118
class Solution {
public:
	std::vector<std::vector<int>> generate(int numRows) 
	{
		std::vector<std::vector<int>> res(numRows);
		for(int i = 0;i < numRows;i++)
		{
			res[i].resize(i + 1);
			res[i][0] = 1;
			for(int j = 1;j < i;j++)
			{
				res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
			}
			res[i][i] = 1;
		}
		return res;
	};
};

int main()
{
	Solution solution;
	solution.generate(3);
	return 0;
}
#endif