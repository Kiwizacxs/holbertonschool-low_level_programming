#include <stdio.h>

int
main(void)
{
	int n = 0;

	while (n != 9 + 1)
	{
		putchar(n + '0');
		if (n < 9)
			putchar(','), putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
