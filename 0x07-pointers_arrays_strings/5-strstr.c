#include "holberton.h"
#include <stdio.h>

/**
* _strstr - locates a substring
* @haystack: string to be checked
* @needle: string be located
*
* Return: returns pointer to beginning of substring located
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*s == *needle)
		{
			return (s);
		}
		s++;
	}
	if (!*haystack)
	{
		return (s);
	}
	return (NULL);
}
