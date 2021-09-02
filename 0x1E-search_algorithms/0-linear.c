#include "search_algos.h"


/**
* linear_search - searches for value in array of integers
*
* @array: pointer to first element in array
* @size: number of elements in array
* @value: value to search for in array
*
* Return: first index where value is located or -1 if array is NULL
* or element is not present in array
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == *(array + i))
			return (i);
		i++;
	}
	return (-1);
}
