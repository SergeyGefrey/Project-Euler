#include "stdafx.h"
#include "iostream"

int reverse(int n)
{
	int answer = 0;
	while (n > 0)
	{
		answer = (10 * answer) + (n % 10);
		n = n / 10;
	}
	return answer;
}

int isPolindrom(int n)
{
	return n == reverse(n);
}

int work()
{
	int answer = 0;
	
	int i = 999;
	int j;
	int subtrahend;

	while (i >= 100)
	{
		if (i % 11 == 0)
		{
			j = 999;
			subtrahend = 1;
		}
		else
		{
			j = 990;
			subtrahend = 11;
		}
		while (j >= i)
		{
			int tmp = i * j;
			if (tmp <= answer)
			{
				break;
			}
			if (isPolindrom(tmp))
			{
				answer = tmp;
			}

			j -= subtrahend;
		}
		i--;
	}

	return answer;
}

int main()
{
	std::cout << work() << std::endl;
    return 0;
}

