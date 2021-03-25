#include "holberton.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: string of 1s and 0s in char form
*
* Return: Converted number
* 0 if there are one or more chars in b that are not 0 or 1
* 0 if b is null
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0, mul = 1;
	int len = 0;

	if (!b)
		return (0);

	while (b[len])
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		output += (b[len] - '0') * mul;
		mul *= 2;
	}

	return (output);
}
