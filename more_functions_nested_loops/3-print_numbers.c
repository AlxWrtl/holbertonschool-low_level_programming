#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_numbers - that prints the numbers, from 0 to 9
 */

void print_numbers(void)
{
	int nbr;

	for (nbr = 0; nbr <= 9; nbr++)
	{

		_putchar(nbr + '0');
	}
	_putchar('\n');
}

