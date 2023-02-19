#include <stdio.h>

/**
* main -1234
* Return: 0
*/

int main(void)
{
	int a = 0;
	int b = 9;
	{
		while (a <= b)
		{
			putchar ((a) + '0');
			a++;
		if (a <= 9)
			{
		putchar (',');
		putchar ('\t');
			}
		};
	}
return (0);
}
