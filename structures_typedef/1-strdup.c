#include "main.h"
#include <stdlib.h>

/**
* _strdup -  a function that returns a pointer to a
*  newly allocated space in memory,
*  which contains a copy of the string given as a parameter
* @str: char
*Return: 0
*/

char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *arr;

	if (str == 0)
		return (NULL);
	while (str[size] != '\0')
	{
	size++;
	}

	arr = malloc((size + 1) * sizeof(char));
		if (arr == NULL)
			return (NULL);
	for (i = 0; i <= size; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
