#include "main.h"
#include <stdio.h>

void
print_rev(char *s)
{
	int count = 0;

	for(; *s != '\0'; s++)
	{
		count++;
	}
	for(; count >= 0; count--)
		s--, _putchar(*s);
	_putchar('\n');
}
