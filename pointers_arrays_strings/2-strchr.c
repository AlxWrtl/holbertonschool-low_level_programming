#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to search in
 * @c: char to find
 *
 * Return: Return if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
