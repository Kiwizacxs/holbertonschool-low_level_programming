#include "main.h"
#include <stdlib.h>

void
*_calloc(unsigned int nmemb, unsigned int size)
{
	int *c;
	unsigned int a = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
		if (c == NULL)
			return (NULL);
	while (a < nmemb * size)
	{
		c[a] = 0;
		a++;
	}
	return (c);
}

