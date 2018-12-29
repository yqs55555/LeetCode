#include "../ProblemSelect.h"
#ifdef LeetCode005
bool checkSubString(std::string s, int& start, int& end, int max_len)
{
	int len = s.length();
	while (true)
	{
		start--;
		end++;
		if ((start < 0) || (end > len - 1))
		{
			start++;
			end--;
			break;
		}
		if (s[start] != s[end])
		{
			start++;
			end--;
			break;
		}
	}
	return (end - start > max_len);
}
/**
 *  \brief ��������������ߵ��ַ���ȣ���ô������ļ������������ַ��͹������µĻ��ģ�����aba�ǻ��ģ���ôqabaq�����µĻ��ģ�wabaq�ͻ��������չ
 *  \param s 
 *  \return
 */
std::string longestPalindrome(std::string s)
{
	std::string res;
	int start = 0, end = 0;
	int len = s.length();

	for(int i = 0;i < len;i++)
	{
		int tmp_start = i;
		int tmp_end = i;
		if(i + 1 < len && s[i + 1] == s[i])	//�����ǰ�ַ��ұ��ַ��뵱ǰ�ַ���ͬ
		{
			tmp_end++;
			if(checkSubString(s, tmp_start, tmp_end, end - start))	//��ʼ״̬Ϊ2���ַ�
			{
				start = tmp_start;
				end = tmp_end;
			}
			tmp_end--;
		}
		tmp_start = tmp_end = i;
		if(checkSubString(s, tmp_start, tmp_end, end - start))	//��ʼ״̬Ϊ�����ַ�
		{
			start = tmp_start;
			end = tmp_end;
		}
	}
	for(int i = start;i <= end;i++)
	{
		res.push_back(s[i]);
	}
	return res;
}

int main()
{
	std::cout << longestPalindrome("esbtzjaaijqkgmtaajpsdfiqtvxsgfvijpxrvxgfumsuprzlyvhclgkhccmcnquukivlpnjlfteljvykbddtrpmxzcrdqinsnlsteonhcegtkoszzonkwjevlasgjlcquzuhdmmkhfniozhuphcfkeobturbuoefhmtgcvhlsezvkpgfebbdbhiuwdcftenihseorykdguoqotqyscwymtjejpdzqepjkadtftzwebxwyuqwyeegwxhroaaymusddwnjkvsvrwwsmolmidoybsotaqufhepinkkxicvzrgbgsarmizugbvtzfxghkhthzpuetufqvigmyhmlsgfaaqmmlblxbqxpluhaawqkdluwfirfngbhdkjjyfsxglsnakskcbsyafqpwmwmoxjwlhjduayqyzmpkmrjhbqyhongfdxmuwaqgjkcpatgbrqdllbzodnrifvhcfvgbixbwywanivsdjnbrgskyifgvksadvgzzzuogzcukskjxbohofdimkmyqypyuexypwnjlrfpbtkqyngvxjcwvngmilgwbpcsseoywetatfjijsbcekaixvqreelnlmdonknmxerjjhvmqiztsgjkijjtcyetuygqgsikxctvpxrqtuhxreidhwcklkkjayvqdzqqapgdqaapefzjfngdvjsiiivnkfimqkkucltgavwlakcfyhnpgmqxgfyjziliyqhugphhjtlllgtlcsibfdktzhcfuallqlonbsgyyvvyarvaxmchtyrtkgekkmhejwvsuumhcfcyncgeqtltfmhtlsfswaqpmwpjwgvksvazhwyrzwhyjjdbphhjcmurdcgtbvpkhbkpirhysrpcrntetacyfvgjivhaxgpqhbjahruuejdmaghoaquhiafjqaionbrjbjksxaezosxqmncejjptcksnoq").c_str() << std::endl;

	return 0;
}
#endif