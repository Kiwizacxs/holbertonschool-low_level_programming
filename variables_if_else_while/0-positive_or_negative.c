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
	printf("%li is positive", n);
}
else
if (n == 0)
{
	printf("%li is zero", n);
}
else
if (n < 0)
{
	printf("%li is negtive", n );
}
return (0);
}
