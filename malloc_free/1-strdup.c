#include "main.h"
#include <string.h>
#include <stdlib.h>

char
*_strdup(char *str)
{
	char *new_string;
	int count = 0;

	if (str == NULL)
		return (NULL);
	new_string = malloc(strlen(str) + 1);
	if (new_string == NULL)
		{
			free(new_string);
			return (NULL);
		}
	while (str[count] != '\0')
	{
		new_string[count] = str[count];
		count++;
	}
	new_string[count] = '\0';
	return (new_string);
}

