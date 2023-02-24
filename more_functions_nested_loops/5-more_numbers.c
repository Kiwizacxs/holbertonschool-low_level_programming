#include "main.h"

/**
* more_numbers - 123
* Return: 0
*/

void more_numbers(void)
{
	int a;
	int b = 0;
	int d = 10;

	while (a != 10)
	{
		for (b = 0; b < 15; b++)
			if (b > 9)
			{
				_putchar ((b / d) + '0'), _putchar ((b % d) + '0');
			}
			else
				_putchar ((b) + '0');
		printf("\n");
		a++;
	}
}
