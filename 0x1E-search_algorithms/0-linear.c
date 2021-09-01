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
	unsigned int i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		if (value == *(array + i))
		{
			printf("Value checked array [%i] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array [%i] = [%d]\n", i, array[i]);
		i++;
	}
	return (-1);
}
