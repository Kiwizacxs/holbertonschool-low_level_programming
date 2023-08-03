#include "main.h"
#include <stdio.h>
#include <string.h>

char
*_strncpy(char *dest, char *src, int n)
{
	int r = 0;
	int a = strlen(src) + 1;

	while (r != n && r != a)
	{
		dest[r] = src[r];
		r++;
	}
	if (r == n)
	{
		return (dest);
	}
	else 
	{
		while (r != n)
		{
			dest[r] = '\0';
			r++;
		}
	}
	return (dest);
}
