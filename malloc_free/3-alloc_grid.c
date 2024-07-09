#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - Write a function that returns
* a pointer to a 2 dimensional array of integers.
* @width: int
* @height: int
*Return: 0
*/

int **alloc_grid(int width, int height)
{
	int **array2D;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array2D = malloc(height * sizeof(int *));
	if (array2D == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{array2D[i] = malloc(width * sizeof(int));
		if (array2D[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array2D[j]);
			free(array2D);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array2D[i][j] = 0;
	}
	return (array2D);
}

