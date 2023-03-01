#include "main.h"

/**
 * leet - encodes string into 1337
 * @n: string to change
 * Return: Always 0
 */

char *leet(char *n)
{
	int x;
	int y;
	int search[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int change[] = {'4', '3', '0', '7', '1'};

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (n[x] == search[y])
			{
				n[x] = change[y / 2];
				y = 9;
			}
		}
	}
	return (n);
}
