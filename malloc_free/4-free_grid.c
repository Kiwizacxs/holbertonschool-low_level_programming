#include "main.h"
#include <stdlib.h>
#include <string.h>

void
free_grid(int **grid, int height)
{
	int b = 0;

	while (b < height)
	{
		free(grid[b]);
		b++;
	}
	free(grid);
}

