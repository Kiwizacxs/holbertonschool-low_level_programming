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
		putchar (UP);
	for (UP = 'A'; UP <= 'Z'; UP++)
		putchar (down);
	putchar ('\n');
	}
	return (0);
}
