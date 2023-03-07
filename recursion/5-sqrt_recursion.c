#include "main.h"

int
raiz_cuadrada(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	else
		return (raiz_cuadrada(a +  1, b));
}

int
_sqrt_recursion(int n)
{
	int c;

	if (n < 0)
		return (-1);
	c = raiz_cuadrada(1, n);
	return (c);
}



