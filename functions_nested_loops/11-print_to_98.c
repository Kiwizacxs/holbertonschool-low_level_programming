#include "main.h"

/**
* print_to_98 - hola
* @n: hola
* Return: Always 0.
*/

void print_to_98(int n)
{
	int d = 10;

	while (n != 98)
	{
		if (n <= -10 && n > -99)
		{
			_putchar ('-');
			_putchar (((n / d) * (-1)) + '0');
			_putchar (((n % d) * (-1)) + '0');
			_putchar (','), _putchar (' '), _putchar ('-');
		}
		if (n < 0 && n > -10)
		{
			_putchar (((n) * (-1)) + '0');
			_putchar (','), _putchar (' '), _putchar ('-');
		}
		if (n >= 0 && n <= 98)
		{ 
			if (n < 10 && n >= 0)
			{
				_putchar ((n) + '0');
				_putchar (','), _putchar (' ');
			}
			if (n > 9 && n < 98)
			{
				_putchar ((n / d) + '0'), _putchar ((n % d) + '0');
				_putchar (','), _putchar (' ');
			}
		}
		if (n > 98)
		{
			if (n > 99)
			{
				_putchar (((n / d) / (d)) + '0'), _putchar (((n / d) % (d)) + '0'), _putchar ((n % d) + '0');
				_putchar (','), _putchar (' ');
			}
			if (n < 100)
			{
				_putchar ((n / d) + '0'), _putchar ((n % d) + '0');
				_putchar (','), _putchar (' ');
			}
		}
	if (n < 98)
	{
		n++;
	}
	if (n > 98)
	{
		n--;
	}
	if (n == 98)
	{
		_putchar ((n / d) + '0'), _putchar ((n % d) + '0');
		_putchar ('\n');
	}
	}
}
