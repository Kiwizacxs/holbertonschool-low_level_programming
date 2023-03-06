#include "main.h"

/**
 * _puts_recursion - leal
 * @s: motion
 */

void _puts_recursion(char *s)
{
	char *r = s;
	int b = 0;
	while (*s++)
	{
		b++;
	}
	while ( b > 0 )
	{
		_putchar (*r);
		r++;
		b--;
	}
	_putchar ('\n');
}

