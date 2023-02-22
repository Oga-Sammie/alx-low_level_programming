#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Starting: from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int q;
	int r;
	int s;
	int t;

	for (q = 0; q <= 2; q++)
	{
		for (r = 0; r <= 9; r++)
		{
			if ((q <= 1 && r <= 9) || (q <= 2 && r <= 3))
			{
				for (s = 0; s <= 5; s++)
				{
					for (t = 0; t <= 9; t++)
					{
						_putchar(q + '0');
						_putchar(r + '0');
						_putchar(58);
						_putchar(s + '0');
						_putchar(t + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
