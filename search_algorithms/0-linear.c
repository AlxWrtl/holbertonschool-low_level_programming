#include "search_algos.h"

/**
 * linear_search - Performs a linear search on an array.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Description: This function iterates over each element of the array,
 *              comparing it with the target value. It prints each value it
 *              checks. The search is linear, meaning it checks each element
 *              sequentially until a match is found or the end of the array
 *              is reached.
 *
 * Return: The first index where value is located, or -1 if the value is not
 *         present in the array or if the array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	int index; /* Index for iteration */

	/* Iterate over each element in the array */
	for (index = 0; index < size; index++)
	{
		/* Print the value being checked */
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		/* Check if the current array element matches the target value */
		if (array[index] == value)
		{
			return (index); /* Return the index if a match is found */
		}
	}

	/* Return -1 if the value is not found in the array */
	return (-1);
}
