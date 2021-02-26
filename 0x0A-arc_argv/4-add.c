#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
* main - adds positive numbers
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int i, sum;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
