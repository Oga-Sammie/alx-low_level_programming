#include "main.h"

/**
* _memcpy - copies memory area
* @src: memory area
* @dest: memory area to fill
* @n: number of bytes
* Return: Pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
}
