#include "main.h"
#include <stdio.h>
#include <string.h>

void
puts_half(char *str)
{
	int n = strlen(str) / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

