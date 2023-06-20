#include "main.h"
#include <stdio.h>

void
print_numbers(void)
{
	int a = 0;

	while (a != 10)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
