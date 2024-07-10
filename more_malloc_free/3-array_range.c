#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - Write a function
* that creates an array of integers.
* @min: int
* @max: int
*Return: 0
*/

int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = (int *)malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + 1;
	}
	return (array);
}
