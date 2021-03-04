#include "holberton.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: minimum value
* @max: maximum value
*
* Return: pointer to newly created array
* NULL if min > max
*/
int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		if (!(arr[i] > max))
		{
			arr[i] = min;
			min++;
		}
	}
	return (arr);
}
