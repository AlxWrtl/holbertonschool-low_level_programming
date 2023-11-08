#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates a two-dimensional grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * This function allocates memory for a 2D grid of integers.
 * It checks for valid input, allocates memory for rows and columns,
 * and returns a pointer to the allocated grid.
 *
 * Return: A pointer to the allocated grid, or NULL in case of failure.
 */


int **alloc_grid(int width, int height)
{
	int **grid;
	int row, col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		grid[row] = (int *)malloc(width * sizeof(int));

		if (grid[row] == NULL)
		{
			for (col = 0; col < row; col++)
			{
				free(grid[col]);
			}
		free(grid);

			return (grid);
		}
	}

	return (grid);
}
