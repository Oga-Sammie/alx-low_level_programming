#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of two diagonals in a sqaure matrix
 * @a: matrix
 * @size: size of matrix
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{

	int x = 0; /* x represents the 1st diagonal */
	int y = 0; /* y represents the 2nd diagoanl */
	int z;

	for (z = 0; z < size; z++)
	{
		x = x + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
		y += a[z * size + (size - z - 1)];
	}
	printf("%d, %d\n", x, y);
}
