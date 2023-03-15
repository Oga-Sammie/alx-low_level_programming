#include "main.h"
#include <stdlib.h>

/**
* str_concat - Concantenates two strings
* @s1: String to be appended to
* @s2: String to append
* Return: Returns pointer to copy of (str)
*/
char *str_concat(char *s1, char *s2)
{
	int len_1 = 0;
	int len_2 = 0;
	int i = 0;
	int j = 0;
	int len_total;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i))
		len_1++, i++;


	while (*(s2 + j))
		len_2++, j++;
	len_2++;	/* Add null terminating character to s1) */

	len_total = len_1 + len_2;

	concat = malloc(len_total * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len_1; i++)
		*(concat + i) = *(s1 + i); /* Join s1 elements to concat */

	for (j = 0; j < len_2; j++, i++)
		*(concat + i) = *(s2 + j); /* Join s2 elements to concat */

	return (concat);
}
