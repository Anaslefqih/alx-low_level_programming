#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grd;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grd = malloc(sizeof(int *) * height);
	if (!grd)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grd[i] = malloc(sizeof(int) * width);
		if (grd[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grd[j]);
			free(grd);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grd[i][j] = 0;
	}
	return (grd);
}
