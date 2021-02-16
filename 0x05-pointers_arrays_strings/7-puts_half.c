#include "holberton.h"

/**
* puts_half - prints the second half of a string
* @str: string to be printed
*
* Return: void
*/
void puts_half(char *str)
{
	int i, mid;
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	if (c % 2 == 0)
	{
		for (i = c / 2; i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		mid = (c - 1) / 2;
		for (i = mid + 1; i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
