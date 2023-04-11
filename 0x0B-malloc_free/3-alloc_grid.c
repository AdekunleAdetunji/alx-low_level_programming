#include <stdlib.h>

/**
 * alloc_grid - create a 2-D array of memory address
 * @height: The height of the grid
 * @width: The width of the grid
 * Return: Null or Pointer to the newly created address
 */
int **alloc_grid(int width, int height)
{
	int i, **mem_y, *mem_x;

	if (width <= 0 || height <= 0)
		return NULL;

	mem_y = malloc(sizeof(int *) * height);
	if (!mem_y)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mem_x = calloc(sizeof(int), width);
		if (!mem_x)
			return (NULL);
		mem_y[i] = mem_x;
	}
	return (mem_y);
}
