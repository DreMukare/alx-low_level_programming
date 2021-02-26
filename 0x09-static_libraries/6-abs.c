#include "holberton.h"

/**
* _abs - computers absolute value of an integer
* @n: integer to be passed
*
* Return: function returns 0
*/
int _abs(int n)
{
	if (n > 0)
	{
		n = n * 1;
	}
	else if (n == 0)
	{
		n = 0;
	}
	else if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
