#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2 dimentional arrays that were dynamically allocated
 * @grid: 2d array pointer
 * @height: number of array pointers
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for(i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
