#include "main.h"

/**
* _strncpy - copies strings
* @dest: the destination
* @src: source to copy
* @n: number of bytes
* Return: copied string (char)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x =  0;
	int y;
	/* where x and y are strrings to be copied */

	while (src[x])
		x++;
	for (y = 0; y < n && src[y]; y++)
		dest[y] = src[y];
	for (y = x; y < n; y++)
		dest[y] = '\0';
	return (dest);
}
