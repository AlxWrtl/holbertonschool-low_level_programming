#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_array- Creates an array of characters initialized with a
 * specific value.
 * @size: The size of the array to be created.
 * @c: The character used to initialize the array.
 *
 * This function dynamically allocates an array of characters
 * of the given size
 * and initializes each element with the specified character 'c'. If the size
 * is 0 or if the memory allocation fails, the function returns NULL.
 *
 * @Return: A pointer to the created array, or NULL on failure.
 */
char *create_array(unsigned int size, char c)
{

	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	memset(array, c, size);

	return (array);
}
