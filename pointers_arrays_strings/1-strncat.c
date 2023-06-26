#include "main.h"
#include <stdio.h>
#include <string.h>

char
*_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);
	int g = strlen(src);
	int r = 0;

	if (n > g)
			n = g;
	while (r < n)
	{
		dest[i] = src[r];
		r++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

