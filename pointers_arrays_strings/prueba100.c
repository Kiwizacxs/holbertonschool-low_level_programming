#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _atoi - hola
* @s: holaaa
* @nb: peeero que pasa chavales
*/

int _atoi(char *s)
{
	int r = 0;
	int nb = 0;

	nb = 0;
	while(*s < '\0')
	{
		if (r >= 48 && r <= 57)
		{
			nb = nb + s[r] % 48;
			nb = nb * 10;
		}
		r++;
		s++;
	}
	return (0);
}
