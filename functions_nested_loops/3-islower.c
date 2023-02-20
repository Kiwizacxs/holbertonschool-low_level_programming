#include "main.h"

/**
* _islower - 123
* @c: variable for c
* Return: always 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
