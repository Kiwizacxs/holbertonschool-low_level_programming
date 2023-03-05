#include "main.h"

/**
 * _strcmp - lole
 * @dest: melo
 * @src: paisje
 * Return: 0.
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, r;

	while (*s1++)
	{
		s1++;
		b++;
	}
	while (*s2++)
	{
		s2++;
		a++;
	}
	if (b < a)
	{
		r = 13;
	}
	else if (b == a)
	{
		r = 0;
	}
	else if (b > a)
	{
		r = -13;
	}
	return (r);
}
