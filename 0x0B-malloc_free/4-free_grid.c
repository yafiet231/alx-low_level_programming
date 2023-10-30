#include "main.h"
#include <stdlib.h>

/**
 * free_grid -frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: An input 2D array of integers to free
 * @height: height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
