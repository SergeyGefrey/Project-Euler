// EvenFibonacciNumbers.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"

long int sum(long int range)
{
	long int tmp = 0;
	long int sum = 0;
	long int previous_variable = 0;

	long int variable = 2;
	while (range >= variable)
	{
		sum += variable;
		tmp = variable;
		variable = 4 * variable + previous_variable;
		previous_variable = tmp;
	}

	return sum;
}

int main()
{
	std::cout << sum(4000000) << std::endl;
    return 0;
}

