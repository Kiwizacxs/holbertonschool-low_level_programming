#include "main.h"
#include <stddef.h>

void swap_int(int *a, int *b)
{
	int save = *a;

	*a = *b;
	*b = save;
}
