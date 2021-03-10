#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - executes a function given as a parameter on each element
* of an array
* @array: array being passed
* @size: size of the array
* @action: pointer to the function needed to be used
*
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
