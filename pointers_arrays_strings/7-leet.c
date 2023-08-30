#include "main.h"

char
*leet(char *str)
{
	char *aux = "aAeEoOtTlL";
	char *aux2 = "4433007711";
	int len = 0, i = 0;

	while (str[len] != '\0')
	{
		while (aux[i] != '\0')
		{
			if (str[len] == aux[i])
			{
				str[len] = aux2[i];
				break;
			}
			i++;
		}
		i = 0;
		len++;
	}
	return (str);
}
