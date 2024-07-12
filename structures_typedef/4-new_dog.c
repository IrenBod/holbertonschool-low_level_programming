#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 * Return: pointer to the duplicated string,
 * or NULL if insufficient memory was available
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

/**
 * new_dog - Creates a new dog structure and initializes its fields
 * @name: Pointer to a string containing the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to a string containing the name of the owner
 *
 * Description: This function allocates memory for a new dog structure,
 * copies the name and owner strings to new memory locations, and
 * initializes the age field. If any memory allocation fails, the function
 * frees any already allocated memory and returns NULL.
 *
 * Return: Pointer to the newly created dog structure, or NULL if the
 * function fails.
 *
 * Conditions:
 * - If name or owner is NULL, the function returns NULL.
 * - If memory allocation for the dog structure fails,
 * - the function returns NULL.
 * - If memory allocation for name_copy or owner_copy fails, the function
 *   frees any already allocated memory and returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	name_copy = _strdup(name);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	owner_copy = _strdup(owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name_copy;
	new_dog->owner = owner_copy;
	new_dog->age = age;
	return (new_dog);
}
