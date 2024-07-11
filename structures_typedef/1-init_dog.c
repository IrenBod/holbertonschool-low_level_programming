#include "dog.h"

/**
* init_dog - Write a function that initialize a variable of type struct dog
* @d: pointeur sur la structure dog
* @name: pointeur sur le nom du chien
* @age: pointeur sur l age di chien
* @owner: pointeur sur proprieter du chien
*cette fonction initialise la structure
*chien avec les valeurs transmises par les paramètres.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
