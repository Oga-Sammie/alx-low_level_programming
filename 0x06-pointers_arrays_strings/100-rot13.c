#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: Always 0
 */

char *rot13(char *s)
{
	int x = 0;
	int y = 0;
	char alpha_1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha_2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + x) != 0)
	{
		for (y = 0; y <= 52; y++)
		{
			if (*(s + x) == alpha_1[y])
			{
				*(s + x) = alpha_2[y];
				break;
			}
		}
				x++;
	}
		return (s);
}
