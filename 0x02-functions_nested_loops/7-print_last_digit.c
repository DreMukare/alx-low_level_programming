#include "holberton.h"

/**
* print_last_digit - returns value of last digit of a number
* @n: integer to be passed
*
* Return: returns last digit of number
*/
int print_last_digit(int n)
{
	int output;

	if (n >= 0)
		output = n % 10;
	else
		output = (n % 10) * -1;
	_putchar('0' + output);
	return (output);
}
