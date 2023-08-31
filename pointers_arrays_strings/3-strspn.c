#include "main.h"

unsigned int
_strspn(char *s, char *accept)
{
	unsigned int n = 0, i = 0;

	while (s[n] != '\0')
	{
		while (accept[i] != s[n])
		{
			if (accept[i] == '\0')
			{
				return (n);
			}
			i++;
		}
		i = 0;
		n++;
	}
	return (n);
}
