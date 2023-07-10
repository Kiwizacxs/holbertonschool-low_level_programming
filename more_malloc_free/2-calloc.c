#include "main.h"
#include <stdlib.h>

void
*_calloc(unsigned int nmemb, unsigned int size)
{
	int *c;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * (size + 4));
		if (c == NULL)
			return (NULL);
	for (a = 0; a < (size * nmemb); a++)
		c[a] = 0;
	return (c);
}

