#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy  - check the code
 * @dest: men
 * @src: woman
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int b = 0;
	int r = 0; 

	while (src[r] != '\0')
	{
		dest[b] = src[r];
		r++;
		b++;
	}
	dest[b] = '\0';
	return (dest);
}

