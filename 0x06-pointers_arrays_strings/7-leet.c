#include "main.h"

/**
 * leet - encodes string into 1337
 * @n: string to change
 * Return: Always 0
 */

char *leet(char *n)
{

	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int x;
	int y;

	for (y = 0; n[y] != '\0'; y++)
	{
		for (x = 0; a[x] != '\0'; x++)
		{
			if (n[y] == n[x])
				n[y] = b[x];
		}
	}
	return (n);
}
