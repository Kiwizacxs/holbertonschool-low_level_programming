#include "main.h"

char 
*leet(char *s)
{
	int i = strlen(s);
	char b[]= "43071";
	int r = 0;

		while (r < i)
		{
			if (s[r] == 'a')
				s[r] = b[0];
			else if (s[r] == 'A')
				s[r] = b[0];
			else if (s[r] == 'e')
				s[r] = b[1];
			else if (s[r] == 'E')
				s[r] = b[1];
			else if (s[r] == 'o')
				s[r] = b[2];
			else if (s[r] == 'O')
				s[r] = b[2];
			else if (s[r] == 't')
				s[r] = b[3];
			else if (s[r] == 'T')
				s[r] = b[3];
			else if (s[r] == 'l')
				s[r] = b[4];
			else if (s[r] == 'L')
				s[r] = b[4];
			r++;
		}
		return (s);
}
