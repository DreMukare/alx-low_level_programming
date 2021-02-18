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

	i = 0;
	while (*(src + i) != *(src + n))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
