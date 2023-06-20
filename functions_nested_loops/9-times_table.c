#include "main.h"
#include <stdio.h>

void
times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((b * a) / 10 > 0)
				_putchar((b * a) / 10 + '0');
			_putchar((b * a) % 10 + '0');
			if (b < 9)
				_putchar(',');
			if ((a * (b + 1)) <= 9)
				_putchar(' '), _putchar(' ');
			else if (a <= 9)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
