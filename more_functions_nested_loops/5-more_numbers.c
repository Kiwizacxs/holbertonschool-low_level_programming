#include "main.h"

/**
* more_numbers - 123
* Return: 0
*/

void more_numbers(void)
{
	int a = 0;
	int b = 0;

	while (a != 10)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
			{
			_putchar ((b / 10) + '0');
			}
			_putchar ((b % 10) + '0');
		}
		a++;
		_putchar ('\n');
	}
}
