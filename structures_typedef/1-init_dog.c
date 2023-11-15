#include "dog.h"

/**
 * init_dog - Initializes a struct dog with specified values.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to a string for the name of the dog.
 * @age: Float representing the age of the dog.
 * @owner: Pointer to a string for the owner of the dog.
 *
 * This function initializes the members of the struct dog pointed to by 'd'
 * with the provided values for name, age, and owner. Memory is allocated for
 * name and owner, and the values are duplicated using strdup().
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == 0)
	{
		return;
	}
	d->name = name;

	(*d).age = age;

	d->owner = owner;
}
