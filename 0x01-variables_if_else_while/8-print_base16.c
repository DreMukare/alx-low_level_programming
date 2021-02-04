#include <stdio.h>

/**
* main - this is the main function
* Description: It returns 0 - 9 then a - f
* Return: The function returns 0
*/
int main(void)
{
	int n, i, hex;

	n = 48;
	for (i = 0; i <= 9; i++)
	{
		putchar(n);
		n++;
	}
	hex = 97;
	for (i = 0; i <= 5; i++)
	{
		putchar(hex);
		hex++;
	}
	putchar(10);
	return (0);
}

