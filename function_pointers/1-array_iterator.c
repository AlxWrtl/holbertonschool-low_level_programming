#include "function_pointers.h"

/**
 * array_iterator - Executes a given function on each element of an array.
 * @array: Pointer to an array of integers.
 * @size: The size of the array.
 * @action: Pointer to the function to be executed on each array element.
 *
 * This function iterates through the elements of the provided array and
 * applies the specified function to each element. If the array or the action
 * function is NULL, the function returns without performing any action.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

