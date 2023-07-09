#include "main.h"
#include <stdlib.h>
#include <string.h>

char
*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0;
	unsigned int b = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	c = malloc(strlen(s1) + n + 1);
	if (c == NULL)
		return (NULL);
	while (s1[a] != '\0')
	{
		c[a] = s1[a];
		a++;
	}
	while (b != n)
	{
		c[a] = s2[b];
		a++;
		b++;
	}
	c[a] = '\0';
	return (c);
}

