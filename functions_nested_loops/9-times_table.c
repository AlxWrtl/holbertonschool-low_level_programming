#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 *times_table - function that prints the multiplication .
 *
 */
void times_table(void)
{
	int multi;
	int nbr;
	int result;



	for (multi = 0; multi <= 9; multi++)
	{
		for (nbr = 0; nbr <= 9; nbr++)

		{
			result = multi * nbr;

			if (result <= 9)
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar (result / 10 + '0');
				_putchar (result % 10 + '0');

				_putchar (',');
				_putchar (' ');

			}
		}
		_putchar ('\n');

	}

}
