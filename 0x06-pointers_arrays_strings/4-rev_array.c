#include "main.h"

/**
 * reverse_array - function that reverses the content of array of integers
 * @a: array of integers
 * @n: number of chars
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
