#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: the number of characters to draw
 */

void print_line(int n)
{
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
