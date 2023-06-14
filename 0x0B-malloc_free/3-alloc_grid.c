#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create 2 dimensional array of integrers
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to 2 dimensional array of integers
 * NULL on failure
 * NULL if height or width is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
