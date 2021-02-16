#include "holberton.h"

/**
* puts2 - prints every other character of a string
* starts with first character and is followed by new line
* @str: string to be printed
*
* Return: no return
*/
void puts2(char *str)
{
	int i;
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i++)
	{
		if (i % 2 != 0)
			continue;
		_putchar(str[i]);
	}
	_putchar('\n');
}
