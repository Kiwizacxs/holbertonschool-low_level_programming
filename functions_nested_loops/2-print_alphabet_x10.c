#include "main.h"

/**
* print_alphabet_x10 - nice
* Return: always 0.
*/

void print_alphabet_x10(void)
{
	char a = 'a';
	char b = 0;
		while (b <= 9)
		{
			for (a = 'a'; a <= 'z'; a++)
				_putchar (a);
			_putchar ('\n');
			b++;
		}
}

