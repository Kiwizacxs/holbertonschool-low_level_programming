#include "main.h"
#include <stdio.h>

char
*_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0'
			)
	{
		dest[n] = src[n];
		n++;
	}
	return (dest);
}

