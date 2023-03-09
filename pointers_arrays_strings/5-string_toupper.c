#include "main.h"
#include <stdio.h>

/**
 * string_toupper - hola
 * @str: holaaa
 * Return: 0.
 */

char *string_toupper(char *str)
{
	int b = 0;
	int r = strlen(str);

	for (b = 0; b <= r; b++)
		if (str[b] >= 'a' && str[b] <= 122)
		{
			str[b] = str[b] - 32;
		}
	return (str);
}
