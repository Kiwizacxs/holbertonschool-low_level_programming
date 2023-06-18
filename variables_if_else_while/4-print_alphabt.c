#include <stdio.h>

int
main(void)
{
	char f = 'a';

	while (f != 'z' + 1)
	{
		if (f == 'e' || f == 'q')
			f++;
		putchar(f);
		f++;
	}
	putchar('\n');
	return (0);
}
