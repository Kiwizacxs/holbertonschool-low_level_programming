#include "main.h"

char
*cap_string(char *str)
{
	int len = 0;

	if (str[0] < 123 && str[0] > 90)
		str[0] = str[0] - 32;
	while (str[len] != '\0')
	{
		if (str[len] < 123 && str[len] > 90)
		{
			if (str[len - 1] == 10 || str[len - 1] == 32 || str[len - 1] == 9 ||
			str[len - 1] == 40 || str[len - 1] == 41 || str[len - 1] ==  44 ||
			str[len - 1] == 46 || str[len - 1] == 123 || str[len - 1] == 125 ||
			str[len - 1] == 33 || str[len - 1] == 34 || str[len - 1] == 59 ||
			str[len - 1] == 63)
			{
				str[len] = str[len] - 32;
			}
		}
		len++;
	}
	return (str);
}
