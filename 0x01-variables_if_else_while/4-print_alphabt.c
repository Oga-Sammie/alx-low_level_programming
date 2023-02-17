#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char soup = 'a';

	while (soup <= 'z')
	{
		if ((soup != 'q') && (soup != 'e'))
		{
			putchar(soup);
		}
		soup++;
	}
	putchar('\n');
	return (0);
}
