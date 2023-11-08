#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first input string.
 * @s2: The second input string.
 *
 * This function concatenates two strings (s1 and s2) and returns a new
 * dynamically allocated string containing the concatenated result.It checks
 * for NULL input strings, allocates memory for the concatenated string, and
 * performs the concatenation using strcpy and strcat.
 *
 * Return: A pointer to the concatenated string, or NULL in case of failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	concatenated = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (concatenated == NULL)
	{
		return (NULL);
	}

	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
