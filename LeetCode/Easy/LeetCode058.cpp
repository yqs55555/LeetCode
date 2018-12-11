#include "../ProblemSelect.h"
#ifdef LeetCode058
int lengthOfLastWord(std::string s) 
{
	int count = 0;
	bool space_appear = false;
	for(int i = 0;i < s.length();i++)
	{
		if(s[i] == ' ')		//�����ǰ�ֽ�ʱ' '�����' '����
		{
			space_appear = true;
		}
		else if(space_appear)	//����ϸ��ֽ���' '����������ֽڲ���' ',�����ؼ���Ϊ1�����' 'û�г���
		{
			count = 1;
			space_appear = false;
		}
		else				//����ϸ��ֽں�����ֽڶ�����' '
		{
			count++;
		}
	}
	return count;
}

int main()
{
	std::cout << lengthOfLastWord("1231 dsaduiu  kj") << std::endl;
}
#endif