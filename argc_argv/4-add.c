#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int
main(int argc, char *argv[])
{
	int a = 1;
	int b = 0;
	int c, d;

	while (a != argc)
	{
		for (d = 0; argv[a][d] != '\0'; d++)
			if (argv[a][d] > 57 || argv[a][d] < 48)
			{
				printf("Error\n");
				return (1);
			}
		c = atol(argv[a]);
		if (c == 0)
		{
			printf("Error\n");
			return (1);
		}
		b = b + c;
		a++;
	}
	printf("%d\n", b);
	return (0);
}
