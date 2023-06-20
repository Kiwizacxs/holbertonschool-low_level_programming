#include "main.h"
#include <stdio.h>

void
print_square(int size)
{
	int n = 0, i = 0;

	if (size <= 0)
		_putchar('\n');
	else
		while (n != size)
		{
			while (i != size)
			{
				_putchar(35);
				i++;
			}
			i = 0;
			_putchar('\n');
			n++;
	}
}

