#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string.
 * @str: lenght of the string.
  */

void puts2(char *str)
{
	int save;

	for (save = 0; (str[save]) != '\0' < 0; save ++)
	{

		if (save %2 == 0)
		{
		_putchar(str[save]);
	}
	}
	_putchar('\n');
}
