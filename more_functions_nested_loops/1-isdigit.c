#include "main.h"
#include <stdio.h>

int
_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

