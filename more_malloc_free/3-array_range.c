#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range- Generates an array of integers from min to max (inclusive)
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: A pointer to the newly generated array, or NULL on failure
 */

int *array_range(int min, int max)
{
	int *range_array;
	int size, index;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	range_array = calloc(size, sizeof(int));

	if (range_array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		range_array[index] = min++;
	}

	return (range_array);
}
