#include "main.h"

int
check(int a)
{
	if (a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a == 1)
		return (0);
	else
		return (1);
}

int
is_prime_number(int n)
{
	int num;

	if (n < 0)
		return (0);
	if (n == 2)
		return (1);
	num = check(n);
	return (num);
}

