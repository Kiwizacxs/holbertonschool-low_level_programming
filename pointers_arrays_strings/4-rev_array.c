#include "main.h"

void
reverse_array(int *a, int n)
{
	int len = 0;
	int aux = 0;
	int i = n / 2;

	n--;
	if (n > 0)
	{
		while (len != i)
		{
			aux = a[len];
			a[len] = a[n];
			a[n] = aux;
			len++;
			n--;
		}
	}
}
