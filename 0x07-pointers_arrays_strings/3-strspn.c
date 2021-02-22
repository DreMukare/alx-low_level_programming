#include "holberton.h"

/**
* _strspn - gets length of a prefix substring
* @s: string
* @accept: substring
*
* Return: returns number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, match = 0;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != ' ')
		{
			j = 0;
			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
				{
					match++;
				}
				j++;
			}
		}
		else
		{
			return (match);
		}
		i++;
	}
	return (match);
}
