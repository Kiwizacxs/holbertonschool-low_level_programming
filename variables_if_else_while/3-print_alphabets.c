#include <stdio.h>

int
main(void)
{
	char f = 'a';

	while (f != 'z' + 1)
	{
		putchar(f);
		f++;
	}
	f = 'A';
	while (f != 'Z' + 1)
	{
		putchar(f);
		f++;
	}
	putchar('\n');
	return (0);
}
