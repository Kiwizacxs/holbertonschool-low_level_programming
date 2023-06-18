#include <stdio.h>

int
main(void)
{
	char f = 'z';

	while (f != 'a' -1)
	{
		putchar(f);
		f--;
	}
	putchar('\n');
	return (0);
}
