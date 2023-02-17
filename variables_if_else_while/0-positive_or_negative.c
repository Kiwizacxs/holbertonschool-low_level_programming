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
			srand(time(0));
				n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("'n' is positive");
}
else
if (n == 0)
{
	printf("'n' is zero");
}
else
if (n < 0)
{
	printf("'n' is negtive");
}
return (0);
}
