#include <stdlib.h>
#include "main.h"

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 *@width:width of the grid
 *
 *@height:height of the grid
 *
 *Return:NULL on failure
 *
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i = i - 1; i  >= 0; i--)
			{
				free(array[i]);
			}
		}
		free(array);
		return (NULL);
	}
	for  (i = 0; j < width; j++)
	{
		array[i][j] = 0;

	}
	return (array);
}
