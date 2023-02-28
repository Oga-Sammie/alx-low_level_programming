#include "main.h"

/**
* rev_string - a function that reverses a string
* @s: the string to reverse
*/

void rev_string(char *s)
{
	char r = s[0];
	int q = 0, t = 0;

	while (s[q] != '\0')
		q++;
	for (t = 0; t < q; t++)
	{
		q--;
		r = s[t];
		s[t] = s[q];
		s[q] = r;
	}
}
