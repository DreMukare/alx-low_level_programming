#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: character to be printed out
*
* Return: On success 1
* On error, -1 and errno set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
