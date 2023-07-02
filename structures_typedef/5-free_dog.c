#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog
 * @d: pointer to the dog to free
 *
 * This function takes in a pointer to a dog_t variable as its only parameter.
 * It frees the memory used by the name and owner fields of the dog_t variable,
 * as well as the memory used by the dog_t variable itself.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
