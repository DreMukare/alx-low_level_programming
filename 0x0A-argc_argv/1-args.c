#include <stdio.h>
#include "holberton.h"

/**
* main - prints number of arguments
* @argc: argument count
* @argv: argument vector
*
* Return: always 0
*/
int main(int argc, char *argv[])
{
	int i = 0;

	(void)argv;
	while (i < argc - 1)
	{
		i++;
	}
	printf("%d\n", i);
	return (0);
}
