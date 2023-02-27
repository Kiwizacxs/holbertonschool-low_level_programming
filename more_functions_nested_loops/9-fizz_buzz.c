#include <stdio.h>

/**
* main - hola
* @fizz: holas
* @buzz: queonda
* Return: 0.
*/
int main(void)
{
	int n = 1;
	int q = 100;

	for (n = 1; n <= q; n++)
	{
		if (n > 1 && n <= 100)
		{
			putchar (' ');
		}
		if (n % 5 == 0 && n % 3 == 0)
		{
			putchar ('F'), putchar ('i'), putchar ('z'), putchar ('z');
			putchar ('B'), putchar ('u'), putchar ('z'), putchar ('z');
		}
		else
			if (n % 3 == 0)
			{
				putchar ('F'), putchar ('i'), putchar ('z'), putchar ('z');
			}
			else if (n % 5 == 0)
			{
				putchar ('B'), putchar ('u'), putchar ('z'), putchar ('z');
			}
			else
			{
				if (n > 9)
				{
					putchar ((n / 10) + '0'), putchar ((n % 10) + '0');
				}
			else
				putchar ((n) + '0');
			}
	}
	putchar ('\n');
	return (0);
}
