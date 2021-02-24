#include "holberton.h"

/**
* helper - check whther palindrome or not
* @str: string to check
* @i: beginning of string
* @j: end of string
*
* Return: 1 if palindrome, 0 if not
*/
int helper(char *str, int i, int j)
{
	if (i == j)
		return (1);
	if (str[i] != str[j])
		return (0);
	if (i < j + 1)
		return (helper(str, i + 1, j - 1));
	return (1);
}

/**
* is_palindrome - checks if palindrome
* @s: string to be checked
*
* Return: 1 if palindrome, 0 if not
*/
int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	if (length == 0)
		return (1);
	return (helper(s, 0, length - 1));
}
