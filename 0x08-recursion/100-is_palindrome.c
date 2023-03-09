#include "main.h"
/**
* str_length - finds the length of the string
* @s: string
* Return: integer of string length
*/

int str_length(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length += str_length(s + length);
	}
	return (length);
}

/**
* check_palindrome - finds out if string is a palindrome
* @s: string
* @length: length of the string
* @i: index of the string
* Return: 1 if palindrome, 0 if not
*/

int check_palindrome(char *s, int length, int i)
{
	if (s[i] == s[length / 2])
		return (1);

	if (s[i] == s[length - i - 1])
		return (check_palindrome(s, length, i + 1));
	return (0);
}

/**
* is_palindrome - checks if string is palindrome
* @s: string to be checked
* Return:	Return 1 palindrome
*/

int is_palindrome(char *s)
{
	int i = 0;
	int length = str_length(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, length, i));
}
