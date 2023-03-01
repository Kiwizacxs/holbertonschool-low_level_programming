#include "main.h"

/**
* puts_half - hola
* @*str: seno
* @str: coseno
*/

void puts_half(char *str)
{
	int a = strlen(str) / 2;

		if (a % 2 == 0)
		{
			str = str + a +1;
		}
		else if (a % 2 != 0)
		{
			str = str + a;
		}
	while (*str != '\0')
	{
		if (*str != '\0')
		{
			_putchar (*str);
			str++;
		}
	}
	_putchar ('\n');
}
