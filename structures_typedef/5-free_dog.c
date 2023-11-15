#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a struct dog.
 * @d: Pointer to the struct dog to be freed.
 *
 * This function frees the memory allocated for the provided struct dog,
 * including the memory for its name, owner, and the struct itself.
 * If 'd' is NULL, no action is taken.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
