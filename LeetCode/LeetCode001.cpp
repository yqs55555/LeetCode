#include "ProblemSelect.h"
#ifdef LeetCode001
#include <map>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target)
{
	map<int, int> num_map;		//存储nums中各个数字所在的位置
	int index = 0;
	for (index = 0; index < nums.capacity(); index++)	//遍历nums
	{
		map<int, int>::iterator it = num_map.find(target - nums[index]);	//在插入了index前数据的nums_map中查找另一个数
		if (it != num_map.end())	//如果找到，那这就是解
		{
			int res[] = { index, it->second };
			return vector<int>(&res[0], &res[2]);
		}
		num_map[nums[index]] = index;	//不可在查询前插入，因为如果存在相同的数会覆盖掉，导致find时始终找到的是同一个数
	}
	return vector<int>(0);
}

int main()
{
	int arr[] = { 3,3 };
	int target = 6;
	vector<int> vec(&arr[0], &arr[2]);
	vector<int> res = twoSum(vec, target);

	return 0;
}

#endif