#include "main.h"

/**
* wildcmp - Compares two strings if same
* @s1: first string
* @s2: second string
* Return: 1  if matched, 0 if not
*/
int wildcmp(char *s1, char *s2)
{
	/**
	* Make sure the characters after '*' are present in s2
	* This condition however assumes there won't be more than
	* two consective '*' in string s2
	*/
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	/*If we reach at the end of both strings, we are done*/

	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/**
	* If both characters in s1 and s2 match then go to next
	character
	*/
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/**
	* If there is '*' in s2 then there are two possibilities
	* Possibility (a): We ignore current character of s1
	* Possibility (b): We consider current character of s1
	*/
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
