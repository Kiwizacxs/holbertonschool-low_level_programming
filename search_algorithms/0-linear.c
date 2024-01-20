#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array of
 * integers using the Linear search algorithm.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Return: at find value, te function will return the first index where value
 * is located.
 */

int linear_search(int *array, size_t size, int value)
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
