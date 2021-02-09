#include "holberton.h"

/**
* print_alphabet_x10 - prints out alphabet ten times followed by new line
* Return: function returns null
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 11)
	{
		print_alphabet();
		i++;
	}
	_putchar('\n');
}
