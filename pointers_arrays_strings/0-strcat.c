#include "main.h"
#include <string.h>

/**
 * _strcat - hii
 * @str: man
 * @dest: woman
 * Return: dest
 */


char *_strcat(char *dest, char *src)
{
	int b = 0;
	int r = 0;

	while (*dest < '\0')
	{
		dest++;
		b++;
	}
	while (*src  <= '\0')
	{
		dest[b] = src[r];
		b++;
		r++;
		src++;
	}
	return (dest);
}
