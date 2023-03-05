#include "main.h"
#include <stdio.h>

/**
 * reverse_array - holapo
 * @a: eco
 * @n: nomia
 */

void reverse_array(int *a, int n)
{
	int b = n / 2;
	int i;
	int r;

	for (i = 0; i < b; i++)
	{
		r = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = r;
	}
}
