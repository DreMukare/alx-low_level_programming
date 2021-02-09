#include "holberton.h"

/**
* print_sign - prints the sign of a number
* @n: number to be checked
*
* Return: Returns 1 if n greater than 0, 0 if n is 0, -1 is n less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
