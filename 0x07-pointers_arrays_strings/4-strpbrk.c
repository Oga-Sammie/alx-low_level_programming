#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string to be searched
* @accept: bytes in the string
* Return: Always 0
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
