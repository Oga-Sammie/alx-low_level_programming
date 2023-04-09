#include "main.h"

/**
 * clear_bit - clear bit to 0 at given index
 * @n: number
 * @index: given index
 * Return: 1 if success, else -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bits;
	unsigned long int mask = 1;

	/* validate index if is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* creating mask */
	mask = ~(mask << index);
	*n = (*n & mask);

	return (1);
}
