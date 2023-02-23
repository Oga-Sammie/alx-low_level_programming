#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: the number of characters to print
 */

void print_diagonal(int n)
{
	int c;
	int d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			for (d = 0; d < c; d++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
