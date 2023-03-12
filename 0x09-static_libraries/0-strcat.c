#include "main.h"

/**
* _strcat - concatenates two strings
* @src: String to be appended
* @dest: String to be appended to
* Return: Returns a string joined together
*/
char *_strcat(char *dest, char *src)
{
	int length = 0;

	int i;

	while (dest[length])
		length++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}

	dest[length] = '\0';

	return (dest);
}
