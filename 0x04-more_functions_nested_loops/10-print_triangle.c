#include "main.h"

/**
* print_triangle - print a triangle
* @size: the size of the triangle
*/

void print_triangle(int size)
{
	int q, r, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (q = 0; q < size; q++)
		{
			for (r = size - q; r > 1; r--)
			{
				_putchar(32);
			}
			for (s = 0; s <= q; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
