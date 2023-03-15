#include "main.h"
#include <stdlib.h>

/**
* _strdup - Creates a copy of original string
* @str:	String to be copied
* Return: Returns pointer to copy of (str)
*/

char *_strdup(char *str)
{
	int len = 0;
	int i = 0;
	char *ptrS;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		len++, i++;
	len++; /* Add a null terminating character at end */

	ptrS = malloc(len * sizeof(char));

	if (ptrS == NULL)
		return (NULL);

	else
		for (i = 0; i < len; i++)
			*(ptrS + i) = *(str + i);

	return (ptrS);
}
