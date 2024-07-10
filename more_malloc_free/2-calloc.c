#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - Write a function that allocates
* memory for an array, using malloc
* @nmemb: unsigned int
* @size: unsigned int
*Return: 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	memory = malloc(total_size);

	if (memory == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_size; i++)
	{
		memory[i] = '\0';
	}
	return (memory);
}
