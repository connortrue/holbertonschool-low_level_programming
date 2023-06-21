#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: a pointer to the grid, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Return NULL if width or height is less than or equal to 0 */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for an array of pointers */
	grid = malloc(sizeof(int *) * height);
	/* Return NULL if memory allocation fails */
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each row of the grid */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
	/* If malloc fails, free previously alloc'd memory + return NULL */
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}

	/* Initialize each element of the grid to 0 */
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	/* Return a pointer to the grid */
	return (grid);
}
