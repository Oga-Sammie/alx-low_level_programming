#include "main.h"

/**
* more_numbers - prints 0 to 14 n times where n is 10
*/
void more_numbers(void)
{
	int r, s;

	for (r = 0; r < 10; r++)
	{
		for (s = 0; s <= 14; s++)
		{
			if (s > 9)
				_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
		}
		_putchar('\n');
	}
}
