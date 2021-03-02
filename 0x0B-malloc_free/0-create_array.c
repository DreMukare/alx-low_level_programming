#include "holberton.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars and initializes it with
* a specific char
* @size: size of array
* @c: character to initialize array with
*
* Return: pointer to array or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
