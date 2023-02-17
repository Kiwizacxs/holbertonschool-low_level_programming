#include<stdio.h>

/**
* main - 123
* Return: 0
*/

int main(void)
{
	char UP = 'A';
	char down = 'a';
	{
	for (down = 'a'; down <= 'z'; down++)
		putchar (down);
	for (UP = 'A'; UP <= 'Z'; UP++)
		putchar (UP);
	putchar ('\n');
	}
	return (0);
}
