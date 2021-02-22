#include "holberton.h"

/**
* _strchr - locates character in a string
* @s: string to be checked
* @c: character to be located
*
* Return: returns pointer to first occurence of character
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	char *p;
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
		else
		{
			return ("NULL");
		}
		i++;
	}
}
