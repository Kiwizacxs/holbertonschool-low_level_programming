#include "search_algos.h"

int
linear_search(int *array, size_t size, int value)
{
	int n = 0;
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i != size)
	{
		printf("Value checked array[%d] = [%d]\n", n, array[i]);
		if (array[i] == value)
			return (n);
		i++;
		n++;
	}
	return (-1);
}
