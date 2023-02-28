#include "main.h"

/**
 * _strlen - the length of a string to be returned
 * @s: char input
 * Return: length of a string
 */

int _strlen(char *s)
{
	int x; /*x represents the length*/

	x = 0;
	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
