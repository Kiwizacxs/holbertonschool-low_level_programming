#include "main.h"

/**
* print_sign - hola
* @n: variable n
* Return: Always 0.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar ('+');
	}
	else
		if (n = 0)
		{
			return (0);
				_putchar (0);
		}
		else
			if (n < 0)
			{
				return (-1);
				_putchar ('-');
			}
			else
				return (0);
}
