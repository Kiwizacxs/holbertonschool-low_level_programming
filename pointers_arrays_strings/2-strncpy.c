#include "main.h"

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

	while (b !=  n + 1)
	{
		dest[b] = src[b];
		if (dest[b] == '\0')
		{
			break;
		}
		b++;
	}
	return (dest);

}
