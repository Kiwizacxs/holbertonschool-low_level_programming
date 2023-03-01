#include "main.h"

/**
* puts2 - hola
* @*str: seno
* @str: coseno
*/

void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str != '\0')
		{
			_putchar (*str);
			str++;
			if (*str == '\0')
			{
				break;
			}
			str++;
		}
	}
	_putchar ('\n');
}
