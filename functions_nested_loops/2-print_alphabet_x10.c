#include "main.h"

/**
* print_alphabet_x10 - nice
* Return: always 0.
*/

void print_alphabet_x10(void)
{
	char a = 'a';
	char b = 0;
		while (b <= 10)
		{
			for (a = 'a'; a <= 'z'; a++)
				_putchar (a);
			b++;
		}
}

