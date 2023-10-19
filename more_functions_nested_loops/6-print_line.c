#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_line - that prints the numbers, from 0 to 9
 *@n:  is the number characters.
 */

void print_line(int n)
{
	int i;
		for (i = 0; i < n ; i++)
		{
		_putchar('_');
	}
		_putchar('\n');
}
