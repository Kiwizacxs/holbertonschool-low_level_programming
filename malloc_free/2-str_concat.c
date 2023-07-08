#include "main.h"
#include <stdlib.h>
#include <string.h>

char
*str_concat(char *s1, char *s2)
{
	char *c;
	int d = 0;
	int a = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	c = malloc(strlen(s1) + strlen(s2) + 1);
	if (c == NULL)
	{
		free(c);
		return (NULL);
	}
	while (s1[d] != '\0')
	{
		c[d] = s1[d];
		d++;
	}
	while (s2[a] != '\0')
	{
		c[d] = s2[a];
		d++;
		a++;
	}
	c[d] = '\0';
	return (c);
}
