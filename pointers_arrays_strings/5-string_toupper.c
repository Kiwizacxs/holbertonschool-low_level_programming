#include "main.h"

char
*string_toupper(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (str[len] > 90)
		{
			str[len] = str[len] - 32;
		}
		len++;
	}
	return (str);
}
