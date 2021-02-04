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
		if (num != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
