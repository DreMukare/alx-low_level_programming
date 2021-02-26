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
	int i;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *needle)
		{
			char *ptr = _strstr(haystack + i + 1, needle + 1);

			return ((ptr) ? ptr - 1 : NULL);
		}
	}
	return (NULL);
}
