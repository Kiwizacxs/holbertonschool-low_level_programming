#include "main.h"

/**
* swap_int
* @a*: h
* @b*: o
* @a: l
* @b: a
*/

void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
