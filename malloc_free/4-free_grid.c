#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_grid - Frees a dynamically allocated 2D grid.
 * @grid: The pointer to the 2D grid to be freed.
 * @height: The height of the grid.
 *
 *This function frees memory allocated for a 2D grid by freeing individual rows
 *and then the array of pointers representing rows. It's essential to pass the
 *correct 'height' value to avoid memory leaks.
 */


void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
	{
		free(grid[row]);
	}

	free(grid);
}
