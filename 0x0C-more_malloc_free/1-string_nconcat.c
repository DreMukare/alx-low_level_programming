#include "holberton.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: string 1
* @s2: to be added to end of s1
* @n: number of bytes to be concatenated
*
* Return: pointer to new string containg s1 followed by n bytes of s2
* and null terminated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size1 = 0, size2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*s1)
	{
		size1++;
		s1++;
	}
	while (*s2)
	{
		size2++;
		s2++;
	}

	ptr = malloc(sizeof(char) * (size1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];

	if (n >= size2)
		n = len2;

	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	ptr[i] = '\0';
	return (ptr);
}
