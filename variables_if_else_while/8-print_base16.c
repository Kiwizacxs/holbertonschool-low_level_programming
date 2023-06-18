#include <stdio.h>

int
main(void)
{
	char n = '0';
	char l = 'a';

	while (n != '9' + 1)
	{
		putchar(n);
		n++;
	}
	while (l != 'f' + 1)
	{
		putchar(l);
		l++;
	}

	putchar('\n');
	return (0);
}
