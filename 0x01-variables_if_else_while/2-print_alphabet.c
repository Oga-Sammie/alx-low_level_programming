#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char game = 'a';

	while (game <= 'z')
	{
		putchar(game);
		game++;
	}
	putchar('\n');
	return (0);
}
