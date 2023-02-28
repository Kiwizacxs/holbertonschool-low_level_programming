#include "main.h"


/**
* print_rev - holaa
* @*s: sem
* @s: esoo
* Return: 0.
*/

void print_rev(char *s)
{
	int regio = 0;

	while (*s++)
	{
		regio--;
	}
	while (a != 1)
	{
		s--;
		if (*s != '\0')
		{
			_putchar (*s);
		}
		regio++;
	}
	_putchar ('\n');
}
