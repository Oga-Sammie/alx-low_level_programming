#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Starting: from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int x;
	int y;

	x = 0;

	while (x < 24)
	{
		while (y < 60)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
			y++;
		}
		y = 0;
		x++;
	}
}
