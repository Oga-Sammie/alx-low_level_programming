#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string
 * Return: converted string
 */

int _atoi(char *s)
{
	short flag;
	int x;
	int min;
	int conv;

	x = min = conv = flag = 0;
	min = -1;

	while (s[x] != '\0')
	{
		if (s[x] == '-')
			min *= -1;

		if (s[x] >= '0' && s[x] <= '9')
		{
			conv *= 10;
			conv -= (s[x] - '0');
			flag = 1;
		}
		else if (flag == 1)
			break;
		x++;
	}
	conv *= min;
	return (conv);
}
