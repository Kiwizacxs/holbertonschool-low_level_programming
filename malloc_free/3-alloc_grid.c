#include "main.h"
#include <stdlib.h>
#include <string.h>

int
**alloc_grid(int width, int height)
{
	int **a;
	int b;
	int c = 0;

	if (width == 0 || height == 0)
		return (NULL);
	a = (int **)malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		a[b] = (int *)malloc(width * sizeof(int));
		if (a[b] == NULL)
		{
			for (c = 0; c < b; c++)
				free(a[c]);
			return (NULL);
		}
		for (c = 0; c < width; c++)
		{
			a[b][c] = 0;
		}
	}
	return (a);
}

