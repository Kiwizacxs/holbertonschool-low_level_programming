#include "main.h"
#include <stdio.h>

void
print_most_numbers(void)
{
	int a = 0;

	while (a != 10)
	{
		if (a == 2 || a == 4)
			a++;
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
