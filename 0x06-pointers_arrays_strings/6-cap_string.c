#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: string to change
 * Return: Always 0
 */

char *cap_string(char *n)
{
	int x;
	int y;
	int alpha = 32;
	int punc[] = {',', ';', '.', '?', '"',
			    '(', ')', '{', '}', ' ', '\n', '\t'};

	for (x = 0; n[x] != '\0'; x++)
	{
		if (n[x] >= 'a' && n[x] <= 'z')
		{
			n[x] = n[x] - alpha;
		}
		alpha = 0;
		for (y = 0; y <= 12; y++)
		{
			if (n[x] == punc[y])
			{
				y = 12;
				alpha = 32;
			}
		}
	}
	return (n);
}
