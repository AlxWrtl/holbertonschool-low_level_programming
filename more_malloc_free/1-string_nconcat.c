#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat- Concatenates two strings up to the first 'n' characters
 *                  from the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters to concatenate from s2.
 *
 * This function concatenates the first string 's1' with the first 'n'
 * characters of the second string 's2'. If 's1' or 's2' is NULL, it is
 * treated as an empty string. The resulting concatenated string is dynamically
 * allocated and should be freed by the caller to avoid memory leaks.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int long1, long2;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	long1 = strlen(s1);
	long2 = strlen(s2);

	if (n >= long2)
	{
		n = long2;
	}
	concat = malloc((long1 + n + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);

	strncpy(concat + long1, s2, n);

	concat[long1 + n] = '\0';

	return (concat);
}
