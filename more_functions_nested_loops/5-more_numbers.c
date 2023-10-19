#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * more_numbers -function that prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int chrf, nbr;

	for (chrf = 0; chrf < 10; chrf++)
	{
		for (nbr = 0; nbr <= 14; nbr++)
		{
			if (nbr > 9)
			{
			_putchar((nbr / 10) + '0');
			}

			_putchar((nbr % 10) + '0');
		}

		_putchar('\n');
	}
}
