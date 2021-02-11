#include "holberton.h"

/**
* print_line - draws a straight line in the terminal
* @n: number of times the line character should be printed
*
* Return: no return
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
