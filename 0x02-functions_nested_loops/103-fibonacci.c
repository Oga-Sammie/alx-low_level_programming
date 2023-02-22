#include <stdio.h>

/**
 * main - print sum of even-valued terms
 * Return: Always 0
 */

int main(void)
{
	int terms = 0;
	int x = 1;
	int y = 1;
	int f = 1;

	while (y < 4000000)
	{
		f = x + y;
		x = y;
		y = f;
		if ((f <= 4000000) && (f % 2 == 0))
			terms += f;
	}
	printf("%d\n", terms);

	return (0);
}
