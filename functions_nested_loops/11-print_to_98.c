#include "main.h"
#include <stdio.h>

void
print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			if (n > 99)
			{
				_putchar((n / 100) + '0'), _putchar((n / 10) % 10 + '0');
				_putchar((n % 10) + '0');
			}
			else if (n < 100)
				_putchar((n / 10) + '0'), _putchar((n % 10) + '0');
			_putchar(','), _putchar(' ');
			n--;
		}
		if (n < 98)
		{
		if (n < 0)
		{
			_putchar('-');
			if (n < -9)
				_putchar((n * -1) / 10 + '0');
			_putchar((n * -1) % 10 + '0');
		}
		else if (n > 9)
			_putchar((n / 10) + '0'), _putchar((n % 10) + '0');
		else
			_putchar((n % 10) + '0');
		_putchar(','), _putchar(' ');
		n++;
		}
	}
		_putchar('9'), _putchar('8'), _putchar('\n');
}

