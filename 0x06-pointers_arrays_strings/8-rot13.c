#include "holberton.h"

/**
* rot13 - encodes a string into rot13
* @s: string to be encoded
*
* Return: returns encoded string
*/
char *rot13(char *s)
{
	int i = 0, j;

	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char let13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 53; j++)
		{
			if (let[j] == s[i])
			{
				s[i] = let13[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
