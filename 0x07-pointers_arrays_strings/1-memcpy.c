#include "holberton.h"

/**
* _memcpy - copies memory data
* @dest: buffer to be copied to
* @src: buffer to be copied from
* @n: number of bytes to be copied
*
* Return: returns pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
