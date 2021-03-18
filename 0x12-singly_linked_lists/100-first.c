#include "lists.h"

void print_before(void) __attribute__ ((constructor));

int cleanup(void) __attribute__ ((desctructor));

/**
* print_before - prints string before main function
* Return: no return
*/
void print_before(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

/**
* cleanup - desctructs
* Return: 0
*/
int cleanup(void)
{
	return (1);
}
