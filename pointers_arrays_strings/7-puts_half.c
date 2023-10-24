#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string
 * @str: lenght of the string.
  */
void puts_half(char *str)
{
	int save, half, print;

	for (save = 0; str[save] != '\0'; save++)
	{

	}

	half = save;

	for (print = (half - 1) /2; print < save; print++)
	{
		_putchar(str[print]);
	}

	_putchar('\n');
}
