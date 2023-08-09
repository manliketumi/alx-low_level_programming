#include "main.h"
#include <stdlib.h>
/**
 * free_grid - 2D grid
 * @grid: the address of 2D
 * @height: the height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);

}
