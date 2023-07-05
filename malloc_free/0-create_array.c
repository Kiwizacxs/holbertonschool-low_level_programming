#include "main.h"
#include <string.h>
#include <stdlib.h>

char
*create_array(unsigned int size, char c)
{
	char *array;
	unsigned int count;

	array = malloc(size);
	if (array == NULL)
		return (NULL);

	for (count = 0; count != size; count++)
		array[count] = c;
	array[count] = '\0';
	return (array);
}
