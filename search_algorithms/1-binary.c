#include "search_algos.h"

/**
 * binary_search - Function that searches for a value in an array of
 * integers using the Linear search algorithm.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Return: at find value, te function will return the first index where value
 * is located, -1 if array is NULL or if values is not found.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t len = 0, i = 0, finish = 0, aux;
	int fail;

	if (array == NULL)
	{
		return (-1);
	}
	aux = size;
	while (finish != 1)
	{
		finish = 0;
		printf("Searching in array: ");
		while (len != size && array[len] != value)
			len++;
		while (i != size - 1)
		{
			printf("%d, ", array[i]);
			i++, finish++;
		}
		printf("%d\n", array[i]);
		if (array[len] != value || len == size)
		{
			finish++, fail = -1;
		}
		if (len >= size - aux / 2)
		{
			len = size - aux / 2, i = size - aux / 2;
		}
		else
		{
			size--, size = size / 2, i = 0;
		}
		aux = aux / 2;
	}
	if (fail == -1)
		return (-1);

	return (len);
}
