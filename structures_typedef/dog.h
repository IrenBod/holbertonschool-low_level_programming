#ifndef DOG_h
#define DOG_h
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - l information pour le chien
 * @name: nom de chien
 * @age: age du chien
 * @owner: owner du chen
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
