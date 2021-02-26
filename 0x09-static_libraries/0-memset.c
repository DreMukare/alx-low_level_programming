#include "holberton.h"

/**
* _memset - fills memory with a constant byte
* @s: pointer to memory
* @b: byte to fill with
* @n: number of bytes to be filled
*
* Return: returns pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
