#include "stdafx.h"
#include "iostream"

__int64 work(int n)
{
	__int64 minuend = (n * n * (n + 1) * (n + 1)) / 4;
	__int64 subtrahend = (n * (n + 1) * (2 * n + 1)) / 6;

	return minuend - subtrahend;
}


int main()
{
	int range = 10;
	
	std::cout << work(range) << std::endl;

    return 0;
}

