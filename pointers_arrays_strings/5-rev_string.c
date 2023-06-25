#include "main.h"
#include <stdio.h>
#include <string.h>

void
rev_string(char *s)
{
	int n = strlen(s);
	int i = n / 2;
	int b = 0;
	char save;

	while (i != 0)
	{
		n--;
		save = s[b];
		s[b] = s[n];
		s[n] = save;
		b++;
		i--;
	}
}
