#include "main.h"

/**
* _strncat - concatenates two strings
* @src: first string
* @dest: second string
* @n: number of bytes
* Return: concatenates string
*/

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y;
	/* where x and y represents string */

	while (dest[x])
		x++;

	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
