#include "../ProblemSelect.h"
#ifdef LeetCode028
/*
 * ����ʹ���㷨ΪKMP��
 * �ο����£�https://blog.csdn.net/v_july_v/article/details/7041827
 * Next����ʵ����������ǰ��׺����Ԫ�ص���󳤶ȣ����������������ƥ��
 */
int* getNextArr(std::string str)
{
	int length = str.length();
	int* next_arr = new int[length];
	next_arr[0] = -1;
	int k = -1;
	for (int q = 1; q < length; q++)
	{
		while (k > 0 && str[k] != str[q - 1])
		{
			k = next_arr[k];			//��ǰ����
		}
		if (k == -1 || str[k] == str[q - 1])	//�����ͬ��k++
		{
			k++;
		}
		next_arr[q] = k;
	}
	return next_arr;
}

int strStr(std::string haystack, std::string needle) 
{
	if(needle.empty())
	{
		return 0;
	}
	int hay_len = haystack.length(), needle_len = needle.length();
	if(hay_len < needle_len)
	{
		return -1;
	}
	int* next_arr = getNextArr(needle);
	int i = 0, j = 0;
	while (i < hay_len && j < needle_len)
	{
		if(j == -1 || haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		else
		{
			j = next_arr[j];
		}
	}
	return j == needle_len ? i - needle_len : -1;
}

int main()
{
	std::string hay = "mississippi";
	std::string needle = "issip";

	std::cout << strStr(hay, needle) << std::endl;
}

#endif