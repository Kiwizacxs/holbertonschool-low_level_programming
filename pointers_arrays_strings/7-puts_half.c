#include "main.h"

/**
* puts_half - hola
* @*str: seno
* @str: coseno
*/

void puts_half(char *str)
{
	int a = strlen(str) / 2;

		str = str + a;
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
