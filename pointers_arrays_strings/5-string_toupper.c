#include "main.h"

/**
 * string_toupper - lowercase letters to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int change;

	for (change = 0; s[change] != '\0'; change++)
	{
		if (s[change] >= 'a' && s[change] <= 'z')
			s[change] = s[change] - 32;
	}

	return (s);
}
