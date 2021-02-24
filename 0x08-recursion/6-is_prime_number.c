#include "holberton.h"

/**
* helper - checks whether num is prime number
* @num: to be checked
* @i: integer
*
* Return: 1 if prime number, 0 if not
*/
int helper(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
			return (0);
		else
			return (helper(num, i + 1));
	}
	else
		return (1);

}

/**
* is_prime_number - checks whether n is prime number
* @n: to be checked;
*
* Return: returns 1 if prime, 0 if not
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (helper(n, 2));
}
