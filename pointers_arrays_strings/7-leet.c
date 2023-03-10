#include "main.h"

char
*leet(char *l)
{
	int num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int lett[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b = 0;
	int r = 0;

	while (l[r] != '\0')
	{
		while (lett[b] != '\0')
		{
			if (l[r] == lett[b])
			{
				l[r] = num[b];
			}
			b++;
		}
		b = 0;
		r++;
	}
	return (l);
}
