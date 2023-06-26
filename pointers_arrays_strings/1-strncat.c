#include "main.h"
#include <stdio.h>
#include <string.h>

char
*_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);
	int r = 0;

	while (r < n)
	{
		dest[i] = src[r];
		r++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

