#include "main.h"
#include <stdio.h>
#include <string.h>

char
*_strncpy(char *dest, char *src, int n)
{
	int r = 0;
	int a = strlen(src);

	if (*src == '\0')
	{
		*dest = '\0';
		return (dest);
	}
	if (a < n)
		n = a + 1;
	while (r != n)
	{
		dest[r] = src[r];
		r++;
	}

	return (dest);
}
