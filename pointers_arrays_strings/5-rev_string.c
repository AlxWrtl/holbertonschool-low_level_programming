#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that prints a string in revers
 * @s: sentence to print
 */


void rev_string(char *s)
{

	int save, strt, swp;

	for (save = 0; s[save] != '\0'; save++)
	{}

	save = save - 1;

	for (strt = 0; strt < save; save--, strt++)
	{
		swp = s[save];
		s[save] = s[strt];
		s[strt] = swp;
	}
}
