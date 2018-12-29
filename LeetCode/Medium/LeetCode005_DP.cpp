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
 *  \brief 如果回文左右两边的字符相等，那么这个回文加上左右两个字符就构成了新的回文，例如aba是回文，那么qabaq就是新的回文，wabaq就会打断这个扩展
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
		if(i + 1 < len && s[i + 1] == s[i])	//如果当前字符右边字符与当前字符相同
		{
			tmp_end++;
			if(checkSubString(s, tmp_start, tmp_end, end - start))	//初始状态为2个字符
			{
				start = tmp_start;
				end = tmp_end;
			}
			tmp_end--;
		}
		tmp_start = tmp_end = i;
		if(checkSubString(s, tmp_start, tmp_end, end - start))	//初始状态为单个字符
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