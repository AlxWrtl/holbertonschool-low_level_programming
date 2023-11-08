#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * malloc_checked- Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * This function allocates 'b' bytes of memory using malloc. If the allocation
 * fails, it prints an error message to stderr and exits the program with an
 * exit code of 98.
 *
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
