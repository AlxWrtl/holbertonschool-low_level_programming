#include "search_algos.h"

/**
 * print_array - Prints a sub-array of integers.
 * @array: Pointer to the first element of the array to print.
 * @left: The starting index of the sub-array to print.
 * @right: The ending index of the sub-array to print.
 *
 * Description: This function prints the elements of the array from the index
 *              'left' to the index 'right', inclusive. It's used to show the
 *              current portion of the array being searched in the binary
 *              search.
 */
void print_array(const int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	for (; left <= right; left++)
	{
		printf("%d", array[left]);
		if (left < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Performs a binary search on an array of integers.
 * @array: Pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Description: This function implements the binary search algorithm to find
 *              a specific value within an array of integers. The function
 *              returns the index where the value is located. If the array
 *              is NULL or the value is not found, the function returns -1.
 *
 * Return: The index where the value is located, or -1 if not found or if
 *         the array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle;

	/* NULL check for the array */
	if (array == NULL)
	{
		return (-1);
	}

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		middle = left + (right - left) / 2;

		if (array[middle] == value)
			return ((int)middle);
		else if (array[middle] > value)
			right = middle - 1;
		else
			left = middle + 1;
	}

	return (-1);
}
