#include "holberton.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: number containing bit
* @index: index of bit
*
* Return: value of bit at a given index or -1 if error occurred
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32 * 8 || !n)
		return (-1);
	return ((n >> index) & 1);
}
