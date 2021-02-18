#include "holberton.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @s: string to be changed
*
* Return: returns new string
*/
char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}
