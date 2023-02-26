#include "main.h"

/**
* print_square - holaa
* @size: hola
* Return: 0.
*/

void print_square(int size)
{
	int i = 0;
	int e = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (e = 0; e < size; e++)
			{
				_putchar (35);
			}
			_putchar ('\n');
		}
	}
	if (size <= 0)
	{
		_putchar ('\n');
	}
}
