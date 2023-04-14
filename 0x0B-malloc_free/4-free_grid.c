#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free a 2-D grid
 * @grid: The 2-D grid supplied
 * @height: The height of the grid
 * Return: Returns a void value
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid)
		return;
	for (i = 0; i < height; i++)
	{
		if (!grid[i])
			return;
		free(grid[i]);
	}
	free(grid);
}
