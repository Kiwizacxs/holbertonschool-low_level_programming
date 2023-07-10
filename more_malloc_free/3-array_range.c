#include "main.h"
#include <stdlib.h>
#include <string.h>

int
*array_range(int min, int max)
{
	int *a;
	int b = 0;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[b] = min;
		b++;
		min++;
	}
	return (a);
}
