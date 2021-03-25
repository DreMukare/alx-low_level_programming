#include "holberton.h"

/**
* flip_bits - returns the number of bits needed to be flipped to get from one
* number to another
* @n: the number to be converted to m
* @m: number to be converted to
*
* Return: number of bits needed to be flipped to get from one number to another
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x > 0)
	{
		count++;
		x &= (x - 1);
	}
	return (count);
}
