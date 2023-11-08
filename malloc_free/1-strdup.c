#include "main.h"
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: The input string to duplicate.
 *
 * This function duplicates the input 'str' and returns a new dynamically
 * allocated string containing the duplicated result.It checks for a NULL input
 * string, allocates memory for the duplicated string, and copies the content
 * using strcpy.
 *
 * Return: A pointer to the duplicated string, or NULL in case of failure.
 */

char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = (char *)malloc(strlen(str) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str);

	return (dup);
}
