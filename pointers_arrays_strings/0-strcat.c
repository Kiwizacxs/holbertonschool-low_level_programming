#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - hii
 * @src: man
 * @dest: woman
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int b = 0;
	int r = 0;
	char *i = src;
	int n = 0;
	{

	while (dest[b] != '\0')
	{
		b++;
		n++;
	}
	while (i[r]  != '\0')
	{
		dest[b] = i[r];
		b++;
		r++;
	}
	dest[b] = '\0';
	return (dest);
	}
}
