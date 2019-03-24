#include "../ProblemSelect.h"
#ifdef LeetCode119
class Solution {
public:

	std::vector<int> getRow(int rowIndex) 
	{
		// std::vector<std::vector<int>> res(rowIndex + 1);
		// for (int i = 0; i <= rowIndex; i++)
		// {
		// 	res[i].resize(i + 1);
		// 	res[i][0] = 1;
		// 	for (int j = 1; j < i; j++)
		// 	{
		// 		res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
		// 	}
		// 	res[i][i] = 1;
		// }
		// return res[rowIndex];

		/**
		 *  \brief ½â·¨¶þ£º
		 */
		std::vector<int> res(rowIndex + 1);
		res[0] = 1;
		for(int i = 1;i <= rowIndex;i++)
		{
			for(int j = i;j >= 1;j--)
			{
				res[j] += res[j - 1];
			}
		}
		return res;
	}
};

int main()
{
	Solution solution;
	solution.getRow(3);

	return 0;
}
#endif