#include "main.h"

/**
*  _islower - 123
*  Return: always 0.
*/

int _islower(int c)
{
	if ( c <= 'a' && c >= 'z')
	{
		_putchar ('1');
	}
	else
	{
		_putchar ('0');
	}
}
