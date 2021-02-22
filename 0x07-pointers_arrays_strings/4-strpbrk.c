#include "holberton.h"
#include <stdio.h>

/**
* _strpbrk - locates the first occurence in the string s of any of the
* bytes in the string accept
* @s: string to be searched
* @accept: substring
*
* Return: returns pointer to the byte in s that matches one of the bytes in
* accept or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; (s[i] = '\0'); i++)
	{
		for (j = 0; (accept[j]); j++)
		{
			if (accept[j] == s[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
