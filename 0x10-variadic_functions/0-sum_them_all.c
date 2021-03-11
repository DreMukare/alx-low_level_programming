#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters
* @n: first parameter
*
* Return: 0 if n == 0 and sum of all its parameters otherwise
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list rest;

	va_start(rest, n);

	for (i = 0; i < n; i++)
		sum += va_arg(rest, unsigned int);

	va_end(rest);

	if (n != 0)
		return (sum);
	return (0);
}
