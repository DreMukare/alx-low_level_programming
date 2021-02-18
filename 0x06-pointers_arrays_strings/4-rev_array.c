#include "holberton.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: the array
* @n: the size of the array
*
* Return: no return
*/
void reverse_array(int *a, int n)
{
	int temp, i = 0, last;

	last = n - 1;
	while (i < last)
	{
		temp = *(a + i);
		*(a + i) = *(a + last);
		*(a + last) = temp;
		i++;
		last--;
	}
}
