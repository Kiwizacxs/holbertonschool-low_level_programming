#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - 1234
* Return: 0
*/

int main(void)
{
	int n;
	int carne;
	 srand(time(0));
	n = rand() - RAND_MAX / 2;
	carne = n  % 10;
	if (carne > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, carne);
	}
	else
		if (carne == 0)
		{
			printf("Last digit of %d is %d and is 0", n, carne);
		}
	if (carne < 6 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, carne);
	}
	return (0);
}
