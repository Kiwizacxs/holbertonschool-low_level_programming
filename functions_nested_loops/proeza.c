#include "main.h"
#include <stdio.h>

/**
* times_table - 1234
* Return: Always 0.
*/

void times_table(void)
{
	int b = 0;
	int a = 0;
	int c = 0;
	while (c != 10)
	{
		_putchar ('0');
		while (b < 9)
		{
			_putchar (',');
			_putchar (' ');
			if (c == 1)
			{
				a = a + 1;
			}
			if (c == 2)
			{
				a = a + 2;
			}
			_putchar ((a) + '0');
			b++;
		}
		_putchar ('\n');
		b = 0;
		a = 0;
		c++;
	}
}
