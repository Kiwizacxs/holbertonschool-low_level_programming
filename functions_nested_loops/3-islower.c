#include "main.h"
#include <stdio.h>

int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}
