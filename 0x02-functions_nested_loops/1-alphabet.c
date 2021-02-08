#include "holberton.h"

/**
* print_alphabet - Prints out lowercase alphabet followed by a new line
* Return: Returns null
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
