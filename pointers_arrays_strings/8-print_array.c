#include "main.h"
#include <stdio.h>

/**
* print_array - hollal
* @a: holla
* @n: hola
*/

void print_array(int *a, int n)
{
	int h = 0;

	while (h < n)
	{
		printf("%d", a[h]);
			h++;
		if (h < n)
		{
		putchar (','), putchar (' ');
		}
	}
	putchar ('\n');
}
