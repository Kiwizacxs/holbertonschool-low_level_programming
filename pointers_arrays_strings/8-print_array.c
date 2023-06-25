#include "main.h"
#include <stdio.h>

void
print_array(int *a, int n)
{
	int b = 0;

	while (b <= n - 1)
	{
		printf("%d", a[b]);
		if (b < n - 1)
			printf(", ");
		b++;
	}
	printf("\n");
}

