#include "holberton.h"

/**
* _strlen - returns the length of a string
* @s: string passed
*
* Return: returns length of string passed
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
