#include "holberton.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: pointer to integer containing bit
* @index: index of bit
*
* Return: 1 if it worked or -1 if error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32 * 8 || !n)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
