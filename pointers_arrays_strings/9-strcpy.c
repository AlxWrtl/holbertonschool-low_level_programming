#include "main.h"

/**
 * *_strcpy - Function that copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 *  * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int prnt;

	for (prnt = 0; src[prnt] != '\0'; prnt++)
	{
		dest[prnt] = src[prnt];
	}
	dest[prnt] = '\0';

	return (dest);
}
