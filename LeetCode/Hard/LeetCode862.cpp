#include "../ProblemSelect.h"
#ifdef LeetCode862
#include <vector>
#include <queue>
int shortestSubarray(std::vector<int>& A, int K) 
{
	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int> >, std::greater<std::pair<int, int> > > pq;
	int res = A.size() + 1;
	int tmp_res = 0;
	int sum = -1, begin = -1;
	for(int i = 0;i < A.size();i++)
	{
		if(sum <= 0)
		{
			sum = A[i];
			begin = i;
		}
		else
		{
			sum += A[i];
		}
		if(sum >= K)
		{
			tmp_res = i - begin + 1;
			res = (res > tmp_res ? tmp_res : res);
		}
	}
	return ((res == (A.size() + 1)) ? -1 : res);
}

int main()
{
	std::vector<int> A = {
		1
	};

	std::cout << shortestSubarray(A, 1) << std::endl;
}
#endif