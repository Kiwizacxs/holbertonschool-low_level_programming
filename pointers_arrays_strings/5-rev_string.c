#include "main.h"
#include <string.h>


/**
* rev_string - holaa
* @*s: sem
* @s: esoo
* Return: 0.
*/

void rev_string(char *s)
{
	int b = strlen(s) -1;
	int a = b / 2;
	char r;

	for (a = b / 2; a >= 0; a--)
	{
		r = s[a];
		s[a] = s[b - a - 1];
		s[b - a - 1] = r;
	}
}
