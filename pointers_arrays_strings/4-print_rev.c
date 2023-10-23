#include "main.h"
#include <stdio.h>

/**
 * _strlen - Foncction that returns the length of a string.
 * @s: lenght of the string.
 * Return: The value of the string
  */

void print_rev(char *s)
{

	int text, save;

	for (save = 0; s[save] != '\0'; save++)
	{	}

		for (text = save; text >= 0; text--)
		{
			_putchar(s[text]);
		}
		_putchar('\n');
}
