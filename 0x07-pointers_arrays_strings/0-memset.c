#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: pointer to  memory area
 */

char *_memset(char *s, char b, unsigned int n)
{

	int size = n; 

	if (size > 0)
	{
		int x;

		for (x = 0; x < size; x++)
			s[x] = b;
	}
	return (s);
}
