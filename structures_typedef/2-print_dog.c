#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Write a function that prints a struct dog
 * @d: pointeur sur la structure dog
 * Description: Longer description
 */

void print_dog(struct dog *d)

{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age <= 0)
		printf("nil\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("nil\n");
	else
		printf("Owner: %s\n", d->owner);
}
