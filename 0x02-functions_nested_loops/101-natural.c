#include <stdio.h>

/**
* main - lists all natural numbers below 1024 (excluded)
* Return: Always 0
*/
int main(void)
{
	int x;
	int y;

	y = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y += x;
		}
		x++;
	}
	printf("%d\n", y);
	return (0);
}
