#include "main.h"

/**
 * print_times_table - print the n times table
 * @n: starting point
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = (x * y);
				if (y == 0)
					_putchar('0' + z);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (z <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + z);
					}
					else if (z > 9 && z < 100)
					{
						_putchar(' ');
						_putchar('0' + (z / 10));
						_putchar('0' + (z % 10));
					}
					else if (z >= 100)
					{
						_putchar('0' + (z / 100));
						_putchar('0' + ((z / 10) % 10));
						_putchar('0' + (z % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
