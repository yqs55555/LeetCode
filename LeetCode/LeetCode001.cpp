#include "ProblemSelect.h"
#ifdef LeetCode001
#include <map>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target)
{
	map<int, int> num_map;		//�洢nums�и����������ڵ�λ��
	int index = 0;
	for (index = 0; index < nums.capacity(); index++)	//����nums
	{
		map<int, int>::iterator it = num_map.find(target - nums[index]);	//�ڲ�����indexǰ���ݵ�nums_map�в�����һ����
		if (it != num_map.end())	//����ҵ���������ǽ�
		{
			int res[] = { index, it->second };
			return vector<int>(&res[0], &res[2]);
		}
		num_map[nums[index]] = index;	//�����ڲ�ѯǰ���룬��Ϊ���������ͬ�����Ḳ�ǵ�������findʱʼ���ҵ�����ͬһ����
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