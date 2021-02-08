#include "holberton.h"

/**
* times_table - prints the 9 times table
*
* Return: returns void
*/
void times_table(void)
{
	for (int i = '0'; i < '10'; i++)
	{
		for (int z = '0'; z < '10'; z++)
		{
			char output = z * i;

			if (output == '9')
				_putchar(" %c", output);
			else
				_putchar(" %c, ", output);
			_putchar('\n');
		}
	}
}
