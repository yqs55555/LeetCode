#include "../ProblemSelect.h"
#ifdef LeetCode155
#include <stack>
class MinStack
{
private:
	std::stack<long long> m_stack;
	long long m_top = 0;
public:
	/** initialize your data structure here. */
	MinStack()
	{
		m_top = 0;
	}

	void push(long long x)
	{
		if(m_stack.empty())
		{
			m_stack.push(x);
			m_stack.push(x);
		}
		else
		{
			long long tmp = m_stack.top();
			m_stack.push(x);
			m_stack.push(tmp < x ? tmp : x);
		}
		m_top = x;
		return;
	}

	void pop()
	{
		m_stack.pop();
		m_stack.pop();
		long long tmp = m_stack.top();
		m_stack.pop();
		m_top = m_stack.top();
		m_stack.push(tmp);
		return;
	}

	long long top()
	{
		return m_top;
	}

	long long getMin()
	{
		return m_stack.top();
	}
};

int main()
{
	MinStack minStack;
	minStack.push(21474836467);
	minStack.push(0);
	minStack.push(-3);
	minStack.getMin();
	minStack.pop();
	minStack.top();
	minStack.getMin();

	return 0;
}
#endif