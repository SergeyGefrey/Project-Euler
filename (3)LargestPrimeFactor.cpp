#include "stdafx.h"
#include "math.h"
#include "iostream"

__int64 work(__int64 range)
{
	for (__int64 i = 2; i <= sqrt(range); i++)
	{
		if (range % i == 0)
		{
			return work(range / i);
		}
	}

	return range;
}

int main()
{
	std::cout << work(600851475143);
    return 0;
}

