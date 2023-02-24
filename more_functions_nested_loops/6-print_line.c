#include "main.h"

/**
* print_line - hjl
* @n: jeje
* Return: 0.
*/

void print_line(int n)
{
	int a = 0;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
		while (a != n)
		{
			_putchar (95);
			a++;
		}
	if (n > 0)
	{
		_putchar ('\n');
	}
}
