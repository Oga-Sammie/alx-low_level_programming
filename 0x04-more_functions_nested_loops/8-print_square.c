#include "main.h"

/**
 * print_square - print a square
 * @size: the size of the square
 */

void print_square(int size)
{
	int c, d;

	if (size > 0)
	{
		for (c = 1; c <= size; c++)
		{
			for (d = 1; d <= size; d++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
