#include "main.h"
#include <stdio.h>

void print_alphabet_x10(void)
{
	char abc;
	int ten;

	for (ten = 0; ten < 10; ten++)
	{
		for (abc = 97; abc < 122; abc++)
			_putchar(abc);
		_putchar(10);
	}
}
