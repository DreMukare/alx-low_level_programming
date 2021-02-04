#include <stdio.h>

/**
* main - This is the main function
* Description: It prints all single digit numbers followed by new line
* Return: the function returns 0
*/
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	putchar(10);
	return (0);
}
