#include "main.h"

/**
*  _islower - 123
*  Return: always 0.
*/

int _islower(void)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar ((c) + '0');
	}
	else
	{
		_putchar ((c) + '1');
	}
}
