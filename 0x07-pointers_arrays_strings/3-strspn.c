#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: string to search
* @accept: bytes to be accepted
* Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;

	x = 0;

	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0' && s[x] != accept[y])
			y++;
		if (accept[y] == '\0')
			return (x);
		x++;
	}
	return (x);
}
