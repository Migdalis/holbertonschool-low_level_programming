#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 *free_grid - Release memory space of an array 2D of integers
 *@grid: Pointer to array release
 *@height: Height of array to release
 *Description: Function that frees a 2 dimensional grid previously created
 *
 **/

void free_grid(int **grid, int height)
{
	int i;
	if (grid != NULL && height > 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
