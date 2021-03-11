#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - prints numbers followed by a new line
* @separator: string separating the numbers
* @n: number of integers passed to function
*
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, res;

	va_start(nums, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			res = va_arg(nums, int);
			if (i != (n - 1))
				printf("%d%s", res, separator);
			else if (i == (n - 1))
				printf("%d", res);
		}
	}
	va_end(nums);
	printf("\n");
}
