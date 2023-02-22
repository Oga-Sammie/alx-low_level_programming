#include <stdio.h>

/**
* main - lists all natural numbers below 1024 (excluded)
* Return: Always 0
*/
int main(void)
{
	int x; sum;

	sum = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum += x;
		}
		x++;
	}
	printf("%d\n", sum);
	return (0);
}
