#include "holberton.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: size
*
* Return: pointer to allocated memory
* if malloc fails normal process termination with
* status value of 98
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
