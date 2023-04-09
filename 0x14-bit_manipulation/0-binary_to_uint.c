#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 *         string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int num = 0;
	int len = 0;

	/* Check if string b is NULL */
	if (b == NULL)
		return (0);

	/* length of the string b */
	while (b[len] != '\0')
		len++;
	len -= 1;

	/* iterate through string b and change the binary to decimal */
	while (b[x])
	{
		if ((b[x] != '0') && (b[x] != '1'))
			return (0);

		if (b[x] == '1')
			num += (1 * (1 << len));

		x++;
		len--;
	}
	return (num);
}
