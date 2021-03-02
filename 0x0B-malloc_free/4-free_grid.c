#include "holberton.h"
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid previously created
* by alloc_grid
* @grid: to be freed
* @height: number of columns of grid
*
* Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
