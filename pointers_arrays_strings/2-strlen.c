#include "main.h"
#include <stdio.h>

/**
 * _strlen - Foncction that returns the length of a string.
 * @s: lenght of the string.
 * Return: The value of the string
  */

int _strlen(char *s)
{

	int i = 0;

	while (s[i] != '\0')
	i++;

	return (i);
}

