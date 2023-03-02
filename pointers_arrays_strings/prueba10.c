#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	char l[] = "-21234";
	int r;
	r = l[0] % 48;
	r = r * 10;
	r = r + l[1] % 48;
	printf("%d", r);
	return (0);
}
