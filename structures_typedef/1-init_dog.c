#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes a dog struct with the passed variables
 * @d: the dog struct to be filled
 * @name: the name to be assigned
 * @age: the dog's age
 * @owner: name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* first check if null */
	if (d == NULL)
		return;
	/* assign the passed vars */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
