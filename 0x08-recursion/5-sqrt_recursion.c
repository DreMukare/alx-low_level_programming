#include "holberton.h"

/**
* helper - helperfunction to find sqrt
* @num: num to be square rooted
* @guess: guess number
*
* Return: squareroot of number
*/
int helper(int num, int guess)
{
	if (guess * guess == num)
		return (guess);
	if (guess * guess > num)
		return (-1);
	else
		return (helper(num, guess + 1));
}

/**
* _sqrt_recursion - returns natural square root of a number
* @n: number to be square rooted
*
* Return: squareroot of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helper(n, 0));
}
