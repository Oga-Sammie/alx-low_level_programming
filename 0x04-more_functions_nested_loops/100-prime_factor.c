#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */

int main(void)
{
	long prime_num = 612852475143;
	long x = 2;

	while (x < prime_num)
	{
		if ((prime_num % x) == 0)
		{
			prime_num /= x;
			x = 2;
		}
		else
			x++;
	}
	printf("%ld\n", prime_num);
	return (0);
}
