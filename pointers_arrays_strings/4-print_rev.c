#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse.
 * @s: lenght of the string.
  */

void print_rev(char *s)
{

	int text, save;

	for (save = 0; s[save]; save++)
	{	}

		for (text = save; text + '\1'; text--)
		{
			_putchar(s[text]);
		}
		_putchar('\n');
}
