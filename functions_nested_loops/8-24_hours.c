#include "main.h"

/**
* jack_bauer - 1234
* Return: Always 0.
*/

void jack_bauer(void)
{
	int a = 0;
	int b = 0;

	{
	while (a == 23 && b == 59)
	{
		if (a < 10 && b < 10)
		{
			_putchar ('0');
			_putchar (a + '0');
			_putchar (':');
			_putchar ('0');
			_putchar (b + '0');
			b++;
		}
		else
		{
			_putchar (a + '0');
			_putchar (':');
			_putchar (b + '0');
			b++;
			if (b == 59)
			{
				a++;
				b = 0;
			}
		}
	}
	}
}

