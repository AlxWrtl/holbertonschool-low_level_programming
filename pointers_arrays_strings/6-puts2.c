#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse.
 * @s: lenght of the string.
  */

void puts2(char *str)
{
	int save;

	for (save = 0; str[save] != '\0'; save += 2)
	{
		_putchar(str[save]);
	}
}
