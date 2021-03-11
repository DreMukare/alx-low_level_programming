#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - prints strings followed by a new line
* @separator: string separating the strings
* @n: number of strings passed to function
*
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *res;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		res = va_arg(strings, char *);
		if (res == NULL)
			res = "(nil)";
		printf("%s", res);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
