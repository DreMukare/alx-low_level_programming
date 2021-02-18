#include "holberton.h"

/**
* leet - encodes a string into 1337
* @s: string to be encoded
*
* Return: returns encoded string
*/
char *leet(char *s)
{
	int i = 0, j;

	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (let[j] == s[i])
			{
				s[i] = num[j];
			}
		}
		i++;
	}
	return (s);
}
