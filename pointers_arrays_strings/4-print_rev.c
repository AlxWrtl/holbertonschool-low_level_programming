#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse.
 * @s: lenght of the string.
  */

void print_rev(char *s)
{

	int text, save;

	for (save = 0; s[save] != '\0'; save++)
	{}
	for (text = save - 1; text >= 0; text--)
	{
		_putchar(s[text]);
	}
	_putchar('\n');
}
