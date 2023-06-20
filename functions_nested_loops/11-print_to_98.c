#include "main.h"
#include <stdio.h>

void
print_to_98(int n)
{
	int h;

	while (n != 98)
	{
		if (n < 0)
		{
			_putchar('-'), h = n * -1;
		}
		else
			h = n;
		if (h == 98)
			_putchar('9'), _putchar('8');

		if (h > 98)
		{
			if (h > 99)
				_putchar((h / 100) + '0');
			_putchar((h / 10) % 10 + '0');
			_putchar((h % 10) + '0');
		}
		if (h > 9 && h < 98)
			_putchar((h / 10) + '0'), _putchar((h % 10) + '0');
		else if (h < 10)
			_putchar(h + '0');
		_putchar(','), _putchar(' ');
		if (n < 98)
			n++;
		else
			n--;

	}
		_putchar('9'), _putchar('8'), _putchar('\n');
}

