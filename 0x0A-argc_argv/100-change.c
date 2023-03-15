#include <stdio.h> /* printf */
#include <stdlib.h> /* atoi */

/**
 * main - Number of coins to make a given amount of cents
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on success, 1 if an argument wasn't a number
 */

int main(int argc, char *argv[])
{
	int cents; /* Amount of cents to be formed from the coins */
	int tmp_store;
	int change = 0; /* Number of coins to make amount of cents */
	int coins[5] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; i < 5; i++)
	{
		tmp_store = (cents / coins[i]);
		cents -= (tmp_store * coins[i]);
		change += tmp_store;

		if (cents == 0)
			break;
	}

	printf("%d\n", change);
	return (0);
}
