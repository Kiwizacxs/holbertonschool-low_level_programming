#include "main.h"
#include <stdio.h>

void
_puts(char *str)
{
	for(; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}

