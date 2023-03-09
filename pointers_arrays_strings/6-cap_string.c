#include "main.h"

char
*cap_string(char *str)
{
	int b = 0;
	int r = strlen(str);

		while (b < r)
		{
				if (str[b] >= 97 && str[b] <= 122)
				{
					if (str[b - 1] < 65 && str[b - 1] > 57)
					{
						str[b] = str[b] - 32;
					}
					if (str[b - 1] < 48 && str[b - 1] > 45)
						str[b] = str[b] - 32;
					else if (str[b - 1] < 45)
						str[b] = str[b] - 32;
					else if (str[b - 1] > 90 && str[b - 1] < 97)
						str[b] = str[b] - 32;
					else if (str[b - 1] > 122)
						str[b] = str[b] - 32;
				}
			b++;
		}
	return (str);
}
