#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 */

void print_most_numbers(void)
{
	int nbr;

	for (nbr = 0; nbr <= 9; nbr++)
	{

		if (nbr % 2 == 0 && nbr < 5)
		{

		}

		else
			_putchar(nbr + '0');

	}
	_putchar('\n');
}
