#include "main.h"
#include <stdio.h>

void
print_alphabet(void)
{
	char abc = 97;

	while (abc != 123)
	{
		_putchar(abc);
		abc++;
	}
	_putchar(10);
}

