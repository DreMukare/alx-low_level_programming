#include "search_algos.h"


/**
* print_array - prints an array
*
* @array: array to be printed
* @start: start index to print from
* @end: end index to print from
*
* Return: no return
*/
void print_array(int *array, int start, int end)
{
	int i = start;

	while (i <= end)
	{
		if (i != end)
		{
			printf("%d, ", array[i]);
		}
		else
			printf("%d", array[i]);

		i++;
	}
	printf("\n");
}

/**
* binary_search - searches for value in array of integers
*
* @array: pointer to first element in array
* @size: number of elements in array
* @value: value to search for in array
*
* Return: first index where value is located or -1 if array is NULL
* or element is not present in array
*/
int binary_search(int *array, size_t size, int value)
{
	int right = array[size - 1];
	int left = array[0];
	int mid = 0;

	if (!array)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (value == mid)
		{
			printf("Searching in array: ");
			print_array(array, left, right);
			return (mid);
		}
		else if (value > mid)
		{
			printf("Searching in array: ");
			print_array(array, left, right);
			left = mid + 1;
		}
		else
		{
			printf("Searching in array: ");
			print_array(array, left, right);
			right = mid - 1;
		}
	}
	return (-1);
}
