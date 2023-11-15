#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new instance of struct dog with specified values.
 * @name: Pointer to a string representing the name of the dog.
 * @age: Float representing the age of the dog.
 * @owner: Pointer to a string representing the owner of the dog.
 *
 * This function dynamically allocates memory for a new struct dog, initializes
 * its members with the provided values for name, age, and owner, and returns
 * a pointer to the newly created dog. If memory allocation fails or if name
 * or owner is NULL, the function returns NULL.
 *
 * Return: A pointer to the newly created struct dog, or NULL on failure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *new_dog;

	 new_dog = malloc(sizeof(dog_t));

		if (new_dog == NULL)
		{
		return (NULL);
		}

		new_dog->name = malloc(strlen(name) + 1);
		new_dog->owner = malloc(strlen(owner) + 1);


		if (new_dog->name == NULL || new_dog->owner == NULL)
			{
			free(new_dog->name);
			free(new_dog->owner);
			free(new_dog);
			return (NULL);
			}


	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;


	return (new_dog);
}
