#include "main.h"

int is_prime_number(int n)
{
	if (n < 0)
		n = n * -1;
	if (n % 2 == 0)
		return (0);
	else if (n % 3 == 0)
		return (0);
	else if (n % 5 == 0)
		return (0);
	else if (n == 1)
		return (0);
	else
		return (1);
}
