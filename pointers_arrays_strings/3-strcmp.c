#include <stdio.h>
#include <string.h>

int
_strcmp(char *s1, char *s2)
{
	if (strlen(s1) < strlen(s2))
		return (-15);
	else if (strlen(s1) > strlen(s2))
		return (15);
	return (0);
}
