#include "holberton.h"

/**
* _strncpy - works exactly like strncpy
* @dest: to be copied into
* @src: to be copied to
* @n: number of characters to copy
*
* Return: returns dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
