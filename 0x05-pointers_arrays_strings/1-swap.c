#include "holberton.h"

/**
* swap_int - Swaps the values of two integers
* @a: to be swapped with b
* @b: to be swapped with a
*
* Return: no return
*/
void swap_int(int *a, int *b)
{
	int temp_a, temp_b;

	temp_a = *a;
	temp_b = *b;

	*a = temp_b;
	*b = temp_a;
}
