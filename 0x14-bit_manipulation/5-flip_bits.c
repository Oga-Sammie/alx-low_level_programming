#include "main.h"

/**
 * flip_bits - number of bits to flip
 * @n: integer1
 * @m: integer2
 * Return: Always 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int difference_bits = 0;
	unsigned long int x; /* x represents the diversity */

	x = n ^ m;

	do {
		difference_bits += (x & 1);
		x >>= 1;
	} while
		(x > 0);

	return (difference_bits);
}
