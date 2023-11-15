#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints information about a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * This function prints information about the provided struct dog, including
 * its name, age, and owner. If any of the information is NULL, "nil" is
 * printed in its place.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", (d->name == NULL) ? d->name : "nil");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner == NULL) ? d->owner : "nil");
}
