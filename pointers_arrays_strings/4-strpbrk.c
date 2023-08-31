#include "main.h"

char
*_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		while (accept[i] != '\0')
		{
			if (accept[i] == *s)
			{
				return (s);
			}
			i++;
		}
		i = 0;
		s++;
	}
	return ('\0');
}
