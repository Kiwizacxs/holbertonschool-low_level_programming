#include "main.h"
#include <stdio.h>

/**
* _strlen - hol
* @*s: xi
* @s: hola
* Return: Always 0.
*/

int _strlen(char *s)
{
	int a = 0;

	while (*s++)
	{
		a++;
	}
	return (a);
}

