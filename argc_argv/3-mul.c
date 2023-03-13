#include <stdio.h>
#include <stdlib.h>


int
main(int argc, char *argv[])
{
	int b, r, i;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	b = atoi(argv[1]);
	r = atoi(argv[2]);
	i = b * r;
	printf("%d\n", i);
	return (0);
}
