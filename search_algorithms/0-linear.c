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
    size_t len = 0;

    while (len != size && array[len] != value)
    {
        printf("Value checked array[%ld] = [%d]\n", len, array[len]);
        len++;
    }
    if (len == size)
    {
        return (-1);
    }
    return (len);
}
