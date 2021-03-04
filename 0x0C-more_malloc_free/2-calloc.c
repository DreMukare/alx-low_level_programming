#include "holberton.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array using malloc
* @nmemb: array size
* @size: size of each array element
*
* Return: pointer to allocated memory
* NULL if size or nmemb is 0
* NULL if malloc fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	while (i < nmemb)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
