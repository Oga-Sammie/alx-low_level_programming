#include "main.h"

/**
* puts2 - prints every other character of a string
* @str: character to input
*/

void puts2(char *str)
{
	int x = 0;
	int y = 0;

	while (str[x++])
		y++;

	for (x = 0; x < y; x += 2)
		_putchar(str[x]);

	_putchar('\n');
}
