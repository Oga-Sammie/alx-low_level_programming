#include "main.h"
/**
* _strpbrk - Finds 1st character matching
* @s:	String to be compared to
* @accept:	string of bytes to compare from
* Return:	Pointer to character in s matching accept
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *s != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s);
		}

	}

	return (0);
}
