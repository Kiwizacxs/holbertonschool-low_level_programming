#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	int a = 1;
	int b = 0;
	int c;

	while (a != argc)
	{
		c = atoi(argv[a]);
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
