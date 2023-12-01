#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Pointer to the binary string.
 *
 * This function converts a binary string to an unsigned integer. It iterates
 * through the string, checking if each character is '0' or '1'. The result is
 * updated by shifting left and performing bitwise OR operations based on the
 * binary representation. If the input string is NULL or contains characters
 * other than '0' and '1', the function returns 0.
 *
 * Return: The converted unsigned integer, or 0 on failure.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result = (result << 1) | (b[i] - '0');
	}

	return (result);
}
