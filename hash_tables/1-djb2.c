#include "hash_tables.h"

/**
 * hash_djb2 - Implements the DJB2 hash function.
 * @str: The input string.
 *
 * This function generates a hash value from the input string using the DJB2
 * hash algorithm. It iterates through each character of the string, updating
 * the hash value accordingly. The resulting hash value is returned.
 *
 * Return: The hash value generated from the input string.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
