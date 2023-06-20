#include "main.h"
#include <stdio.h>

void
print_numbers(void)
{
	int a = 48;

	while (a != 58)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
