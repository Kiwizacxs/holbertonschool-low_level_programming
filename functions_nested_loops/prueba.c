#include "main.h"
#include <stdio.h>

/**
* jack_bauer - 1234
* Return: Always 0.
*/

void jack_bauer(void)
{
	int min = 0;
	int mn2 = 0;
	int hor = 0;
	int hr2 = 0;
	while (hor != 3)
	{
		_putchar ((hor) + '0');
		_putchar ((hr2) + '0');
		_putchar (':');
		_putchar ((min) + '0');
		_putchar ((mn2) + '0');
		_putchar ('\n');
		mn2++;
		if (mn2 == 10)
		{
			mn2 = 0;
			min++;
		}
		if (min == 6)
		{
			min = 0;
			mn2 = 0;
			hr2++;
		}
		if (hr2 == 10)
		{
			min = 0;
			mn2 = 0;
			hr2 = 0;
			hor++;
		}
		if (hor == 2 && hr2 == 4)
		{
			hor = 3;
		}
	}
}
