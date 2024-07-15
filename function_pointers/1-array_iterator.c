#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* array_iterator - Executes a function on each element of an array
* @array: Pointer to the array of integers
* @size: The size of the array
* @action: Pointer to the function to be executed on each array element
*
* This function iterates through the array and applies the function
* pointed to by @action to each element of the array.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
