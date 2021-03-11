#include "variadic_functions.h"
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
* Return: no return
*/
void print_all(const char * const format, ...)
{
	va_list stuff;
	int i = 0;
	char *s;

	va_start(stuff, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(stuff, int));
				break;
			case 'i':
				printf("%d", va_arg(stuff, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(stuff, double));
				break;
			cause 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
