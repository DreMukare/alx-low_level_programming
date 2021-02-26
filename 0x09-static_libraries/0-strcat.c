#include "holberton.h"

/**
* _strcat - concatenates two strings
* @dest: string to be copied to
* @src: to be appended to end of dest
*
* Return: returns dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
		j++;
	}

	i = 0;
	while (*(src + i) != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
