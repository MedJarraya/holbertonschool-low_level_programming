#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - print
 * @grid: var
 * @height: var
 * return: 0
 */
void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
		free(grid[z]);
	free(grid);
}
