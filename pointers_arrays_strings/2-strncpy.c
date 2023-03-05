#include "main.h"
#include <stdio.h>

/**
 * _strncpy - leol
 * @n: 1024
 * @dest: xd
 * @src: moon
 * Return: 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (b <  n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	for ( ; b < n; b++)
		dest[b] = '\0';
	return (dest);

}
