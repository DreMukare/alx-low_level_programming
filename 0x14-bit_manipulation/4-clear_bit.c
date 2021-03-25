#include "holberton.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: pointer to number that containts bit
* @index: index of bit to be set
*
* Return: 1 if it worked or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * 32 || !n)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
