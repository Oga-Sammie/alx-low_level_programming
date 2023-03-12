/* main.h includes function prototype */
#include "main.h"

/**
* _isalpha - checks if character is alphabetic character
*
* @c: That character checked
*
* Return: 1 if alphabetic character & 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
