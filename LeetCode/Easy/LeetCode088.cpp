#include "../ProblemSelect.h"
#ifdef LeetCode088
#include <vector>
void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{
	if(nums2.empty())
	{
		return;
	}
	int len = m + n;
	int i = 0, j = 0;
	while(len--)
	{
		if (i == m + j || j >= n)
		{
			break;
		}
		if(nums1[i] > nums2[j])
		{
			nums1.insert(nums1.begin() + i, nums2[j]);
			i++;
			j++;
		}
		else
		{
			i++;
		}
	}
	while (j < n)
	{
		nums1.insert(nums1.begin() + m + j, nums2[j]);
		j++;
	}
	while (n--)
	{
		nums1.pop_back();
	}
}

int main()
{
	std::vector<int> num1 = {
		2,0
	};

	std::vector<int> num2 = {
		1
	};

	merge(num1, 1, num2, 1);
}
#endif