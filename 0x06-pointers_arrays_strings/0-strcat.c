#include "main.h"

/**
* _strcat - a function that concatenates two strings
* @dest: second  string
* @src: first string 
* Return: a concatenated string
*/

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y;
	/* where x and y represents the strings */

	while (dest[x])
		x++;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
