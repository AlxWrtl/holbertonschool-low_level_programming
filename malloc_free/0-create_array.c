#include "main.h"
#include <stdlib.h>

/**
 * create_array- Creates an array of characters and initializes with 'c'.
 * @size: Size of the array.
 * @c: Character to initialize the array.
 *
 * Return: a pointer to the newly created array.
 */

char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
