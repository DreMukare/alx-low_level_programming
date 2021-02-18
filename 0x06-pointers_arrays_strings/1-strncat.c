#include "holberton.h"

/**
* _strncat - Concatenates two strings
* @dest: to be concatenated to 
* @src: to be concatenated to dest
* @n: number of bytes
*
* Return: returns dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		j++;
		i++;
	}

	i = 0;
	while (*(src + i) != *(src + n))
	{
		*(dest + j) = *(src + i);
		i++;
		j++;
	}
	*(dest + j) = '\0';
	return (dest);
}

