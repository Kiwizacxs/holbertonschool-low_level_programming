#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _atoi - hola
* @s: holaaa
* Return: 0
*/

int _atoi(char *s)
{
	int g = 0;
	int r = 0;
	unsigned int b = strlen(s);
	unsigned int sign = 1;

	while (r != b)
	{
		if (s[r] == '-')
		{
			sign = sign * -1;
		}
		if (s[r] >= 48 && s[r] <= 57)
		{
			g = g + s[r] % 48;
			g = g * 10;
		}
		if (s[r] % 59 == 0)
		{
			break;
		}
	r++;
	}
	g = g / 10;
	return (g * sign);
}
