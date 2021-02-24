#include "holberton.h"

/**
* _strlen_recursion - returns the length of string
* @s: string whose length is to be returned
*
* Return: length of s
*/
int _strlen_recursion(char *s)
{
	int length = 1;

	if (*s == '\0')
		return (0);
	return (length + _strlen_recursion(s + length));
}
