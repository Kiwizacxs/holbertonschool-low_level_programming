#include "main.h"
#include <stdio.h>

char
*_strncpy(char *dest, char *src, int n)
{
	int r = 0;

	while (r != n)
	{
		dest[r] = src[r];
		r++;
		if (src[r] == '\0')
		{
			dest[r] = '\0';
			break;
		}
	}

	return (dest);
}
