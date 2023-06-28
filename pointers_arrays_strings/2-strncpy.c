#include "main.h"
#include <stdio.h>
#include <string.h>

char
*_strncpy(char *dest, char *src, int n)
{
	int r = 0;
	int a = strlen(src);

	if (a < n)
		n = a + 1;
	while (r != n)
	{
		if (*src == '\0')
			dest[r] = '\0';
		else
			dest[r] = src[r];
		r++;
	}

	return (dest);
}
