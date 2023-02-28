#include "main.h"

/**
* puts_half - prints half of a string
* @str: the string to input
*/

void puts_half(char *str)
{
	int x = 0;
	int y = 0;
	int z;

	while (str[x++])
		y++;

	if ((y % 2) == 0)
		z = y / 2;

	else
		z = (y + 1) / 2;

	for (x = z; x < y; x++)
		_putchar(str[x]);

	_putchar('\n');
}
