#include "main.h"
#include <stdio.h>

void
print_diagonal(int n)
{
	int a = 0, b = 0;

	if (n <= 0)
		_putchar('\n');
	else
		while (a < n)
		{
			_putchar(92), _putchar('\n');
			a++;
			while (b != a)
			{
				_putchar(' ');
				b++;
			}
			b = 0;
		}
}
