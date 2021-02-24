#include "holberton.h"

/**
* _pow_recursion - returns value of x raised to power of y
* @x: to be raised to y
* @y: the power
*
* Return: returns value of x raised to power of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0 || x == 1)
		return (1);
	if (x == 0)
		return (0);
	return (x * _pow_recursion(x, y - 1));
}
