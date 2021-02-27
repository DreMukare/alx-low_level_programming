#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int res, num1 = 0, num2 = 0;

	if (argc - 1 < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		res = num1 * num2;
		printf("%d\n", res);
	}
	return (0);
}
