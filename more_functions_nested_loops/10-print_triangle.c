#include "main.h"
#include <stdio.h>

void
print_triangle(int size)
{
	int b = 0, a = size;

	if (size <= 0)
		_putchar('\n');
	else
		while (b != size)
		{
			while (a != 1)
			{
				_putchar(' ');
				a--;
			}
			a = size;
			while (a - b != size + 1)
			{
				_putchar(35);
				a++;
			}
			_putchar('\n');
			b++;
			a = size - b;
		}
}
