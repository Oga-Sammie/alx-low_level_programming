#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: the string to input
*/

void print_rev(char *s)
{
	int x = 0, y;/*where x and y  represents the length of the string*/

	while (s[x] != '\0')
		x++;

	for (y = x - 1; y >= 0; y--)
		_putchar(s[y]);
	_putchar('\n');
}
