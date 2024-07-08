#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
* *create_array -  a function that creates an array of chars,
* and initializes it with a specific char
* @c: char
* @size: unsigned int
*Return: 0
*/

char *create_array(unsigned int size, char c)
{	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
