#include "main.h"
#include <stdlib.h>

/**
 * get_bit - get bit at the index
 * @n: the number
 * @index: given index
 * Return: bit 0 or 1, else -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned long int max_bits;

	/* validate index if not out of range */
	max_bits = ((sizeof(unsigned long int)) * 8);
	if (index > max_bits)
		return (-1);

	bit = ((n >> index) & 1);
	return (bit);
}
