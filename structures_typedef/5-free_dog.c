#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog_t structure
 * @d: Pointer to the dog_t structure to be freed
 *
 * This function releases the memory allocated for the name and owner
 * fields within the dog_t structure, and then frees the structure itself.
 *
 * Example usage:
 * dog_t *my_dog = new_dog("Poppy", 3.5, "Bob");
 * if (my_dog == NULL) {
 *     // Error handling
 * }
 *
 * // ... using my_dog ...
 *
 * free_dog(my_dog);
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
	{
		free(d->name);
	}
	if (d->owner != NULL)
	{free(d->owner);
	}
	free(d);
}
