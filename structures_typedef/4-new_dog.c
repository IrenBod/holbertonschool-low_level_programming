#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	name_copy = strdup(name);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	owner_copy = strdup(owner);
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
