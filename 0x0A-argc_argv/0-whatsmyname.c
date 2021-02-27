#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* print_name - prints name of program
* @s: string to print
*
* Return: no return
*/
void print_name(char *s)
{
	printf("%s\n", s);
}

/**
* main - calls print_name
* @argc: argument count
* @argv: argument vector
*
* Return: always 0
*/
int main(int argc, char *argv[])
{
	(void)argc;
	print_name(argv[0]);
	return (0);
}
