#include <stdio.h>

/**
* main - This function prints out the following string to standard error
* and that piece of art is useful" - Dora Korpar, 2015-10-19
* Return: This function returns 1
*/
int main(void)
{
	char output[];

	output = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	fprintf(stderr, output);
	return (1);
}
