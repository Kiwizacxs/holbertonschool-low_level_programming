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

	while (b !=  n)
	{
		dest[b] = src[b];
		if (src[b]  == '\0')
		{
			break;
		}
		b++;
	}
	printf("%d\n", n);
	return (dest);

}
