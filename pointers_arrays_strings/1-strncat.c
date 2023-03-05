#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - hii
 * @src: mano
 * @dest: womano
 * @n: 1024
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int b = 0;
	int r = 0;
	{

	while (dest[b] != '\0')
	{
		b++;
	}
	while (r < n)
	{
		dest[b] = src[r];
		b++;
		if (src[r] == '\0')
		{
			break;
		}
		r++;
	}
	return (dest);
	}
}
