#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that prints a string in revers
 * @s: sentence to print
 */


void rev_string(char *s)
{

	int text, save, text2;

	for (save = 0; s[save] != '\0'; save++)
	{}
	for (text = save ; text >= 0; text--)
	{
		_putchar(s[text]);
	}
	for (text2 = text - 1; s[text2] >= 0; text--)
	{
		_putchar(s[text2]);
	}
	_putchar('\n');
}

