#include "main.h"

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	else
		return (check(a + 1, b));
}

int
_sqrt_recursion(int n)
{
	int root;

	if (n < 0)
		return (-1);
	root = check(1, n);
	return (root);
}

