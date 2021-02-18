#include "holberton.h"

/**
* cap_string - capitalizes first letter of every word
* @s: string to be changed
*
* Return: returns new string
*/
char *cap_string(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + 0) >= 'a' && *(s + 0) <= 'z')
		{
			*(s + 0) = *(s + 0) - 32;
		}
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		s[i] == '!' || s[i] == '?' || s[i] == '\"' ||
		s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
				*(s + i + 1) = *(s + i + 1) - 32;
		}
		i++;
	}
	return (s);
}
