#include "main.h"
#include <stdio.h>

/**
* times_table - 1234
* Return: Always 0.
*/

void times_table(void)
{
	int d = 10;
	int a;
	int b = 0;
	int c = 0;

	while (c != 10)
	{
		while (b < 10)
		{
			a = c * b;
			if (a == 0 && b < 10)
			{
				if (b >= 1)
				{
				_putchar (','), _putchar (' ');
				_putchar (' ');
				}
				_putchar ((a) + '0');
			}
			else
				if (a > 0 && a <= 9)
				{
					_putchar (','), _putchar (' ');
					_putchar (' '), _putchar ((a) + '0');
				}
			if (a > 9)
			{
				if (b < 10)
				{
					_putchar (','), _putchar (' ');
				}
				_putchar ((a / d) + '0'), _putchar ((a % d) + '0');
			}
			b++;
		}
		_putchar ('\n');
		c++;
		b = 0;
	}
}
