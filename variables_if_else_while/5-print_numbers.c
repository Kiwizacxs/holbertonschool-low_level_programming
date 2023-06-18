#include <stdio.h>

int
main(void)
{
	char n = '0';

	while (n != '9' + 1)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
