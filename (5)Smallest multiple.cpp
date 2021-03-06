#include "stdafx.h"
#include "math.h"
#include "iostream"

void findPrimeNumbers(int* prime_numbers, int range)
{
	int tmp = 0;
	int flag;
	for (int i = 2; i <= range; i++)
	{
		flag = 1;
		for (int j = 2; j <= sqrt(i); j++)
		{
			flag = (i % j);
			if (!flag)
			{
				break;
			}
		}
		if (flag)
		{
			prime_numbers[tmp] = i;
			tmp++;
		}
	}

	prime_numbers[tmp] = range + 1;
}

void findPowers(int* prime_numbers, int* powers, int range)
{
	for (int i = 0; prime_numbers[i] < range; i++)
	{
		powers[i] = (int)(log10(range) / log10(prime_numbers[i]));
	}
}

__int64 work(int* prime_numbers, int* powers, int range)
{
	findPrimeNumbers(prime_numbers, range);
	findPowers(prime_numbers, powers, range);

	__int64 answer = 1;

	for (int i = 0; prime_numbers[i] < range; i++)
	{
		answer *= pow(prime_numbers[i], powers[i]);
	}
	
	return answer;
}

int main()
{
	const int range = 20; 

	int* prime_numbers = new int[(range / log10(range))];
	int* powers = new int[(range / log10(range))];

	std::cout << work(prime_numbers, powers, range) << std::endl;

	delete prime_numbers;
	delete powers;

    return 0;
}

