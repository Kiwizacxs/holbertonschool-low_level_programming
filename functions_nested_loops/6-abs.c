#include "main.h"
#include <stdlib.h>

/**
 * _abs - hola
 * @n: hola
 * Return: Alway 0.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		_putchar (n + '0');
	}
	else
		n = n * -1;
	_putchar (n + '0');
	return (0);
}
