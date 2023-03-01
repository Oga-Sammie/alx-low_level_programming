#include "main.h"

/**
 * string_toupper - changes all lowercase of a string to uppercase
 * @n: string to change
 * Return: string to uppercase
 */

char *string_toupper(char *n)
{
	int x;

	for (x = 0; n[x] != '\0'; x++)
	{
		if (n[x] >= 'a' && n[x] <= 'z')
			n[x] = n[x] - 32;
	}
	return (n);
}
