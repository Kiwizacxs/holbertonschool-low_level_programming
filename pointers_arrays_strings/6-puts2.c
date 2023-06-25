#include "main.h"
#include <stdio.h>

void
puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str + 1 == '\0')
			   break;
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}

