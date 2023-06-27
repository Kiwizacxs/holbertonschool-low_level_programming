#include "main.h"
#include <stdio.h>

char
*_strncpy(char *dest, char *src, int n)
{
	int r = 0;

	while (r != n  && src[r] != '\0')
	{
		dest[r] = src[r];
		r++;
	}
	dest[r] = '\0';
	return (dest);
}
