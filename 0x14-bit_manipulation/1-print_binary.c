#include "main.h"
#include <stdio.h>
/**
 * print_binary - converts integers to binary
 * @n: the integer
 * Return: Always 0
 */
void print_binary(unsigned long int n)
{
	int len = 0;
	int x;
	unsigned long int y = n;

	while (y > 0)
	{
		len++;
		y >>= 1;
	}
	len -= 1;

	if (n == 0)
		_putchar('0');

	for (; len >= 0; len--)
	{
		x = n >> len;
		if (x & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
