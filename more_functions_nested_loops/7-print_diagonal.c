#include "main.h"

/**
* print_diagonal - hola
* @n: felacio
* Return: 0.
*/

void print_diagonal(int n)
{
	int a = 1;
	int b = 1;

	if (n <= 0)
	{ 
		_putchar ('\n');
	}
	else if (n > 0)
	{
		for (a = 1; a <=  n; a++)
		{
			_putchar (92);
			_putchar ('\n');
			for (b = 1; b <= a; b++)
			{
			_putchar (' ');
			}
		}
	}
}	
