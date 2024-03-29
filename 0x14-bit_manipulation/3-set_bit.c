#include "main.h"

/**
 * set_bit - set bit to 1 at given index
 * @n: number
 * @index: given index
 * Return: 1 if success, else -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int mask = 1;

	/* validate index if is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	mask <<= index;
	*n = (*n | mask);

	return (1);
}
