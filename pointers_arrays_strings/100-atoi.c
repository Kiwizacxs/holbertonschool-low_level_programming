#include "main.h"
#include <stdio.h>
#include <limits.h>

int
_atoi(char *s)
{
	unsigned int num = 0;
	int count = 0;
	int sig = 0;

	while (s[count] != '\0')
	{
		if (s[count] == 45)
			sig--;
		else if (s[count] == 43)
			sig++;
		if (s[count] >= 48 && s[count] <= 57)
		{
			num = num + s[count] % 48;
			if (s[count + 1] >= 48 && s[count + 1] <= 57)
				num = num * 10;
			else
				break;
		}
		count++;
	}
	if (sig < 0)
		num = num * -1;
	return (num);
}
