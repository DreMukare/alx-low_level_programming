#include "holberton.h"

/**
* print_rev - prints a string in reverse followed by a new line
* @s: string to be printed in reverse
*
* Return: no return
*/
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	int i;

	for (i = c - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
