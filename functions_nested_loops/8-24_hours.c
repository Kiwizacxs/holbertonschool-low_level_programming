#include "main.h"
#include <stdio.h>

void
jack_bauer(void)
{
	int n = 0, g = 0, h = 0, i = 0;

	while (n != 3)
	{
		if (n == 2 && g == 4)
			break;
		while (h != 6)
		{
			_putchar(n + '0'), _putchar(g + '0'), _putchar(':');
			_putchar(h + '0'), _putchar(i + '0'), _putchar('\n');
			if (i == 9)
			{
				h++;
				i = -1;
			}
			i++;
		}
		h = 0;
		if (g == 9)
		{
			n++;
			g = 0;
		}
		g++;
	}
}
