#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme
 * Return: Always 0 if successful
 */

int main(void)
{
	char pass_word[84];
	int index = 0;
	int sum = 0;
	int x;
	int y;

	srand(time(0));

	while (sum < 2772)
	{
		pass_word[index] = 33 + rand() % 94;
		sum += pass_word[index++];
	}

	pass_word[index] = '\0';

	if (sum != 2772)
	{
		x = (sum - 2772) / 2;
		y = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			x++;

		for (index = 0; pass_word[index]; index++)
		{
			if (pass_word[index] >= (33 + x))
			{
				pass_word[index] -= x;
				break;
			}
		}
		for (index = 0; pass_word[index]; index++)
		{
			if (pass_word[index] >= (33 + y))
			{
				pass_word[index] -= y;
				break;
			}
		}
	}
	printf("%s", pass_word);
	return (0);
}
