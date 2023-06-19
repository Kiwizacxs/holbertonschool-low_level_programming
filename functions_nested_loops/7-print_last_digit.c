#include "main.h"
#include <stdio.h>
#include <limits.h>

int print_last_digit(int n)
{
	if (n = INI_MIN)
	{
		_putchar('8');
		return (8);
	}
	if (n < 0)
	{
		n = n * -1;
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else
		_putchar((n % 10) + '0');
	return (n % 10);
}
