#include "stdafx.h"
#include "iostream"

int sum_multiples_of_number(int range, int number)
{
	int n = (range - 1) / number;
	return (number * (n + 1) *n) / 2;
}

int work(int range)
{
	return sum_multiples_of_number(range, 3) + sum_multiples_of_number(range, 5) - sum_multiples_of_number(range, 15);
}

int main()
{
	std::cout << work(1000) << std::endl;
    return 0;
}

